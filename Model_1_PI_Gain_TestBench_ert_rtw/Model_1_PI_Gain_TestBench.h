/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Model_1_PI_Gain_TestBench.h
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

#ifndef RTW_HEADER_Model_1_PI_Gain_TestBench_h_
#define RTW_HEADER_Model_1_PI_Gain_TestBench_h_
#include <math.h>
#ifndef Model_1_PI_Gain_TestBench_COMMON_INCLUDES_
# define Model_1_PI_Gain_TestBench_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Model_1_PI_Gain_TestBench_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T StateSpace[2];                /* '<S218>/State-Space' */
  real_T Fcn;                          /* '<S14>/Fcn' */
  real_T Fcn1;                         /* '<S14>/Fcn1' */
  real_T Add1;                         /* '<S23>/Add1' */
  real_T Add;                          /* '<S22>/Add' */
  real_T Add1_g;                       /* '<S22>/Add1' */
  real_T TmpRTBAtUnitDelay_2Inport1;   /* '<Root>/Unit Delay' */
  real_T TmpRTBAtUnitDelay_1Inport1;   /* '<Root>/Unit Delay' */
  real_T TmpRTBAtUnitDelay_3Inport1;   /* '<Root>/Unit Delay' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S10>/Discrete-Time Integrator1' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S17>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_d;/* '<S16>/Discrete-Time Integrator' */
  real_T UnitDelay_2_DSTATE;           /* '<Root>/Unit Delay' */
  real_T Integrator_DSTATE;            /* '<S80>/Integrator' */
  real_T UnitDelay_1_DSTATE;           /* '<Root>/Unit Delay' */
  real_T UnitDelay_4_DSTATE;           /* '<Root>/Unit Delay' */
  real_T UnitDelay_3_DSTATE;           /* '<Root>/Unit Delay' */
  real_T Integrator_DSTATE_a;          /* '<S176>/Integrator' */
  real_T Filter_DSTATE;                /* '<S158>/Filter' */
  struct {
    void *AS;
    void *BS;
    void *CS;
    void *DS;
    void *DX_COL;
    void *BD_COL;
    void *TMP1;
    void *TMP2;
    void *XTMP;
    void *SWITCH_STATUS;
    void *SWITCH_STATUS_INIT;
    void *SW_CHG;
    void *G_STATE;
    void *USWLAST;
    void *XKM12;
    void *XKP12;
    void *XLAST;
    void *ULAST;
    void *IDX_SW_CHG;
    void *Y_SWITCH;
    void *SWITCH_TYPES;
    void *IDX_OUT_SW;
    void *SWITCH_TOPO_SAVED_IDX;
    void *SWITCH_MAP;
  } StateSpace_PWORK;                  /* '<S218>/State-Space' */

  int_T StateSpace_IWORK[11];          /* '<S218>/State-Space' */
} DW;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: S.D
   * Referenced by: '<S218>/State-Space'
   */
  real_T StateSpace_DS_param[10];
} ConstP;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID0_1;
    } RateInteraction;
  } Timing;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* Constant parameters (default storage) */
extern const ConstP rtConstP;

/* Model entry point functions */
extern void Model_1_PI_Gain_TestBench_initialize(void);
extern void Model_1_PI_Gain_TestBench_step0(void);
extern void Model_1_PI_Gain_TestBench_step1(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S15>/Trigonometric Function' : Unused code path elimination
 * Block '<S15>/Trigonometric Function2' : Unused code path elimination
 * Block '<S15>/rad2deg' : Unused code path elimination
 * Block '<S11>/Constant' : Unused code path elimination
 * Block '<S11>/Constant1' : Unused code path elimination
 * Block '<S11>/Constant2' : Unused code path elimination
 * Block '<S11>/Constant3' : Unused code path elimination
 * Block '<S11>/Constant4' : Unused code path elimination
 * Block '<S11>/Constant5' : Unused code path elimination
 * Block '<S11>/Data Type Conversion' : Unused code path elimination
 * Block '<S11>/Data Type Conversion1' : Unused code path elimination
 * Block '<S11>/Data Type Conversion2' : Unused code path elimination
 * Block '<S11>/Logical Operator' : Unused code path elimination
 * Block '<S11>/Logical Operator1' : Unused code path elimination
 * Block '<S11>/Logical Operator2' : Unused code path elimination
 * Block '<S11>/Relational Operator1' : Unused code path elimination
 * Block '<S11>/Relational Operator2' : Unused code path elimination
 * Block '<S11>/Relational Operator3' : Unused code path elimination
 * Block '<S11>/Relational Operator4' : Unused code path elimination
 * Block '<S11>/Relational Operator5' : Unused code path elimination
 * Block '<S11>/Relational Operator6' : Unused code path elimination
 * Block '<S8>/Te ' : Unused code path elimination
 * Block '<S14>/Sum' : Unused code path elimination
 * Block '<Root>/Scope2' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Scope1' : Unused code path elimination
 * Block '<S70>/Integral Gain' : Eliminated nontunable gain of 1
 * Block '<S97>/Proportional Gain' : Eliminated nontunable gain of 1
 * Block '<S166>/Integral Gain' : Eliminated nontunable gain of 1
 * Block '<S193>/Proportional Gain' : Eliminated nontunable gain of 1
 * Block '<S3>/Rate_Transition1' : Eliminated since input and output rates are identical
 * Block '<S3>/Rate_Transition2' : Eliminated since input and output rates are identical
 * Block '<S3>/Rate_Transition3' : Eliminated since input and output rates are identical
 * Block '<S3>/Rate_Transition4' : Eliminated since input and output rates are identical
 * Block '<S3>/Rate_Transition5' : Eliminated since input and output rates are identical
 * Block '<S3>/Rate_Transition6' : Eliminated since input and output rates are identical
 * Block '<S4>/Rate_Transition1' : Eliminated since input and output rates are identical
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Model_1_PI_Gain_TestBench'
 * '<S1>'   : 'Model_1_PI_Gain_TestBench/ '
 * '<S2>'   : 'Model_1_PI_Gain_TestBench/FOC_Current_Control'
 * '<S3>'   : 'Model_1_PI_Gain_TestBench/Subsystem'
 * '<S4>'   : 'Model_1_PI_Gain_TestBench/Subsystem1'
 * '<S5>'   : 'Model_1_PI_Gain_TestBench/powergui'
 * '<S6>'   : 'Model_1_PI_Gain_TestBench/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]'
 * '<S7>'   : 'Model_1_PI_Gain_TestBench/ /ideal_voltage_so'
 * '<S8>'   : 'Model_1_PI_Gain_TestBench/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model'
 * '<S9>'   : 'Model_1_PI_Gain_TestBench/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Measurements'
 * '<S10>'  : 'Model_1_PI_Gain_TestBench/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Mechanical model'
 * '<S11>'  : 'Model_1_PI_Gain_TestBench/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/Hall effect sensor'
 * '<S12>'  : 'Model_1_PI_Gain_TestBench/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/abc2qd'
 * '<S13>'  : 'Model_1_PI_Gain_TestBench/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/iq,id'
 * '<S14>'  : 'Model_1_PI_Gain_TestBench/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/qd2abc'
 * '<S15>'  : 'Model_1_PI_Gain_TestBench/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/Hall effect sensor/Angle converter'
 * '<S16>'  : 'Model_1_PI_Gain_TestBench/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/iq,id/id'
 * '<S17>'  : 'Model_1_PI_Gain_TestBench/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/iq,id/iq'
 * '<S18>'  : 'Model_1_PI_Gain_TestBench/ /ideal_voltage_so/Controlled_Voltage_Source1'
 * '<S19>'  : 'Model_1_PI_Gain_TestBench/ /ideal_voltage_so/Controlled_Voltage_Source2'
 * '<S20>'  : 'Model_1_PI_Gain_TestBench/ /ideal_voltage_so/Controlled_Voltage_Source3'
 * '<S21>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller'
 * '<S22>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Inverse Clarke Transform'
 * '<S23>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Inverse Park Transform'
 * '<S24>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller'
 * '<S25>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1'
 * '<S26>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Anti-windup'
 * '<S27>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/D Gain'
 * '<S28>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Filter'
 * '<S29>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Filter ICs'
 * '<S30>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/I Gain'
 * '<S31>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain'
 * '<S32>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain Fdbk'
 * '<S33>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Integrator'
 * '<S34>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Integrator ICs'
 * '<S35>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/N Copy'
 * '<S36>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/N Gain'
 * '<S37>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/P Copy'
 * '<S38>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Parallel P Gain'
 * '<S39>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Reset Signal'
 * '<S40>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Saturation'
 * '<S41>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Saturation Fdbk'
 * '<S42>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Sum'
 * '<S43>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Sum Fdbk'
 * '<S44>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Tracking Mode'
 * '<S45>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Tracking Mode Sum'
 * '<S46>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/postSat Signal'
 * '<S47>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/preSat Signal'
 * '<S48>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Back Calculation'
 * '<S49>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Cont. Clamping Ideal'
 * '<S50>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Cont. Clamping Parallel'
 * '<S51>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Disabled'
 * '<S52>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Disc. Clamping Ideal'
 * '<S53>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S54>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Passthrough'
 * '<S55>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/D Gain/Disabled'
 * '<S56>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/D Gain/External Parameters'
 * '<S57>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/D Gain/Internal Parameters'
 * '<S58>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Filter/Cont. Filter'
 * '<S59>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Filter/Differentiator'
 * '<S60>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Filter/Disabled'
 * '<S61>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Filter/Disc. Backward Euler Filter'
 * '<S62>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S63>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Filter/Disc. Trapezoidal Filter'
 * '<S64>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Filter ICs/Disabled'
 * '<S65>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Filter ICs/External IC'
 * '<S66>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Filter ICs/Internal IC - Differentiator'
 * '<S67>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S68>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/I Gain/Disabled'
 * '<S69>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/I Gain/External Parameters'
 * '<S70>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/I Gain/Internal Parameters'
 * '<S71>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain/External Parameters'
 * '<S72>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain/Internal Parameters'
 * '<S73>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain/Passthrough'
 * '<S74>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S75>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain Fdbk/External Parameters'
 * '<S76>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain Fdbk/Internal Parameters'
 * '<S77>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain Fdbk/Passthrough'
 * '<S78>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Integrator/Continuous'
 * '<S79>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Integrator/Disabled'
 * '<S80>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Integrator/Discrete'
 * '<S81>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Integrator ICs/Disabled'
 * '<S82>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Integrator ICs/External IC'
 * '<S83>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Integrator ICs/Internal IC'
 * '<S84>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/N Copy/Disabled'
 * '<S85>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/N Copy/Disabled wSignal Specification'
 * '<S86>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/N Copy/External Parameters'
 * '<S87>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/N Copy/Internal Parameters'
 * '<S88>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/N Gain/Disabled'
 * '<S89>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/N Gain/External Parameters'
 * '<S90>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/N Gain/Internal Parameters'
 * '<S91>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/N Gain/Passthrough'
 * '<S92>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/P Copy/Disabled'
 * '<S93>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/P Copy/External Parameters Ideal'
 * '<S94>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/P Copy/Internal Parameters Ideal'
 * '<S95>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Parallel P Gain/Disabled'
 * '<S96>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Parallel P Gain/External Parameters'
 * '<S97>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S98>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Parallel P Gain/Passthrough'
 * '<S99>'  : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Reset Signal/Disabled'
 * '<S100>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Reset Signal/External Reset'
 * '<S101>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Saturation/Enabled'
 * '<S102>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Saturation/Passthrough'
 * '<S103>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Saturation Fdbk/Disabled'
 * '<S104>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Saturation Fdbk/Enabled'
 * '<S105>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Saturation Fdbk/Passthrough'
 * '<S106>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Sum/Passthrough_I'
 * '<S107>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Sum/Passthrough_P'
 * '<S108>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Sum/Sum_PD'
 * '<S109>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Sum/Sum_PI'
 * '<S110>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Sum/Sum_PID'
 * '<S111>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Sum Fdbk/Disabled'
 * '<S112>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Sum Fdbk/Enabled'
 * '<S113>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Sum Fdbk/Passthrough'
 * '<S114>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Tracking Mode/Disabled'
 * '<S115>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Tracking Mode/Enabled'
 * '<S116>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S117>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/Tracking Mode Sum/Tracking Mode'
 * '<S118>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/postSat Signal/Feedback_Path'
 * '<S119>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/postSat Signal/Forward_Path'
 * '<S120>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/preSat Signal/Feedback_Path'
 * '<S121>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller/preSat Signal/Forward_Path'
 * '<S122>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup'
 * '<S123>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/D Gain'
 * '<S124>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Filter'
 * '<S125>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Filter ICs'
 * '<S126>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/I Gain'
 * '<S127>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain'
 * '<S128>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain Fdbk'
 * '<S129>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Integrator'
 * '<S130>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Integrator ICs'
 * '<S131>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/N Copy'
 * '<S132>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/N Gain'
 * '<S133>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/P Copy'
 * '<S134>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Parallel P Gain'
 * '<S135>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Reset Signal'
 * '<S136>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Saturation'
 * '<S137>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Saturation Fdbk'
 * '<S138>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Sum'
 * '<S139>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Sum Fdbk'
 * '<S140>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Tracking Mode'
 * '<S141>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Tracking Mode Sum'
 * '<S142>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/postSat Signal'
 * '<S143>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/preSat Signal'
 * '<S144>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Back Calculation'
 * '<S145>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Cont. Clamping Ideal'
 * '<S146>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Cont. Clamping Parallel'
 * '<S147>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Disabled'
 * '<S148>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Disc. Clamping Ideal'
 * '<S149>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Disc. Clamping Parallel'
 * '<S150>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Passthrough'
 * '<S151>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/D Gain/Disabled'
 * '<S152>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/D Gain/External Parameters'
 * '<S153>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/D Gain/Internal Parameters'
 * '<S154>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Filter/Cont. Filter'
 * '<S155>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Filter/Differentiator'
 * '<S156>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Filter/Disabled'
 * '<S157>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Filter/Disc. Backward Euler Filter'
 * '<S158>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S159>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Filter/Disc. Trapezoidal Filter'
 * '<S160>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Filter ICs/Disabled'
 * '<S161>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Filter ICs/External IC'
 * '<S162>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Filter ICs/Internal IC - Differentiator'
 * '<S163>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S164>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/I Gain/Disabled'
 * '<S165>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/I Gain/External Parameters'
 * '<S166>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/I Gain/Internal Parameters'
 * '<S167>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain/External Parameters'
 * '<S168>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain/Internal Parameters'
 * '<S169>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain/Passthrough'
 * '<S170>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S171>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain Fdbk/External Parameters'
 * '<S172>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain Fdbk/Internal Parameters'
 * '<S173>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain Fdbk/Passthrough'
 * '<S174>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Integrator/Continuous'
 * '<S175>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Integrator/Disabled'
 * '<S176>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Integrator/Discrete'
 * '<S177>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Integrator ICs/Disabled'
 * '<S178>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Integrator ICs/External IC'
 * '<S179>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Integrator ICs/Internal IC'
 * '<S180>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/N Copy/Disabled'
 * '<S181>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S182>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/N Copy/External Parameters'
 * '<S183>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/N Copy/Internal Parameters'
 * '<S184>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/N Gain/Disabled'
 * '<S185>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/N Gain/External Parameters'
 * '<S186>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/N Gain/Internal Parameters'
 * '<S187>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/N Gain/Passthrough'
 * '<S188>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/P Copy/Disabled'
 * '<S189>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/P Copy/External Parameters Ideal'
 * '<S190>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/P Copy/Internal Parameters Ideal'
 * '<S191>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Parallel P Gain/Disabled'
 * '<S192>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Parallel P Gain/External Parameters'
 * '<S193>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S194>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Parallel P Gain/Passthrough'
 * '<S195>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Reset Signal/Disabled'
 * '<S196>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Reset Signal/External Reset'
 * '<S197>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Saturation/Enabled'
 * '<S198>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Saturation/Passthrough'
 * '<S199>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Saturation Fdbk/Disabled'
 * '<S200>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Saturation Fdbk/Enabled'
 * '<S201>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Saturation Fdbk/Passthrough'
 * '<S202>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Sum/Passthrough_I'
 * '<S203>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Sum/Passthrough_P'
 * '<S204>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Sum/Sum_PD'
 * '<S205>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Sum/Sum_PI'
 * '<S206>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Sum/Sum_PID'
 * '<S207>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Sum Fdbk/Disabled'
 * '<S208>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Sum Fdbk/Enabled'
 * '<S209>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Sum Fdbk/Passthrough'
 * '<S210>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Tracking Mode/Disabled'
 * '<S211>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Tracking Mode/Enabled'
 * '<S212>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S213>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/Tracking Mode Sum/Tracking Mode'
 * '<S214>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/postSat Signal/Feedback_Path'
 * '<S215>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/postSat Signal/Forward_Path'
 * '<S216>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/preSat Signal/Feedback_Path'
 * '<S217>' : 'Model_1_PI_Gain_TestBench/FOC_Current_Control/Current Controller/PID Controller1/preSat Signal/Forward_Path'
 * '<S218>' : 'Model_1_PI_Gain_TestBench/powergui/EquivalentModel1'
 * '<S219>' : 'Model_1_PI_Gain_TestBench/powergui/EquivalentModel1/Sources'
 * '<S220>' : 'Model_1_PI_Gain_TestBench/powergui/EquivalentModel1/Yout'
 */
#endif                                 /* RTW_HEADER_Model_1_PI_Gain_TestBench_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
