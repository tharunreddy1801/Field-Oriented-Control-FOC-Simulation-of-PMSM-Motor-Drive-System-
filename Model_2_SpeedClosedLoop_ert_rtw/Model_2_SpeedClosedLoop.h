/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Model_2_SpeedClosedLoop.h
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

#ifndef RTW_HEADER_Model_2_SpeedClosedLoop_h_
#define RTW_HEADER_Model_2_SpeedClosedLoop_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Model_2_SpeedClosedLoop_COMMON_INCLUDES_
# define Model_2_SpeedClosedLoop_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Model_2_SpeedClosedLoop_COMMON_INCLUDES_ */

#include "Model_2_SpeedClosedLoop_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Fcn;                          /* '<S15>/Fcn' */
  real_T Fcn1;                         /* '<S15>/Fcn1' */
  real_T TmpRTBAtAddInport1;
  real_T Statorcurrentis_dA;           /* '<Root>/Unit Delay' */
  real_T Rotorelectricalangularspeed;  /* '<S4>/PolePairs ' */
  real_T Statorcurrentis_qA;           /* '<Root>/Unit Delay' */
  real_T Rotorelectricalangle;         /* '<S4>/PolePairs' */
  real_T TmpRTBAtAdd1Inport1;
  real_T Add1;                         /* '<S25>/Add1' */
  real_T Add;                          /* '<S24>/Add' */
  real_T Add1_g;                       /* '<S24>/Add1' */
  real_T StateSpace[2];                /* '<S318>/State-Space' */
  real_T FromWs;                       /* '<S3>/FromWs' */
  real_T Rate_Transition6;             /* '<S4>/Rate_Transition6' */
  real_T TmpRTBAtelectricalradsrpmInport;
  real_T Add_m;                        /* '<S23>/Add' */
  real_T Rate_Transition1;             /* '<S4>/Rate_Transition1' */
  real_T Sum_n;                        /* '<S23>/Sum' */
  real_T ElementaryMath_o1;            /* '<S13>/Elementary Math' */
  real_T ElementaryMath_o2;            /* '<S13>/Elementary Math' */
} B_Model_2_SpeedClosedLoop_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S18>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_d;/* '<S17>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S11>/Discrete-Time Integrator1' */
  real_T UnitDelay_2_DSTATE;           /* '<Root>/Unit Delay' */
  real_T Integrator_DSTATE;            /* '<S83>/Integrator' */
  real_T UnitDelay_4_DSTATE;           /* '<Root>/Unit Delay' */
  real_T UnitDelay_1_DSTATE;           /* '<Root>/Unit Delay' */
  real_T UnitDelay_3_DSTATE;           /* '<Root>/Unit Delay' */
  real_T Integrator_DSTATE_a;          /* '<S179>/Integrator' */
  real_T Filter_DSTATE;                /* '<S161>/Filter' */
  real_T DiscreteTimeIntegrator_DSTATE_b;/* '<S11>/Discrete-Time Integrator' */
  real_T Integrator_DSTATE_c;          /* '<S276>/Integrator' */
  real_T TmpRTBAtAddInport1_Buffer0;   /* synthesized block */
  real_T TmpRTBAtAdd1Inport1_Buffer0;  /* synthesized block */
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
  } StateSpace_PWORK;                  /* '<S318>/State-Space' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK;                      /* '<S3>/FromWs' */

  int_T StateSpace_IWORK[11];          /* '<S318>/State-Space' */
  struct {
    int_T PrevIndex;
  } FromWs_IWORK;                      /* '<S3>/FromWs' */
} DW_Model_2_SpeedClosedLoop_T;

/* Parameters (default storage) */
struct P_Model_2_SpeedClosedLoop_T_ {
  real_T Gain_I;                       /* Variable: Gain_I
                                        * Referenced by:
                                        *   '<S73>/Integral Gain'
                                        *   '<S169>/Integral Gain'
                                        */
  real_T Gain_P;                       /* Variable: Gain_P
                                        * Referenced by:
                                        *   '<S100>/Proportional Gain'
                                        *   '<S196>/Proportional Gain'
                                        */
  real_T Lambda_m;                     /* Variable: Lambda_m
                                        * Referenced by: '<S23>/Constant'
                                        */
  real_T Ld;                           /* Variable: Ld
                                        * Referenced by: '<S23>/Gain'
                                        */
  real_T Lq;                           /* Variable: Lq
                                        * Referenced by: '<S23>/Gain1'
                                        */
  real_T Polepairs;                    /* Variable: Polepairs
                                        * Referenced by:
                                        *   '<S2>/electrical rad//s -> rpm'
                                        *   '<S4>/PolePairs'
                                        *   '<S4>/PolePairs '
                                        */
  real_T Speed_Gain_I;                 /* Variable: Speed_Gain_I
                                        * Referenced by: '<S266>/Integral Gain'
                                        */
  real_T Speed_Gain_P;                 /* Variable: Speed_Gain_P
                                        * Referenced by: '<S293>/Proportional Gain'
                                        */
  real_T PIDController1_D;             /* Mask Parameter: PIDController1_D
                                        * Referenced by: '<S156>/Derivative Gain'
                                        */
  real_T PIDController1_InitialCondition;/* Mask Parameter: PIDController1_InitialCondition
                                          * Referenced by: '<S161>/Filter'
                                          */
  real_T PIDController_InitialConditionF;/* Mask Parameter: PIDController_InitialConditionF
                                          * Referenced by: '<S83>/Integrator'
                                          */
  real_T PIDController1_InitialConditi_k;/* Mask Parameter: PIDController1_InitialConditi_k
                                          * Referenced by: '<S179>/Integrator'
                                          */
  real_T PIDController_InitialConditio_a;/* Mask Parameter: PIDController_InitialConditio_a
                                          * Referenced by: '<S276>/Integrator'
                                          */
  real_T PIDController1_N;             /* Mask Parameter: PIDController1_N
                                        * Referenced by: '<S189>/Filter Coefficient'
                                        */
  real_T CoulombViscousFriction_gain;  /* Mask Parameter: CoulombViscousFriction_gain
                                        * Referenced by: '<S19>/Gain'
                                        */
  real_T CoulombViscousFriction_offset;/* Mask Parameter: CoulombViscousFriction_offset
                                        * Referenced by: '<S19>/Gain1'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S18>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: PM.isqo
                                        * Referenced by: '<S18>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator_gainva_j;/* Computed Parameter: DiscreteTimeIntegrator_gainva_j
                                          * Referenced by: '<S17>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_m;  /* Expression: PM.isdo
                                        * Referenced by: '<S17>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator1_gainval;/* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                          * Referenced by: '<S11>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: PM.tho+PM.thOffest
                                        * Referenced by: '<S11>/Discrete-Time Integrator1'
                                        */
  real_T TmpRTBAtAddInport1_InitialCondi;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T UnitDelay_2_InitialCondition; /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S83>/Integrator'
                                        */
  real_T UnitDelay_4_InitialCondition; /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
  real_T UnitDelay_1_InitialCondition; /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
  real_T UnitDelay_3_InitialCondition; /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
  real_T TmpRTBAtAdd1Inport1_InitialCond;/* Expression: 0
                                          * Referenced by: synthesized block
                                          */
  real_T Integrator_gainval_k;         /* Computed Parameter: Integrator_gainval_k
                                        * Referenced by: '<S179>/Integrator'
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S161>/Filter'
                                        */
  real_T Gain_Gain;                    /* Expression: 1/2
                                        * Referenced by: '<S24>/Gain'
                                        */
  real_T Gain1_Gain;                   /* Expression: sqrt(3)/2
                                        * Referenced by: '<S24>/Gain1'
                                        */
  real_T StateSpace_DS_param[10];      /* Expression: S.D
                                        * Referenced by: '<S318>/State-Space'
                                        */
  real_T uLq_Gain;                     /* Expression: 1/PM.Lq
                                        * Referenced by: '<S18>/1//Lq'
                                        */
  real_T DiscreteTimeIntegrator_gainva_k;/* Computed Parameter: DiscreteTimeIntegrator_gainva_k
                                          * Referenced by: '<S11>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_h;  /* Expression: PM.wmo
                                        * Referenced by: '<S11>/Discrete-Time Integrator'
                                        */
  real_T Gain_Gain_o;                  /* Expression: PM.p
                                        * Referenced by: '<S11>/Gain'
                                        */
  real_T LdLq_Gain;                    /* Expression: PM.Ld/PM.Lq
                                        * Referenced by: '<S18>/Ld//Lq'
                                        */
  real_T RLq_Gain;                     /* Expression: PM.R/PM.Lq
                                        * Referenced by: '<S18>/R//Lq'
                                        */
  real_T lamLq_Gain;                   /* Expression: PM.Flux/PM.Lq
                                        * Referenced by: '<S18>/lam//Lq'
                                        */
  real_T LqLd_Gain;                    /* Expression: PM.Lq/PM.Ld
                                        * Referenced by: '<S17>/Lq//Ld'
                                        */
  real_T uLd_Gain;                     /* Expression: 1/PM.Ld
                                        * Referenced by: '<S17>/1//Ld'
                                        */
  real_T RLd_Gain;                     /* Expression: PM.R/PM.Ld
                                        * Referenced by: '<S17>/R//Ld'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1/PM.J
                                        * Referenced by: '<S11>/Gain2'
                                        */
  real_T Integrator_gainval_d;         /* Computed Parameter: Integrator_gainval_d
                                        * Referenced by: '<S276>/Integrator'
                                        */
  real_T id_cmd_Value;                 /* Expression: 0
                                        * Referenced by: '<S26>/id_cmd'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Model_2_SpeedClosedLo_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    struct {
      uint8_T TID[4];
    } TaskCounters;

    struct {
      boolean_T TID2_3;
    } RateInteraction;

    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[4];
  } Timing;
};

/* Block parameters (default storage) */
extern P_Model_2_SpeedClosedLoop_T Model_2_SpeedClosedLoop_P;

/* Block signals (default storage) */
extern B_Model_2_SpeedClosedLoop_T Model_2_SpeedClosedLoop_B;

/* Block states (default storage) */
extern DW_Model_2_SpeedClosedLoop_T Model_2_SpeedClosedLoop_DW;

/* External function called from main */
extern void Model_2_SpeedClosedLoop_SetEventsForThisBaseStep(boolean_T
  *eventFlags);

/* Model entry point functions */
extern void Model_2_SpeedClosedLoop_SetEventsForThisBaseStep(boolean_T
  *eventFlags);
extern void Model_2_SpeedClosedLoop_initialize(void);
extern void Model_2_SpeedClosedLoop_step(int_T tid);
extern void Model_2_SpeedClosedLoop_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Model_2_SpeedClosedL_T *const Model_2_SpeedClosedLoop_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S16>/Trigonometric Function' : Unused code path elimination
 * Block '<S16>/Trigonometric Function2' : Unused code path elimination
 * Block '<S16>/rad2deg' : Unused code path elimination
 * Block '<S12>/Constant' : Unused code path elimination
 * Block '<S12>/Constant1' : Unused code path elimination
 * Block '<S12>/Constant2' : Unused code path elimination
 * Block '<S12>/Constant3' : Unused code path elimination
 * Block '<S12>/Constant4' : Unused code path elimination
 * Block '<S12>/Constant5' : Unused code path elimination
 * Block '<S12>/Data Type Conversion' : Unused code path elimination
 * Block '<S12>/Data Type Conversion1' : Unused code path elimination
 * Block '<S12>/Data Type Conversion2' : Unused code path elimination
 * Block '<S12>/Logical Operator' : Unused code path elimination
 * Block '<S12>/Logical Operator1' : Unused code path elimination
 * Block '<S12>/Logical Operator2' : Unused code path elimination
 * Block '<S12>/Relational Operator1' : Unused code path elimination
 * Block '<S12>/Relational Operator2' : Unused code path elimination
 * Block '<S12>/Relational Operator3' : Unused code path elimination
 * Block '<S12>/Relational Operator4' : Unused code path elimination
 * Block '<S12>/Relational Operator5' : Unused code path elimination
 * Block '<S12>/Relational Operator6' : Unused code path elimination
 * Block '<S15>/Sum' : Unused code path elimination
 * Block '<Root>/Scope2' : Unused code path elimination
 * Block '<Root>/rad//s -> rpm' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Scope1' : Unused code path elimination
 * Block '<S4>/Rate_Transition2' : Eliminated since input and output rates are identical
 * Block '<S4>/Rate_Transition3' : Eliminated since input and output rates are identical
 * Block '<S4>/Rate_Transition4' : Eliminated since input and output rates are identical
 * Block '<S5>/Rate_Transition1' : Eliminated since input and output rates are identical
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
 * '<Root>' : 'Model_2_SpeedClosedLoop'
 * '<S1>'   : 'Model_2_SpeedClosedLoop/ '
 * '<S2>'   : 'Model_2_SpeedClosedLoop/FOC_Current_Control'
 * '<S3>'   : 'Model_2_SpeedClosedLoop/Signal Builder'
 * '<S4>'   : 'Model_2_SpeedClosedLoop/Subsystem'
 * '<S5>'   : 'Model_2_SpeedClosedLoop/Subsystem1'
 * '<S6>'   : 'Model_2_SpeedClosedLoop/powergui'
 * '<S7>'   : 'Model_2_SpeedClosedLoop/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]'
 * '<S8>'   : 'Model_2_SpeedClosedLoop/ /ideal_voltage_source'
 * '<S9>'   : 'Model_2_SpeedClosedLoop/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model'
 * '<S10>'  : 'Model_2_SpeedClosedLoop/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Measurements'
 * '<S11>'  : 'Model_2_SpeedClosedLoop/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Mechanical model'
 * '<S12>'  : 'Model_2_SpeedClosedLoop/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/Hall effect sensor'
 * '<S13>'  : 'Model_2_SpeedClosedLoop/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/abc2qd'
 * '<S14>'  : 'Model_2_SpeedClosedLoop/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/iq,id'
 * '<S15>'  : 'Model_2_SpeedClosedLoop/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/qd2abc'
 * '<S16>'  : 'Model_2_SpeedClosedLoop/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/Hall effect sensor/Angle converter'
 * '<S17>'  : 'Model_2_SpeedClosedLoop/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/iq,id/id'
 * '<S18>'  : 'Model_2_SpeedClosedLoop/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/iq,id/iq'
 * '<S19>'  : 'Model_2_SpeedClosedLoop/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Mechanical model/Coulomb & Viscous Friction'
 * '<S20>'  : 'Model_2_SpeedClosedLoop/ /ideal_voltage_source/Controlled_Voltage_Source1'
 * '<S21>'  : 'Model_2_SpeedClosedLoop/ /ideal_voltage_source/Controlled_Voltage_Source2'
 * '<S22>'  : 'Model_2_SpeedClosedLoop/ /ideal_voltage_source/Controlled_Voltage_Source3'
 * '<S23>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller'
 * '<S24>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Inverse Clarke Transform'
 * '<S25>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Inverse Park Transform'
 * '<S26>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller'
 * '<S27>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller'
 * '<S28>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1'
 * '<S29>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Anti-windup'
 * '<S30>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/D Gain'
 * '<S31>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Filter'
 * '<S32>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Filter ICs'
 * '<S33>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/I Gain'
 * '<S34>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain'
 * '<S35>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain Fdbk'
 * '<S36>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Integrator'
 * '<S37>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Integrator ICs'
 * '<S38>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/N Copy'
 * '<S39>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/N Gain'
 * '<S40>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/P Copy'
 * '<S41>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Parallel P Gain'
 * '<S42>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Reset Signal'
 * '<S43>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Saturation'
 * '<S44>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Saturation Fdbk'
 * '<S45>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Sum'
 * '<S46>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Sum Fdbk'
 * '<S47>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Tracking Mode'
 * '<S48>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Tracking Mode Sum'
 * '<S49>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/postSat Signal'
 * '<S50>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/preSat Signal'
 * '<S51>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Back Calculation'
 * '<S52>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Cont. Clamping Ideal'
 * '<S53>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Cont. Clamping Parallel'
 * '<S54>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Disabled'
 * '<S55>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Disc. Clamping Ideal'
 * '<S56>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S57>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Passthrough'
 * '<S58>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/D Gain/Disabled'
 * '<S59>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/D Gain/External Parameters'
 * '<S60>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/D Gain/Internal Parameters'
 * '<S61>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Filter/Cont. Filter'
 * '<S62>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Filter/Differentiator'
 * '<S63>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Filter/Disabled'
 * '<S64>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Filter/Disc. Backward Euler Filter'
 * '<S65>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S66>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Filter/Disc. Trapezoidal Filter'
 * '<S67>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Filter ICs/Disabled'
 * '<S68>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Filter ICs/External IC'
 * '<S69>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Filter ICs/Internal IC - Differentiator'
 * '<S70>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S71>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/I Gain/Disabled'
 * '<S72>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/I Gain/External Parameters'
 * '<S73>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/I Gain/Internal Parameters'
 * '<S74>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain/External Parameters'
 * '<S75>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain/Internal Parameters'
 * '<S76>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain/Passthrough'
 * '<S77>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S78>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain Fdbk/External Parameters'
 * '<S79>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain Fdbk/Internal Parameters'
 * '<S80>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain Fdbk/Passthrough'
 * '<S81>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Integrator/Continuous'
 * '<S82>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Integrator/Disabled'
 * '<S83>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Integrator/Discrete'
 * '<S84>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Integrator ICs/Disabled'
 * '<S85>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Integrator ICs/External IC'
 * '<S86>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Integrator ICs/Internal IC'
 * '<S87>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/N Copy/Disabled'
 * '<S88>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/N Copy/Disabled wSignal Specification'
 * '<S89>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/N Copy/External Parameters'
 * '<S90>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/N Copy/Internal Parameters'
 * '<S91>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/N Gain/Disabled'
 * '<S92>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/N Gain/External Parameters'
 * '<S93>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/N Gain/Internal Parameters'
 * '<S94>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/N Gain/Passthrough'
 * '<S95>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/P Copy/Disabled'
 * '<S96>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/P Copy/External Parameters Ideal'
 * '<S97>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/P Copy/Internal Parameters Ideal'
 * '<S98>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Parallel P Gain/Disabled'
 * '<S99>'  : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Parallel P Gain/External Parameters'
 * '<S100>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S101>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Parallel P Gain/Passthrough'
 * '<S102>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Reset Signal/Disabled'
 * '<S103>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Reset Signal/External Reset'
 * '<S104>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Saturation/Enabled'
 * '<S105>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Saturation/Passthrough'
 * '<S106>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Saturation Fdbk/Disabled'
 * '<S107>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Saturation Fdbk/Enabled'
 * '<S108>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Saturation Fdbk/Passthrough'
 * '<S109>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Sum/Passthrough_I'
 * '<S110>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Sum/Passthrough_P'
 * '<S111>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Sum/Sum_PD'
 * '<S112>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Sum/Sum_PI'
 * '<S113>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Sum/Sum_PID'
 * '<S114>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Sum Fdbk/Disabled'
 * '<S115>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Sum Fdbk/Enabled'
 * '<S116>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Sum Fdbk/Passthrough'
 * '<S117>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Tracking Mode/Disabled'
 * '<S118>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Tracking Mode/Enabled'
 * '<S119>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S120>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/Tracking Mode Sum/Tracking Mode'
 * '<S121>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/postSat Signal/Feedback_Path'
 * '<S122>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/postSat Signal/Forward_Path'
 * '<S123>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/preSat Signal/Feedback_Path'
 * '<S124>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller/preSat Signal/Forward_Path'
 * '<S125>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup'
 * '<S126>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/D Gain'
 * '<S127>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Filter'
 * '<S128>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Filter ICs'
 * '<S129>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/I Gain'
 * '<S130>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain'
 * '<S131>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain Fdbk'
 * '<S132>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Integrator'
 * '<S133>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Integrator ICs'
 * '<S134>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/N Copy'
 * '<S135>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/N Gain'
 * '<S136>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/P Copy'
 * '<S137>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Parallel P Gain'
 * '<S138>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Reset Signal'
 * '<S139>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Saturation'
 * '<S140>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Saturation Fdbk'
 * '<S141>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Sum'
 * '<S142>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Sum Fdbk'
 * '<S143>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Tracking Mode'
 * '<S144>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Tracking Mode Sum'
 * '<S145>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/postSat Signal'
 * '<S146>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/preSat Signal'
 * '<S147>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Back Calculation'
 * '<S148>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Cont. Clamping Ideal'
 * '<S149>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Cont. Clamping Parallel'
 * '<S150>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Disabled'
 * '<S151>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Disc. Clamping Ideal'
 * '<S152>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Disc. Clamping Parallel'
 * '<S153>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Passthrough'
 * '<S154>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/D Gain/Disabled'
 * '<S155>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/D Gain/External Parameters'
 * '<S156>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/D Gain/Internal Parameters'
 * '<S157>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Filter/Cont. Filter'
 * '<S158>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Filter/Differentiator'
 * '<S159>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Filter/Disabled'
 * '<S160>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Filter/Disc. Backward Euler Filter'
 * '<S161>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S162>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Filter/Disc. Trapezoidal Filter'
 * '<S163>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Filter ICs/Disabled'
 * '<S164>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Filter ICs/External IC'
 * '<S165>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Filter ICs/Internal IC - Differentiator'
 * '<S166>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S167>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/I Gain/Disabled'
 * '<S168>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/I Gain/External Parameters'
 * '<S169>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/I Gain/Internal Parameters'
 * '<S170>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain/External Parameters'
 * '<S171>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain/Internal Parameters'
 * '<S172>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain/Passthrough'
 * '<S173>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S174>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain Fdbk/External Parameters'
 * '<S175>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain Fdbk/Internal Parameters'
 * '<S176>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain Fdbk/Passthrough'
 * '<S177>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Integrator/Continuous'
 * '<S178>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Integrator/Disabled'
 * '<S179>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Integrator/Discrete'
 * '<S180>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Integrator ICs/Disabled'
 * '<S181>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Integrator ICs/External IC'
 * '<S182>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Integrator ICs/Internal IC'
 * '<S183>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/N Copy/Disabled'
 * '<S184>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S185>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/N Copy/External Parameters'
 * '<S186>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/N Copy/Internal Parameters'
 * '<S187>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/N Gain/Disabled'
 * '<S188>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/N Gain/External Parameters'
 * '<S189>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/N Gain/Internal Parameters'
 * '<S190>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/N Gain/Passthrough'
 * '<S191>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/P Copy/Disabled'
 * '<S192>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/P Copy/External Parameters Ideal'
 * '<S193>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/P Copy/Internal Parameters Ideal'
 * '<S194>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Parallel P Gain/Disabled'
 * '<S195>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Parallel P Gain/External Parameters'
 * '<S196>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S197>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Parallel P Gain/Passthrough'
 * '<S198>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Reset Signal/Disabled'
 * '<S199>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Reset Signal/External Reset'
 * '<S200>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Saturation/Enabled'
 * '<S201>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Saturation/Passthrough'
 * '<S202>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Saturation Fdbk/Disabled'
 * '<S203>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Saturation Fdbk/Enabled'
 * '<S204>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Saturation Fdbk/Passthrough'
 * '<S205>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Sum/Passthrough_I'
 * '<S206>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Sum/Passthrough_P'
 * '<S207>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Sum/Sum_PD'
 * '<S208>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Sum/Sum_PI'
 * '<S209>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Sum/Sum_PID'
 * '<S210>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Sum Fdbk/Disabled'
 * '<S211>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Sum Fdbk/Enabled'
 * '<S212>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Sum Fdbk/Passthrough'
 * '<S213>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Tracking Mode/Disabled'
 * '<S214>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Tracking Mode/Enabled'
 * '<S215>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S216>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/Tracking Mode Sum/Tracking Mode'
 * '<S217>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/postSat Signal/Feedback_Path'
 * '<S218>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/postSat Signal/Forward_Path'
 * '<S219>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/preSat Signal/Feedback_Path'
 * '<S220>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Current Controller/PID Controller1/preSat Signal/Forward_Path'
 * '<S221>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller'
 * '<S222>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Anti-windup'
 * '<S223>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/D Gain'
 * '<S224>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Filter'
 * '<S225>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Filter ICs'
 * '<S226>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/I Gain'
 * '<S227>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Ideal P Gain'
 * '<S228>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Ideal P Gain Fdbk'
 * '<S229>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Integrator'
 * '<S230>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Integrator ICs'
 * '<S231>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/N Copy'
 * '<S232>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/N Gain'
 * '<S233>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/P Copy'
 * '<S234>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Parallel P Gain'
 * '<S235>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Reset Signal'
 * '<S236>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Saturation'
 * '<S237>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Saturation Fdbk'
 * '<S238>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Sum'
 * '<S239>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Sum Fdbk'
 * '<S240>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Tracking Mode'
 * '<S241>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Tracking Mode Sum'
 * '<S242>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/postSat Signal'
 * '<S243>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/preSat Signal'
 * '<S244>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Anti-windup/Back Calculation'
 * '<S245>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Anti-windup/Cont. Clamping Ideal'
 * '<S246>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Anti-windup/Cont. Clamping Parallel'
 * '<S247>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Anti-windup/Disabled'
 * '<S248>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Anti-windup/Disc. Clamping Ideal'
 * '<S249>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S250>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Anti-windup/Passthrough'
 * '<S251>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/D Gain/Disabled'
 * '<S252>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/D Gain/External Parameters'
 * '<S253>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/D Gain/Internal Parameters'
 * '<S254>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Filter/Cont. Filter'
 * '<S255>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Filter/Differentiator'
 * '<S256>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Filter/Disabled'
 * '<S257>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Filter/Disc. Backward Euler Filter'
 * '<S258>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S259>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Filter/Disc. Trapezoidal Filter'
 * '<S260>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Filter ICs/Disabled'
 * '<S261>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Filter ICs/External IC'
 * '<S262>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Filter ICs/Internal IC - Differentiator'
 * '<S263>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S264>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/I Gain/Disabled'
 * '<S265>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/I Gain/External Parameters'
 * '<S266>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/I Gain/Internal Parameters'
 * '<S267>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Ideal P Gain/External Parameters'
 * '<S268>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Ideal P Gain/Internal Parameters'
 * '<S269>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Ideal P Gain/Passthrough'
 * '<S270>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S271>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Ideal P Gain Fdbk/External Parameters'
 * '<S272>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Ideal P Gain Fdbk/Internal Parameters'
 * '<S273>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Ideal P Gain Fdbk/Passthrough'
 * '<S274>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Integrator/Continuous'
 * '<S275>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Integrator/Disabled'
 * '<S276>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Integrator/Discrete'
 * '<S277>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Integrator ICs/Disabled'
 * '<S278>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Integrator ICs/External IC'
 * '<S279>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Integrator ICs/Internal IC'
 * '<S280>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/N Copy/Disabled'
 * '<S281>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/N Copy/Disabled wSignal Specification'
 * '<S282>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/N Copy/External Parameters'
 * '<S283>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/N Copy/Internal Parameters'
 * '<S284>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/N Gain/Disabled'
 * '<S285>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/N Gain/External Parameters'
 * '<S286>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/N Gain/Internal Parameters'
 * '<S287>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/N Gain/Passthrough'
 * '<S288>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/P Copy/Disabled'
 * '<S289>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/P Copy/External Parameters Ideal'
 * '<S290>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/P Copy/Internal Parameters Ideal'
 * '<S291>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Parallel P Gain/Disabled'
 * '<S292>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Parallel P Gain/External Parameters'
 * '<S293>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S294>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Parallel P Gain/Passthrough'
 * '<S295>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Reset Signal/Disabled'
 * '<S296>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Reset Signal/External Reset'
 * '<S297>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Saturation/Enabled'
 * '<S298>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Saturation/Passthrough'
 * '<S299>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Saturation Fdbk/Disabled'
 * '<S300>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Saturation Fdbk/Enabled'
 * '<S301>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Saturation Fdbk/Passthrough'
 * '<S302>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Sum/Passthrough_I'
 * '<S303>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Sum/Passthrough_P'
 * '<S304>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Sum/Sum_PD'
 * '<S305>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Sum/Sum_PI'
 * '<S306>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Sum/Sum_PID'
 * '<S307>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Sum Fdbk/Disabled'
 * '<S308>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Sum Fdbk/Enabled'
 * '<S309>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Sum Fdbk/Passthrough'
 * '<S310>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Tracking Mode/Disabled'
 * '<S311>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Tracking Mode/Enabled'
 * '<S312>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S313>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/Tracking Mode Sum/Tracking Mode'
 * '<S314>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/postSat Signal/Feedback_Path'
 * '<S315>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/postSat Signal/Forward_Path'
 * '<S316>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/preSat Signal/Feedback_Path'
 * '<S317>' : 'Model_2_SpeedClosedLoop/FOC_Current_Control/Speed Controller/PID Controller/preSat Signal/Forward_Path'
 * '<S318>' : 'Model_2_SpeedClosedLoop/powergui/EquivalentModel1'
 * '<S319>' : 'Model_2_SpeedClosedLoop/powergui/EquivalentModel1/Sources'
 * '<S320>' : 'Model_2_SpeedClosedLoop/powergui/EquivalentModel1/Yout'
 */
#endif                                 /* RTW_HEADER_Model_2_SpeedClosedLoop_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
