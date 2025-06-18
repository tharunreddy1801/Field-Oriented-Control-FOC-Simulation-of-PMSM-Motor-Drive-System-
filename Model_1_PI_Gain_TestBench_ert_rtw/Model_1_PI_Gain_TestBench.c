/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Model_1_PI_Gain_TestBench.c
 *
 * Code generated for Simulink model 'Model_1_PI_Gain_TestBench'.
 *
 * Model version                  : 1.65
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Nov  1 14:54:51 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Emulation hardware selection:
 *    Differs from embedded hardware (Custom Processor->MATLAB Host Computer)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "Model_1_PI_Gain_TestBench.h"
#include <math.h>
#include <stdlib.h>
#ifndef CodeFormat
#define CodeFormat                     S-Function
#else
#undef CodeFormat
#define CodeFormat                     S-Function
#endif

#ifndef S_FUNCTION_NAME
#define S_FUNCTION_NAME                simulink_only_sfcn
#else
#undef S_FUNCTION_NAME
#define S_FUNCTION_NAME                simulink_only_sfcn
#endif

#ifndef S_FUNCTION_LEVEL
#define S_FUNCTION_LEVEL               2
#else
#undef S_FUNCTION_LEVEL
#define S_FUNCTION_LEVEL               2
#endif

#ifndef RTW_GENERATED_S_FUNCTION
#define RTW_GENERATED_S_FUNCTION
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        NULL
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)
#endif

#if !defined(RTW_SFUNCTION_DEFINES)
#define RTW_SFUNCTION_DEFINES
#ifndef _RTW_COMMON_DEFINES_
#define _RTW_COMMON_DEFINES_
#endif
#endif

/* Block signals and states (default storage) */
DW rtDW;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function for TID0 */
void Model_1_PI_Gain_TestBench_step0(void) /* Sample time: [1.0E-5s, 0.0s] */
{
  real_T rtb_DiscreteTimeIntegrator;
  real_T rtb_DiscreteTimeIntegrator_b;
  real_T rtb_Fcn;
  real_T rtb_uLq;
  real_T rtb_ElementaryMath_o1;
  real_T rtb_ElementaryMath_o2;
  real_T rtb_Fcn_tmp;

  /* Update the flag to indicate when data transfers from
   *  Sample time: [1.0E-5s, 0.0s] to Sample time: [0.0001s, 0.0s]  */
  (rtM->Timing.RateInteraction.TID0_1)++;
  if ((rtM->Timing.RateInteraction.TID0_1) > 9) {
    rtM->Timing.RateInteraction.TID0_1 = 0;
  }

  /* Trigonometry: '<S12>/Elementary Math' incorporates:
   *  DiscreteIntegrator: '<S10>/Discrete-Time Integrator1'
   */
  rtb_ElementaryMath_o1 = sin(rtDW.DiscreteTimeIntegrator1_DSTATE);
  rtb_ElementaryMath_o2 = cos(rtDW.DiscreteTimeIntegrator1_DSTATE);

  /* DiscreteIntegrator: '<S17>/Discrete-Time Integrator' */
  rtb_DiscreteTimeIntegrator = rtDW.DiscreteTimeIntegrator_DSTATE;

  /* DiscreteIntegrator: '<S16>/Discrete-Time Integrator' */
  rtb_DiscreteTimeIntegrator_b = rtDW.DiscreteTimeIntegrator_DSTATE_d;

  /* Fcn: '<S14>/Fcn' */
  rtDW.Fcn = rtb_DiscreteTimeIntegrator * rtb_ElementaryMath_o2 +
    rtb_DiscreteTimeIntegrator_b * rtb_ElementaryMath_o1;

  /* Fcn: '<S14>/Fcn1' */
  rtDW.Fcn1 = ((-rtb_DiscreteTimeIntegrator - 1.7320508075688772 *
                rtb_DiscreteTimeIntegrator_b) * rtb_ElementaryMath_o2 +
               (1.7320508075688772 * rtb_DiscreteTimeIntegrator -
                rtb_DiscreteTimeIntegrator_b) * rtb_ElementaryMath_o1) * 0.5;

  /* S-Function (sfun_spssw_discc): '<S218>/State-Space' */

  /* S-Function block: <S218>/State-Space */
  {
    real_T accum;

    /*
     * Compute outputs:
     * ---------------
     */
    real_T *Ds = (real_T*)rtDW.StateSpace_PWORK.DS;
    accum = 0.0;
    accum += *(Ds++) * rtDW.Fcn;
    accum += *(Ds++) * rtDW.Fcn1;
    accum += *(Ds++) * rtDW.Add1;
    accum += *(Ds++) * rtDW.Add;
    accum += *(Ds++) * rtDW.Add1_g;
    rtDW.StateSpace[0] = accum;
    accum = 0.0;
    accum += *(Ds++) * rtDW.Fcn;
    accum += *(Ds++) * rtDW.Fcn1;
    accum += *(Ds++) * rtDW.Add1;
    accum += *(Ds++) * rtDW.Add;
    accum += *(Ds++) * rtDW.Add1_g;
    rtDW.StateSpace[1] = accum;
  }

  /* Fcn: '<S12>/Fcn2' incorporates:
   *  Fcn: '<S12>/Fcn3'
   */
  rtb_Fcn_tmp = 2.0 * rtDW.StateSpace[0] + rtDW.StateSpace[1];
  rtb_Fcn = (rtb_Fcn_tmp * rtb_ElementaryMath_o2 + 1.7320508075688772 *
             rtDW.StateSpace[1] * rtb_ElementaryMath_o1) * 0.33333333333333331;

  /* Gain: '<S17>/1//Lq' */
  rtb_uLq = 312.5 * rtb_Fcn;

  /* Fcn: '<S12>/Fcn3' */
  rtb_Fcn = (rtb_Fcn_tmp * rtb_ElementaryMath_o1 + -1.7320508075688772 *
             rtDW.StateSpace[1] * rtb_ElementaryMath_o2) * 0.33333333333333331;

  /* Gain: '<S16>/1//Ld' */
  rtb_ElementaryMath_o1 = 588.23529411764707 * rtb_Fcn;

  /* Fcn: '<S10>/Fcn' incorporates:
   *  DiscreteIntegrator: '<S10>/Discrete-Time Integrator1'
   */
  rtb_Fcn = (rtDW.DiscreteTimeIntegrator1_DSTATE - 1.5707963267948966) / 4.0;

  /* UnitDelay: '<Root>/Unit Delay' */
  if (rtM->Timing.RateInteraction.TID0_1 == 1) {
    rtDW.TmpRTBAtUnitDelay_2Inport1 = rtb_DiscreteTimeIntegrator_b;
    rtDW.TmpRTBAtUnitDelay_1Inport1 = rtb_DiscreteTimeIntegrator;
    rtDW.TmpRTBAtUnitDelay_3Inport1 = rtb_Fcn;
  }

  /* End of UnitDelay: '<Root>/Unit Delay' */

  /* Update for DiscreteIntegrator: '<S10>/Discrete-Time Integrator1' */
  rtDW.DiscreteTimeIntegrator1_DSTATE += 0.0041887902047863914;

  /* Update for DiscreteIntegrator: '<S17>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S17>/Ld//Lq'
   *  Gain: '<S17>/R//Lq'
   *  Product: '<S17>/Product1'
   *  Sum: '<S17>/Sum1'
   */
  rtDW.DiscreteTimeIntegrator_DSTATE += (((rtb_uLq - 6.25 *
    rtb_DiscreteTimeIntegrator) - rtb_DiscreteTimeIntegrator_b *
    418.87902047863906 * 0.53125) - 28863.382504856221) * 1.0E-5;

  /* Update for DiscreteIntegrator: '<S16>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S16>/Lq//Ld'
   *  Gain: '<S16>/R//Ld'
   *  Product: '<S16>/Product'
   *  Sum: '<S16>/Sum'
   */
  rtDW.DiscreteTimeIntegrator_DSTATE_d += ((rtb_ElementaryMath_o1 -
    11.764705882352942 * rtb_DiscreteTimeIntegrator_b) + 418.87902047863906 *
    rtb_DiscreteTimeIntegrator * 1.8823529411764708) * 1.0E-5;
}

/* Model step function for TID1 */
void Model_1_PI_Gain_TestBench_step1(void) /* Sample time: [0.0001s, 0.0s] */
{
  real_T rtb_Add;
  real_T rtb_Integrator_i;
  real_T rtb_Rotorelectricalangle;
  real_T rtb_Sum_l;
  real_T rtb_Add1;
  real_T rtb_FilterCoefficient;
  real_T rtb_Sin_Cosine_o1;
  real_T rtb_Gain_g;

  /* Sum: '<S21>/Add' incorporates:
   *  Constant: '<Root>/Constant'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_Add = -50.0 - rtDW.UnitDelay_2_DSTATE;

  /* Gain: '<S3>/PolePairs ' incorporates:
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_Integrator_i = 4.0 * rtDW.UnitDelay_4_DSTATE;

  /* Sum: '<S21>/Sum' incorporates:
   *  Constant: '<Root>/Constant'
   *  DiscreteIntegrator: '<S80>/Integrator'
   *  Gain: '<S21>/Gain1'
   *  Product: '<S21>/Product1'
   *  Sum: '<S109>/Sum'
   *  Sum: '<S21>/Add'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_Sum_l = ((-50.0 - rtDW.UnitDelay_2_DSTATE) + rtDW.Integrator_DSTATE) -
    0.0032 * rtDW.UnitDelay_1_DSTATE * rtb_Integrator_i;

  /* Gain: '<S3>/PolePairs' incorporates:
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_Rotorelectricalangle = 4.0 * rtDW.UnitDelay_3_DSTATE;

  /* Trigonometry: '<S2>/Sin_Cosine' */
  rtb_Sin_Cosine_o1 = sin(rtb_Rotorelectricalangle);
  rtb_Rotorelectricalangle = cos(rtb_Rotorelectricalangle);

  /* Sum: '<S21>/Add1' incorporates:
   *  Constant: '<Root>/Constant1'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_Add1 = 100.0 - rtDW.UnitDelay_1_DSTATE;

  /* Gain: '<S186>/Filter Coefficient' incorporates:
   *  Constant: '<Root>/Constant1'
   *  DiscreteIntegrator: '<S158>/Filter'
   *  Gain: '<S153>/Derivative Gain'
   *  Sum: '<S158>/SumD'
   *  Sum: '<S21>/Add1'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_FilterCoefficient = ((100.0 - rtDW.UnitDelay_1_DSTATE) * 0.0 -
    rtDW.Filter_DSTATE) * 100.0;

  /* Sum: '<S21>/Sum1' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Constant: '<S21>/Constant'
   *  DiscreteIntegrator: '<S176>/Integrator'
   *  Gain: '<S21>/Gain'
   *  Product: '<S21>/Product'
   *  Sum: '<S206>/Sum'
   *  Sum: '<S21>/Add1'
   *  Sum: '<S21>/Add2'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_Integrator_i = (0.0017 * rtDW.UnitDelay_2_DSTATE + 0.2205) *
    rtb_Integrator_i + (((100.0 - rtDW.UnitDelay_1_DSTATE) +
    rtDW.Integrator_DSTATE_a) + rtb_FilterCoefficient);

  /* Sum: '<S23>/Add1' incorporates:
   *  Product: '<S23>/Product1'
   *  Product: '<S23>/Product2'
   */
  rtDW.Add1 = rtb_Sum_l * rtb_Rotorelectricalangle - rtb_Integrator_i *
    rtb_Sin_Cosine_o1;

  /* Gain: '<S22>/Gain' */
  rtb_Gain_g = 0.5 * rtDW.Add1;

  /* Gain: '<S22>/Gain1' incorporates:
   *  Product: '<S23>/Product3'
   *  Product: '<S23>/Product4'
   *  Sum: '<S23>/Add2'
   */
  rtb_Integrator_i = (rtb_Sum_l * rtb_Sin_Cosine_o1 + rtb_Integrator_i *
                      rtb_Rotorelectricalangle) * 0.8660254037844386;

  /* Sum: '<S22>/Add' */
  rtDW.Add = rtb_Integrator_i - rtb_Gain_g;

  /* Sum: '<S22>/Add1' */
  rtDW.Add1_g = (0.0 - rtb_Gain_g) - rtb_Integrator_i;

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  rtDW.UnitDelay_2_DSTATE = rtDW.TmpRTBAtUnitDelay_2Inport1;

  /* Update for DiscreteIntegrator: '<S80>/Integrator' */
  rtDW.Integrator_DSTATE += 0.0001 * rtb_Add;

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  rtDW.UnitDelay_1_DSTATE = rtDW.TmpRTBAtUnitDelay_1Inport1;
  rtDW.UnitDelay_4_DSTATE = 104.71975511965977;
  rtDW.UnitDelay_3_DSTATE = rtDW.TmpRTBAtUnitDelay_3Inport1;

  /* Update for DiscreteIntegrator: '<S176>/Integrator' */
  rtDW.Integrator_DSTATE_a += 0.0001 * rtb_Add1;

  /* Update for DiscreteIntegrator: '<S158>/Filter' */
  rtDW.Filter_DSTATE += 0.0001 * rtb_FilterCoefficient;
}

/* Model initialize function */
void Model_1_PI_Gain_TestBench_initialize(void)
{
  /* Start for S-Function (sfun_spssw_discc): '<S218>/State-Space' */

  /* S-Function block: <S218>/State-Space */
  {
    rtDW.StateSpace_PWORK.DS = (real_T*)calloc(2 * 5, sizeof(real_T));
    rtDW.StateSpace_PWORK.DX_COL = (real_T*)calloc(2, sizeof(real_T));
    rtDW.StateSpace_PWORK.TMP2 = (real_T*)calloc(5, sizeof(real_T));
  }

  /* InitializeConditions for DiscreteIntegrator: '<S10>/Discrete-Time Integrator1' */
  rtDW.DiscreteTimeIntegrator1_DSTATE = 1.5707963267948966;

  /* InitializeConditions for S-Function (sfun_spssw_discc): '<S218>/State-Space' */
  {
    int32_T i, j;
    real_T *Ds = (real_T*)rtDW.StateSpace_PWORK.DS;

    /* Copy and transpose D */
    for (i=0; i<2; i++) {
      for (j=0; j<5; j++)
        Ds[i*5 + j] = (rtConstP.StateSpace_DS_param[i + j*2]);
    }
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
