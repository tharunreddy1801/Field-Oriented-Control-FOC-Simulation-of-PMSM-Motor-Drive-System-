/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Model_3_Flux_Weakening_Control.c
 *
 * Code generated for Simulink model 'Model_3_Flux_Weakening_Control'.
 *
 * Model version                  : 1.62
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Nov  2 19:39:16 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Model_3_Flux_Weakening_Control.h"
#include "Model_3_Flux_Weakening_Control_private.h"

/* Block signals (default storage) */
B_Model_3_Flux_Weakening_Cont_T Model_3_Flux_Weakening_Contro_B;

/* Block states (default storage) */
DW_Model_3_Flux_Weakening_Con_T Model_3_Flux_Weakening_Contr_DW;

/* Real-time model */
RT_MODEL_Model_3_Flux_Weakeni_T Model_3_Flux_Weakening_Contr_M_;
RT_MODEL_Model_3_Flux_Weakeni_T *const Model_3_Flux_Weakening_Contr_M =
  &Model_3_Flux_Weakening_Contr_M_;
static void rate_monotonic_scheduler(void);
real_T look2_binlxpw(real_T u0, real_T u1, const real_T bp0[], const real_T bp1[],
                     const real_T table[], const uint32_T maxIndex[], uint32_T
                     stride)
{
  real_T frac;
  uint32_T bpIndices[2];
  real_T fractions[2];
  real_T yL_1d;
  uint32_T iRght;
  uint32_T bpIdx;
  uint32_T iLeft;

  /* Column-major Lookup 2-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex[0U]]) {
    /* Binary Search */
    bpIdx = maxIndex[0U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[0U];
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex[0U] - 1U;
    frac = (u0 - bp0[maxIndex[0U] - 1U]) / (bp0[maxIndex[0U]] - bp0[maxIndex[0U]
      - 1U]);
  }

  fractions[0U] = frac;
  bpIndices[0U] = iLeft;

  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u1 <= bp1[0U]) {
    iLeft = 0U;
    frac = (u1 - bp1[0U]) / (bp1[1U] - bp1[0U]);
  } else if (u1 < bp1[maxIndex[1U]]) {
    /* Binary Search */
    bpIdx = maxIndex[1U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[1U];
    while (iRght - iLeft > 1U) {
      if (u1 < bp1[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u1 - bp1[iLeft]) / (bp1[iLeft + 1U] - bp1[iLeft]);
  } else {
    iLeft = maxIndex[1U] - 1U;
    frac = (u1 - bp1[maxIndex[1U] - 1U]) / (bp1[maxIndex[1U]] - bp1[maxIndex[1U]
      - 1U]);
  }

  /* Column-major Interpolation 2-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  bpIdx = iLeft * stride + bpIndices[0U];
  yL_1d = (table[bpIdx + 1U] - table[bpIdx]) * fractions[0U] + table[bpIdx];
  bpIdx += stride;
  return (((table[bpIdx + 1U] - table[bpIdx]) * fractions[0U] + table[bpIdx]) -
          yL_1d) * frac + yL_1d;
}

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void Model_3_Flux_Weakening_Control_SetEventsForThisBaseStep(boolean_T
  *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[2] = ((boolean_T)rtmStepTask(Model_3_Flux_Weakening_Contr_M, 2));
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

  /* tid 1 shares data with slower tid rate: 2 */
  if (Model_3_Flux_Weakening_Contr_M->Timing.TaskCounters.TID[1] == 0) {
    Model_3_Flux_Weakening_Contr_M->Timing.RateInteraction.TID1_2 =
      (Model_3_Flux_Weakening_Contr_M->Timing.TaskCounters.TID[2] == 0);
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Model_3_Flux_Weakening_Contr_M->Timing.TaskCounters.TID[2])++;
  if ((Model_3_Flux_Weakening_Contr_M->Timing.TaskCounters.TID[2]) > 9) {/* Sample time: [0.0001s, 0.0s] */
    Model_3_Flux_Weakening_Contr_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/* Model step function for TID0 */
void Model_3_Flux_Weakening_Control_step0(void) /* Sample time: [0.0s, 0.0s] */
{
  real_T rtb_Fcn;
  real_T rtb_ElementaryMath_o1;
  real_T rtb_ElementaryMath_o2;
  real_T romtomechanicalangularspeed;
  real_T rtb_Fcn_tmp;

  {                                    /* Sample time: [0.0s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* FromWorkspace: '<S3>/FromWs' */
  {
    real_T *pDataValues = (real_T *)
      Model_3_Flux_Weakening_Contr_DW.FromWs_PWORK.DataPtr;
    real_T *pTimeValues = (real_T *)
      Model_3_Flux_Weakening_Contr_DW.FromWs_PWORK.TimePtr;
    int_T currTimeIndex = Model_3_Flux_Weakening_Contr_DW.FromWs_IWORK.PrevIndex;
    real_T t = Model_3_Flux_Weakening_Contr_M->Timing.t[0];

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

    Model_3_Flux_Weakening_Contr_DW.FromWs_IWORK.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          {
            int_T elIdx;
            for (elIdx = 0; elIdx < 2; ++elIdx) {
              (&Model_3_Flux_Weakening_Contro_B.FromWs[0])[elIdx] =
                pDataValues[currTimeIndex];
              pDataValues += 8;
            }
          }
        } else {
          {
            int_T elIdx;
            for (elIdx = 0; elIdx < 2; ++elIdx) {
              (&Model_3_Flux_Weakening_Contro_B.FromWs[0])[elIdx] =
                pDataValues[currTimeIndex + 1];
              pDataValues += 8;
            }
          }
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex= currTimeIndex;

        {
          int_T elIdx;
          for (elIdx = 0; elIdx < 2; ++elIdx) {
            d1 = pDataValues[TimeIndex];
            d2 = pDataValues[TimeIndex + 1];
            (&Model_3_Flux_Weakening_Contro_B.FromWs[0])[elIdx] = (real_T)
              rtInterpolate(d1, d2, f1, f2);
            pDataValues += 8;
          }
        }
      }
    }
  }

  /* RateTransition: '<S23>/TmpRTBAtId_of_We_TorqueInport2' */
  if (Model_3_Flux_Weakening_Contr_M->Timing.RateInteraction.TID1_2) {
    Model_3_Flux_Weakening_Contro_B.TmpRTBAtId_of_We_TorqueInport2 =
      Model_3_Flux_Weakening_Contro_B.FromWs[1];

    /* RateTransition: '<S23>/TmpRTBAtIq_of_We_Torque1Inport2' */
    Model_3_Flux_Weakening_Contro_B.TmpRTBAtIq_of_We_Torque1Inport2 =
      Model_3_Flux_Weakening_Contro_B.FromWs[1];
  }

  /* End of RateTransition: '<S23>/TmpRTBAtId_of_We_TorqueInport2' */

  /* Trigonometry: '<S13>/Elementary Math' incorporates:
   *  DiscreteIntegrator: '<S11>/Discrete-Time Integrator1'
   */
  rtb_ElementaryMath_o1 = sin
    (Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator1_DSTATE);
  rtb_ElementaryMath_o2 = cos
    (Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator1_DSTATE);

  /* Fcn: '<S15>/Fcn' incorporates:
   *  DiscreteIntegrator: '<S17>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S18>/Discrete-Time Integrator'
   */
  Model_3_Flux_Weakening_Contro_B.Fcn =
    Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator_DSTATE *
    rtb_ElementaryMath_o2 +
    Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator_DSTATE_d *
    rtb_ElementaryMath_o1;

  /* Fcn: '<S15>/Fcn1' incorporates:
   *  DiscreteIntegrator: '<S17>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S18>/Discrete-Time Integrator'
   */
  Model_3_Flux_Weakening_Contro_B.Fcn1 =
    ((-Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator_DSTATE -
      1.7320508075688772 *
      Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator_DSTATE_d) *
     rtb_ElementaryMath_o2 + (1.7320508075688772 *
      Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator_DSTATE -
      Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator_DSTATE_d) *
     rtb_ElementaryMath_o1) * 0.5;

  /* S-Function (sfun_spssw_discc): '<S220>/State-Space' */

  /* S-Function block: <S220>/State-Space */
  {
    real_T accum;

    /*
     * Compute outputs:
     * ---------------
     */
    real_T *Ds = (real_T*)Model_3_Flux_Weakening_Contr_DW.StateSpace_PWORK.DS;
    accum = 0.0;
    accum += *(Ds++) * Model_3_Flux_Weakening_Contro_B.Fcn;
    accum += *(Ds++) * Model_3_Flux_Weakening_Contro_B.Fcn1;
    accum += *(Ds++) * Model_3_Flux_Weakening_Contro_B.Add1;
    accum += *(Ds++) * Model_3_Flux_Weakening_Contro_B.Add;
    accum += *(Ds++) * Model_3_Flux_Weakening_Contro_B.Add1_g;
    Model_3_Flux_Weakening_Contro_B.StateSpace[0] = accum;
    accum = 0.0;
    accum += *(Ds++) * Model_3_Flux_Weakening_Contro_B.Fcn;
    accum += *(Ds++) * Model_3_Flux_Weakening_Contro_B.Fcn1;
    accum += *(Ds++) * Model_3_Flux_Weakening_Contro_B.Add1;
    accum += *(Ds++) * Model_3_Flux_Weakening_Contro_B.Add;
    accum += *(Ds++) * Model_3_Flux_Weakening_Contro_B.Add1_g;
    Model_3_Flux_Weakening_Contro_B.StateSpace[1] = accum;
  }

  /* Fcn: '<S13>/Fcn2' incorporates:
   *  Fcn: '<S13>/Fcn3'
   */
  rtb_Fcn_tmp = 2.0 * Model_3_Flux_Weakening_Contro_B.StateSpace[0] +
    Model_3_Flux_Weakening_Contro_B.StateSpace[1];
  rtb_Fcn = (rtb_Fcn_tmp * rtb_ElementaryMath_o2 + 1.7320508075688772 *
             Model_3_Flux_Weakening_Contro_B.StateSpace[1] *
             rtb_ElementaryMath_o1) * 0.33333333333333331;

  /* Gain: '<S1>/rom to mechanical angular speed' */
  romtomechanicalangularspeed =
    Model_3_Flux_Weakening_Contro_P.romtomechanicalangularspeed_Gai *
    Model_3_Flux_Weakening_Contro_B.FromWs[0];

  /* Gain: '<S11>/Gain' */
  Model_3_Flux_Weakening_Contro_B.Gain =
    Model_3_Flux_Weakening_Contro_P.Gain_Gain_o * romtomechanicalangularspeed;

  /* Sum: '<S18>/Sum1' incorporates:
   *  DiscreteIntegrator: '<S17>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S18>/Discrete-Time Integrator'
   *  Gain: '<S18>/1//Lq'
   *  Gain: '<S18>/Ld//Lq'
   *  Gain: '<S18>/R//Lq'
   *  Gain: '<S18>/lam//Lq'
   *  Product: '<S18>/Product1'
   */
  Model_3_Flux_Weakening_Contro_B.Sum1 =
    ((Model_3_Flux_Weakening_Contro_P.uLq_Gain * rtb_Fcn -
      Model_3_Flux_Weakening_Contro_P.RLq_Gain *
      Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator_DSTATE) -
     Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator_DSTATE_d *
     Model_3_Flux_Weakening_Contro_B.Gain *
     Model_3_Flux_Weakening_Contro_P.LdLq_Gain) -
    Model_3_Flux_Weakening_Contro_P.lamLq_Gain *
    Model_3_Flux_Weakening_Contro_B.Gain;

  /* Fcn: '<S13>/Fcn3' */
  rtb_Fcn = (rtb_Fcn_tmp * rtb_ElementaryMath_o1 + -1.7320508075688772 *
             Model_3_Flux_Weakening_Contro_B.StateSpace[1] *
             rtb_ElementaryMath_o2) * 0.33333333333333331;

  /* Sum: '<S17>/Sum' incorporates:
   *  DiscreteIntegrator: '<S17>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S18>/Discrete-Time Integrator'
   *  Gain: '<S17>/1//Ld'
   *  Gain: '<S17>/Lq//Ld'
   *  Gain: '<S17>/R//Ld'
   *  Product: '<S17>/Product'
   */
  Model_3_Flux_Weakening_Contro_B.Sum =
    (Model_3_Flux_Weakening_Contro_P.uLd_Gain * rtb_Fcn -
     Model_3_Flux_Weakening_Contro_P.RLd_Gain *
     Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator_DSTATE_d) +
    Model_3_Flux_Weakening_Contro_B.Gain *
    Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator_DSTATE *
    Model_3_Flux_Weakening_Contro_P.LqLd_Gain;

  /* Fcn: '<S11>/Fcn' incorporates:
   *  DiscreteIntegrator: '<S11>/Discrete-Time Integrator1'
   */
  rtb_Fcn = (Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator1_DSTATE -
             1.5707963267948966) / 4.0;

  /* UnitDelay: '<Root>/Unit Delay' incorporates:
   *  DiscreteIntegrator: '<S17>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S18>/Discrete-Time Integrator'
   */
  if (Model_3_Flux_Weakening_Contr_M->Timing.RateInteraction.TID1_2) {
    Model_3_Flux_Weakening_Contro_B.TmpRTBAtUnitDelay_4Inport1 =
      romtomechanicalangularspeed;
    Model_3_Flux_Weakening_Contro_B.TmpRTBAtUnitDelay_2Inport1 =
      Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator_DSTATE_d;
    Model_3_Flux_Weakening_Contro_B.TmpRTBAtUnitDelay_1Inport1 =
      Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator_DSTATE;
    Model_3_Flux_Weakening_Contro_B.TmpRTBAtUnitDelay_3Inport1 = rtb_Fcn;
  }

  /* End of UnitDelay: '<Root>/Unit Delay' */

  /* Update for DiscreteIntegrator: '<S11>/Discrete-Time Integrator1' */
  Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator1_DSTATE +=
    Model_3_Flux_Weakening_Contro_P.DiscreteTimeIntegrator1_gainval *
    Model_3_Flux_Weakening_Contro_B.Gain;

  /* Update for DiscreteIntegrator: '<S18>/Discrete-Time Integrator' */
  Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator_DSTATE +=
    Model_3_Flux_Weakening_Contro_P.DiscreteTimeIntegrator_gainval *
    Model_3_Flux_Weakening_Contro_B.Sum1;

  /* Update for DiscreteIntegrator: '<S17>/Discrete-Time Integrator' */
  Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator_DSTATE_d +=
    Model_3_Flux_Weakening_Contro_P.DiscreteTimeIntegrator_gainva_j *
    Model_3_Flux_Weakening_Contro_B.Sum;

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Model_3_Flux_Weakening_Contr_M->Timing.clockTick0)) {
    ++Model_3_Flux_Weakening_Contr_M->Timing.clockTickH0;
  }

  Model_3_Flux_Weakening_Contr_M->Timing.t[0] =
    Model_3_Flux_Weakening_Contr_M->Timing.clockTick0 *
    Model_3_Flux_Weakening_Contr_M->Timing.stepSize0 +
    Model_3_Flux_Weakening_Contr_M->Timing.clockTickH0 *
    Model_3_Flux_Weakening_Contr_M->Timing.stepSize0 * 4294967296.0;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 1.0E-5, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  Model_3_Flux_Weakening_Contr_M->Timing.clockTick1++;
  if (!Model_3_Flux_Weakening_Contr_M->Timing.clockTick1) {
    Model_3_Flux_Weakening_Contr_M->Timing.clockTickH1++;
  }
}

/* Model step function for TID2 */
void Model_3_Flux_Weakening_Control_step2(void) /* Sample time: [0.0001s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_FilterCoefficient;
  real_T rtb_IntegralGain;
  real_T rtb_IntegralGain_i;
  real_T rtb_Add;
  real_T rtb_Rotorelectricalangle;
  real_T rtb_Sum_l;
  real_T rtb_Sin_Cosine_o1;
  real_T rtb_Gain_g;

  /* Gain: '<S4>/PolePairs ' incorporates:
   *  UnitDelay: '<Root>/Unit Delay'
   */
  Model_3_Flux_Weakening_Contro_B.Integrator_n =
    Model_3_Flux_Weakening_Contro_P.Polepairs *
    Model_3_Flux_Weakening_Contr_DW.UnitDelay_4_DSTATE;

  /* Gain: '<S2>/electrical angular to rpm' */
  Model_3_Flux_Weakening_Contro_B.Add1_m = 60.0 / (6.2831853071795862 *
    Model_3_Flux_Weakening_Contro_P.Polepairs) *
    Model_3_Flux_Weakening_Contro_B.Integrator_n;

  /* Switch: '<S23>/speed_rpm >=  BaseSpeed ?' incorporates:
   *  Constant: '<S23>/Constant2'
   *  Sum: '<S23>/Add2'
   */
  if (!(Model_3_Flux_Weakening_Contro_B.Add1_m -
        Model_3_Flux_Weakening_Contro_P.Param_BaseSpeed >=
        Model_3_Flux_Weakening_Contro_P.speed_rpmBaseSpeed_Threshold)) {
    Model_3_Flux_Weakening_Contro_B.Add1_m =
      Model_3_Flux_Weakening_Contro_P.Param_BaseSpeed;
  }

  /* End of Switch: '<S23>/speed_rpm >=  BaseSpeed ?' */

  /* Sum: '<S22>/Add' incorporates:
   *  Lookup_n-D: '<S23>/Id_of_We_Torque'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_Add = look2_binlxpw(Model_3_Flux_Weakening_Contro_B.Add1_m,
    Model_3_Flux_Weakening_Contro_B.TmpRTBAtId_of_We_TorqueInport2,
    Model_3_Flux_Weakening_Contro_P.ParamControlTableWeIndex,
    Model_3_Flux_Weakening_Contro_P.ParamControlTableTrqIndex,
    Model_3_Flux_Weakening_Contro_P.Param_Id_of_We_Torque,
    Model_3_Flux_Weakening_Contro_P.Id_of_We_Torque_maxIndex, 29U) -
    Model_3_Flux_Weakening_Contr_DW.UnitDelay_2_DSTATE;

  /* Sum: '<S22>/Sum' incorporates:
   *  DiscreteIntegrator: '<S82>/Integrator'
   *  Gain: '<S22>/Gain1'
   *  Gain: '<S99>/Proportional Gain'
   *  Product: '<S22>/Product1'
   *  Sum: '<S111>/Sum'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_Sum_l = (Model_3_Flux_Weakening_Contro_P.Gain_P * rtb_Add +
               Model_3_Flux_Weakening_Contr_DW.Integrator_DSTATE) -
    Model_3_Flux_Weakening_Contro_P.Lq *
    Model_3_Flux_Weakening_Contr_DW.UnitDelay_1_DSTATE *
    Model_3_Flux_Weakening_Contro_B.Integrator_n;

  /* Gain: '<S4>/PolePairs' incorporates:
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_Rotorelectricalangle = Model_3_Flux_Weakening_Contro_P.Polepairs *
    Model_3_Flux_Weakening_Contr_DW.UnitDelay_3_DSTATE;

  /* Trigonometry: '<S2>/Sin_Cosine' */
  rtb_Sin_Cosine_o1 = sin(rtb_Rotorelectricalangle);
  rtb_Rotorelectricalangle = cos(rtb_Rotorelectricalangle);

  /* Lookup_n-D: '<S23>/Iq_of_We_Torque1' */
  Model_3_Flux_Weakening_Contro_B.Add1_m = look2_binlxpw
    (Model_3_Flux_Weakening_Contro_B.Add1_m,
     Model_3_Flux_Weakening_Contro_B.TmpRTBAtIq_of_We_Torque1Inport2,
     Model_3_Flux_Weakening_Contro_P.ParamControlTableWeIndex,
     Model_3_Flux_Weakening_Contro_P.ParamControlTableTrqIndex,
     Model_3_Flux_Weakening_Contro_P.Param_Iq_of_We_Torque,
     Model_3_Flux_Weakening_Contro_P.Iq_of_We_Torque1_maxIndex, 29U);

  /* Sum: '<S22>/Add1' incorporates:
   *  UnitDelay: '<Root>/Unit Delay'
   */
  Model_3_Flux_Weakening_Contro_B.Add1_m -=
    Model_3_Flux_Weakening_Contr_DW.UnitDelay_1_DSTATE;

  /* Gain: '<S188>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S160>/Filter'
   *  Gain: '<S155>/Derivative Gain'
   *  Sum: '<S160>/SumD'
   */
  rtb_FilterCoefficient = (Model_3_Flux_Weakening_Contro_P.PIDController1_D *
    Model_3_Flux_Weakening_Contro_B.Add1_m -
    Model_3_Flux_Weakening_Contr_DW.Filter_DSTATE) *
    Model_3_Flux_Weakening_Contro_P.PIDController1_N;

  /* Sum: '<S22>/Sum1' incorporates:
   *  Constant: '<S22>/Constant'
   *  DiscreteIntegrator: '<S178>/Integrator'
   *  Gain: '<S195>/Proportional Gain'
   *  Gain: '<S22>/Gain'
   *  Product: '<S22>/Product'
   *  Sum: '<S208>/Sum'
   *  Sum: '<S22>/Add2'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  Model_3_Flux_Weakening_Contro_B.Integrator_n =
    (Model_3_Flux_Weakening_Contro_P.Ld *
     Model_3_Flux_Weakening_Contr_DW.UnitDelay_2_DSTATE +
     Model_3_Flux_Weakening_Contro_P.Lambda_m) *
    Model_3_Flux_Weakening_Contro_B.Integrator_n +
    ((Model_3_Flux_Weakening_Contro_P.Gain_P *
      Model_3_Flux_Weakening_Contro_B.Add1_m +
      Model_3_Flux_Weakening_Contr_DW.Integrator_DSTATE_a) +
     rtb_FilterCoefficient);

  /* Sum: '<S25>/Add1' incorporates:
   *  Product: '<S25>/Product1'
   *  Product: '<S25>/Product2'
   */
  Model_3_Flux_Weakening_Contro_B.Add1 = rtb_Sum_l * rtb_Rotorelectricalangle -
    Model_3_Flux_Weakening_Contro_B.Integrator_n * rtb_Sin_Cosine_o1;

  /* Gain: '<S24>/Gain' */
  rtb_Gain_g = Model_3_Flux_Weakening_Contro_P.Gain_Gain *
    Model_3_Flux_Weakening_Contro_B.Add1;

  /* Gain: '<S24>/Gain1' incorporates:
   *  Product: '<S25>/Product3'
   *  Product: '<S25>/Product4'
   *  Sum: '<S25>/Add2'
   */
  Model_3_Flux_Weakening_Contro_B.Integrator_n = (rtb_Sum_l * rtb_Sin_Cosine_o1
    + Model_3_Flux_Weakening_Contro_B.Integrator_n * rtb_Rotorelectricalangle) *
    Model_3_Flux_Weakening_Contro_P.Gain1_Gain;

  /* Sum: '<S24>/Add' */
  Model_3_Flux_Weakening_Contro_B.Add =
    Model_3_Flux_Weakening_Contro_B.Integrator_n - rtb_Gain_g;

  /* Sum: '<S24>/Add1' */
  Model_3_Flux_Weakening_Contro_B.Add1_g = (0.0 - rtb_Gain_g) -
    Model_3_Flux_Weakening_Contro_B.Integrator_n;

  /* Gain: '<S168>/Integral Gain' */
  rtb_IntegralGain = Model_3_Flux_Weakening_Contro_P.Gain_I *
    Model_3_Flux_Weakening_Contro_B.Add1_m;

  /* Gain: '<S72>/Integral Gain' */
  rtb_IntegralGain_i = Model_3_Flux_Weakening_Contro_P.Gain_I * rtb_Add;

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  Model_3_Flux_Weakening_Contr_DW.UnitDelay_4_DSTATE =
    Model_3_Flux_Weakening_Contro_B.TmpRTBAtUnitDelay_4Inport1;
  Model_3_Flux_Weakening_Contr_DW.UnitDelay_2_DSTATE =
    Model_3_Flux_Weakening_Contro_B.TmpRTBAtUnitDelay_2Inport1;

  /* Update for DiscreteIntegrator: '<S82>/Integrator' */
  Model_3_Flux_Weakening_Contr_DW.Integrator_DSTATE +=
    Model_3_Flux_Weakening_Contro_P.Integrator_gainval * rtb_IntegralGain_i;

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  Model_3_Flux_Weakening_Contr_DW.UnitDelay_1_DSTATE =
    Model_3_Flux_Weakening_Contro_B.TmpRTBAtUnitDelay_1Inport1;
  Model_3_Flux_Weakening_Contr_DW.UnitDelay_3_DSTATE =
    Model_3_Flux_Weakening_Contro_B.TmpRTBAtUnitDelay_3Inport1;

  /* Update for DiscreteIntegrator: '<S178>/Integrator' */
  Model_3_Flux_Weakening_Contr_DW.Integrator_DSTATE_a +=
    Model_3_Flux_Weakening_Contro_P.Integrator_gainval_k * rtb_IntegralGain;

  /* Update for DiscreteIntegrator: '<S160>/Filter' */
  Model_3_Flux_Weakening_Contr_DW.Filter_DSTATE +=
    Model_3_Flux_Weakening_Contro_P.Filter_gainval * rtb_FilterCoefficient;
}

/* Model step wrapper function for compatibility with a static main program */
void Model_3_Flux_Weakening_Control_step(int_T tid)
{
  switch (tid) {
   case 0 :
    Model_3_Flux_Weakening_Control_step0();
    break;

   case 2 :
    Model_3_Flux_Weakening_Control_step2();
    break;

   default :
    break;
  }
}

/* Model initialize function */
void Model_3_Flux_Weakening_Control_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)Model_3_Flux_Weakening_Contr_M, 0,
                sizeof(RT_MODEL_Model_3_Flux_Weakeni_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Model_3_Flux_Weakening_Contr_M->solverInfo,
                          &Model_3_Flux_Weakening_Contr_M->Timing.simTimeStep);
    rtsiSetTPtr(&Model_3_Flux_Weakening_Contr_M->solverInfo, &rtmGetTPtr
                (Model_3_Flux_Weakening_Contr_M));
    rtsiSetStepSizePtr(&Model_3_Flux_Weakening_Contr_M->solverInfo,
                       &Model_3_Flux_Weakening_Contr_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Model_3_Flux_Weakening_Contr_M->solverInfo,
                          (&rtmGetErrorStatus(Model_3_Flux_Weakening_Contr_M)));
    rtsiSetRTModelPtr(&Model_3_Flux_Weakening_Contr_M->solverInfo,
                      Model_3_Flux_Weakening_Contr_M);
  }

  rtsiSetSimTimeStep(&Model_3_Flux_Weakening_Contr_M->solverInfo,
                     MAJOR_TIME_STEP);
  rtsiSetSolverName(&Model_3_Flux_Weakening_Contr_M->solverInfo,
                    "FixedStepDiscrete");
  rtmSetTPtr(Model_3_Flux_Weakening_Contr_M,
             &Model_3_Flux_Weakening_Contr_M->Timing.tArray[0]);
  Model_3_Flux_Weakening_Contr_M->Timing.stepSize0 = 1.0E-5;

  /* block I/O */
  (void) memset(((void *) &Model_3_Flux_Weakening_Contro_B), 0,
                sizeof(B_Model_3_Flux_Weakening_Cont_T));

  /* states (dwork) */
  (void) memset((void *)&Model_3_Flux_Weakening_Contr_DW, 0,
                sizeof(DW_Model_3_Flux_Weakening_Con_T));

  /* Start for FromWorkspace: '<S3>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 1.0, 1.0, 1.25, 1.25, 2.0, 2.0, 3.0 } ;

    static real_T pDataValues0[] = { 0.0, 1500.0, 1500.0, 1500.0, 1500.0, 1500.0,
      1500.0, 0.0, 100.0, 100.0, 100.0, 100.0, 200.0, 200.0, 200.0, 200.0 } ;

    Model_3_Flux_Weakening_Contr_DW.FromWs_PWORK.TimePtr = (void *) pTimeValues0;
    Model_3_Flux_Weakening_Contr_DW.FromWs_PWORK.DataPtr = (void *) pDataValues0;
    Model_3_Flux_Weakening_Contr_DW.FromWs_IWORK.PrevIndex = 0;
  }

  /* Start for S-Function (sfun_spssw_discc): '<S220>/State-Space' */

  /* S-Function block: <S220>/State-Space */
  {
    Model_3_Flux_Weakening_Contr_DW.StateSpace_PWORK.DS = (real_T*)calloc(2 * 5,
      sizeof(real_T));
    Model_3_Flux_Weakening_Contr_DW.StateSpace_PWORK.DX_COL = (real_T*)calloc(2,
      sizeof(real_T));
    Model_3_Flux_Weakening_Contr_DW.StateSpace_PWORK.TMP2 = (real_T*)calloc(5,
      sizeof(real_T));
  }

  /* InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator1' */
  Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator1_DSTATE =
    Model_3_Flux_Weakening_Contro_P.DiscreteTimeIntegrator1_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S18>/Discrete-Time Integrator' */
  Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator_DSTATE =
    Model_3_Flux_Weakening_Contro_P.DiscreteTimeIntegrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S17>/Discrete-Time Integrator' */
  Model_3_Flux_Weakening_Contr_DW.DiscreteTimeIntegrator_DSTATE_d =
    Model_3_Flux_Weakening_Contro_P.DiscreteTimeIntegrator_IC_m;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  Model_3_Flux_Weakening_Contr_DW.UnitDelay_4_DSTATE =
    Model_3_Flux_Weakening_Contro_P.UnitDelay_4_InitialCondition;
  Model_3_Flux_Weakening_Contr_DW.UnitDelay_2_DSTATE =
    Model_3_Flux_Weakening_Contro_P.UnitDelay_2_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S82>/Integrator' */
  Model_3_Flux_Weakening_Contr_DW.Integrator_DSTATE =
    Model_3_Flux_Weakening_Contro_P.PIDController_InitialConditionF;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  Model_3_Flux_Weakening_Contr_DW.UnitDelay_1_DSTATE =
    Model_3_Flux_Weakening_Contro_P.UnitDelay_1_InitialCondition;
  Model_3_Flux_Weakening_Contr_DW.UnitDelay_3_DSTATE =
    Model_3_Flux_Weakening_Contro_P.UnitDelay_3_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S178>/Integrator' */
  Model_3_Flux_Weakening_Contr_DW.Integrator_DSTATE_a =
    Model_3_Flux_Weakening_Contro_P.PIDController1_InitialConditi_k;

  /* InitializeConditions for DiscreteIntegrator: '<S160>/Filter' */
  Model_3_Flux_Weakening_Contr_DW.Filter_DSTATE =
    Model_3_Flux_Weakening_Contro_P.PIDController1_InitialCondition;

  /* InitializeConditions for S-Function (sfun_spssw_discc): '<S220>/State-Space' */
  {
    int32_T i, j;
    real_T *Ds = (real_T*)Model_3_Flux_Weakening_Contr_DW.StateSpace_PWORK.DS;

    /* Copy and transpose D */
    for (i=0; i<2; i++) {
      for (j=0; j<5; j++)
        Ds[i*5 + j] = (Model_3_Flux_Weakening_Contro_P.StateSpace_DS_param[i + j*
                       2]);
    }
  }
}

/* Model terminate function */
void Model_3_Flux_Weakening_Control_terminate(void)
{
  /* Terminate for S-Function (sfun_spssw_discc): '<S220>/State-Space' */

  /* S-Function block: <S220>/State-Space */
  {
    /* Free memory */
    free(Model_3_Flux_Weakening_Contr_DW.StateSpace_PWORK.DS);
    free(Model_3_Flux_Weakening_Contr_DW.StateSpace_PWORK.DX_COL);
    free(Model_3_Flux_Weakening_Contr_DW.StateSpace_PWORK.TMP2);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
