/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Model_2_SpeedClosedLoop.c
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

#include "Model_2_SpeedClosedLoop.h"
#include "Model_2_SpeedClosedLoop_private.h"

/* Block signals (default storage) */
B_Model_2_SpeedClosedLoop_T Model_2_SpeedClosedLoop_B;

/* Block states (default storage) */
DW_Model_2_SpeedClosedLoop_T Model_2_SpeedClosedLoop_DW;

/* Real-time model */
RT_MODEL_Model_2_SpeedClosedL_T Model_2_SpeedClosedLoop_M_;
RT_MODEL_Model_2_SpeedClosedL_T *const Model_2_SpeedClosedLoop_M =
  &Model_2_SpeedClosedLoop_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void Model_2_SpeedClosedLoop_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[2] = ((boolean_T)rtmStepTask(Model_2_SpeedClosedLoop_M, 2));
  eventFlags[3] = ((boolean_T)rtmStepTask(Model_2_SpeedClosedLoop_M, 3));
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* To ensure a deterministic data transfer between two rates,
   * data is transferred at the priority of a fast task and the frequency
   * of the slow task.  The following flags indicate when the data transfer
   * happens.  That is, a rate interaction flag is set true when both rates
   * will run, and false otherwise.
   */

  /* tid 2 shares data with slower tid rate: 3 */
  if (Model_2_SpeedClosedLoop_M->Timing.TaskCounters.TID[2] == 0) {
    Model_2_SpeedClosedLoop_M->Timing.RateInteraction.TID2_3 =
      (Model_2_SpeedClosedLoop_M->Timing.TaskCounters.TID[3] == 0);
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Model_2_SpeedClosedLoop_M->Timing.TaskCounters.TID[2])++;
  if ((Model_2_SpeedClosedLoop_M->Timing.TaskCounters.TID[2]) > 9) {/* Sample time: [0.0001s, 0.0s] */
    Model_2_SpeedClosedLoop_M->Timing.TaskCounters.TID[2] = 0;
  }

  (Model_2_SpeedClosedLoop_M->Timing.TaskCounters.TID[3])++;
  if ((Model_2_SpeedClosedLoop_M->Timing.TaskCounters.TID[3]) > 99) {/* Sample time: [0.001s, 0.0s] */
    Model_2_SpeedClosedLoop_M->Timing.TaskCounters.TID[3] = 0;
  }
}

/* Model step function for TID0 */
void Model_2_SpeedClosedLoop_step0(void) /* Sample time: [0.0s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_DiscreteTimeIntegrator;
  real_T rtb_DiscreteTimeIntegrator_f;
  real_T rtb_DiscreteTimeIntegrator_p;
  real_T rtb_Gain_j;
  real_T rtb_Sum1;
  real_T rtb_Sum_g;
  real_T rtb_Gain2;
  real_T rtb_Sum1_tmp;

  {                                    /* Sample time: [0.0s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* DiscreteIntegrator: '<S18>/Discrete-Time Integrator' */
  rtb_DiscreteTimeIntegrator =
    Model_2_SpeedClosedLoop_DW.DiscreteTimeIntegrator_DSTATE;

  /* DiscreteIntegrator: '<S17>/Discrete-Time Integrator' */
  rtb_DiscreteTimeIntegrator_f =
    Model_2_SpeedClosedLoop_DW.DiscreteTimeIntegrator_DSTATE_d;

  /* Trigonometry: '<S13>/Elementary Math' incorporates:
   *  DiscreteIntegrator: '<S11>/Discrete-Time Integrator1'
   */
  Model_2_SpeedClosedLoop_B.ElementaryMath_o1 = sin
    (Model_2_SpeedClosedLoop_DW.DiscreteTimeIntegrator1_DSTATE);
  Model_2_SpeedClosedLoop_B.ElementaryMath_o2 = cos
    (Model_2_SpeedClosedLoop_DW.DiscreteTimeIntegrator1_DSTATE);

  /* Fcn: '<S15>/Fcn' */
  Model_2_SpeedClosedLoop_B.Fcn = rtb_DiscreteTimeIntegrator *
    Model_2_SpeedClosedLoop_B.ElementaryMath_o2 + rtb_DiscreteTimeIntegrator_f *
    Model_2_SpeedClosedLoop_B.ElementaryMath_o1;

  /* Fcn: '<S15>/Fcn1' */
  Model_2_SpeedClosedLoop_B.Fcn1 = ((-rtb_DiscreteTimeIntegrator -
    1.7320508075688772 * rtb_DiscreteTimeIntegrator_f) *
    Model_2_SpeedClosedLoop_B.ElementaryMath_o2 + (1.7320508075688772 *
    rtb_DiscreteTimeIntegrator - rtb_DiscreteTimeIntegrator_f) *
    Model_2_SpeedClosedLoop_B.ElementaryMath_o1) * 0.5;

  /* UnitDelay: '<Root>/Unit Delay' */
  Model_2_SpeedClosedLoop_B.Statorcurrentis_dA =
    Model_2_SpeedClosedLoop_DW.UnitDelay_2_DSTATE;

  /* Gain: '<S4>/PolePairs ' incorporates:
   *  UnitDelay: '<Root>/Unit Delay'
   */
  Model_2_SpeedClosedLoop_B.Rotorelectricalangularspeed =
    Model_2_SpeedClosedLoop_P.Polepairs *
    Model_2_SpeedClosedLoop_DW.UnitDelay_4_DSTATE;

  /* UnitDelay: '<Root>/Unit Delay' */
  Model_2_SpeedClosedLoop_B.Statorcurrentis_qA =
    Model_2_SpeedClosedLoop_DW.UnitDelay_1_DSTATE;

  /* Gain: '<S4>/PolePairs' incorporates:
   *  UnitDelay: '<Root>/Unit Delay'
   */
  Model_2_SpeedClosedLoop_B.Rotorelectricalangle =
    Model_2_SpeedClosedLoop_P.Polepairs *
    Model_2_SpeedClosedLoop_DW.UnitDelay_3_DSTATE;

  /* S-Function (sfun_spssw_discc): '<S318>/State-Space' */

  /* S-Function block: <S318>/State-Space */
  {
    real_T accum;

    /*
     * Compute outputs:
     * ---------------
     */
    real_T *Ds = (real_T*)Model_2_SpeedClosedLoop_DW.StateSpace_PWORK.DS;
    accum = 0.0;
    accum += *(Ds++) * Model_2_SpeedClosedLoop_B.Fcn;
    accum += *(Ds++) * Model_2_SpeedClosedLoop_B.Fcn1;
    accum += *(Ds++) * Model_2_SpeedClosedLoop_B.Add1;
    accum += *(Ds++) * Model_2_SpeedClosedLoop_B.Add;
    accum += *(Ds++) * Model_2_SpeedClosedLoop_B.Add1_g;
    Model_2_SpeedClosedLoop_B.StateSpace[0] = accum;
    accum = 0.0;
    accum += *(Ds++) * Model_2_SpeedClosedLoop_B.Fcn;
    accum += *(Ds++) * Model_2_SpeedClosedLoop_B.Fcn1;
    accum += *(Ds++) * Model_2_SpeedClosedLoop_B.Add1;
    accum += *(Ds++) * Model_2_SpeedClosedLoop_B.Add;
    accum += *(Ds++) * Model_2_SpeedClosedLoop_B.Add1_g;
    Model_2_SpeedClosedLoop_B.StateSpace[1] = accum;
  }

  /* DiscreteIntegrator: '<S11>/Discrete-Time Integrator' */
  rtb_DiscreteTimeIntegrator_p =
    Model_2_SpeedClosedLoop_DW.DiscreteTimeIntegrator_DSTATE_b;

  /* Gain: '<S11>/Gain' */
  rtb_Gain_j = Model_2_SpeedClosedLoop_P.Gain_Gain_o *
    rtb_DiscreteTimeIntegrator_p;

  /* Fcn: '<S13>/Fcn2' incorporates:
   *  Fcn: '<S13>/Fcn3'
   */
  rtb_Sum1_tmp = 2.0 * Model_2_SpeedClosedLoop_B.StateSpace[0] +
    Model_2_SpeedClosedLoop_B.StateSpace[1];

  /* Sum: '<S18>/Sum1' incorporates:
   *  Fcn: '<S13>/Fcn2'
   *  Gain: '<S18>/1//Lq'
   *  Gain: '<S18>/Ld//Lq'
   *  Gain: '<S18>/R//Lq'
   *  Gain: '<S18>/lam//Lq'
   *  Product: '<S18>/Product1'
   */
  rtb_Sum1 = (((rtb_Sum1_tmp * Model_2_SpeedClosedLoop_B.ElementaryMath_o2 +
                1.7320508075688772 * Model_2_SpeedClosedLoop_B.StateSpace[1] *
                Model_2_SpeedClosedLoop_B.ElementaryMath_o1) *
               0.33333333333333331 * Model_2_SpeedClosedLoop_P.uLq_Gain -
               Model_2_SpeedClosedLoop_P.RLq_Gain * rtb_DiscreteTimeIntegrator)
              - rtb_DiscreteTimeIntegrator_f * rtb_Gain_j *
              Model_2_SpeedClosedLoop_P.LdLq_Gain) -
    Model_2_SpeedClosedLoop_P.lamLq_Gain * rtb_Gain_j;

  /* Sum: '<S17>/Sum' incorporates:
   *  Fcn: '<S13>/Fcn3'
   *  Gain: '<S17>/1//Ld'
   *  Gain: '<S17>/Lq//Ld'
   *  Gain: '<S17>/R//Ld'
   *  Product: '<S17>/Product'
   */
  rtb_Sum_g = ((rtb_Sum1_tmp * Model_2_SpeedClosedLoop_B.ElementaryMath_o1 +
                -1.7320508075688772 * Model_2_SpeedClosedLoop_B.StateSpace[1] *
                Model_2_SpeedClosedLoop_B.ElementaryMath_o2) *
               0.33333333333333331 * Model_2_SpeedClosedLoop_P.uLd_Gain -
               Model_2_SpeedClosedLoop_P.RLd_Gain * rtb_DiscreteTimeIntegrator_f)
    + rtb_Gain_j * rtb_DiscreteTimeIntegrator *
    Model_2_SpeedClosedLoop_P.LqLd_Gain;

  /* Signum: '<S19>/Sign' */
  if (rtb_DiscreteTimeIntegrator_p < 0.0) {
    Model_2_SpeedClosedLoop_B.ElementaryMath_o1 = -1.0;
  } else if (rtb_DiscreteTimeIntegrator_p > 0.0) {
    Model_2_SpeedClosedLoop_B.ElementaryMath_o1 = 1.0;
  } else if (rtb_DiscreteTimeIntegrator_p == 0.0) {
    Model_2_SpeedClosedLoop_B.ElementaryMath_o1 = 0.0;
  } else {
    Model_2_SpeedClosedLoop_B.ElementaryMath_o1 = (rtNaN);
  }

  /* End of Signum: '<S19>/Sign' */

  /* Gain: '<S11>/Gain2' incorporates:
   *  Constant: '<S1>/Constant'
   *  Fcn: '<S9>/Te '
   *  Gain: '<S19>/Gain'
   *  Gain: '<S19>/Gain1'
   *  Sum: '<S11>/Sum'
   *  Sum: '<S19>/Sum'
   */
  rtb_Gain2 = (((-0.0015000000000000002 * rtb_DiscreteTimeIntegrator *
                 rtb_DiscreteTimeIntegrator_f + 0.2205 *
                 rtb_DiscreteTimeIntegrator) * 6.0 -
                Model_2_SpeedClosedLoop_P.Constant_Value) -
               (Model_2_SpeedClosedLoop_P.CoulombViscousFriction_offset *
                Model_2_SpeedClosedLoop_B.ElementaryMath_o1 +
                Model_2_SpeedClosedLoop_P.CoulombViscousFriction_gain *
                rtb_DiscreteTimeIntegrator_p)) *
    Model_2_SpeedClosedLoop_P.Gain2_Gain;

  /* Fcn: '<S11>/Fcn' incorporates:
   *  DiscreteIntegrator: '<S11>/Discrete-Time Integrator1'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  Model_2_SpeedClosedLoop_DW.UnitDelay_3_DSTATE =
    (Model_2_SpeedClosedLoop_DW.DiscreteTimeIntegrator1_DSTATE -
     1.5707963267948966) / 4.0;

  /* FromWorkspace: '<S3>/FromWs' */
  {
    real_T *pDataValues = (real_T *)
      Model_2_SpeedClosedLoop_DW.FromWs_PWORK.DataPtr;
    real_T *pTimeValues = (real_T *)
      Model_2_SpeedClosedLoop_DW.FromWs_PWORK.TimePtr;
    int_T currTimeIndex = Model_2_SpeedClosedLoop_DW.FromWs_IWORK.PrevIndex;
    real_T t = Model_2_SpeedClosedLoop_M->Timing.t[0];

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[7]) {
      currTimeIndex = 6;
    } else {
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }
    }

    Model_2_SpeedClosedLoop_DW.FromWs_IWORK.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          Model_2_SpeedClosedLoop_B.FromWs = pDataValues[currTimeIndex];
        } else {
          Model_2_SpeedClosedLoop_B.FromWs = pDataValues[currTimeIndex + 1];
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex= currTimeIndex;
        d1 = pDataValues[TimeIndex];
        d2 = pDataValues[TimeIndex + 1];
        Model_2_SpeedClosedLoop_B.FromWs = (real_T) rtInterpolate(d1, d2, f1, f2);
        pDataValues += 8;
      }
    }
  }

  /* RateTransition: '<S4>/Rate_Transition6' */
  Model_2_SpeedClosedLoop_B.Rate_Transition6 = Model_2_SpeedClosedLoop_B.FromWs;

  /* Update for DiscreteIntegrator: '<S18>/Discrete-Time Integrator' */
  Model_2_SpeedClosedLoop_DW.DiscreteTimeIntegrator_DSTATE +=
    Model_2_SpeedClosedLoop_P.DiscreteTimeIntegrator_gainval * rtb_Sum1;

  /* Update for DiscreteIntegrator: '<S17>/Discrete-Time Integrator' */
  Model_2_SpeedClosedLoop_DW.DiscreteTimeIntegrator_DSTATE_d +=
    Model_2_SpeedClosedLoop_P.DiscreteTimeIntegrator_gainva_j * rtb_Sum_g;

  /* Update for DiscreteIntegrator: '<S11>/Discrete-Time Integrator1' */
  Model_2_SpeedClosedLoop_DW.DiscreteTimeIntegrator1_DSTATE +=
    Model_2_SpeedClosedLoop_P.DiscreteTimeIntegrator1_gainval * rtb_Gain_j;

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  Model_2_SpeedClosedLoop_DW.UnitDelay_2_DSTATE = rtb_DiscreteTimeIntegrator_f;
  Model_2_SpeedClosedLoop_DW.UnitDelay_4_DSTATE = rtb_DiscreteTimeIntegrator_p;
  Model_2_SpeedClosedLoop_DW.UnitDelay_1_DSTATE = rtb_DiscreteTimeIntegrator;

  /* Update for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' */
  Model_2_SpeedClosedLoop_DW.DiscreteTimeIntegrator_DSTATE_b +=
    Model_2_SpeedClosedLoop_P.DiscreteTimeIntegrator_gainva_k * rtb_Gain2;

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Model_2_SpeedClosedLoop_M->Timing.clockTick0)) {
    ++Model_2_SpeedClosedLoop_M->Timing.clockTickH0;
  }

  Model_2_SpeedClosedLoop_M->Timing.t[0] =
    Model_2_SpeedClosedLoop_M->Timing.clockTick0 *
    Model_2_SpeedClosedLoop_M->Timing.stepSize0 +
    Model_2_SpeedClosedLoop_M->Timing.clockTickH0 *
    Model_2_SpeedClosedLoop_M->Timing.stepSize0 * 4294967296.0;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 1.0E-5, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  Model_2_SpeedClosedLoop_M->Timing.clockTick1++;
  if (!Model_2_SpeedClosedLoop_M->Timing.clockTick1) {
    Model_2_SpeedClosedLoop_M->Timing.clockTickH1++;
  }
}

/* Model step function for TID2 */
void Model_2_SpeedClosedLoop_step2(void) /* Sample time: [0.0001s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_FilterCoefficient;
  real_T rtb_IntegralGain;
  real_T rtb_IntegralGain_i;
  real_T rtb_Sin_Cosine_o2;
  real_T rtb_Add1;
  real_T rtb_Gain1_f;
  real_T rtb_Sin_Cosine_o1;
  real_T rtb_Gain_g;

  /* RateTransition: '<S23>/TmpRTBAtAddInport1' incorporates:
   *  RateTransition: '<S23>/TmpRTBAtAdd1Inport1'
   */
  if (Model_2_SpeedClosedLoop_M->Timing.RateInteraction.TID2_3) {
    Model_2_SpeedClosedLoop_B.TmpRTBAtAddInport1 =
      Model_2_SpeedClosedLoop_DW.TmpRTBAtAddInport1_Buffer0;
    Model_2_SpeedClosedLoop_B.TmpRTBAtAdd1Inport1 =
      Model_2_SpeedClosedLoop_DW.TmpRTBAtAdd1Inport1_Buffer0;
  }

  /* End of RateTransition: '<S23>/TmpRTBAtAddInport1' */

  /* Sum: '<S23>/Add' */
  Model_2_SpeedClosedLoop_B.Add_m = Model_2_SpeedClosedLoop_B.TmpRTBAtAddInport1
    - Model_2_SpeedClosedLoop_B.Statorcurrentis_dA;

  /* RateTransition: '<S4>/Rate_Transition1' */
  Model_2_SpeedClosedLoop_B.Rate_Transition1 =
    Model_2_SpeedClosedLoop_B.Rotorelectricalangularspeed;

  /* Sum: '<S23>/Sum' incorporates:
   *  DiscreteIntegrator: '<S83>/Integrator'
   *  Gain: '<S100>/Proportional Gain'
   *  Gain: '<S23>/Gain1'
   *  Product: '<S23>/Product1'
   *  Sum: '<S112>/Sum'
   */
  Model_2_SpeedClosedLoop_B.Sum_n = (Model_2_SpeedClosedLoop_P.Gain_P *
    Model_2_SpeedClosedLoop_B.Add_m +
    Model_2_SpeedClosedLoop_DW.Integrator_DSTATE) - Model_2_SpeedClosedLoop_P.Lq
    * Model_2_SpeedClosedLoop_B.Statorcurrentis_qA *
    Model_2_SpeedClosedLoop_B.Rate_Transition1;

  /* Trigonometry: '<S2>/Sin_Cosine' */
  rtb_Sin_Cosine_o1 = sin(Model_2_SpeedClosedLoop_B.Rotorelectricalangle);
  rtb_Sin_Cosine_o2 = cos(Model_2_SpeedClosedLoop_B.Rotorelectricalangle);

  /* Sum: '<S23>/Add1' */
  rtb_Add1 = Model_2_SpeedClosedLoop_B.TmpRTBAtAdd1Inport1 -
    Model_2_SpeedClosedLoop_B.Statorcurrentis_qA;

  /* Gain: '<S189>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S161>/Filter'
   *  Gain: '<S156>/Derivative Gain'
   *  Sum: '<S161>/SumD'
   */
  rtb_FilterCoefficient = (Model_2_SpeedClosedLoop_P.PIDController1_D * rtb_Add1
    - Model_2_SpeedClosedLoop_DW.Filter_DSTATE) *
    Model_2_SpeedClosedLoop_P.PIDController1_N;

  /* Sum: '<S23>/Sum1' incorporates:
   *  Constant: '<S23>/Constant'
   *  DiscreteIntegrator: '<S179>/Integrator'
   *  Gain: '<S196>/Proportional Gain'
   *  Gain: '<S23>/Gain'
   *  Product: '<S23>/Product'
   *  Sum: '<S209>/Sum'
   *  Sum: '<S23>/Add2'
   */
  rtb_Gain1_f = (Model_2_SpeedClosedLoop_P.Ld *
                 Model_2_SpeedClosedLoop_B.Statorcurrentis_dA +
                 Model_2_SpeedClosedLoop_P.Lambda_m) *
    Model_2_SpeedClosedLoop_B.Rate_Transition1 +
    ((Model_2_SpeedClosedLoop_P.Gain_P * rtb_Add1 +
      Model_2_SpeedClosedLoop_DW.Integrator_DSTATE_a) + rtb_FilterCoefficient);

  /* Sum: '<S25>/Add1' incorporates:
   *  Product: '<S25>/Product1'
   *  Product: '<S25>/Product2'
   */
  Model_2_SpeedClosedLoop_B.Add1 = Model_2_SpeedClosedLoop_B.Sum_n *
    rtb_Sin_Cosine_o2 - rtb_Gain1_f * rtb_Sin_Cosine_o1;

  /* Gain: '<S24>/Gain' */
  rtb_Gain_g = Model_2_SpeedClosedLoop_P.Gain_Gain *
    Model_2_SpeedClosedLoop_B.Add1;

  /* Gain: '<S24>/Gain1' incorporates:
   *  Product: '<S25>/Product3'
   *  Product: '<S25>/Product4'
   *  Sum: '<S25>/Add2'
   */
  rtb_Gain1_f = (Model_2_SpeedClosedLoop_B.Sum_n * rtb_Sin_Cosine_o1 +
                 rtb_Gain1_f * rtb_Sin_Cosine_o2) *
    Model_2_SpeedClosedLoop_P.Gain1_Gain;

  /* Sum: '<S24>/Add' */
  Model_2_SpeedClosedLoop_B.Add = rtb_Gain1_f - rtb_Gain_g;

  /* Sum: '<S24>/Add1' */
  Model_2_SpeedClosedLoop_B.Add1_g = (0.0 - rtb_Gain_g) - rtb_Gain1_f;

  /* Gain: '<S169>/Integral Gain' */
  rtb_IntegralGain = Model_2_SpeedClosedLoop_P.Gain_I * rtb_Add1;

  /* Gain: '<S73>/Integral Gain' */
  rtb_IntegralGain_i = Model_2_SpeedClosedLoop_P.Gain_I *
    Model_2_SpeedClosedLoop_B.Add_m;

  /* RateTransition: '<S2>/TmpRTBAtelectrical rad//s -> rpmInport1' */
  if (Model_2_SpeedClosedLoop_M->Timing.RateInteraction.TID2_3) {
    Model_2_SpeedClosedLoop_B.TmpRTBAtelectricalradsrpmInport =
      Model_2_SpeedClosedLoop_B.Rate_Transition1;
  }

  /* End of RateTransition: '<S2>/TmpRTBAtelectrical rad//s -> rpmInport1' */

  /* Update for DiscreteIntegrator: '<S83>/Integrator' */
  Model_2_SpeedClosedLoop_DW.Integrator_DSTATE +=
    Model_2_SpeedClosedLoop_P.Integrator_gainval * rtb_IntegralGain_i;

  /* Update for DiscreteIntegrator: '<S179>/Integrator' */
  Model_2_SpeedClosedLoop_DW.Integrator_DSTATE_a +=
    Model_2_SpeedClosedLoop_P.Integrator_gainval_k * rtb_IntegralGain;

  /* Update for DiscreteIntegrator: '<S161>/Filter' */
  Model_2_SpeedClosedLoop_DW.Filter_DSTATE +=
    Model_2_SpeedClosedLoop_P.Filter_gainval * rtb_FilterCoefficient;
}

/* Model step function for TID3 */
void Model_2_SpeedClosedLoop_step3(void) /* Sample time: [0.001s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_IntegralGain_d;
  real_T rtb_Sum_p0;
  real_T rtb_Integrator_b;

  /* Sum: '<S26>/Add' incorporates:
   *  Gain: '<S2>/electrical rad//s -> rpm'
   */
  rtb_Integrator_b = Model_2_SpeedClosedLoop_B.Rate_Transition6 - 60.0 /
    (6.2831853071795862 * Model_2_SpeedClosedLoop_P.Polepairs) *
    Model_2_SpeedClosedLoop_B.TmpRTBAtelectricalradsrpmInport;

  /* Gain: '<S266>/Integral Gain' */
  rtb_IntegralGain_d = Model_2_SpeedClosedLoop_P.Speed_Gain_I * rtb_Integrator_b;

  /* Sum: '<S305>/Sum' incorporates:
   *  DiscreteIntegrator: '<S276>/Integrator'
   *  Gain: '<S293>/Proportional Gain'
   */
  rtb_Sum_p0 = Model_2_SpeedClosedLoop_P.Speed_Gain_P * rtb_Integrator_b +
    Model_2_SpeedClosedLoop_DW.Integrator_DSTATE_c;

  /* Update for RateTransition: '<S23>/TmpRTBAtAddInport1' incorporates:
   *  Constant: '<S26>/id_cmd'
   */
  Model_2_SpeedClosedLoop_DW.TmpRTBAtAddInport1_Buffer0 =
    Model_2_SpeedClosedLoop_P.id_cmd_Value;

  /* Update for RateTransition: '<S23>/TmpRTBAtAdd1Inport1' */
  Model_2_SpeedClosedLoop_DW.TmpRTBAtAdd1Inport1_Buffer0 = rtb_Sum_p0;

  /* Update for DiscreteIntegrator: '<S276>/Integrator' */
  Model_2_SpeedClosedLoop_DW.Integrator_DSTATE_c +=
    Model_2_SpeedClosedLoop_P.Integrator_gainval_d * rtb_IntegralGain_d;
}

/* Model step wrapper function for compatibility with a static main program */
void Model_2_SpeedClosedLoop_step(int_T tid)
{
  switch (tid) {
   case 0 :
    Model_2_SpeedClosedLoop_step0();
    break;

   case 2 :
    Model_2_SpeedClosedLoop_step2();
    break;

   case 3 :
    Model_2_SpeedClosedLoop_step3();
    break;

   default :
    break;
  }
}

/* Model initialize function */
void Model_2_SpeedClosedLoop_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Model_2_SpeedClosedLoop_M, 0,
                sizeof(RT_MODEL_Model_2_SpeedClosedL_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Model_2_SpeedClosedLoop_M->solverInfo,
                          &Model_2_SpeedClosedLoop_M->Timing.simTimeStep);
    rtsiSetTPtr(&Model_2_SpeedClosedLoop_M->solverInfo, &rtmGetTPtr
                (Model_2_SpeedClosedLoop_M));
    rtsiSetStepSizePtr(&Model_2_SpeedClosedLoop_M->solverInfo,
                       &Model_2_SpeedClosedLoop_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Model_2_SpeedClosedLoop_M->solverInfo,
                          (&rtmGetErrorStatus(Model_2_SpeedClosedLoop_M)));
    rtsiSetRTModelPtr(&Model_2_SpeedClosedLoop_M->solverInfo,
                      Model_2_SpeedClosedLoop_M);
  }

  rtsiSetSimTimeStep(&Model_2_SpeedClosedLoop_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&Model_2_SpeedClosedLoop_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(Model_2_SpeedClosedLoop_M,
             &Model_2_SpeedClosedLoop_M->Timing.tArray[0]);
  Model_2_SpeedClosedLoop_M->Timing.stepSize0 = 1.0E-5;

  /* block I/O */
  (void) memset(((void *) &Model_2_SpeedClosedLoop_B), 0,
                sizeof(B_Model_2_SpeedClosedLoop_T));

  /* states (dwork) */
  (void) memset((void *)&Model_2_SpeedClosedLoop_DW, 0,
                sizeof(DW_Model_2_SpeedClosedLoop_T));

  /* Start for RateTransition: '<S23>/TmpRTBAtAddInport1' */
  Model_2_SpeedClosedLoop_B.TmpRTBAtAddInport1 =
    Model_2_SpeedClosedLoop_P.TmpRTBAtAddInport1_InitialCondi;

  /* Start for RateTransition: '<S23>/TmpRTBAtAdd1Inport1' */
  Model_2_SpeedClosedLoop_B.TmpRTBAtAdd1Inport1 =
    Model_2_SpeedClosedLoop_P.TmpRTBAtAdd1Inport1_InitialCond;

  /* Start for S-Function (sfun_spssw_discc): '<S318>/State-Space' */

  /* S-Function block: <S318>/State-Space */
  {
    Model_2_SpeedClosedLoop_DW.StateSpace_PWORK.DS = (real_T*)calloc(2 * 5,
      sizeof(real_T));
    Model_2_SpeedClosedLoop_DW.StateSpace_PWORK.DX_COL = (real_T*)calloc(2,
      sizeof(real_T));
    Model_2_SpeedClosedLoop_DW.StateSpace_PWORK.TMP2 = (real_T*)calloc(5, sizeof
      (real_T));
  }

  /* Start for FromWorkspace: '<S3>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 0.5, 0.5, 1.0, 1.0, 1.5, 1.5, 3.0 } ;

    static real_T pDataValues0[] = { 0.0, 0.0, 500.0, 500.0, 1000.0, 1000.0,
      1000.0, 0.0 } ;

    Model_2_SpeedClosedLoop_DW.FromWs_PWORK.TimePtr = (void *) pTimeValues0;
    Model_2_SpeedClosedLoop_DW.FromWs_PWORK.DataPtr = (void *) pDataValues0;
    Model_2_SpeedClosedLoop_DW.FromWs_IWORK.PrevIndex = 0;
  }

  /* InitializeConditions for DiscreteIntegrator: '<S18>/Discrete-Time Integrator' */
  Model_2_SpeedClosedLoop_DW.DiscreteTimeIntegrator_DSTATE =
    Model_2_SpeedClosedLoop_P.DiscreteTimeIntegrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S17>/Discrete-Time Integrator' */
  Model_2_SpeedClosedLoop_DW.DiscreteTimeIntegrator_DSTATE_d =
    Model_2_SpeedClosedLoop_P.DiscreteTimeIntegrator_IC_m;

  /* InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator1' */
  Model_2_SpeedClosedLoop_DW.DiscreteTimeIntegrator1_DSTATE =
    Model_2_SpeedClosedLoop_P.DiscreteTimeIntegrator1_IC;

  /* InitializeConditions for RateTransition: '<S23>/TmpRTBAtAddInport1' */
  Model_2_SpeedClosedLoop_DW.TmpRTBAtAddInport1_Buffer0 =
    Model_2_SpeedClosedLoop_P.TmpRTBAtAddInport1_InitialCondi;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  Model_2_SpeedClosedLoop_DW.UnitDelay_2_DSTATE =
    Model_2_SpeedClosedLoop_P.UnitDelay_2_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S83>/Integrator' */
  Model_2_SpeedClosedLoop_DW.Integrator_DSTATE =
    Model_2_SpeedClosedLoop_P.PIDController_InitialConditionF;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  Model_2_SpeedClosedLoop_DW.UnitDelay_4_DSTATE =
    Model_2_SpeedClosedLoop_P.UnitDelay_4_InitialCondition;
  Model_2_SpeedClosedLoop_DW.UnitDelay_1_DSTATE =
    Model_2_SpeedClosedLoop_P.UnitDelay_1_InitialCondition;
  Model_2_SpeedClosedLoop_DW.UnitDelay_3_DSTATE =
    Model_2_SpeedClosedLoop_P.UnitDelay_3_InitialCondition;

  /* InitializeConditions for RateTransition: '<S23>/TmpRTBAtAdd1Inport1' */
  Model_2_SpeedClosedLoop_DW.TmpRTBAtAdd1Inport1_Buffer0 =
    Model_2_SpeedClosedLoop_P.TmpRTBAtAdd1Inport1_InitialCond;

  /* InitializeConditions for DiscreteIntegrator: '<S179>/Integrator' */
  Model_2_SpeedClosedLoop_DW.Integrator_DSTATE_a =
    Model_2_SpeedClosedLoop_P.PIDController1_InitialConditi_k;

  /* InitializeConditions for DiscreteIntegrator: '<S161>/Filter' */
  Model_2_SpeedClosedLoop_DW.Filter_DSTATE =
    Model_2_SpeedClosedLoop_P.PIDController1_InitialCondition;

  /* InitializeConditions for S-Function (sfun_spssw_discc): '<S318>/State-Space' */
  {
    int32_T i, j;
    real_T *Ds = (real_T*)Model_2_SpeedClosedLoop_DW.StateSpace_PWORK.DS;

    /* Copy and transpose D */
    for (i=0; i<2; i++) {
      for (j=0; j<5; j++)
        Ds[i*5 + j] = (Model_2_SpeedClosedLoop_P.StateSpace_DS_param[i + j*2]);
    }
  }

  /* InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' */
  Model_2_SpeedClosedLoop_DW.DiscreteTimeIntegrator_DSTATE_b =
    Model_2_SpeedClosedLoop_P.DiscreteTimeIntegrator_IC_h;

  /* InitializeConditions for DiscreteIntegrator: '<S276>/Integrator' */
  Model_2_SpeedClosedLoop_DW.Integrator_DSTATE_c =
    Model_2_SpeedClosedLoop_P.PIDController_InitialConditio_a;
}

/* Model terminate function */
void Model_2_SpeedClosedLoop_terminate(void)
{
  /* Terminate for S-Function (sfun_spssw_discc): '<S318>/State-Space' */

  /* S-Function block: <S318>/State-Space */
  {
    /* Free memory */
    free(Model_2_SpeedClosedLoop_DW.StateSpace_PWORK.DS);
    free(Model_2_SpeedClosedLoop_DW.StateSpace_PWORK.DX_COL);
    free(Model_2_SpeedClosedLoop_DW.StateSpace_PWORK.TMP2);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
