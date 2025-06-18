/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Model_2_SpeedClosedLoop_data.c
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

/* Block parameters (default storage) */
P_Model_2_SpeedClosedLoop_T Model_2_SpeedClosedLoop_P = {
  /* Variable: Gain_I
   * Referenced by:
   *   '<S73>/Integral Gain'
   *   '<S169>/Integral Gain'
   */
  26.84,

  /* Variable: Gain_P
   * Referenced by:
   *   '<S100>/Proportional Gain'
   *   '<S196>/Proportional Gain'
   */
  7.74,

  /* Variable: Lambda_m
   * Referenced by: '<S23>/Constant'
   */
  0.2205,

  /* Variable: Ld
   * Referenced by: '<S23>/Gain'
   */
  0.0017,

  /* Variable: Lq
   * Referenced by: '<S23>/Gain1'
   */
  0.0032,

  /* Variable: Polepairs
   * Referenced by:
   *   '<S2>/electrical rad//s -> rpm'
   *   '<S4>/PolePairs'
   *   '<S4>/PolePairs '
   */
  4.0,

  /* Variable: Speed_Gain_I
   * Referenced by: '<S266>/Integral Gain'
   */
  0.1,

  /* Variable: Speed_Gain_P
   * Referenced by: '<S293>/Proportional Gain'
   */
  0.1,

  /* Mask Parameter: PIDController1_D
   * Referenced by: '<S156>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialCondition
   * Referenced by: '<S161>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditionF
   * Referenced by: '<S83>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialConditi_k
   * Referenced by: '<S179>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditio_a
   * Referenced by: '<S276>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController1_N
   * Referenced by: '<S189>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: CoulombViscousFriction_gain
   * Referenced by: '<S19>/Gain'
   */
  0.001,

  /* Mask Parameter: CoulombViscousFriction_offset
   * Referenced by: '<S19>/Gain1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S18>/Discrete-Time Integrator'
   */
  1.0E-5,

  /* Expression: PM.isqo
   * Referenced by: '<S18>/Discrete-Time Integrator'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_j
   * Referenced by: '<S17>/Discrete-Time Integrator'
   */
  1.0E-5,

  /* Expression: PM.isdo
   * Referenced by: '<S17>/Discrete-Time Integrator'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator1_gainval
   * Referenced by: '<S11>/Discrete-Time Integrator1'
   */
  1.0E-5,

  /* Expression: PM.tho+PM.thOffest
   * Referenced by: '<S11>/Discrete-Time Integrator1'
   */
  1.5707963267948966,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Unit Delay'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S83>/Integrator'
   */
  0.0001,

  /* Expression: 0
   * Referenced by: '<Root>/Unit Delay'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Unit Delay'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Unit Delay'
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Computed Parameter: Integrator_gainval_k
   * Referenced by: '<S179>/Integrator'
   */
  0.0001,

  /* Computed Parameter: Filter_gainval
   * Referenced by: '<S161>/Filter'
   */
  0.0001,

  /* Expression: 1/2
   * Referenced by: '<S24>/Gain'
   */
  0.5,

  /* Expression: sqrt(3)/2
   * Referenced by: '<S24>/Gain1'
   */
  0.8660254037844386,

  /* Expression: S.D
   * Referenced by: '<S318>/State-Space'
   */
  { 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, -1.0, 1.0, 0.0, -1.0 },

  /* Expression: 1/PM.Lq
   * Referenced by: '<S18>/1//Lq'
   */
  312.5,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_k
   * Referenced by: '<S11>/Discrete-Time Integrator'
   */
  1.0E-5,

  /* Expression: PM.wmo
   * Referenced by: '<S11>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: PM.p
   * Referenced by: '<S11>/Gain'
   */
  4.0,

  /* Expression: PM.Ld/PM.Lq
   * Referenced by: '<S18>/Ld//Lq'
   */
  0.53125,

  /* Expression: PM.R/PM.Lq
   * Referenced by: '<S18>/R//Lq'
   */
  6.25,

  /* Expression: PM.Flux/PM.Lq
   * Referenced by: '<S18>/lam//Lq'
   */
  68.90625,

  /* Expression: PM.Lq/PM.Ld
   * Referenced by: '<S17>/Lq//Ld'
   */
  1.8823529411764708,

  /* Expression: 1/PM.Ld
   * Referenced by: '<S17>/1//Ld'
   */
  588.23529411764707,

  /* Expression: PM.R/PM.Ld
   * Referenced by: '<S17>/R//Ld'
   */
  11.764705882352942,

  /* Expression: 0
   * Referenced by: '<S1>/Constant'
   */
  0.0,

  /* Expression: 1/PM.J
   * Referenced by: '<S11>/Gain2'
   */
  370.37037037037032,

  /* Computed Parameter: Integrator_gainval_d
   * Referenced by: '<S276>/Integrator'
   */
  0.001,

  /* Expression: 0
   * Referenced by: '<S26>/id_cmd'
   */
  0.0
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
