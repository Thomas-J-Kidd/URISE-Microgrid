/*
 * acdcmg_sim8_1_sm_grid_simulation_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "acdcmg_sim8_1_sm_grid_simulation".
 *
 * Model version              : 3.93
 * Simulink Coder version : 9.2 (R2019b) 18-Jul-2019
 * C source code generated on : Tue Jul 12 10:35:29 2022
 *
 * Target selection: rtlab_rtmodel.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_acdcmg_sim8_1_sm_grid_simulation_private_h_
#define RTW_HEADER_acdcmg_sim8_1_sm_grid_simulation_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "acdcmg_sim8_1_sm_grid_simulation.h"

extern real_T rt_hypotd_snf(real_T u0, real_T u1);
extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern real_T rt_powd_snf(real_T u0, real_T u1);
real_T rt_TDelayInterpolate(
  real_T tMinusDelay,                 /* tMinusDelay = currentSimTime - delay */
  real_T tStart,
  real_T *tBuf,
  real_T *uBuf,
  int_T bufSz,
  int_T *lastIdx,
  int_T oldestIdx,
  int_T newIdx,
  real_T initOutput,
  boolean_T discrete,
  boolean_T minorStepAndTAtLastMajorOutput)
  ;
extern void sfun_discreteVariableDelay(SimStruct *rts);
extern void fts5stub(SimStruct *rts);
extern void RECV_Param(SimStruct *rts);
extern void ssn_sfun_v1(SimStruct *rts);
extern void OP_SEND(SimStruct *rts);
extern void acdcmg_sim8_1_sm_grid__RMS_Init(P_RMS_acdcmg_sim8_1_sm_grid_s_T
  *localP, X_RMS_acdcmg_sim8_1_sm_grid_s_T *localX);
extern void acdcmg_sim8_1_sm_grid_RMS_Deriv(B_RMS_acdcmg_sim8_1_sm_grid_s_T
  *localB, DW_RMS_acdcmg_sim8_1_sm_grid__T *localDW,
  XDot_RMS_acdcmg_sim8_1_sm_gri_T *localXdot);
extern void acdcmg_sim8_1_sm_gr_RMS_Disable(DW_RMS_acdcmg_sim8_1_sm_grid__T
  *localDW);
extern void acdcmg_sim8_1_sm_grid_simul_RMS
  (RT_MODEL_acdcmg_sim8_1_sm_grid_simulation_T * const
   acdcmg_sim8_1_sm_grid_simulation_M, boolean_T rtu_Enable, const real_T
   rtu_In[3], B_RMS_acdcmg_sim8_1_sm_grid_s_T *localB,
   DW_RMS_acdcmg_sim8_1_sm_grid__T *localDW, P_RMS_acdcmg_sim8_1_sm_grid_s_T
   *localP, X_RMS_acdcmg_sim8_1_sm_grid_s_T *localX);
extern void acdcmg_sim8_1_sm_g_TrueRMS_Init(P_TrueRMS_acdcmg_sim8_1_sm_gr_T
  *localP, X_TrueRMS_acdcmg_sim8_1_sm_gr_T *localX);
extern void acdcmg_sim8_1_sm__TrueRMS_Deriv(B_TrueRMS_acdcmg_sim8_1_sm_gr_T
  *localB, DW_TrueRMS_acdcmg_sim8_1_sm_g_T *localDW,
  XDot_TrueRMS_acdcmg_sim8_1_sm_T *localXdot);
extern void acdcmg_sim8_1_s_TrueRMS_Disable(DW_TrueRMS_acdcmg_sim8_1_sm_g_T
  *localDW);
extern void acdcmg_sim8_1_sm_grid_s_TrueRMS
  (RT_MODEL_acdcmg_sim8_1_sm_grid_simulation_T * const
   acdcmg_sim8_1_sm_grid_simulation_M, boolean_T rtu_Enable, const real_T
   rtu_In[3], B_TrueRMS_acdcmg_sim8_1_sm_gr_T *localB,
   DW_TrueRMS_acdcmg_sim8_1_sm_g_T *localDW, X_TrueRMS_acdcmg_sim8_1_sm_gr_T
   *localX);
extern void acdcmg_sim8_1_sm_gri_RMS_h_Init(DW_RMS_acdcmg_sim8_1_sm_gri_a_T
  *localDW, P_RMS_acdcmg_sim8_1_sm_grid_p_T *localP,
  X_RMS_acdcmg_sim8_1_sm_grid_m_T *localX);
extern void acdcmg_sim8_1_sm_gr_RMS_a_Start
  (RT_MODEL_acdcmg_sim8_1_sm_grid_simulation_T * const
   acdcmg_sim8_1_sm_grid_simulation_M, DW_RMS_acdcmg_sim8_1_sm_gri_a_T *localDW,
   P_RMS_acdcmg_sim8_1_sm_grid_p_T *localP);
extern void acdcmg_sim8_1_sm_gr_RMS_n_Deriv(B_RMS_acdcmg_sim8_1_sm_grid_g_T
  *localB, DW_RMS_acdcmg_sim8_1_sm_gri_a_T *localDW,
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T *localXdot);
extern void acdcmg_sim8_1_sm__RMS_b_Disable(DW_RMS_acdcmg_sim8_1_sm_gri_a_T
  *localDW);
extern void acdcmg_sim8_1_sm_g_RMS_n_Update
  (RT_MODEL_acdcmg_sim8_1_sm_grid_simulation_T * const
   acdcmg_sim8_1_sm_grid_simulation_M, B_RMS_acdcmg_sim8_1_sm_grid_g_T *localB,
   DW_RMS_acdcmg_sim8_1_sm_gri_a_T *localDW);
extern void acdcmg_sim8_1_sm_grid_sim_RMS_i
  (RT_MODEL_acdcmg_sim8_1_sm_grid_simulation_T * const
   acdcmg_sim8_1_sm_grid_simulation_M, boolean_T rtu_Enable, real_T rtu_In,
   B_RMS_acdcmg_sim8_1_sm_grid_g_T *localB, DW_RMS_acdcmg_sim8_1_sm_gri_a_T
   *localDW, P_RMS_acdcmg_sim8_1_sm_grid_p_T *localP,
   X_RMS_acdcmg_sim8_1_sm_grid_m_T *localX);
extern void acdcmg_sim8_1_sm_TrueRMS_n_Init(DW_TrueRMS_acdcmg_sim8_1_sm_d_T
  *localDW, P_TrueRMS_acdcmg_sim8_1_sm__p_T *localP,
  X_TrueRMS_acdcmg_sim8_1_sm__i_T *localX);
extern void acdcmg_sim8_1_s_TrueRMS_c_Start
  (RT_MODEL_acdcmg_sim8_1_sm_grid_simulation_T * const
   acdcmg_sim8_1_sm_grid_simulation_M, DW_TrueRMS_acdcmg_sim8_1_sm_d_T *localDW,
   P_TrueRMS_acdcmg_sim8_1_sm__p_T *localP);
extern void acdcmg_sim8_1_s_TrueRMS_p_Deriv(B_TrueRMS_acdcmg_sim8_1_sm__p_T
  *localB, DW_TrueRMS_acdcmg_sim8_1_sm_d_T *localDW,
  XDot_TrueRMS_acdcmg_sim8_1__f_T *localXdot);
extern void acdcmg_sim8_1_TrueRMS_p_Disable(DW_TrueRMS_acdcmg_sim8_1_sm_d_T
  *localDW);
extern void acdcmg_sim8_1__TrueRMS_a_Update
  (RT_MODEL_acdcmg_sim8_1_sm_grid_simulation_T * const
   acdcmg_sim8_1_sm_grid_simulation_M, B_TrueRMS_acdcmg_sim8_1_sm__p_T *localB,
   DW_TrueRMS_acdcmg_sim8_1_sm_d_T *localDW);
extern void acdcmg_sim8_1_sm_grid_TrueRMS_p
  (RT_MODEL_acdcmg_sim8_1_sm_grid_simulation_T * const
   acdcmg_sim8_1_sm_grid_simulation_M, boolean_T rtu_Enable, real_T rtu_In,
   B_TrueRMS_acdcmg_sim8_1_sm__p_T *localB, DW_TrueRMS_acdcmg_sim8_1_sm_d_T
   *localDW, P_TrueRMS_acdcmg_sim8_1_sm__p_T *localP,
   X_TrueRMS_acdcmg_sim8_1_sm__i_T *localX);
extern void acdcmg_s_HarmonicGenerator_Init(B_HarmonicGenerator_acdcmg_si_T
  *localB, P_HarmonicGenerator_acdcmg_si_T *localP);
extern void acdcm_HarmonicGenerator_Disable(B_HarmonicGenerator_acdcmg_si_T
  *localB, DW_HarmonicGenerator_acdcmg_s_T *localDW,
  P_HarmonicGenerator_acdcmg_si_T *localP);
extern void acdcmg_sim8_1_HarmonicGenerator
  (RT_MODEL_acdcmg_sim8_1_sm_grid_simulation_T * const
   acdcmg_sim8_1_sm_grid_simulation_M, real_T rtu_Enable, real_T rtu_wt,
   B_HarmonicGenerator_acdcmg_si_T *localB, DW_HarmonicGenerator_acdcmg_s_T
   *localDW, P_HarmonicGenerator_acdcmg_si_T *localP);
extern void acdcmg_sim_Signalgenerator_Init(B_Signalgenerator_acdcmg_sim8_T
  *localB, DW_Signalgenerator_acdcmg_sim_T *localDW,
  P_Signalgenerator_acdcmg_sim8_T *localP);
extern void acdcmg__Signalgenerator_Disable(B_Signalgenerator_acdcmg_sim8_T
  *localB, DW_Signalgenerator_acdcmg_sim_T *localDW,
  P_Signalgenerator_acdcmg_sim8_T *localP);
extern void acdcmg_s_Signalgenerator_Update(B_Signalgenerator_acdcmg_sim8_T
  *localB, DW_Signalgenerator_acdcmg_sim_T *localDW,
  P_Signalgenerator_acdcmg_sim8_T *localP);
extern void acdcmg_sim8_1_s_Signalgenerator
  (RT_MODEL_acdcmg_sim8_1_sm_grid_simulation_T * const
   acdcmg_sim8_1_sm_grid_simulation_M, real_T rtu_Enable,
   B_Signalgenerator_acdcmg_sim8_T *localB, DW_Signalgenerator_acdcmg_sim_T
   *localDW, P_Signalgenerator_acdcmg_sim8_T *localP, real_T rtp_VariationEntity);
extern void acdcmg_s_Subsystempi2delay_Init(B_Subsystempi2delay_acdcmg_si_T
  *localB, P_Subsystempi2delay_acdcmg_si_T *localP);
extern void acdcmg_sim8_1_Subsystempi2delay(uint8_T rtu_Enable, const real_T
  rtu_alpha_beta[2], real_T rtu_wt, B_Subsystempi2delay_acdcmg_si_T *localB);
extern void acdcmg_sim8_1_s_Subsystem1_Init(B_Subsystem1_acdcmg_sim8_1_sm_T
  *localB, P_Subsystem1_acdcmg_sim8_1_sm_T *localP);
extern void acdcmg_sim8_1_sm_gri_Subsystem1(uint8_T rtu_Enable, const real_T
  rtu_alpha_beta[2], real_T rtu_wt, B_Subsystem1_acdcmg_sim8_1_sm_T *localB);

/* private model entry point functions */
extern void acdcmg_sim8_1_sm_grid_simulation_derivatives(void);

#endif              /* RTW_HEADER_acdcmg_sim8_1_sm_grid_simulation_private_h_ */
