/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Model_3_Flux_Weakening_Control.h
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

#ifndef RTW_HEADER_Model_3_Flux_Weakening_Control_h_
#define RTW_HEADER_Model_3_Flux_Weakening_Control_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Model_3_Flux_Weakening_Control_COMMON_INCLUDES_
# define Model_3_Flux_Weakening_Control_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Model_3_Flux_Weakening_Control_COMMON_INCLUDES_ */

#include "Model_3_Flux_Weakening_Control_types.h"

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

#define Model_3_Flux_Weakening_Control_M (Model_3_Flux_Weakening_Contr_M)

/* Block signals (default storage) */
typedef struct {
  real_T FromWs[2];                    /* '<S3>/FromWs' */
  real_T TmpRTBAtId_of_We_TorqueInport2;
  real_T TmpRTBAtIq_of_We_Torque1Inport2;
  real_T Fcn;                          /* '<S15>/Fcn' */
  real_T Fcn1;                         /* '<S15>/Fcn1' */
  real_T Add1;                         /* '<S25>/Add1' */
  real_T Add;                          /* '<S24>/Add' */
  real_T Add1_g;                       /* '<S24>/Add1' */
  real_T StateSpace[2];                /* '<S220>/State-Space' */
  real_T Gain;                         /* '<S11>/Gain' */
  real_T Sum1;                         /* '<S18>/Sum1' */
  real_T Sum;                          /* '<S17>/Sum' */
  real_T TmpRTBAtUnitDelay_4Inport1;   /* '<Root>/Unit Delay' */
  real_T TmpRTBAtUnitDelay_2Inport1;   /* '<Root>/Unit Delay' */
  real_T TmpRTBAtUnitDelay_1Inport1;   /* '<Root>/Unit Delay' */
  real_T TmpRTBAtUnitDelay_3Inport1;   /* '<Root>/Unit Delay' */
  real_T Integrator_n;                 /* '<S178>/Integrator' */
  real_T Add1_m;                       /* '<S22>/Add1' */
} B_Model_3_Flux_Weakening_Cont_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S11>/Discrete-Time Integrator1' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S18>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_d;/* '<S17>/Discrete-Time Integrator' */
  real_T UnitDelay_4_DSTATE;           /* '<Root>/Unit Delay' */
  real_T UnitDelay_2_DSTATE;           /* '<Root>/Unit Delay' */
  real_T Integrator_DSTATE;            /* '<S82>/Integrator' */
  real_T UnitDelay_1_DSTATE;           /* '<Root>/Unit Delay' */
  real_T UnitDelay_3_DSTATE;           /* '<Root>/Unit Delay' */
  real_T Integrator_DSTATE_a;          /* '<S178>/Integrator' */
  real_T Filter_DSTATE;                /* '<S160>/Filter' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK;                      /* '<S3>/FromWs' */

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
  } StateSpace_PWORK;                  /* '<S220>/State-Space' */

  struct {
    int_T PrevIndex;
  } FromWs_IWORK;                      /* '<S3>/FromWs' */

  int_T StateSpace_IWORK[11];          /* '<S220>/State-Space' */
} DW_Model_3_Flux_Weakening_Con_T;

/* Parameters (default storage) */
struct P_Model_3_Flux_Weakening_Cont_T_ {
  real_T Gain_I;                       /* Variable: Gain_I
                                        * Referenced by:
                                        *   '<S72>/Integral Gain'
                                        *   '<S168>/Integral Gain'
                                        */
  real_T Gain_P;                       /* Variable: Gain_P
                                        * Referenced by:
                                        *   '<S99>/Proportional Gain'
                                        *   '<S195>/Proportional Gain'
                                        */
  real_T Lambda_m;                     /* Variable: Lambda_m
                                        * Referenced by: '<S22>/Constant'
                                        */
  real_T Ld;                           /* Variable: Ld
                                        * Referenced by: '<S22>/Gain'
                                        */
  real_T Lq;                           /* Variable: Lq
                                        * Referenced by: '<S22>/Gain1'
                                        */
  real_T ParamControlTableTrqIndex[31];/* Variable: ParamControlTableTrqIndex
                                        * Referenced by:
                                        *   '<S23>/Id_of_We_Torque'
                                        *   '<S23>/Iq_of_We_Torque1'
                                        */
  real_T ParamControlTableWeIndex[29]; /* Variable: ParamControlTableWeIndex
                                        * Referenced by:
                                        *   '<S23>/Id_of_We_Torque'
                                        *   '<S23>/Iq_of_We_Torque1'
                                        */
  real_T Param_BaseSpeed;              /* Variable: Param_BaseSpeed
                                        * Referenced by: '<S23>/Constant2'
                                        */
  real_T Param_Id_of_We_Torque[899];   /* Variable: Param_Id_of_We_Torque
                                        * Referenced by: '<S23>/Id_of_We_Torque'
                                        */
  real_T Param_Iq_of_We_Torque[899];   /* Variable: Param_Iq_of_We_Torque
                                        * Referenced by: '<S23>/Iq_of_We_Torque1'
                                        */
  real_T Polepairs;                    /* Variable: Polepairs
                                        * Referenced by:
                                        *   '<S2>/electrical angular to rpm'
                                        *   '<S4>/PolePairs'
                                        *   '<S4>/PolePairs '
                                        */
  real_T PIDController1_D;             /* Mask Parameter: PIDController1_D
                                        * Referenced by: '<S155>/Derivative Gain'
                                        */
  real_T PIDController1_InitialCondition;/* Mask Parameter: PIDController1_InitialCondition
                                          * Referenced by: '<S160>/Filter'
                                          */
  real_T PIDController_InitialConditionF;/* Mask Parameter: PIDController_InitialConditionF
                                          * Referenced by: '<S82>/Integrator'
                                          */
  real_T PIDController1_InitialConditi_k;/* Mask Parameter: PIDController1_InitialConditi_k
                                          * Referenced by: '<S178>/Integrator'
                                          */
  real_T PIDController1_N;             /* Mask Parameter: PIDController1_N
                                        * Referenced by: '<S188>/Filter Coefficient'
                                        */
  real_T DiscreteTimeIntegrator1_gainval;/* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                          * Referenced by: '<S11>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: PM.tho+PM.thOffest
                                        * Referenced by: '<S11>/Discrete-Time Integrator1'
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
  real_T UnitDelay_4_InitialCondition; /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
  real_T speed_rpmBaseSpeed_Threshold; /* Expression: 0
                                        * Referenced by: '<S23>/speed_rpm >=  BaseSpeed ?'
                                        */
  real_T UnitDelay_2_InitialCondition; /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S82>/Integrator'
                                        */
  real_T UnitDelay_1_InitialCondition; /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
  real_T UnitDelay_3_InitialCondition; /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
  real_T Integrator_gainval_k;         /* Computed Parameter: Integrator_gainval_k
                                        * Referenced by: '<S178>/Integrator'
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S160>/Filter'
                                        */
  real_T Gain_Gain;                    /* Expression: 1/2
                                        * Referenced by: '<S24>/Gain'
                                        */
  real_T Gain1_Gain;                   /* Expression: sqrt(3)/2
                                        * Referenced by: '<S24>/Gain1'
                                        */
  real_T StateSpace_DS_param[10];      /* Expression: S.D
                                        * Referenced by: '<S220>/State-Space'
                                        */
  real_T uLq_Gain;                     /* Expression: 1/PM.Lq
                                        * Referenced by: '<S18>/1//Lq'
                                        */
  real_T romtomechanicalangularspeed_Gai;/* Expression: 2*pi/60
                                          * Referenced by: '<S1>/rom to mechanical angular speed'
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
  uint32_T Id_of_We_Torque_maxIndex[2];/* Computed Parameter: Id_of_We_Torque_maxIndex
                                        * Referenced by: '<S23>/Id_of_We_Torque'
                                        */
  uint32_T Iq_of_We_Torque1_maxIndex[2];/* Computed Parameter: Iq_of_We_Torque1_maxIndex
                                         * Referenced by: '<S23>/Iq_of_We_Torque1'
                                         */
};

/* Real-time Model Data Structure */
struct tag_RTM_Model_3_Flux_Weakenin_T {
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
      uint8_T TID[3];
    } TaskCounters;

    struct {
      boolean_T TID1_2;
    } RateInteraction;

    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[3];
  } Timing;
};

/* Block parameters (default storage) */
extern P_Model_3_Flux_Weakening_Cont_T Model_3_Flux_Weakening_Contro_P;

/* Block signals (default storage) */
extern B_Model_3_Flux_Weakening_Cont_T Model_3_Flux_Weakening_Contro_B;

/* Block states (default storage) */
extern DW_Model_3_Flux_Weakening_Con_T Model_3_Flux_Weakening_Contr_DW;

/* External function called from main */
extern void Model_3_Flux_Weakening_Control_SetEventsForThisBaseStep(boolean_T
  *eventFlags);

/* Model entry point functions */
extern void Model_3_Flux_Weakening_Control_SetEventsForThisBaseStep(boolean_T
  *eventFlags);
extern void Model_3_Flux_Weakening_Control_initialize(void);
extern void Model_3_Flux_Weakening_Control_step(int_T tid);
extern void Model_3_Flux_Weakening_Control_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Model_3_Flux_Weakeni_T *const Model_3_Flux_Weakening_Contr_M;

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
 * Block '<S9>/Te ' : Unused code path elimination
 * Block '<S15>/Sum' : Unused code path elimination
 * Block '<Root>/Scope2' : Unused code path elimination
 * Block '<Root>/rad//s -> rpm' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Scope1' : Unused code path elimination
 * Block '<S4>/Rate_Transition1' : Eliminated since input and output rates are identical
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
 * '<Root>' : 'Model_3_Flux_Weakening_Control'
 * '<S1>'   : 'Model_3_Flux_Weakening_Control/ '
 * '<S2>'   : 'Model_3_Flux_Weakening_Control/FOC_Current_Control'
 * '<S3>'   : 'Model_3_Flux_Weakening_Control/Signal Builder'
 * '<S4>'   : 'Model_3_Flux_Weakening_Control/Subsystem'
 * '<S5>'   : 'Model_3_Flux_Weakening_Control/Subsystem1'
 * '<S6>'   : 'Model_3_Flux_Weakening_Control/powergui'
 * '<S7>'   : 'Model_3_Flux_Weakening_Control/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]'
 * '<S8>'   : 'Model_3_Flux_Weakening_Control/ /ideal_voltage_source'
 * '<S9>'   : 'Model_3_Flux_Weakening_Control/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model'
 * '<S10>'  : 'Model_3_Flux_Weakening_Control/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Measurements'
 * '<S11>'  : 'Model_3_Flux_Weakening_Control/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Mechanical model'
 * '<S12>'  : 'Model_3_Flux_Weakening_Control/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/Hall effect sensor'
 * '<S13>'  : 'Model_3_Flux_Weakening_Control/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/abc2qd'
 * '<S14>'  : 'Model_3_Flux_Weakening_Control/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/iq,id'
 * '<S15>'  : 'Model_3_Flux_Weakening_Control/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/qd2abc'
 * '<S16>'  : 'Model_3_Flux_Weakening_Control/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/Hall effect sensor/Angle converter'
 * '<S17>'  : 'Model_3_Flux_Weakening_Control/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/iq,id/id'
 * '<S18>'  : 'Model_3_Flux_Weakening_Control/ /Permanent Magnet Synchronous Machine [0.002 0.01 3 0]/Electrical model/iq,id/iq'
 * '<S19>'  : 'Model_3_Flux_Weakening_Control/ /ideal_voltage_source/Controlled_Voltage_Source1'
 * '<S20>'  : 'Model_3_Flux_Weakening_Control/ /ideal_voltage_source/Controlled_Voltage_Source2'
 * '<S21>'  : 'Model_3_Flux_Weakening_Control/ /ideal_voltage_source/Controlled_Voltage_Source3'
 * '<S22>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller'
 * '<S23>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Flux Weakening Controller'
 * '<S24>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Inverse Clarke Transform'
 * '<S25>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Inverse Park Transform'
 * '<S26>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller'
 * '<S27>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1'
 * '<S28>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Anti-windup'
 * '<S29>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/D Gain'
 * '<S30>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Filter'
 * '<S31>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Filter ICs'
 * '<S32>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/I Gain'
 * '<S33>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain'
 * '<S34>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain Fdbk'
 * '<S35>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Integrator'
 * '<S36>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Integrator ICs'
 * '<S37>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/N Copy'
 * '<S38>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/N Gain'
 * '<S39>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/P Copy'
 * '<S40>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Parallel P Gain'
 * '<S41>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Reset Signal'
 * '<S42>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Saturation'
 * '<S43>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Saturation Fdbk'
 * '<S44>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Sum'
 * '<S45>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Sum Fdbk'
 * '<S46>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Tracking Mode'
 * '<S47>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Tracking Mode Sum'
 * '<S48>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/postSat Signal'
 * '<S49>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/preSat Signal'
 * '<S50>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Back Calculation'
 * '<S51>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Cont. Clamping Ideal'
 * '<S52>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Cont. Clamping Parallel'
 * '<S53>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Disabled'
 * '<S54>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Disc. Clamping Ideal'
 * '<S55>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S56>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Anti-windup/Passthrough'
 * '<S57>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/D Gain/Disabled'
 * '<S58>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/D Gain/External Parameters'
 * '<S59>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/D Gain/Internal Parameters'
 * '<S60>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Filter/Cont. Filter'
 * '<S61>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Filter/Differentiator'
 * '<S62>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Filter/Disabled'
 * '<S63>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Filter/Disc. Backward Euler Filter'
 * '<S64>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S65>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Filter/Disc. Trapezoidal Filter'
 * '<S66>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Filter ICs/Disabled'
 * '<S67>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Filter ICs/External IC'
 * '<S68>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Filter ICs/Internal IC - Differentiator'
 * '<S69>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S70>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/I Gain/Disabled'
 * '<S71>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/I Gain/External Parameters'
 * '<S72>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/I Gain/Internal Parameters'
 * '<S73>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain/External Parameters'
 * '<S74>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain/Internal Parameters'
 * '<S75>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain/Passthrough'
 * '<S76>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S77>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain Fdbk/External Parameters'
 * '<S78>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain Fdbk/Internal Parameters'
 * '<S79>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Ideal P Gain Fdbk/Passthrough'
 * '<S80>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Integrator/Continuous'
 * '<S81>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Integrator/Disabled'
 * '<S82>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Integrator/Discrete'
 * '<S83>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Integrator ICs/Disabled'
 * '<S84>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Integrator ICs/External IC'
 * '<S85>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Integrator ICs/Internal IC'
 * '<S86>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/N Copy/Disabled'
 * '<S87>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/N Copy/Disabled wSignal Specification'
 * '<S88>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/N Copy/External Parameters'
 * '<S89>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/N Copy/Internal Parameters'
 * '<S90>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/N Gain/Disabled'
 * '<S91>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/N Gain/External Parameters'
 * '<S92>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/N Gain/Internal Parameters'
 * '<S93>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/N Gain/Passthrough'
 * '<S94>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/P Copy/Disabled'
 * '<S95>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/P Copy/External Parameters Ideal'
 * '<S96>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/P Copy/Internal Parameters Ideal'
 * '<S97>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Parallel P Gain/Disabled'
 * '<S98>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Parallel P Gain/External Parameters'
 * '<S99>'  : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S100>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Parallel P Gain/Passthrough'
 * '<S101>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Reset Signal/Disabled'
 * '<S102>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Reset Signal/External Reset'
 * '<S103>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Saturation/Enabled'
 * '<S104>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Saturation/Passthrough'
 * '<S105>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Saturation Fdbk/Disabled'
 * '<S106>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Saturation Fdbk/Enabled'
 * '<S107>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Saturation Fdbk/Passthrough'
 * '<S108>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Sum/Passthrough_I'
 * '<S109>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Sum/Passthrough_P'
 * '<S110>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Sum/Sum_PD'
 * '<S111>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Sum/Sum_PI'
 * '<S112>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Sum/Sum_PID'
 * '<S113>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Sum Fdbk/Disabled'
 * '<S114>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Sum Fdbk/Enabled'
 * '<S115>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Sum Fdbk/Passthrough'
 * '<S116>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Tracking Mode/Disabled'
 * '<S117>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Tracking Mode/Enabled'
 * '<S118>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S119>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/Tracking Mode Sum/Tracking Mode'
 * '<S120>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/postSat Signal/Feedback_Path'
 * '<S121>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/postSat Signal/Forward_Path'
 * '<S122>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/preSat Signal/Feedback_Path'
 * '<S123>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller/preSat Signal/Forward_Path'
 * '<S124>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup'
 * '<S125>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/D Gain'
 * '<S126>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Filter'
 * '<S127>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Filter ICs'
 * '<S128>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/I Gain'
 * '<S129>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain'
 * '<S130>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain Fdbk'
 * '<S131>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Integrator'
 * '<S132>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Integrator ICs'
 * '<S133>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/N Copy'
 * '<S134>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/N Gain'
 * '<S135>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/P Copy'
 * '<S136>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Parallel P Gain'
 * '<S137>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Reset Signal'
 * '<S138>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Saturation'
 * '<S139>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Saturation Fdbk'
 * '<S140>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Sum'
 * '<S141>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Sum Fdbk'
 * '<S142>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Tracking Mode'
 * '<S143>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Tracking Mode Sum'
 * '<S144>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/postSat Signal'
 * '<S145>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/preSat Signal'
 * '<S146>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Back Calculation'
 * '<S147>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Cont. Clamping Ideal'
 * '<S148>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Cont. Clamping Parallel'
 * '<S149>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Disabled'
 * '<S150>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Disc. Clamping Ideal'
 * '<S151>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Disc. Clamping Parallel'
 * '<S152>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Anti-windup/Passthrough'
 * '<S153>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/D Gain/Disabled'
 * '<S154>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/D Gain/External Parameters'
 * '<S155>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/D Gain/Internal Parameters'
 * '<S156>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Filter/Cont. Filter'
 * '<S157>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Filter/Differentiator'
 * '<S158>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Filter/Disabled'
 * '<S159>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Filter/Disc. Backward Euler Filter'
 * '<S160>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S161>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Filter/Disc. Trapezoidal Filter'
 * '<S162>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Filter ICs/Disabled'
 * '<S163>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Filter ICs/External IC'
 * '<S164>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Filter ICs/Internal IC - Differentiator'
 * '<S165>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S166>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/I Gain/Disabled'
 * '<S167>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/I Gain/External Parameters'
 * '<S168>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/I Gain/Internal Parameters'
 * '<S169>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain/External Parameters'
 * '<S170>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain/Internal Parameters'
 * '<S171>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain/Passthrough'
 * '<S172>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S173>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain Fdbk/External Parameters'
 * '<S174>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain Fdbk/Internal Parameters'
 * '<S175>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Ideal P Gain Fdbk/Passthrough'
 * '<S176>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Integrator/Continuous'
 * '<S177>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Integrator/Disabled'
 * '<S178>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Integrator/Discrete'
 * '<S179>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Integrator ICs/Disabled'
 * '<S180>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Integrator ICs/External IC'
 * '<S181>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Integrator ICs/Internal IC'
 * '<S182>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/N Copy/Disabled'
 * '<S183>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S184>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/N Copy/External Parameters'
 * '<S185>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/N Copy/Internal Parameters'
 * '<S186>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/N Gain/Disabled'
 * '<S187>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/N Gain/External Parameters'
 * '<S188>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/N Gain/Internal Parameters'
 * '<S189>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/N Gain/Passthrough'
 * '<S190>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/P Copy/Disabled'
 * '<S191>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/P Copy/External Parameters Ideal'
 * '<S192>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/P Copy/Internal Parameters Ideal'
 * '<S193>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Parallel P Gain/Disabled'
 * '<S194>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Parallel P Gain/External Parameters'
 * '<S195>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S196>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Parallel P Gain/Passthrough'
 * '<S197>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Reset Signal/Disabled'
 * '<S198>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Reset Signal/External Reset'
 * '<S199>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Saturation/Enabled'
 * '<S200>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Saturation/Passthrough'
 * '<S201>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Saturation Fdbk/Disabled'
 * '<S202>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Saturation Fdbk/Enabled'
 * '<S203>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Saturation Fdbk/Passthrough'
 * '<S204>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Sum/Passthrough_I'
 * '<S205>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Sum/Passthrough_P'
 * '<S206>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Sum/Sum_PD'
 * '<S207>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Sum/Sum_PI'
 * '<S208>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Sum/Sum_PID'
 * '<S209>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Sum Fdbk/Disabled'
 * '<S210>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Sum Fdbk/Enabled'
 * '<S211>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Sum Fdbk/Passthrough'
 * '<S212>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Tracking Mode/Disabled'
 * '<S213>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Tracking Mode/Enabled'
 * '<S214>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S215>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/Tracking Mode Sum/Tracking Mode'
 * '<S216>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/postSat Signal/Feedback_Path'
 * '<S217>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/postSat Signal/Forward_Path'
 * '<S218>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/preSat Signal/Feedback_Path'
 * '<S219>' : 'Model_3_Flux_Weakening_Control/FOC_Current_Control/Current Controller/PID Controller1/preSat Signal/Forward_Path'
 * '<S220>' : 'Model_3_Flux_Weakening_Control/powergui/EquivalentModel1'
 * '<S221>' : 'Model_3_Flux_Weakening_Control/powergui/EquivalentModel1/Sources'
 * '<S222>' : 'Model_3_Flux_Weakening_Control/powergui/EquivalentModel1/Yout'
 */
#endif                                 /* RTW_HEADER_Model_3_Flux_Weakening_Control_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
