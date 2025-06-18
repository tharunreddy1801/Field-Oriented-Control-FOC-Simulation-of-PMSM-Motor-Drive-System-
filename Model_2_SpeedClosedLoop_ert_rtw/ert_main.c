/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
 *
 * Code generated for Simulink model 'Model_2_SpeedClosedLoop'.
 *
 * Model version                  : 1.67
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Nov  2 18:47:48 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include <stdio.h>
#include <stdlib.h>
#include "Model_2_SpeedClosedLoop.h"
#include "Model_2_SpeedClosedLoop_private.h"
#include "rtwtypes.h"
#include "limits.h"
#include "rt_nonfinite.h"
#include "linuxinitialize.h"
#define UNUSED(x)                      x = x

/* Function prototype declaration*/
void exitFcn(int sig);
void *terminateTask(void *arg);
void *baseRateTask(void *arg);
void *subrateTask(void *arg);
volatile boolean_T stopRequested = false;
volatile boolean_T runModel = true;
sem_t stopSem;
sem_t baserateTaskSem;
sem_t subrateTaskSem[2];
int taskId[2];
pthread_t schedulerThread;
pthread_t baseRateThread;
unsigned long threadJoinStatus[8];
int terminatingmodel = 0;
pthread_t subRateThread[2];
int subratePriority[2];
void *subrateTask(void *arg)
{
  int tid = *((int *) arg);
  int subRateId;
  subRateId = tid + 2;
  while (runModel) {
    sem_wait(&subrateTaskSem[tid]);
    if (terminatingmodel)
      break;

#ifdef MW_RTOS_DEBUG

    printf(" -subrate task %d semaphore received\n", subRateId);

#endif

    Model_2_SpeedClosedLoop_step(subRateId);

    /* Get model outputs here */
  }

  pthread_exit((void *)0);
  return NULL;
}

void *baseRateTask(void *arg)
{
  int_T i;
  runModel = (rtmGetErrorStatus(Model_2_SpeedClosedLoop_M) == (NULL));
  while (runModel) {
    sem_wait(&baserateTaskSem);

#ifdef MW_RTOS_DEBUG

    printf("*base rate task semaphore received\n");
    fflush(stdout);

#endif

    for (i = 1
         ; i <= 2; i++) {
      if (rtmStepTask(Model_2_SpeedClosedLoop_M, i + 1)
          ) {
        sem_post(&subrateTaskSem[ i - 1
                 ]);
      }
    }

    Model_2_SpeedClosedLoop_step(0);

    /* Get model outputs here */
    stopRequested = !((rtmGetErrorStatus(Model_2_SpeedClosedLoop_M) == (NULL)));
    runModel = !stopRequested;
  }

  terminateTask(arg);
  pthread_exit((void *)0);
  return NULL;
}

void exitFcn(int sig)
{
  UNUSED(sig);
  rtmSetErrorStatus(Model_2_SpeedClosedLoop_M, "stopping the model");
}

void *terminateTask(void *arg)
{
  UNUSED(arg);
  terminatingmodel = 1;

  {
    int i;

    /* Signal all periodic tasks to complete */
    for (i=0; i<2; i++) {
      CHECK_STATUS(sem_post(&subrateTaskSem[i]), 0, "sem_post");
      CHECK_STATUS(sem_destroy(&subrateTaskSem[i]), 0, "sem_destroy");
    }

    /* Wait for all periodic tasks to complete */
    for (i=0; i<2; i++) {
      CHECK_STATUS(pthread_join(subRateThread[i],(void *)&threadJoinStatus), 0,
                   "pthread_join");
    }

    runModel = 0;
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  Model_2_SpeedClosedLoop_terminate();
  sem_post(&stopSem);
  return NULL;
}

int main(int argc, char **argv)
{
  subratePriority[0] = 39;
  subratePriority[1] = 38;
  rtmSetErrorStatus(Model_2_SpeedClosedLoop_M, 0);

  /* Initialize model */
  Model_2_SpeedClosedLoop_initialize();

  /* Call RTOS Initialization function */
  myRTOSInit(1.0E-5, 2);

  /* Wait for stop semaphore */
  sem_wait(&stopSem);

#if (MW_NUMBER_TIMER_DRIVEN_TASKS > 0)

  {
    int i;
    for (i=0; i < MW_NUMBER_TIMER_DRIVEN_TASKS; i++) {
      CHECK_STATUS(sem_destroy(&timerTaskSem[i]), 0, "sem_destroy");
    }
  }

#endif

  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
