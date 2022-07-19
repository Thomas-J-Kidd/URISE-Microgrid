/*
 * acdcmg_sim8_1_sm_grid_simulation.h
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

#ifndef RTW_HEADER_acdcmg_sim8_1_sm_grid_simulation_h_
#define RTW_HEADER_acdcmg_sim8_1_sm_grid_simulation_h_
#include <float.h>
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef acdcmg_sim8_1_sm_grid_simulation_COMMON_INCLUDES_
# define acdcmg_sim8_1_sm_grid_simulation_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#endif                   /* acdcmg_sim8_1_sm_grid_simulation_COMMON_INCLUDES_ */

#include "acdcmg_sim8_1_sm_grid_simulation_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rtGetNaN.h"
#include "rt_defines.h"
#include "rt_look.h"
#include "rt_look1d.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->ModelData.CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->ModelData.CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
# define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
# define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
# define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
# define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
# define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
# define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ()
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ()
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->ModelData.intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->ModelData.intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeDeltaY
# define rtmGetOdeDeltaY(rtm)          ((rtm)->ModelData.OdeDeltaY)
#endif

#ifndef rtmSetOdeDeltaY
# define rtmSetOdeDeltaY(rtm, val)     ((rtm)->ModelData.OdeDeltaY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->ModelData.odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->ModelData.odeF = (val))
#endif

#ifndef rtmGetOdeX0
# define rtmGetOdeX0(rtm)              ((rtm)->ModelData.odeX0)
#endif

#ifndef rtmSetOdeX0
# define rtmSetOdeX0(rtm, val)         ((rtm)->ModelData.odeX0 = (val))
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->ModelData.periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->ModelData.periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->ModelData.periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->ModelData.periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->ModelData.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->ModelData.dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
# define rtmGetSelf(rtm)               ()
#endif

#ifndef rtmSetSelf
# define rtmSetSelf(rtm, val)          ()
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ((rtm)->Timing.TaskCounters)
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ((rtm)->Timing.TaskCounters = (val))
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGettimingBridge
# define rtmGettimingBridge(rtm)       ()
#endif

#ifndef rtmSettimingBridge
# define rtmSettimingBridge(rtm, val)  ()
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->ModelData.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->ModelData.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define acdcmg_sim8_1_sm_grid_simulation_rtModel RT_MODEL_acdcmg_sim8_1_sm_grid_simulation_T

/* user code (top of header file) */
/* System '<Root>' */
/* Opal-RT Technologies */
extern int opalSizeDwork;
extern unsigned int opalSizeBlockIO;
extern unsigned int opalSizeRTP;
extern void * pRtModel;                //pointer on the RTmodel struc
int_T Opal_rtmGetNumBlockParams(void *ptr);
int_T Opal_rtmGetNumBlockIO(void *ptr);

/* Block signals for system '<S409>/RMS ' */
typedef struct {
  real_T integrator[3];                /* '<S415>/integrator' (Output 1)  */
  real_T integrator_b[3];              /* '<S416>/integrator' (Output 1)  */
  real_T Product[3];                   /* '<S412>/Product' (Output 1)  */
  real_T Product1[3];                  /* '<S412>/Product1' (Output 1)  */
  real_T coswt;                        /* '<S412>/cos(wt)' (Output 1)  */
} B_RMS_acdcmg_sim8_1_sm_grid_s_T;

/* Block states (default storage) for system '<S409>/RMS ' */
typedef struct {
  boolean_T RMS_MODE;                  /* '<S409>/RMS ' (DWork 1)  */
} DW_RMS_acdcmg_sim8_1_sm_grid__T;

/* Continuous states for system '<S409>/RMS ' */
typedef struct {
  real_T integrator_CSTATE_f[3];       /* '<S415>/integrator' */
  real_T integrator_CSTATE_g[3];       /* '<S416>/integrator' */
} X_RMS_acdcmg_sim8_1_sm_grid_s_T;

/* State derivatives for system '<S409>/RMS ' */
typedef struct {
  real_T integrator_CSTATE_f[3];       /* '<S415>/integrator' */
  real_T integrator_CSTATE_g[3];       /* '<S416>/integrator' */
} XDot_RMS_acdcmg_sim8_1_sm_gri_T;

/* State Disabled for system '<S409>/RMS ' */
typedef struct {
  boolean_T integrator_CSTATE_f[3];    /* '<S415>/integrator' */
  boolean_T integrator_CSTATE_g[3];    /* '<S416>/integrator' */
} XDis_RMS_acdcmg_sim8_1_sm_gri_T;

/* Block signals for system '<S409>/TrueRMS ' */
typedef struct {
  real_T integrator[3];                /* '<S418>/integrator' (Output 1)  */
  real_T Product[3];                   /* '<S411>/Product' (Output 1)  */
} B_TrueRMS_acdcmg_sim8_1_sm_gr_T;

/* Block states (default storage) for system '<S409>/TrueRMS ' */
typedef struct {
  boolean_T TrueRMS_MODE;              /* '<S409>/TrueRMS ' (DWork 1)  */
} DW_TrueRMS_acdcmg_sim8_1_sm_g_T;

/* Continuous states for system '<S409>/TrueRMS ' */
typedef struct {
  real_T integrator_CSTATE_o[3];       /* '<S418>/integrator' */
} X_TrueRMS_acdcmg_sim8_1_sm_gr_T;

/* State derivatives for system '<S409>/TrueRMS ' */
typedef struct {
  real_T integrator_CSTATE_o[3];       /* '<S418>/integrator' */
} XDot_TrueRMS_acdcmg_sim8_1_sm_T;

/* State Disabled for system '<S409>/TrueRMS ' */
typedef struct {
  boolean_T integrator_CSTATE_o[3];    /* '<S418>/integrator' */
} XDis_TrueRMS_acdcmg_sim8_1_sm_T;

/* Block signals for system '<S419>/RMS ' */
typedef struct {
  creal_T RealImagtoComplex;     /* '<S424>/Real-Imag to Complex' (Output 1)  */
  real_T integrator;                   /* '<S428>/integrator' (Output 1)  */
  real_T TransportDelay;              /* '<S428>/Transport Delay' (Output 1)  */
  real_T Memory;                       /* '<S428>/Memory' (Output 1)  */
  real_T Switch;                       /* '<S428>/Switch' (Output 1)  */
  real_T integrator_j;                 /* '<S427>/integrator' (Output 1)  */
  real_T TransportDelay_d;            /* '<S427>/Transport Delay' (Output 1)  */
  real_T Memory_e;                     /* '<S427>/Memory' (Output 1)  */
  real_T Switch_p;                     /* '<S427>/Switch' (Output 1)  */
  real_T ComplextoMagnitudeAngle_o2;
                           /* '<S424>/Complex to Magnitude-Angle' (Output 2)  */
  real_T Product;                      /* '<S424>/Product' (Output 1)  */
  real_T Product1;                     /* '<S424>/Product1' (Output 1)  */
  real_T Gain;                         /* '<S422>/Gain' (Output 1)  */
  real_T Gain_d;                       /* '<S428>/Gain' (Output 1)  */
  real_T Gain_o;                       /* '<S427>/Gain' (Output 1)  */
  real_T Sum;                          /* '<S428>/Sum' (Output 1)  */
  real_T Sum_m;                        /* '<S427>/Sum' (Output 1)  */
  real_T coswt;                        /* '<S424>/cos(wt)' (Output 1)  */
  real_T ComplextoMagnitudeAngle_o1;
                           /* '<S424>/Complex to Magnitude-Angle' (Output 1)  */
  boolean_T RelationalOperator;   /* '<S427>/Relational Operator' (Output 1)  */
} B_RMS_acdcmg_sim8_1_sm_grid_g_T;

/* Block states (default storage) for system '<S419>/RMS ' */
typedef struct {
  real_T Memory_PreviousInput;         /* '<S428>/Memory' (DWork 1)  */
  real_T Memory_PreviousInput_d;       /* '<S427>/Memory' (DWork 1)  */
  struct {
    real_T modelTStart;
    real_T TUbufferArea[16384];
  } TransportDelay_RWORK;              /* '<S428>/Transport Delay' (DWork 1)  */

  struct {
    real_T modelTStart;
    real_T TUbufferArea[16384];
  } TransportDelay_RWORK_i;            /* '<S427>/Transport Delay' (DWork 1)  */

  struct {
    void *TUbufferPtrs[2];
  } TransportDelay_PWORK;              /* '<S428>/Transport Delay' (DWork 3)  */

  struct {
    void *TUbufferPtrs[2];
  } TransportDelay_PWORK_p;            /* '<S427>/Transport Delay' (DWork 3)  */

  struct {
    int_T Tail;
    int_T Head;
    int_T Last;
    int_T CircularBufSize;
  } TransportDelay_IWORK;              /* '<S428>/Transport Delay' (DWork 2)  */

  struct {
    int_T Tail;
    int_T Head;
    int_T Last;
    int_T CircularBufSize;
  } TransportDelay_IWORK_b;            /* '<S427>/Transport Delay' (DWork 2)  */

  boolean_T RMS_MODE;                  /* '<S419>/RMS ' (DWork 1)  */
} DW_RMS_acdcmg_sim8_1_sm_gri_a_T;

/* Continuous states for system '<S419>/RMS ' */
typedef struct {
  real_T integrator_CSTATE_bx;         /* '<S428>/integrator' */
  real_T integrator_CSTATE_fb;         /* '<S427>/integrator' */
} X_RMS_acdcmg_sim8_1_sm_grid_m_T;

/* State derivatives for system '<S419>/RMS ' */
typedef struct {
  real_T integrator_CSTATE_bx;         /* '<S428>/integrator' */
  real_T integrator_CSTATE_fb;         /* '<S427>/integrator' */
} XDot_RMS_acdcmg_sim8_1_sm_g_c_T;

/* State Disabled for system '<S419>/RMS ' */
typedef struct {
  boolean_T integrator_CSTATE_bx;      /* '<S428>/integrator' */
  boolean_T integrator_CSTATE_fb;      /* '<S427>/integrator' */
} XDis_RMS_acdcmg_sim8_1_sm_g_b_T;

/* Block signals for system '<S419>/TrueRMS ' */
typedef struct {
  real_T integrator;                   /* '<S430>/integrator' (Output 1)  */
  real_T TransportDelay;              /* '<S430>/Transport Delay' (Output 1)  */
  real_T Memory;                       /* '<S430>/Memory' (Output 1)  */
  real_T Switch;                       /* '<S430>/Switch' (Output 1)  */
  real_T Product;                      /* '<S423>/Product' (Output 1)  */
  real_T Sqrt;                         /* '<S423>/Sqrt' (Output 1)  */
  real_T Gain;                         /* '<S430>/Gain' (Output 1)  */
  real_T Sum;                          /* '<S430>/Sum' (Output 1)  */
  real_T Saturationtoavoidnegativesqrt;
                    /* '<S423>/Saturation to avoid negative sqrt' (Output 1)  */
  boolean_T RelationalOperator;   /* '<S430>/Relational Operator' (Output 1)  */
} B_TrueRMS_acdcmg_sim8_1_sm__p_T;

/* Block states (default storage) for system '<S419>/TrueRMS ' */
typedef struct {
  real_T Memory_PreviousInput;         /* '<S430>/Memory' (DWork 1)  */
  struct {
    real_T modelTStart;
    real_T TUbufferArea[16384];
  } TransportDelay_RWORK;              /* '<S430>/Transport Delay' (DWork 1)  */

  struct {
    void *TUbufferPtrs[2];
  } TransportDelay_PWORK;              /* '<S430>/Transport Delay' (DWork 3)  */

  struct {
    int_T Tail;
    int_T Head;
    int_T Last;
    int_T CircularBufSize;
  } TransportDelay_IWORK;              /* '<S430>/Transport Delay' (DWork 2)  */

  boolean_T TrueRMS_MODE;              /* '<S419>/TrueRMS ' (DWork 1)  */
} DW_TrueRMS_acdcmg_sim8_1_sm_d_T;

/* Continuous states for system '<S419>/TrueRMS ' */
typedef struct {
  real_T integrator_CSTATE_e;          /* '<S430>/integrator' */
} X_TrueRMS_acdcmg_sim8_1_sm__i_T;

/* State derivatives for system '<S419>/TrueRMS ' */
typedef struct {
  real_T integrator_CSTATE_e;          /* '<S430>/integrator' */
} XDot_TrueRMS_acdcmg_sim8_1__f_T;

/* State Disabled for system '<S419>/TrueRMS ' */
typedef struct {
  boolean_T integrator_CSTATE_e;       /* '<S430>/integrator' */
} XDis_TrueRMS_acdcmg_sim8_1__f_T;

/* Block signals for system '<S725>/Harmonic Generator' */
typedef struct {
  real_T Sum1;                         /* '<S728>/Sum1' (Output 1)  */
  real_T Product1[3];                  /* '<S728>/Product1' (Output 1)  */
  real_T Sum1_l;                       /* '<S729>/Sum1' (Output 1)  */
  real_T Product1_d[3];                /* '<S729>/Product1' (Output 1)  */
  real_T Gain1;                        /* '<S728>/Gain1' (Output 1)  */
  real_T Gain3;                        /* '<S728>/Gain3' (Output 1)  */
  real_T Sum4;                         /* '<S726>/Sum4' (Output 1)  */
  real_T Gain3_j;                      /* '<S729>/Gain3' (Output 1)  */
  real_T Gain1_k;                      /* '<S729>/Gain1' (Output 1)  */
  real_T Sum[3];                       /* '<S729>/Sum' (Output 1)  */
  real_T TrigonometricFunction1[3];
                              /* '<S729>/Trigonometric Function1' (Output 1)  */
} B_HarmonicGenerator_acdcmg_si_T;

/* Block states (default storage) for system '<S725>/Harmonic Generator' */
typedef struct {
  boolean_T HarmonicGenerator_MODE; /* '<S725>/Harmonic Generator' (DWork 1)  */
} DW_HarmonicGenerator_acdcmg_s_T;

/* Block signals for system '<S725>/Signal generator' */
typedef struct {
  real_T LookUpTable;                  /* '<S732>/Look-Up Table' (Output 1)  */
  real_T DiscreteTimeIntegrator;
                             /* '<S727>/Discrete-Time Integrator' (Output 1)  */
  real_T Ton;                          /* '<S731>/Step' (Output 1)  */
  real_T Ramp;              /* '<S731>/Discrete-Time Integrator1' (Output 1)  */
  real_T Switch2;                      /* '<S731>/Switch2' (Output 1)  */
  real_T Switch3;                      /* '<S731>/Switch3' (Output 1)  */
  real_T Gain2;                        /* '<S727>/Gain2' (Output 1)  */
  real_T Switch2_i;                    /* '<S727>/Switch2' (Output 1)  */
  real_T Switch3_d;                    /* '<S727>/Switch3' (Output 1)  */
  real_T Switch;                       /* '<S731>/Switch' (Output 1)  */
  real_T Switch1;                      /* '<S731>/Switch1' (Output 1)  */
  real_T MultiportSwitch1;          /* '<S731>/Multiport Switch1' (Output 1)  */
  real_T Step;                         /* '<S731>/Product2' (Output 1)  */
  real_T Mod;                          /* '<S731>/Product' (Output 1)  */
  real_T Gain4;                        /* '<S727>/Gain4' (Output 1)  */
  real_T Product1;                     /* '<S731>/Product1' (Output 1)  */
  real_T Toff;                         /* '<S731>/Step1' (Output 1)  */
  real_T Switch4;                      /* '<S727>/Switch4' (Output 1)  */
  real_T TrigonometricFunction1;
                              /* '<S731>/Trigonometric Function1' (Output 1)  */
  boolean_T LogicalOperator1;       /* '<S727>/Logical Operator1' (Output 1)  */
  boolean_T RelationalOperator;   /* '<S731>/Relational Operator' (Output 1)  */
  boolean_T RelationalOperator1; /* '<S731>/Relational Operator1' (Output 1)  */
  boolean_T Amplitude;            /* '<S727>/Relational Operator' (Output 1)  */
  boolean_T Phase;               /* '<S727>/Relational Operator1' (Output 1)  */
} B_Signalgenerator_acdcmg_sim8_T;

/* Block states (default storage) for system '<S725>/Signal generator' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;
                              /* '<S727>/Discrete-Time Integrator' (DWork 1)  */
  real_T DiscreteTimeIntegrator1_DSTATE;
                             /* '<S731>/Discrete-Time Integrator1' (DWork 1)  */
  real_T UnitDelay_DSTATE;             /* '<S731>/Unit Delay' (DWork 1)  */
  boolean_T Signalgenerator_MODE;     /* '<S725>/Signal generator' (DWork 1)  */
} DW_Signalgenerator_acdcmg_sim_T;

/* Block signals for system '<S880>/Subsystem - pi//2 delay' */
typedef struct {
  real_T Fcn;                          /* '<S884>/Fcn' (Output 1)  */
  real_T Fcn1;                         /* '<S884>/Fcn1' (Output 1)  */
} B_Subsystempi2delay_acdcmg_si_T;

/* Block signals for system '<S880>/Subsystem1' */
typedef struct {
  real_T Fcn;                          /* '<S885>/Fcn' (Output 1)  */
  real_T Fcn1;                         /* '<S885>/Fcn1' (Output 1)  */
} B_Subsystem1_acdcmg_sim8_1_sm_T;

/* Block signals (default storage) */
typedef struct {
  creal_T RealImagtoComplex;     /* '<S870>/Real-Imag to Complex' (Output 1)  */
  real_T Sum;                          /* '<S2>/Sum' (Output 1)  */
  real_T Saturation;                   /* '<S72>/Saturation' (Output 1)  */
  real_T D;                  /* '<S149>/Discrete-Time Integrator' (Output 1)  */
  real_T Product;                      /* '<S12>/Product' (Output 1)  */
  real_T SwitchCurrents[9];           /* '<S1236>/SwitchCurrents' (Output 1)  */
  real_T itinit1;                      /* '<S94>/it init1' (Output 1)  */
  real_T Currentfilter;                /* '<S94>/Current filter' (Output 1)  */
  real_T DataTypeConversion2;    /* '<S94>/Data Type Conversion2' (Output 1)  */
  real_T itinit;                       /* '<S94>/it init' (Output 1)  */
  real_T Gain;                         /* '<S94>/Gain' (Output 1)  */
  real_T Switch7;                      /* '<S94>/Switch7' (Output 1)  */
  real_T R3;                           /* '<S94>/R3' (Output 1)  */
  real_T Switch2;                      /* '<S102>/Switch2' (Output 1)  */
  real_T DataTypeConversion1;    /* '<S94>/Data Type Conversion1' (Output 1)  */
  real_T DiscreteTimeIntegrator;
                              /* '<S99>/Discrete-Time Integrator' (Output 1)  */
  real_T Add3;                         /* '<S94>/Add3' (Output 1)  */
  real_T Memory2;                      /* '<S94>/Memory2' (Output 1)  */
  real_T Switch2_h;                    /* '<S100>/Switch2' (Output 1)  */
  real_T Kp;                           /* '<S132>/Kp' (Output 1)  */
  real_T UnitDelay1;                   /* '<S11>/Unit Delay1' (Output 1)  */
  real_T Divide;                       /* '<S11>/Divide' (Output 1)  */
  real_T Sum1;                         /* '<S12>/Sum1' (Output 1)  */
  real_T UnitDelay1_c;                 /* '<S12>/Unit Delay1' (Output 1)  */
  real_T Divide2;                      /* '<S12>/Divide2' (Output 1)  */
  real_T UnitDelay;                    /* '<S11>/Unit Delay' (Output 1)  */
  real_T Divide1;                      /* '<S11>/Divide1' (Output 1)  */
  real_T UnitDelay_o;                  /* '<S12>/Unit Delay' (Output 1)  */
  real_T Divide3;                      /* '<S12>/Divide3' (Output 1)  */
  real_T UnitDelay_oz[3];              /* '<S766>/Unit Delay' (Output 1)  */
  real_T SwitchCurrents_j[9];         /* '<S1254>/SwitchCurrents' (Output 1)  */
  real_T SFunction_o1;                 /* '<S1027>/S-Function' (Output 1)  */
  real_T SFunction_o2;                 /* '<S1027>/S-Function' (Output 2)  */
  real_T SFunction_o1_g;               /* '<S1039>/S-Function' (Output 1)  */
  real_T SFunction_o2_c;               /* '<S1039>/S-Function' (Output 2)  */
  real_T Sum3;                         /* '<S1027>/Sum3' (Output 1)  */
  real_T Gain2;                        /* '<S1027>/Gain2' (Output 1)  */
  real_T SFunction_o1_m;               /* '<S1025>/S-Function' (Output 1)  */
  real_T SFunction_o2_g;               /* '<S1025>/S-Function' (Output 2)  */
  real_T SFunction_o1_j;               /* '<S1037>/S-Function' (Output 1)  */
  real_T SFunction_o2_h;               /* '<S1037>/S-Function' (Output 2)  */
  real_T Sum3_m;                       /* '<S1025>/Sum3' (Output 1)  */
  real_T Gain2_i;                      /* '<S1025>/Gain2' (Output 1)  */
  real_T SFunction_o1_h;               /* '<S1026>/S-Function' (Output 1)  */
  real_T SFunction_o2_f;               /* '<S1026>/S-Function' (Output 2)  */
  real_T SFunction_o1_m4;              /* '<S1038>/S-Function' (Output 1)  */
  real_T SFunction_o2_a;               /* '<S1038>/S-Function' (Output 2)  */
  real_T Sum3_b;                       /* '<S1026>/Sum3' (Output 1)  */
  real_T Gain2_iz;                     /* '<S1026>/Gain2' (Output 1)  */
  real_T SFunction_o1_i;               /* '<S1091>/S-Function' (Output 1)  */
  real_T SFunction_o2_at;              /* '<S1091>/S-Function' (Output 2)  */
  real_T SFunction_o1_k;               /* '<S1079>/S-Function' (Output 1)  */
  real_T SFunction_o2_n;               /* '<S1079>/S-Function' (Output 2)  */
  real_T Sum3_c;                       /* '<S1091>/Sum3' (Output 1)  */
  real_T Gain2_m;                      /* '<S1091>/Gain2' (Output 1)  */
  real_T SFunction_o1_id;              /* '<S1089>/S-Function' (Output 1)  */
  real_T SFunction_o2_n4;              /* '<S1089>/S-Function' (Output 2)  */
  real_T SFunction_o1_d;               /* '<S1077>/S-Function' (Output 1)  */
  real_T SFunction_o2_l;               /* '<S1077>/S-Function' (Output 2)  */
  real_T Sum3_d;                       /* '<S1089>/Sum3' (Output 1)  */
  real_T Gain2_o;                      /* '<S1089>/Gain2' (Output 1)  */
  real_T SFunction_o1_hw;              /* '<S1090>/S-Function' (Output 1)  */
  real_T SFunction_o2_k;               /* '<S1090>/S-Function' (Output 2)  */
  real_T SFunction_o1_hx;              /* '<S1078>/S-Function' (Output 1)  */
  real_T SFunction_o2_m;               /* '<S1078>/S-Function' (Output 2)  */
  real_T Sum3_p;                       /* '<S1090>/Sum3' (Output 1)  */
  real_T Gain2_p;                      /* '<S1090>/Gain2' (Output 1)  */
  real_T SFunction_o1_p;               /* '<S1105>/S-Function' (Output 1)  */
  real_T SFunction_o2_i;               /* '<S1105>/S-Function' (Output 2)  */
  real_T SFunction_o1_dv;              /* '<S1117>/S-Function' (Output 1)  */
  real_T SFunction_o2_mh;              /* '<S1117>/S-Function' (Output 2)  */
  real_T Sum3_bq;                      /* '<S1105>/Sum3' (Output 1)  */
  real_T Gain2_pp;                     /* '<S1105>/Gain2' (Output 1)  */
  real_T Sum3_i;                       /* '<S1117>/Sum3' (Output 1)  */
  real_T Gain2_a;                      /* '<S1117>/Gain2' (Output 1)  */
  real_T SFunction_o1_f;               /* '<S1103>/S-Function' (Output 1)  */
  real_T SFunction_o2_e;               /* '<S1103>/S-Function' (Output 2)  */
  real_T SFunction_o1_b;               /* '<S1115>/S-Function' (Output 1)  */
  real_T SFunction_o2_d;               /* '<S1115>/S-Function' (Output 2)  */
  real_T Sum3_e;                       /* '<S1103>/Sum3' (Output 1)  */
  real_T Gain2_oz;                     /* '<S1103>/Gain2' (Output 1)  */
  real_T Sum3_f;                       /* '<S1115>/Sum3' (Output 1)  */
  real_T Gain2_c;                      /* '<S1115>/Gain2' (Output 1)  */
  real_T SFunction_o1_c;               /* '<S1104>/S-Function' (Output 1)  */
  real_T SFunction_o2_gb;              /* '<S1104>/S-Function' (Output 2)  */
  real_T SFunction_o1_g1;              /* '<S1116>/S-Function' (Output 1)  */
  real_T SFunction_o2_dp;              /* '<S1116>/S-Function' (Output 2)  */
  real_T Sum3_ci;                      /* '<S1104>/Sum3' (Output 1)  */
  real_T Gain2_f;                      /* '<S1104>/Gain2' (Output 1)  */
  real_T Sum3_g;                       /* '<S1116>/Sum3' (Output 1)  */
  real_T Gain2_a3;                     /* '<S1116>/Gain2' (Output 1)  */
  real_T SFunction_o1_mu;              /* '<S1131>/S-Function' (Output 1)  */
  real_T SFunction_o2_mq;              /* '<S1131>/S-Function' (Output 2)  */
  real_T SFunction_o1_cs;              /* '<S1143>/S-Function' (Output 1)  */
  real_T SFunction_o2_kk;              /* '<S1143>/S-Function' (Output 2)  */
  real_T Sum3_ga;                      /* '<S1131>/Sum3' (Output 1)  */
  real_T Gain2_p1;                     /* '<S1131>/Gain2' (Output 1)  */
  real_T SFunction_o1_n;               /* '<S1129>/S-Function' (Output 1)  */
  real_T SFunction_o2_an;              /* '<S1129>/S-Function' (Output 2)  */
  real_T SFunction_o1_cn;              /* '<S1141>/S-Function' (Output 1)  */
  real_T SFunction_o2_da;              /* '<S1141>/S-Function' (Output 2)  */
  real_T Sum3_cq;                      /* '<S1129>/Sum3' (Output 1)  */
  real_T Gain2_pe;                     /* '<S1129>/Gain2' (Output 1)  */
  real_T SFunction_o1_cd;              /* '<S1130>/S-Function' (Output 1)  */
  real_T SFunction_o2_lv;              /* '<S1130>/S-Function' (Output 2)  */
  real_T SFunction_o1_fg;              /* '<S1142>/S-Function' (Output 1)  */
  real_T SFunction_o2_nr;              /* '<S1142>/S-Function' (Output 2)  */
  real_T Sum3_cz;                      /* '<S1130>/Sum3' (Output 1)  */
  real_T Gain2_cf;                     /* '<S1130>/Gain2' (Output 1)  */
  real_T wt;                           /* '<S725>/Sum' (Output 1)  */
  real_T Sum5[3];                      /* '<S725>/Sum5' (Output 1)  */
  real_T SFunction[8];                 /* '<S963>/S-Function' (Output 1)  */
  real_T Switch;                       /* '<S13>/Switch' (Output 1)  */
  real_T LookUpTable;                  /* '<S166>/Look-Up Table' (Output 1)  */
  real_T Switch3;                      /* '<S165>/Switch3' (Output 1)  */
  real_T Switch1;                      /* '<S13>/Switch1' (Output 1)  */
  real_T LookUpTable_i;                /* '<S170>/Look-Up Table' (Output 1)  */
  real_T Switch3_e;                    /* '<S169>/Switch3' (Output 1)  */
  real_T Switch2_g;                    /* '<S13>/Switch2' (Output 1)  */
  real_T LookUpTable_n;                /* '<S174>/Look-Up Table' (Output 1)  */
  real_T Switch3_l;                    /* '<S173>/Switch3' (Output 1)  */
  real_T Switch_m;                     /* '<S17>/Switch' (Output 1)  */
  real_T LookUpTable_i1;               /* '<S234>/Look-Up Table' (Output 1)  */
  real_T Switch3_g;                    /* '<S233>/Switch3' (Output 1)  */
  real_T Switch1_g;                    /* '<S17>/Switch1' (Output 1)  */
  real_T LookUpTable_b;                /* '<S238>/Look-Up Table' (Output 1)  */
  real_T Switch3_n;                    /* '<S237>/Switch3' (Output 1)  */
  real_T Switch2_gl;                   /* '<S17>/Switch2' (Output 1)  */
  real_T LookUpTable_l;                /* '<S242>/Look-Up Table' (Output 1)  */
  real_T Switch3_a;                    /* '<S241>/Switch3' (Output 1)  */
  real_T Switch_g;                     /* '<S18>/Switch' (Output 1)  */
  real_T LookUpTable_p;                /* '<S251>/Look-Up Table' (Output 1)  */
  real_T Switch3_c;                    /* '<S250>/Switch3' (Output 1)  */
  real_T Switch1_gq;                   /* '<S18>/Switch1' (Output 1)  */
  real_T LookUpTable_d;                /* '<S255>/Look-Up Table' (Output 1)  */
  real_T Switch3_nm;                   /* '<S254>/Switch3' (Output 1)  */
  real_T Switch2_o;                    /* '<S18>/Switch2' (Output 1)  */
  real_T LookUpTable_c;                /* '<S259>/Look-Up Table' (Output 1)  */
  real_T Switch3_f;                    /* '<S258>/Switch3' (Output 1)  */
  real_T StateSpace_o1[90];            /* '<S1227>/State-Space' (Output 1)  */
  real_T StateSpace_o2[9];             /* '<S1227>/State-Space' (Output 2)  */
  real_T Sum4;                         /* '<S758>/Sum4' (Output 1)  */
  real_T Divide_d;                     /* '<S69>/Divide' (Output 1)  */
  real_T RateLimiter;                  /* '<S72>/Rate Limiter' (Output 1)  */
  real_T IL;                           /* '<S983>/Product1' (Output 1)  */
  real_T UnitDelay_m;                  /* '<S987>/Unit Delay' (Output 1)  */
  real_T eee;                          /* '<S977>/eee' (Output 1)  */
  real_T LookUpTable_pt;               /* '<S119>/Look-Up Table' (Output 1)  */
  real_T Switch3_ga;                   /* '<S118>/Switch3' (Output 1)  */
  real_T DataTypeConversion;     /* '<S124>/Data Type Conversion' (Output 1)  */
  real_T LookUpTable_ls;               /* '<S123>/Look-Up Table' (Output 1)  */
  real_T Switch3_er;                   /* '<S122>/Switch3' (Output 1)  */
  real_T LookUpTable_dn;               /* '<S264>/Look-Up Table' (Output 1)  */
  real_T Switch3_cy;                   /* '<S263>/Switch3' (Output 1)  */
  real_T LookUpTable_j;                /* '<S268>/Look-Up Table' (Output 1)  */
  real_T Switch3_m;                    /* '<S267>/Switch3' (Output 1)  */
  real_T LookUpTable_n5;               /* '<S272>/Look-Up Table' (Output 1)  */
  real_T Switch3_i;                    /* '<S271>/Switch3' (Output 1)  */
  real_T LookUpTable_h;                /* '<S276>/Look-Up Table' (Output 1)  */
  real_T Switch3_j;                    /* '<S275>/Switch3' (Output 1)  */
  real_T LookUpTable_lz;               /* '<S280>/Look-Up Table' (Output 1)  */
  real_T Switch3_g2;                   /* '<S279>/Switch3' (Output 1)  */
  real_T LookUpTable_m;                /* '<S284>/Look-Up Table' (Output 1)  */
  real_T Switch3_l3;                   /* '<S283>/Switch3' (Output 1)  */
  real_T StateSpace_o1_o[29];          /* '<S1220>/State-Space' (Output 1)  */
  real_T StateSpace_o2_d[9];           /* '<S1220>/State-Space' (Output 2)  */
  real_T donotdeletethisgain; /* '<S144>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_g;
                              /* '<S138>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_j;
                              /* '<S986>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_h;
                              /* '<S984>/do not delete this gain' (Output 1)  */
  real_T Idiode;                       /* '<S980>/Product' (Output 1)  */
  real_T donotdeletethisgain_k;
                              /* '<S109>/do not delete this gain' (Output 1)  */
  real_T Kv1[3];                       /* '<S29>/Kv1' (Output 1)  */
  real_T Kv[3];                        /* '<S29>/Kv' (Output 1)  */
  real_T Sum4_k;                       /* '<S641>/Sum4' (Output 1)  */
  real_T puV;                          /* '<S641>/pu->V' (Output 1)  */
  real_T Memory[3];                    /* '<S642>/Memory' (Output 1)  */
  real_T donotdeletethisgain_o;
                              /* '<S115>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_p;
                              /* '<S116>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_h1;
                              /* '<S111>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_g5;
                              /* '<S140>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_pv;
                              /* '<S139>/do not delete this gain' (Output 1)  */
  real_T SwitchCurrents_ju[3];        /* '<S1232>/SwitchCurrents' (Output 1)  */
  real_T Sum3_n;                       /* '<S1143>/Sum3' (Output 1)  */
  real_T Gain2_j;                      /* '<S1143>/Gain2' (Output 1)  */
  real_T Sum3_ix;                      /* '<S1141>/Sum3' (Output 1)  */
  real_T Gain2_g;                      /* '<S1141>/Gain2' (Output 1)  */
  real_T Sum3_o;                       /* '<S1142>/Sum3' (Output 1)  */
  real_T Gain2_io;                     /* '<S1142>/Gain2' (Output 1)  */
  real_T Switch_f;                     /* '<S15>/Switch' (Output 1)  */
  real_T LookUpTable_he;               /* '<S200>/Look-Up Table' (Output 1)  */
  real_T Switch3_b;                    /* '<S199>/Switch3' (Output 1)  */
  real_T Switch1_l;                    /* '<S15>/Switch1' (Output 1)  */
  real_T LookUpTable_heh;              /* '<S204>/Look-Up Table' (Output 1)  */
  real_T Switch3_bt;                   /* '<S203>/Switch3' (Output 1)  */
  real_T Switch2_m;                    /* '<S15>/Switch2' (Output 1)  */
  real_T LookUpTable_nz;               /* '<S208>/Look-Up Table' (Output 1)  */
  real_T Switch3_h;                    /* '<S207>/Switch3' (Output 1)  */
  real_T StateSpace_o1_od[15];         /* '<S1219>/State-Space' (Output 1)  */
  real_T StateSpace_o2_p[3];           /* '<S1219>/State-Space' (Output 2)  */
  real_T donotdeletethisgain_a;/* '<S58>/do not delete this gain' (Output 1)  */
  real_T D_Pa_kW;                      /* '<S40>/W_to_kW' (Output 1)  */
  real_T donotdeletethisgain_ka;
                               /* '<S65>/do not delete this gain' (Output 1)  */
  real_T D_Pb_kW;                      /* '<S40>/W_to_kW1' (Output 1)  */
  real_T donotdeletethisgain_k0;
                               /* '<S68>/do not delete this gain' (Output 1)  */
  real_T D_Pc_kW;                      /* '<S40>/W_to_kW2' (Output 1)  */
  real_T Kv1_d[3];                     /* '<S31>/Kv1' (Output 1)  */
  real_T Kv_f[3];                      /* '<S31>/Kv' (Output 1)  */
  real_T Sum4_c;                       /* '<S665>/Sum4' (Output 1)  */
  real_T puV_k;                        /* '<S665>/pu->V' (Output 1)  */
  real_T Memory_a[3];                  /* '<S666>/Memory' (Output 1)  */
  real_T SwitchCurrents_e[3];         /* '<S1250>/SwitchCurrents' (Output 1)  */
  real_T Sum3_o2;                      /* '<S1079>/Sum3' (Output 1)  */
  real_T Gain2_k;                      /* '<S1079>/Gain2' (Output 1)  */
  real_T Sum3_l;                       /* '<S1077>/Sum3' (Output 1)  */
  real_T Gain2_n;                      /* '<S1077>/Gain2' (Output 1)  */
  real_T Sum3_mm;                      /* '<S1078>/Sum3' (Output 1)  */
  real_T Gain2_jj;                     /* '<S1078>/Gain2' (Output 1)  */
  real_T Switch_d;                     /* '<S14>/Switch' (Output 1)  */
  real_T LookUpTable_mg;               /* '<S183>/Look-Up Table' (Output 1)  */
  real_T Switch3_no;                   /* '<S182>/Switch3' (Output 1)  */
  real_T Switch1_e;                    /* '<S14>/Switch1' (Output 1)  */
  real_T LookUpTable_e;                /* '<S187>/Look-Up Table' (Output 1)  */
  real_T Switch3_nl;                   /* '<S186>/Switch3' (Output 1)  */
  real_T Switch2_b;                    /* '<S14>/Switch2' (Output 1)  */
  real_T LookUpTable_g;                /* '<S191>/Look-Up Table' (Output 1)  */
  real_T Switch3_af;                   /* '<S190>/Switch3' (Output 1)  */
  real_T StateSpace_o1_ok[15];         /* '<S1226>/State-Space' (Output 1)  */
  real_T StateSpace_o2_m[3];           /* '<S1226>/State-Space' (Output 2)  */
  real_T donotdeletethisgain_b;/* '<S54>/do not delete this gain' (Output 1)  */
  real_T D_Pa_kW_d;                    /* '<S35>/W_to_kW' (Output 1)  */
  real_T donotdeletethisgain_i;/* '<S61>/do not delete this gain' (Output 1)  */
  real_T D_Pb_kW_a;                    /* '<S35>/W_to_kW1' (Output 1)  */
  real_T donotdeletethisgain_d;/* '<S66>/do not delete this gain' (Output 1)  */
  real_T D_Pc_kW_k;                    /* '<S35>/W_to_kW2' (Output 1)  */
  real_T donotdeletethisgain_gl;
                               /* '<S57>/do not delete this gain' (Output 1)  */
  real_T D_Pa_kW_e;                    /* '<S37>/W_to_kW' (Output 1)  */
  real_T donotdeletethisgain_n;/* '<S64>/do not delete this gain' (Output 1)  */
  real_T D_Pb_kW_p;                    /* '<S37>/W_to_kW1' (Output 1)  */
  real_T donotdeletethisgain_bb;
                               /* '<S67>/do not delete this gain' (Output 1)  */
  real_T D_Pc_kW_a;                    /* '<S37>/W_to_kW2' (Output 1)  */
  real_T SwitchCurrents_k[3];         /* '<S1258>/SwitchCurrents' (Output 1)  */
  real_T Sum3_j;                       /* '<S1039>/Sum3' (Output 1)  */
  real_T Gain2_ca;                     /* '<S1039>/Gain2' (Output 1)  */
  real_T Sum3_mms;                     /* '<S1037>/Sum3' (Output 1)  */
  real_T Gain2_ij;                     /* '<S1037>/Gain2' (Output 1)  */
  real_T Sum3_oc;                      /* '<S1038>/Sum3' (Output 1)  */
  real_T Gain2_a4;                     /* '<S1038>/Gain2' (Output 1)  */
  real_T wt_m;                         /* '<S955>/Sum' (Output 1)  */
  real_T Sum5_l[3];                    /* '<S955>/Sum5' (Output 1)  */
  real_T Switch_b;                     /* '<S16>/Switch' (Output 1)  */
  real_T LookUpTable_o;                /* '<S217>/Look-Up Table' (Output 1)  */
  real_T Switch3_fp;                   /* '<S216>/Switch3' (Output 1)  */
  real_T Switch1_ef;                   /* '<S16>/Switch1' (Output 1)  */
  real_T LookUpTable_gu;               /* '<S221>/Look-Up Table' (Output 1)  */
  real_T Switch3_k;                    /* '<S220>/Switch3' (Output 1)  */
  real_T Switch2_n;                    /* '<S16>/Switch2' (Output 1)  */
  real_T LookUpTable_dd;               /* '<S225>/Look-Up Table' (Output 1)  */
  real_T Switch3_nf;                   /* '<S224>/Switch3' (Output 1)  */
  real_T StateSpace_o1_k[21];          /* '<S1228>/State-Space' (Output 1)  */
  real_T StateSpace_o2_h[3];           /* '<S1228>/State-Space' (Output 2)  */
  real_T donotdeletethisgain_af;
                               /* '<S53>/do not delete this gain' (Output 1)  */
  real_T D_Pa_kW_b;                    /* '<S36>/W_to_kW' (Output 1)  */
  real_T donotdeletethisgain_h0;
                               /* '<S60>/do not delete this gain' (Output 1)  */
  real_T D_Pb_kW_c;                    /* '<S36>/W_to_kW1' (Output 1)  */
  real_T donotdeletethisgain_oh;/* '<S6>/do not delete this gain' (Output 1)  */
  real_T D_Pc_kW_m;                    /* '<S36>/W_to_kW2' (Output 1)  */
  real_T donotdeletethisgain_jv;
                               /* '<S55>/do not delete this gain' (Output 1)  */
  real_T D_Pa_kW_c;                    /* '<S38>/W_to_kW' (Output 1)  */
  real_T donotdeletethisgain_ph;
                               /* '<S62>/do not delete this gain' (Output 1)  */
  real_T D_Pb_kW_cp;                   /* '<S38>/W_to_kW1' (Output 1)  */
  real_T donotdeletethisgain_bm;/* '<S7>/do not delete this gain' (Output 1)  */
  real_T D_Pc_kW_ml;                   /* '<S38>/W_to_kW2' (Output 1)  */
  real_T Kv1_j[3];                     /* '<S28>/Kv1' (Output 1)  */
  real_T Kv_o[3];                      /* '<S28>/Kv' (Output 1)  */
  real_T Sum4_f;                       /* '<S701>/Sum4' (Output 1)  */
  real_T puV_k0;                       /* '<S701>/pu->V' (Output 1)  */
  real_T Memory1[3];                   /* '<S702>/Memory1' (Output 1)  */
  real_T Kv1_f[3];                     /* '<S26>/Kv1' (Output 1)  */
  real_T Kv_fg[3];                     /* '<S26>/Kv' (Output 1)  */
  real_T Sum4_i;                       /* '<S629>/Sum4' (Output 1)  */
  real_T puV_i;                        /* '<S629>/pu->V' (Output 1)  */
  real_T Memory_ay[3];                 /* '<S630>/Memory' (Output 1)  */
  real_T Kv1_n[3];                     /* '<S32>/Kv1' (Output 1)  */
  real_T Kv_l[3];                      /* '<S32>/Kv' (Output 1)  */
  real_T Sum4_cz;                      /* '<S677>/Sum4' (Output 1)  */
  real_T puV_c;                        /* '<S677>/pu->V' (Output 1)  */
  real_T Memory_n[3];                  /* '<S678>/Memory' (Output 1)  */
  real_T donotdeletethisgain_a4;/* '<S5>/do not delete this gain' (Output 1)  */
  real_T D_Pa_kW_p;                    /* '<S34>/W_to_kW' (Output 1)  */
  real_T donotdeletethisgain_e;/* '<S59>/do not delete this gain' (Output 1)  */
  real_T D_Pb_kW_e;                    /* '<S34>/W_to_kW1' (Output 1)  */
  real_T donotdeletethisgain_bmy;
                               /* '<S52>/do not delete this gain' (Output 1)  */
  real_T D_Pc_kW_i;                    /* '<S34>/W_to_kW2' (Output 1)  */
  real_T Kv1_i[3];                     /* '<S25>/Kv1' (Output 1)  */
  real_T Kv_j[3];                      /* '<S25>/Kv' (Output 1)  */
  real_T Sum4_f3;                      /* '<S407>/Sum4' (Output 1)  */
  real_T puV_it;                       /* '<S407>/pu->V' (Output 1)  */
  real_T Memory_l[3];                  /* '<S408>/Memory' (Output 1)  */
  real_T donotdeletethisgain_ea;
                               /* '<S56>/do not delete this gain' (Output 1)  */
  real_T D_Pa_kW_i;                    /* '<S39>/W_to_kW' (Output 1)  */
  real_T donotdeletethisgain_p3;
                               /* '<S63>/do not delete this gain' (Output 1)  */
  real_T D_Pb_kW_j;                    /* '<S39>/W_to_kW1' (Output 1)  */
  real_T donotdeletethisgain_of;/* '<S8>/do not delete this gain' (Output 1)  */
  real_T D_Pc_kW_mn;                   /* '<S39>/W_to_kW2' (Output 1)  */
  real_T Kv1_g[3];                     /* '<S30>/Kv1' (Output 1)  */
  real_T Kv_i[3];                      /* '<S30>/Kv' (Output 1)  */
  real_T Sum4_a;                       /* '<S653>/Sum4' (Output 1)  */
  real_T puV_g;                        /* '<S653>/pu->V' (Output 1)  */
  real_T Memory_j[3];                  /* '<S654>/Memory' (Output 1)  */
  real_T Integ4;                       /* '<S717>/Integ4' (Output 1)  */
  real_T K1;                           /* '<S717>/K1' (Output 1)  */
  real_T SFunction_e;                  /* '<S718>/S-Function' (Output 1)  */
  real_T UnitDelay_a;                  /* '<S717>/Unit Delay' (Output 1)  */
  real_T Switch_l;                     /* '<S717>/Switch' (Output 1)  */
  real_T toKw;                         /* '<S713>/to Kw' (Output 1)  */
  real_T toKw1;                        /* '<S713>/to Kw1' (Output 1)  */
  real_T donotdeletethisgain_b5;
                               /* '<S85>/do not delete this gain' (Output 1)  */
  real_T integrator;                   /* '<S719>/integrator' (Output 1)  */
  real_T TransportDelay;              /* '<S719>/Transport Delay' (Output 1)  */
  real_T Memory_au;                    /* '<S719>/Memory' (Output 1)  */
  real_T Switch_g1;                    /* '<S719>/Switch' (Output 1)  */
  real_T PowerkW;                      /* '<S48>/Gain' (Output 1)  */
  real_T donotdeletethisgain_m;
                              /* '<S145>/do not delete this gain' (Output 1)  */
  real_T Pmean_PVkW;                   /* '<S720>/W-kW' (Output 1)  */
  real_T toKw1_b;                      /* '<S715>/to Kw1' (Output 1)  */
  real_T Derivative;                   /* '<S166>/Derivative' (Output 1)  */
  real_T Derivative_h;                 /* '<S170>/Derivative' (Output 1)  */
  real_T Derivative_n;                 /* '<S174>/Derivative' (Output 1)  */
  real_T Derivative_nk;                /* '<S183>/Derivative' (Output 1)  */
  real_T Derivative_i;                 /* '<S187>/Derivative' (Output 1)  */
  real_T Derivative_p;                 /* '<S191>/Derivative' (Output 1)  */
  real_T Derivative_n5;                /* '<S200>/Derivative' (Output 1)  */
  real_T Derivative_d;                 /* '<S204>/Derivative' (Output 1)  */
  real_T Derivative_a;                 /* '<S208>/Derivative' (Output 1)  */
  real_T Derivative_nd;                /* '<S217>/Derivative' (Output 1)  */
  real_T Derivative_e;                 /* '<S221>/Derivative' (Output 1)  */
  real_T Derivative_ht;                /* '<S225>/Derivative' (Output 1)  */
  real_T Derivative_m;                 /* '<S234>/Derivative' (Output 1)  */
  real_T Derivative_b;                 /* '<S238>/Derivative' (Output 1)  */
  real_T Derivative_nq;                /* '<S242>/Derivative' (Output 1)  */
  real_T Derivative_c;                 /* '<S251>/Derivative' (Output 1)  */
  real_T Derivative_ia;                /* '<S255>/Derivative' (Output 1)  */
  real_T Derivative_ix;                /* '<S259>/Derivative' (Output 1)  */
  real_T Derivative_l;                 /* '<S264>/Derivative' (Output 1)  */
  real_T Derivative_pa;                /* '<S268>/Derivative' (Output 1)  */
  real_T Derivative_cp;                /* '<S272>/Derivative' (Output 1)  */
  real_T Derivative_cpl;               /* '<S276>/Derivative' (Output 1)  */
  real_T Derivative_j;                 /* '<S280>/Derivative' (Output 1)  */
  real_T Derivative_cx;                /* '<S284>/Derivative' (Output 1)  */
  real_T donotdeletethisgain_ku;
                               /* '<S93>/do not delete this gain' (Output 1)  */
  real_T Gain1;                        /* '<S99>/Gain1' (Output 1)  */
  real_T Gain2_d;                      /* '<S94>/Gain2' (Output 1)  */
  real_T R1;                           /* '<S94>/R1' (Output 1)  */
  real_T Derivative_k;                 /* '<S119>/Derivative' (Output 1)  */
  real_T Derivative_bq;                /* '<S123>/Derivative' (Output 1)  */
  real_T donotdeletethisgain_p2;
                              /* '<S108>/do not delete this gain' (Output 1)  */
  real_T Ki;                           /* '<S132>/Ki' (Output 1)  */
  real_T error;                        /* '<S114>/Sum' (Output 1)  */
  real_T donotdeletethisgain_on;
                              /* '<S117>/do not delete this gain' (Output 1)  */
  real_T integrator_k;                 /* '<S130>/integrator' (Output 1)  */
  real_T UnitDelay2;                   /* '<S11>/Unit Delay2' (Output 1)  */
  real_T integrator_p;                 /* '<S131>/integrator' (Output 1)  */
  real_T UnitDelay3;                   /* '<S11>/Unit Delay3' (Output 1)  */
  real_T Integ4_g;                     /* '<S152>/Integ4' (Output 1)  */
  real_T K1_d;                         /* '<S152>/K1' (Output 1)  */
  real_T SFunction_m;                  /* '<S153>/S-Function' (Output 1)  */
  real_T UnitDelay_g;                  /* '<S152>/Unit Delay' (Output 1)  */
  real_T Switch_dc;                    /* '<S152>/Switch' (Output 1)  */
  real_T Integ4_b;                     /* '<S154>/Integ4' (Output 1)  */
  real_T K1_j;                         /* '<S154>/K1' (Output 1)  */
  real_T SFunction_p;                  /* '<S155>/S-Function' (Output 1)  */
  real_T UnitDelay_d;                  /* '<S154>/Unit Delay' (Output 1)  */
  real_T Switch_l5;                    /* '<S154>/Switch' (Output 1)  */
  real_T error_i;                      /* '<S149>/Add1' (Output 1)  */
  real_T MPPTGain;                     /* '<S149>/MPPT  Gain' (Output 1)  */
  real_T integrator_j;                 /* '<S156>/integrator' (Output 1)  */
  real_T UnitDelay2_l;                 /* '<S12>/Unit Delay2' (Output 1)  */
  real_T UnitDelay3_e;                 /* '<S12>/Unit Delay3' (Output 1)  */
  real_T Integ4_k;                     /* '<S157>/Integ4' (Output 1)  */
  real_T K1_c;                         /* '<S157>/K1' (Output 1)  */
  real_T SFunction_i;                  /* '<S158>/S-Function' (Output 1)  */
  real_T Kv1_c[3];                     /* '<S27>/Kv1' (Output 1)  */
  real_T Memory_c[3];                  /* '<S690>/Memory' (Output 1)  */
  real_T Add;                          /* '<S48>/Add' (Output 1)  */
  real_T donotdeletethisgain_pl;
                              /* '<S764>/do not delete this gain' (Output 1)  */
  real_T Kv1_a[3];                     /* '<S760>/Kv1' (Output 1)  */
  real_T Kv_n[3];                      /* '<S760>/Kv' (Output 1)  */
  real_T Sum4_l;                       /* '<S765>/Sum4' (Output 1)  */
  real_T puV_ix;                       /* '<S765>/pu->V' (Output 1)  */
  real_T Gain1_k[3];                   /* '<S906>/Gain1' (Output 1)  */
  real_T Initial;                      /* '<S864>/Initial' (Output 1)  */
  real_T DiscreteTimeIntegrator_i;
                             /* '<S864>/Discrete-Time Integrator' (Output 1)  */
  real_T Switch_li[2];                 /* '<S905>/Switch' (Output 1)  */
  real_T Product3;                     /* '<S770>/Product3' (Output 1)  */
  real_T Product5;                     /* '<S770>/Product5' (Output 1)  */
  real_T Fcn3;                         /* '<S770>/Fcn3' (Output 1)  */
  real_T Product6[2];                  /* '<S770>/Product6' (Output 1)  */
  real_T Gain1_l[3];                   /* '<S900>/Gain1' (Output 1)  */
  real_T Switch_gd[2];                 /* '<S899>/Switch' (Output 1)  */
  real_T Sum1_i;                       /* '<S766>/Sum1' (Output 1)  */
  real_T FilterCoefficient;        /* '<S808>/Filter Coefficient' (Output 1)  */
  real_T Sum_l;                        /* '<S814>/Sum' (Output 1)  */
  real_T UnitDelay_j;                  /* '<S864>/Unit Delay' (Output 1)  */
  real_T Product_g;                    /* '<S771>/Product' (Output 1)  */
  real_T Add_e;                        /* '<S766>/Add' (Output 1)  */
  real_T Sum2;                         /* '<S766>/Sum2' (Output 1)  */
  real_T FilterCoefficient_j;      /* '<S852>/Filter Coefficient' (Output 1)  */
  real_T Sum_i;                        /* '<S858>/Sum' (Output 1)  */
  real_T Product_n;                    /* '<S772>/Product' (Output 1)  */
  real_T Add1;                         /* '<S766>/Add1' (Output 1)  */
  real_T Divide2_h;                    /* '<S766>/Divide2' (Output 1)  */
  real_T Divide3_l;                    /* '<S766>/Divide3' (Output 1)  */
  real_T Divide4;                      /* '<S766>/Divide4' (Output 1)  */
  real_T IntegralGain;                 /* '<S802>/Integral Gain' (Output 1)  */
  real_T IntegralGain_l;               /* '<S846>/Integral Gain' (Output 1)  */
  real_T Gain1_c[3];                   /* '<S894>/Gain1' (Output 1)  */
  real_T Switch_f3[2];                 /* '<S893>/Switch' (Output 1)  */
  real_T Integ4_m;                     /* '<S890>/Integ4' (Output 1)  */
  real_T Numberofsamplespercycle;
                          /* '<S890>/Number of samples per cycle' (Output 1)  */
  real_T RoundingFunction;          /* '<S890>/Rounding Function' (Output 1)  */
  real_T Delay;                        /* '<S890>/Gain' (Output 1)  */
  real_T SFunction_o;                  /* '<S892>/S-Function' (Output 1)  */
  real_T UnitDelay_f;                  /* '<S891>/Unit Delay' (Output 1)  */
  real_T Switch_dcz;                   /* '<S890>/Switch' (Output 1)  */
  real_T Divide_g;                     /* '<S864>/Divide' (Output 1)  */
  real_T Saturation1;                  /* '<S866>/Saturation1' (Output 1)  */
  real_T x1k1;                     /* '<S886>/A*x1(k) + B*u1(k) ' (Output 1)  */
  real_T x2k1;                      /* '<S886>/A*x2(k) + B*u2(k)' (Output 1)  */
  real_T yk;                           /* '<S886>/C*X(k)+D*u(k)' (Output 1)  */
  real_T Add1_n;                       /* '<S980>/Add1' (Output 1)  */
  real_T donotdeletethisgain_l;
                             /* '<S1029>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_c;
                             /* '<S1032>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_f;
                             /* '<S1035>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_fv;
                             /* '<S1041>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_kx;
                             /* '<S1044>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_da;
                             /* '<S1047>/do not delete this gain' (Output 1)  */
  real_T SFunction_o1_k4;              /* '<S1051>/S-Function' (Output 1)  */
  real_T SFunction_o2_hr;              /* '<S1051>/S-Function' (Output 2)  */
  real_T SFunction_o1_fr;              /* '<S1063>/S-Function' (Output 1)  */
  real_T SFunction_o2_kt;              /* '<S1063>/S-Function' (Output 2)  */
  real_T Sum3_fq;                      /* '<S1051>/Sum3' (Output 1)  */
  real_T Gain2_am;                     /* '<S1051>/Gain2' (Output 1)  */
  real_T StateSpace;                   /* '<S1218>/State-Space' (Output 1)  */
  real_T donotdeletethisgain_fb;
                             /* '<S1055>/do not delete this gain' (Output 1)  */
  real_T SFunction_o1_a;               /* '<S1052>/S-Function' (Output 1)  */
  real_T SFunction_o2_p;               /* '<S1052>/S-Function' (Output 2)  */
  real_T SFunction_o1_mr;              /* '<S1064>/S-Function' (Output 1)  */
  real_T SFunction_o2_gg;              /* '<S1064>/S-Function' (Output 2)  */
  real_T Sum3_or;                      /* '<S1052>/Sum3' (Output 1)  */
  real_T Gain2_np;                     /* '<S1052>/Gain2' (Output 1)  */
  real_T StateSpace_i;                 /* '<S1221>/State-Space' (Output 1)  */
  real_T donotdeletethisgain_p2s;
                             /* '<S1058>/do not delete this gain' (Output 1)  */
  real_T SFunction_o1_m4o;             /* '<S1053>/S-Function' (Output 1)  */
  real_T SFunction_o2_dv;              /* '<S1053>/S-Function' (Output 2)  */
  real_T SFunction_o1_jf;              /* '<S1065>/S-Function' (Output 1)  */
  real_T SFunction_o2_hv;              /* '<S1065>/S-Function' (Output 2)  */
  real_T Sum3_a;                       /* '<S1053>/Sum3' (Output 1)  */
  real_T Gain2_d4;                     /* '<S1053>/Gain2' (Output 1)  */
  real_T StateSpace_o;                 /* '<S1222>/State-Space' (Output 1)  */
  real_T donotdeletethisgain_nf;
                             /* '<S1061>/do not delete this gain' (Output 1)  */
  real_T Sum3_k;                       /* '<S1063>/Sum3' (Output 1)  */
  real_T Gain2_jt;                     /* '<S1063>/Gain2' (Output 1)  */
  real_T StateSpace_o0;                /* '<S1223>/State-Space' (Output 1)  */
  real_T donotdeletethisgain_f4;
                             /* '<S1067>/do not delete this gain' (Output 1)  */
  real_T Sum3_gy;                      /* '<S1064>/Sum3' (Output 1)  */
  real_T Gain2_ck;                     /* '<S1064>/Gain2' (Output 1)  */
  real_T StateSpace_b;                 /* '<S1224>/State-Space' (Output 1)  */
  real_T donotdeletethisgain_ox;
                             /* '<S1070>/do not delete this gain' (Output 1)  */
  real_T Sum3_ou;                      /* '<S1065>/Sum3' (Output 1)  */
  real_T Gain2_f4;                     /* '<S1065>/Gain2' (Output 1)  */
  real_T StateSpace_n;                 /* '<S1225>/State-Space' (Output 1)  */
  real_T donotdeletethisgain_fj;
                             /* '<S1073>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_pp;
                             /* '<S1081>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_jz;
                             /* '<S1084>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_jt;
                             /* '<S1087>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_b4;
                             /* '<S1093>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_mt;
                             /* '<S1096>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_hx;
                             /* '<S1099>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_i2;
                             /* '<S1107>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_c5;
                             /* '<S1110>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_p1;
                             /* '<S1113>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_fx;
                             /* '<S1119>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_bt;
                             /* '<S1122>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_gw;
                             /* '<S1125>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_nr;
                             /* '<S1133>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_j2;
                             /* '<S1136>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_ei;
                             /* '<S1139>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_el;
                             /* '<S1145>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_bj;
                             /* '<S1148>/do not delete this gain' (Output 1)  */
  real_T donotdeletethisgain_hi;
                             /* '<S1151>/do not delete this gain' (Output 1)  */
  real_T Fcn;                          /* '<S916>/Fcn' (Output 1)  */
  real_T Fcn1;                         /* '<S916>/Fcn1' (Output 1)  */
  real_T Fcn_g;                        /* '<S915>/Fcn' (Output 1)  */
  real_T Fcn1_n;                       /* '<S915>/Fcn1' (Output 1)  */
  real_T Sum5_m;                       /* '<S890>/Sum5' (Output 1)  */
  real_T Gain1_n[3];                   /* '<S881>/Gain1' (Output 1)  */
  real_T Switch_p[2];                  /* '<S880>/Switch' (Output 1)  */
  real_T Integ4_j;                     /* '<S874>/Integ4' (Output 1)  */
  real_T Numberofsamplespercycle_e;
                          /* '<S874>/Number of samples per cycle' (Output 1)  */
  real_T RoundingFunction_n;        /* '<S874>/Rounding Function' (Output 1)  */
  real_T Delay_d;                      /* '<S874>/Gain' (Output 1)  */
  real_T SFunction_h;                  /* '<S876>/S-Function' (Output 1)  */
  real_T UnitDelay_k;                  /* '<S875>/Unit Delay' (Output 1)  */
  real_T Switch_j;                     /* '<S874>/Switch' (Output 1)  */
  real_T Integ4_p;                     /* '<S877>/Integ4' (Output 1)  */
  real_T Numberofsamplespercycle_a;
                          /* '<S877>/Number of samples per cycle' (Output 1)  */
  real_T RoundingFunction_e;        /* '<S877>/Rounding Function' (Output 1)  */
  real_T Delay_c;                      /* '<S877>/Gain' (Output 1)  */
  real_T SFunction_k;                  /* '<S879>/S-Function' (Output 1)  */
  real_T UnitDelay_c;                  /* '<S878>/Unit Delay' (Output 1)  */
  real_T Switch_my;                    /* '<S877>/Switch' (Output 1)  */
  real_T ComplextoMagnitudeAngle_o2;
                           /* '<S870>/Complex to Magnitude-Angle' (Output 2)  */
  real_T MathFunction;                 /* '<S865>/Math Function' (Output 1)  */
  real_T Sum5_f;                       /* '<S877>/Sum5' (Output 1)  */
  real_T Sum5_fp;                      /* '<S874>/Sum5' (Output 1)  */
  real_T Gain_o;                       /* '<S719>/Gain' (Output 1)  */
  real_T Sum5_o;                       /* '<S717>/Sum5' (Output 1)  */
  real_T Sum5_mr;                      /* '<S154>/Sum5' (Output 1)  */
  real_T Sum5_i;                       /* '<S152>/Sum5' (Output 1)  */
  real_T Switch_o;                     /* '<S102>/Switch' (Output 1)  */
  real_T Switch_le;                    /* '<S101>/Switch' (Output 1)  */
  real_T Switch_jb;                    /* '<S100>/Switch' (Output 1)  */
  real_T LiIon;                        /* '<S99>/Li-Ion' (Output 1)  */
  real_T ChargeLeadAcid;              /* '<S98>/Charge Lead-Acid' (Output 1)  */
  real_T ChargeLiIon;                  /* '<S98>/Charge Li-Ion' (Output 1)  */
  real_T ChargeNiCD;                   /* '<S98>/Charge NiCD' (Output 1)  */
  real_T ChargeNiMH;                   /* '<S98>/Charge NiMH' (Output 1)  */
  real_T Gain_e[2];                    /* '<S770>/Gain' (Output 1)  */
  real_T Switch_a[2];                  /* '<S912>/Switch' (Output 1)  */
  real_T Gain3[3];                     /* '<S894>/Gain3' (Output 1)  */
  real_T Gain3_p[3];                   /* '<S881>/Gain3' (Output 1)  */
  real_T Saturation_m;                 /* '<S865>/Saturation' (Output 1)  */
  real_T Sum_p;                        /* '<S719>/Sum' (Output 1)  */
  real_T Correction;                   /* '<S717>/Sum1' (Output 1)  */
  real_T Correction_p;                 /* '<S154>/Sum1' (Output 1)  */
  real_T Correction_l;                 /* '<S152>/Sum1' (Output 1)  */
  real_T Fcn6;                         /* '<S94>/Fcn6' (Output 1)  */
  real_T Saturation_k;                 /* '<S99>/Saturation' (Output 1)  */
  real_T Product3_j[4];                /* '<S98>/Product3' (Output 1)  */
  real_T Product_m[4];                 /* '<S98>/Product' (Output 1)  */
  real_T Product2[4];                  /* '<S98>/Product2' (Output 1)  */
  real_T Product1[4];                  /* '<S98>/Product1' (Output 1)  */
  real_T Sum_k;                        /* '<S770>/Sum' (Output 1)  */
  real_T C12;                          /* '<S889>/C12' (Output 1)  */
  real_T Product4;                     /* '<S891>/Product4' (Output 1)  */
  real_T Product4_h;                   /* '<S878>/Product4' (Output 1)  */
  real_T Product4_b;                   /* '<S875>/Product4' (Output 1)  */
  real_T Mean;                         /* '<S717>/Product' (Output 1)  */
  real_T Sum7;                         /* '<S717>/Sum7' (Output 1)  */
  real_T Mean_m;                       /* '<S154>/Product' (Output 1)  */
  real_T Sum7_j;                       /* '<S154>/Sum7' (Output 1)  */
  real_T Mean_mu;                      /* '<S152>/Product' (Output 1)  */
  real_T Sum7_i;                       /* '<S152>/Sum7' (Output 1)  */
  real_T Product1_l[3];                /* '<S955>/Product1' (Output 1)  */
  real_T C11;                          /* '<S889>/C11' (Output 1)  */
  real_T Duk;                          /* '<S886>/D*u(k)' (Output 1)  */
  real_T Sum7_p;                       /* '<S890>/Sum7' (Output 1)  */
  real_T Sum7_f;                       /* '<S877>/Sum7' (Output 1)  */
  real_T Sum7_n;                       /* '<S874>/Sum7' (Output 1)  */
  real_T A12;                          /* '<S887>/A12' (Output 1)  */
  real_T x2k;                          /* '<S886>/Delay_x2' (Output 1)  */
  real_T RateLimiter_b;                /* '<S864>/Rate Limiter' (Output 1)  */
  real_T Meanvalue;                    /* '<S890>/Product' (Output 1)  */
  real_T Meanvalue_a;                  /* '<S877>/Product' (Output 1)  */
  real_T Meanvalue_l;                  /* '<S874>/Product' (Output 1)  */
  real_T Gain3_h[3];                   /* '<S911>/Gain3' (Output 1)  */
  real_T sum3;                         /* '<S887>/sum3' (Output 1)  */
  real_T Vd;                           /* '<S975>/Add1' (Output 1)  */
  real_T ComplextoMagnitudeAngle_o1;
                           /* '<S870>/Complex to Magnitude-Angle' (Output 1)  */
  real_T sum2;                         /* '<S889>/sum2' (Output 1)  */
  real_T SSref;                        /* '<S983>/1//Sref' (Output 1)  */
  real_T donotdeletethisgain_na;
                              /* '<S976>/do not delete this gain' (Output 1)  */
  real_T TmpSignalConversionAtGain3Inpor[3];
                               /* '<S911>/TmpSignal ConversionAtGain3Inport1' */
  real_T Product4_f;                   /* '<S770>/Product4' (Output 1)  */
  real_T Divide_e;                     /* '<S99>/Divide' (Output 1)  */
  real_T Sum_h;                        /* '<S765>/Sum' (Output 1)  */
  real_T Sum1_g;                       /* '<S770>/Sum1' (Output 1)  */
  real_T donotdeletethisgain_dk;
                              /* '<S974>/do not delete this gain' (Output 1)  */
  uint8_T Compare;                     /* '<S907>/Compare' (Output 1)  */
  uint8_T Compare_j;                   /* '<S908>/Compare' (Output 1)  */
  uint8_T Compare_o;                   /* '<S901>/Compare' (Output 1)  */
  uint8_T Compare_e;                   /* '<S902>/Compare' (Output 1)  */
  uint8_T Compare_eg;                  /* '<S913>/Compare' (Output 1)  */
  uint8_T Compare_p;                   /* '<S914>/Compare' (Output 1)  */
  uint8_T Compare_m;                   /* '<S895>/Compare' (Output 1)  */
  uint8_T Compare_h;                   /* '<S896>/Compare' (Output 1)  */
  uint8_T Compare_k;                   /* '<S882>/Compare' (Output 1)  */
  uint8_T Compare_mp;                  /* '<S883>/Compare' (Output 1)  */
  uint8_T Compare_f;                   /* '<S103>/Compare' (Output 1)  */
  boolean_T DataTypeConversion_o;/* '<S600>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator;         /* '<S600>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_e;/* '<S599>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_h;       /* '<S599>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_j;/* '<S601>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_j;       /* '<S601>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_c;/* '<S450>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_l;       /* '<S450>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_jl;
                                 /* '<S449>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_i;       /* '<S449>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_h;/* '<S451>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_n;       /* '<S451>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_l;/* '<S510>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_k;       /* '<S510>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_o2;
                                 /* '<S509>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_a;       /* '<S509>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_m;/* '<S511>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_g;       /* '<S511>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_n;/* '<S480>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_au;      /* '<S480>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_lh;
                                 /* '<S479>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_f;       /* '<S479>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_b;/* '<S481>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_d;       /* '<S481>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_oo;
                                 /* '<S540>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_p;       /* '<S540>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_bf;
                                 /* '<S539>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_g1;      /* '<S539>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_et;
                                 /* '<S541>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_nf;      /* '<S541>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_f;/* '<S420>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_gf;      /* '<S420>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_ef;
                                 /* '<S419>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_hx;      /* '<S419>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_fl;
                                 /* '<S421>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_hg;      /* '<S421>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_ho;
                                 /* '<S570>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_c;       /* '<S570>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_nm;
                                 /* '<S569>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_ah;      /* '<S569>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_bt;
                                 /* '<S571>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_na;      /* '<S571>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_j5;
                                 /* '<S409>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_m;       /* '<S409>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_d;/* '<S631>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_i3;      /* '<S631>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_j3;
                                 /* '<S643>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_hq;      /* '<S643>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_g;/* '<S655>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_e;       /* '<S655>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_dn;
                                 /* '<S667>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_ai;      /* '<S667>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_ox;
                                 /* '<S679>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_gi;      /* '<S679>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_mx;
                                 /* '<S691>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_gl;      /* '<S691>/Logical Operator' (Output 1)  */
  boolean_T DataTypeConversion_df;
                                 /* '<S703>/Data Type Conversion' (Output 1)  */
  boolean_T LogicalOperator_p5;      /* '<S703>/Logical Operator' (Output 1)  */
  boolean_T RelationalOperator;   /* '<S864>/Relational Operator' (Output 1)  */
  boolean_T RelationalOperator_o; /* '<S719>/Relational Operator' (Output 1)  */
  boolean_T RelationalOperator_c; /* '<S890>/Relational Operator' (Output 1)  */
  boolean_T UpperRelop;                /* '<S102>/UpperRelop' (Output 1)  */
  boolean_T UpperRelop_k;              /* '<S101>/UpperRelop' (Output 1)  */
  boolean_T UpperRelop_m;              /* '<S100>/UpperRelop' (Output 1)  */
  boolean_T RelationalOperator_b; /* '<S877>/Relational Operator' (Output 1)  */
  boolean_T RelationalOperator_n; /* '<S154>/Relational Operator' (Output 1)  */
  B_Signalgenerator_acdcmg_sim8_T Signalgenerator_j;/* '<S955>/Signal generator' */
  B_HarmonicGenerator_acdcmg_si_T HarmonicGenerator_g;/* '<S955>/Harmonic Generator' */
  B_Subsystem1_acdcmg_sim8_1_sm_T Subsystem1_k;/* '<S905>/Subsystem1' */
  B_Subsystempi2delay_acdcmg_si_T Subsystempi2delay_l;/* '<S905>/Subsystem - pi//2 delay' */
  B_Subsystem1_acdcmg_sim8_1_sm_T Subsystem1_m;/* '<S899>/Subsystem1' */
  B_Subsystempi2delay_acdcmg_si_T Subsystempi2delay_j;/* '<S899>/Subsystem - pi//2 delay' */
  B_Subsystem1_acdcmg_sim8_1_sm_T Subsystem1;/* '<S893>/Subsystem1' */
  B_Subsystempi2delay_acdcmg_si_T Subsystempi2delay;/* '<S893>/Subsystem - pi//2 delay' */
  B_Subsystem1_acdcmg_sim8_1_sm_T Subsystem1_d;/* '<S880>/Subsystem1' */
  B_Subsystempi2delay_acdcmg_si_T Subsystempi2delay_lj;/* '<S880>/Subsystem - pi//2 delay' */
  B_Signalgenerator_acdcmg_sim8_T Signalgenerator;/* '<S725>/Signal generator' */
  B_HarmonicGenerator_acdcmg_si_T HarmonicGenerator;/* '<S725>/Harmonic Generator' */
  B_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_f;/* '<S703>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_ng;/* '<S703>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_ml;/* '<S691>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_my;/* '<S691>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_j2;/* '<S679>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_hk;/* '<S679>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_ik;/* '<S667>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_k;/* '<S667>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_jr;/* '<S655>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_bz;/* '<S655>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_dt;/* '<S643>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_pj;/* '<S643>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_mi;/* '<S631>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_jo;/* '<S631>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_c0;/* '<S601>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_a;/* '<S601>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_kx;/* '<S600>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_b4;/* '<S600>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_k;/* '<S599>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_bh;/* '<S599>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_gs;/* '<S571>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_cb;/* '<S571>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_h;/* '<S570>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_cc;/* '<S570>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_ay;/* '<S569>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_p2;/* '<S569>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_g;/* '<S541>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_h;/* '<S541>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_dq;/* '<S540>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_mf;/* '<S540>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_dw;/* '<S539>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_j2;/* '<S539>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_b;/* '<S511>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_o;/* '<S511>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_ae;/* '<S510>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_j;/* '<S510>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_m;/* '<S509>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_l;/* '<S509>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_c;/* '<S481>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_n;/* '<S481>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_ad;/* '<S480>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_b;/* '<S480>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_an;/* '<S479>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_p;/* '<S479>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_e;/* '<S451>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_cw;/* '<S451>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_i;/* '<S450>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_c;/* '<S450>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_d;/* '<S449>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_m;/* '<S449>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_a;/* '<S421>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_id;/* '<S421>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_j;/* '<S420>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_il;/* '<S420>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_p;/* '<S419>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_g_T RMS_i;/* '<S419>/RMS ' */
  B_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS;/* '<S409>/TrueRMS ' */
  B_RMS_acdcmg_sim8_1_sm_grid_s_T RMS; /* '<S409>/RMS ' */
} B_acdcmg_sim8_1_sm_grid_simulation_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;
                              /* '<S149>/Discrete-Time Integrator' (DWork 1)  */
  real_T Currentfilter_states;         /* '<S94>/Current filter' (DWork 1)  */
  real_T inti_DSTATE;                  /* '<S94>/int(i)' (DWork 1)  */
  real_T DiscreteTimeIntegrator_DSTATE_n;
                               /* '<S99>/Discrete-Time Integrator' (DWork 1)  */
  real_T Delay_DSTATE;                 /* '<S132>/Delay' (DWork 1)  */
  real_T UnitDelay1_DSTATE;            /* '<S11>/Unit Delay1' (DWork 1)  */
  real_T UnitDelay1_DSTATE_p;          /* '<S12>/Unit Delay1' (DWork 1)  */
  real_T UnitDelay_DSTATE;             /* '<S11>/Unit Delay' (DWork 1)  */
  real_T UnitDelay_DSTATE_k;           /* '<S12>/Unit Delay' (DWork 1)  */
  real_T UnitDelay_DSTATE_a[3];        /* '<S766>/Unit Delay' (DWork 1)  */
  real_T SFunction_DSTATE[2];          /* '<S1027>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_o[2];        /* '<S1039>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_g[2];        /* '<S1025>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_b[2];        /* '<S1037>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_l[2];        /* '<S1026>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_c[2];        /* '<S1038>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_os[2];       /* '<S1091>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_h[2];        /* '<S1079>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_p[2];        /* '<S1089>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_m[2];        /* '<S1077>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_lk[2];       /* '<S1090>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_i[2];        /* '<S1078>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_ij[2];       /* '<S1105>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_d[2];        /* '<S1117>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_ow[2];       /* '<S1103>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_it[2];       /* '<S1115>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_pj[2];       /* '<S1104>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_gx[2];       /* '<S1116>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_k[2];        /* '<S1131>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_a[2];        /* '<S1143>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_li[2];       /* '<S1129>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_pt[2];       /* '<S1141>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_bl[2];       /* '<S1130>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_bf[2];       /* '<S1142>/S-Function' (DWork 1)  */
  real_T MOV_segment9[38];             /* '<S1227>/State-Space' (DWork 1)  */
  real_T MOV_segment9_c[30];           /* '<S1227>/State-Space' (DWork 2)  */
  real_T MOV_segment9_e[9];            /* '<S1227>/State-Space' (DWork 3)  */
  real_T MOV_segment9_b[9];            /* '<S1227>/State-Space' (DWork 4)  */
  real_T MOV_segment9_f[9];            /* '<S1227>/State-Space' (DWork 5)  */
  real_T MOV_segment9_m[9];            /* '<S1227>/State-Space' (DWork 6)  */
  real_T MOV_segment9_a[6];            /* '<S1227>/State-Space' (DWork 7)  */
  real_T MOV_segment9_n[90];           /* '<S1227>/State-Space' (DWork 8)  */
  real_T MOV_segment9_a2[90];          /* '<S1227>/State-Space' (DWork 9)  */
  real_T MOV_segment9_i;               /* '<S1227>/State-Space' (DWork 10)  */
  real_T UnitDelay_DSTATE_h;           /* '<S987>/Unit Delay' (DWork 1)  */
  real_T MOV_segment9_g[10];           /* '<S1220>/State-Space' (DWork 1)  */
  real_T MOV_segment9_h[18];           /* '<S1220>/State-Space' (DWork 2)  */
  real_T MOV_segment9_k[9];            /* '<S1220>/State-Space' (DWork 3)  */
  real_T MOV_segment9_nm[9];           /* '<S1220>/State-Space' (DWork 4)  */
  real_T MOV_segment9_kg[9];           /* '<S1220>/State-Space' (DWork 5)  */
  real_T MOV_segment9_bm[9];           /* '<S1220>/State-Space' (DWork 6)  */
  real_T MOV_segment9_md[6];           /* '<S1220>/State-Space' (DWork 7)  */
  real_T MOV_segment9_cm[29];          /* '<S1220>/State-Space' (DWork 8)  */
  real_T MOV_segment9_p[29];           /* '<S1220>/State-Space' (DWork 9)  */
  real_T MOV_segment9_d;               /* '<S1220>/State-Space' (DWork 10)  */
  real_T MOV_segment9_cd[3];           /* '<S1219>/State-Space' (DWork 1)  */
  real_T MOV_segment9_ez[6];           /* '<S1219>/State-Space' (DWork 2)  */
  real_T MOV_segment9_f0[3];           /* '<S1219>/State-Space' (DWork 3)  */
  real_T MOV_segment9_cf[3];           /* '<S1219>/State-Space' (DWork 4)  */
  real_T MOV_segment9_ne[3];           /* '<S1219>/State-Space' (DWork 5)  */
  real_T MOV_segment9_hs[3];           /* '<S1219>/State-Space' (DWork 6)  */
  real_T MOV_segment9_kh[6];           /* '<S1219>/State-Space' (DWork 7)  */
  real_T MOV_segment9_af[15];          /* '<S1219>/State-Space' (DWork 8)  */
  real_T MOV_segment9_j[15];           /* '<S1219>/State-Space' (DWork 9)  */
  real_T MOV_segment9_gz;              /* '<S1219>/State-Space' (DWork 10)  */
  real_T MOV_segment9_dt[3];           /* '<S1226>/State-Space' (DWork 1)  */
  real_T MOV_segment9_gw[6];           /* '<S1226>/State-Space' (DWork 2)  */
  real_T MOV_segment9_l[3];            /* '<S1226>/State-Space' (DWork 3)  */
  real_T MOV_segment9_co[3];           /* '<S1226>/State-Space' (DWork 4)  */
  real_T MOV_segment9_pr[3];           /* '<S1226>/State-Space' (DWork 5)  */
  real_T MOV_segment9_cy[3];           /* '<S1226>/State-Space' (DWork 6)  */
  real_T MOV_segment9_fc[6];           /* '<S1226>/State-Space' (DWork 7)  */
  real_T MOV_segment9_hz[15];          /* '<S1226>/State-Space' (DWork 8)  */
  real_T MOV_segment9_pv[15];          /* '<S1226>/State-Space' (DWork 9)  */
  real_T MOV_segment9_no;              /* '<S1226>/State-Space' (DWork 10)  */
  real_T MOV_segment9_khb[9];          /* '<S1228>/State-Space' (DWork 1)  */
  real_T MOV_segment9_ai[9];           /* '<S1228>/State-Space' (DWork 2)  */
  real_T MOV_segment9_cw[3];           /* '<S1228>/State-Space' (DWork 3)  */
  real_T MOV_segment9_ln[3];           /* '<S1228>/State-Space' (DWork 4)  */
  real_T MOV_segment9_bt[3];           /* '<S1228>/State-Space' (DWork 5)  */
  real_T MOV_segment9_hi[3];           /* '<S1228>/State-Space' (DWork 6)  */
  real_T MOV_segment9_kk[6];           /* '<S1228>/State-Space' (DWork 7)  */
  real_T MOV_segment9_du[21];          /* '<S1228>/State-Space' (DWork 8)  */
  real_T MOV_segment9_hr[21];          /* '<S1228>/State-Space' (DWork 9)  */
  real_T MOV_segment9_ig;              /* '<S1228>/State-Space' (DWork 10)  */
  real_T Integ4_DSTATE;                /* '<S717>/Integ4' (DWork 1)  */
  real_T UnitDelay_DSTATE_kd;          /* '<S717>/Unit Delay' (DWork 1)  */
  real_T UnitDelay1_DSTATE_c;          /* '<S717>/Unit Delay1' (DWork 1)  */
  real_T UnitDelay2_DSTATE;            /* '<S11>/Unit Delay2' (DWork 1)  */
  real_T UnitDelay3_DSTATE;            /* '<S11>/Unit Delay3' (DWork 1)  */
  real_T Delay_DSTATE_b;               /* '<S149>/Delay' (DWork 1)  */
  real_T Delay1_DSTATE;                /* '<S149>/Delay1' (DWork 1)  */
  real_T Integ4_DSTATE_n;              /* '<S152>/Integ4' (DWork 1)  */
  real_T UnitDelay_DSTATE_d;           /* '<S152>/Unit Delay' (DWork 1)  */
  real_T UnitDelay1_DSTATE_pa;         /* '<S152>/Unit Delay1' (DWork 1)  */
  real_T Integ4_DSTATE_l;              /* '<S154>/Integ4' (DWork 1)  */
  real_T UnitDelay_DSTATE_o;           /* '<S154>/Unit Delay' (DWork 1)  */
  real_T UnitDelay1_DSTATE_pd;         /* '<S154>/Unit Delay1' (DWork 1)  */
  real_T UnitDelay2_DSTATE_b;          /* '<S12>/Unit Delay2' (DWork 1)  */
  real_T UnitDelay3_DSTATE_e;          /* '<S12>/Unit Delay3' (DWork 1)  */
  real_T Integ4_DSTATE_c;              /* '<S157>/Integ4' (DWork 1)  */
  real_T DiscreteTimeIntegrator_DSTATE_h;
                              /* '<S864>/Discrete-Time Integrator' (DWork 1)  */
  real_T Integrator_DSTATE;            /* '<S805>/Integrator' (DWork 1)  */
  real_T Filter_DSTATE;                /* '<S800>/Filter' (DWork 1)  */
  real_T UnitDelay_DSTATE_oz;          /* '<S864>/Unit Delay' (DWork 1)  */
  real_T Integrator_DSTATE_m;          /* '<S849>/Integrator' (DWork 1)  */
  real_T Filter_DSTATE_p;              /* '<S844>/Filter' (DWork 1)  */
  real_T Integ4_DSTATE_i;              /* '<S890>/Integ4' (DWork 1)  */
  real_T UnitDelay_DSTATE_d1;          /* '<S891>/Unit Delay' (DWork 1)  */
  real_T UnitDelay1_DSTATE_o;          /* '<S890>/Unit Delay1' (DWork 1)  */
  real_T DiscreteDerivative_states;
                                  /* '<S866>/Discrete Derivative ' (DWork 1)  */
  real_T DiscreteTimeIntegrator_DSTATE_b;
                              /* '<S866>/Discrete-Time Integrator' (DWork 1)  */
  real_T Delay_x1_DSTATE;              /* '<S886>/Delay_x1' (DWork 1)  */
  real_T Delay_x2_DSTATE;              /* '<S886>/Delay_x2' (DWork 1)  */
  real_T SFunction_DSTATE_mc[2];       /* '<S1051>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_lb[2];       /* '<S1063>/S-Function' (DWork 1)  */
  real_T MOV_segment9_pa;              /* '<S1218>/State-Space' (DWork 1)  */
  real_T MOV_segment9_o;               /* '<S1218>/State-Space' (DWork 2)  */
  real_T MOV_segment9_kx;              /* '<S1218>/State-Space' (DWork 3)  */
  real_T MOV_segment9_e2;              /* '<S1218>/State-Space' (DWork 4)  */
  real_T MOV_segment9_afl;             /* '<S1218>/State-Space' (DWork 5)  */
  real_T MOV_segment9_ir;              /* '<S1218>/State-Space' (DWork 6)  */
  real_T MOV_segment9_cq[6];           /* '<S1218>/State-Space' (DWork 7)  */
  real_T MOV_segment9_bh;              /* '<S1218>/State-Space' (DWork 8)  */
  real_T MOV_segment9_ex;              /* '<S1218>/State-Space' (DWork 9)  */
  real_T MOV_segment9_li;              /* '<S1218>/State-Space' (DWork 10)  */
  real_T SFunction_DSTATE_f[2];        /* '<S1052>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_e[2];        /* '<S1064>/S-Function' (DWork 1)  */
  real_T MOV_segment9_lu;              /* '<S1221>/State-Space' (DWork 1)  */
  real_T MOV_segment9_mk;              /* '<S1221>/State-Space' (DWork 2)  */
  real_T MOV_segment9_cn;              /* '<S1221>/State-Space' (DWork 3)  */
  real_T MOV_segment9_et;              /* '<S1221>/State-Space' (DWork 4)  */
  real_T MOV_segment9_fi;              /* '<S1221>/State-Space' (DWork 5)  */
  real_T MOV_segment9_dg;              /* '<S1221>/State-Space' (DWork 6)  */
  real_T MOV_segment9_lh[6];           /* '<S1221>/State-Space' (DWork 7)  */
  real_T MOV_segment9_je;              /* '<S1221>/State-Space' (DWork 8)  */
  real_T MOV_segment9_e3;              /* '<S1221>/State-Space' (DWork 9)  */
  real_T MOV_segment9_dd;              /* '<S1221>/State-Space' (DWork 10)  */
  real_T SFunction_DSTATE_he[2];       /* '<S1053>/S-Function' (DWork 1)  */
  real_T SFunction_DSTATE_au[2];       /* '<S1065>/S-Function' (DWork 1)  */
  real_T MOV_segment9_bc;              /* '<S1222>/State-Space' (DWork 1)  */
  real_T MOV_segment9_m0;              /* '<S1222>/State-Space' (DWork 2)  */
  real_T MOV_segment9_ed;              /* '<S1222>/State-Space' (DWork 3)  */
  real_T MOV_segment9_dc;              /* '<S1222>/State-Space' (DWork 4)  */
  real_T MOV_segment9_bi;              /* '<S1222>/State-Space' (DWork 5)  */
  real_T MOV_segment9_dl;              /* '<S1222>/State-Space' (DWork 6)  */
  real_T MOV_segment9_fb[6];           /* '<S1222>/State-Space' (DWork 7)  */
  real_T MOV_segment9_aj;              /* '<S1222>/State-Space' (DWork 8)  */
  real_T MOV_segment9_kl;              /* '<S1222>/State-Space' (DWork 9)  */
  real_T MOV_segment9_g5;              /* '<S1222>/State-Space' (DWork 10)  */
  real_T MOV_segment9_bj;              /* '<S1223>/State-Space' (DWork 1)  */
  real_T MOV_segment9_fq;              /* '<S1223>/State-Space' (DWork 2)  */
  real_T MOV_segment9_gf;              /* '<S1223>/State-Space' (DWork 3)  */
  real_T MOV_segment9_ac;              /* '<S1223>/State-Space' (DWork 4)  */
  real_T MOV_segment9_lh1;             /* '<S1223>/State-Space' (DWork 5)  */
  real_T MOV_segment9_bk;              /* '<S1223>/State-Space' (DWork 6)  */
  real_T MOV_segment9_is[6];           /* '<S1223>/State-Space' (DWork 7)  */
  real_T MOV_segment9_m2;              /* '<S1223>/State-Space' (DWork 8)  */
  real_T MOV_segment9_di;              /* '<S1223>/State-Space' (DWork 9)  */
  real_T MOV_segment9_mt;              /* '<S1223>/State-Space' (DWork 10)  */
  real_T MOV_segment9_j3;              /* '<S1224>/State-Space' (DWork 1)  */
  real_T MOV_segment9_dz;              /* '<S1224>/State-Space' (DWork 2)  */
  real_T MOV_segment9_le;              /* '<S1224>/State-Space' (DWork 3)  */
  real_T MOV_segment9_p0;              /* '<S1224>/State-Space' (DWork 4)  */
  real_T MOV_segment9_eo;              /* '<S1224>/State-Space' (DWork 5)  */
  real_T MOV_segment9_gb;              /* '<S1224>/State-Space' (DWork 6)  */
  real_T MOV_segment9_bd[6];           /* '<S1224>/State-Space' (DWork 7)  */
  real_T MOV_segment9_nw;              /* '<S1224>/State-Space' (DWork 8)  */
  real_T MOV_segment9_l2;              /* '<S1224>/State-Space' (DWork 9)  */
  real_T MOV_segment9_mn;              /* '<S1224>/State-Space' (DWork 10)  */
  real_T MOV_segment9_oc;              /* '<S1225>/State-Space' (DWork 1)  */
  real_T MOV_segment9_py;              /* '<S1225>/State-Space' (DWork 2)  */
  real_T MOV_segment9_gd;              /* '<S1225>/State-Space' (DWork 3)  */
  real_T MOV_segment9_oa;              /* '<S1225>/State-Space' (DWork 4)  */
  real_T MOV_segment9_bj0;             /* '<S1225>/State-Space' (DWork 5)  */
  real_T MOV_segment9_nd;              /* '<S1225>/State-Space' (DWork 6)  */
  real_T MOV_segment9_js[6];           /* '<S1225>/State-Space' (DWork 7)  */
  real_T MOV_segment9_hy;              /* '<S1225>/State-Space' (DWork 8)  */
  real_T MOV_segment9_lj;              /* '<S1225>/State-Space' (DWork 9)  */
  real_T MOV_segment9_kr;              /* '<S1225>/State-Space' (DWork 10)  */
  real_T Integ4_DSTATE_d;              /* '<S874>/Integ4' (DWork 1)  */
  real_T UnitDelay_DSTATE_g;           /* '<S875>/Unit Delay' (DWork 1)  */
  real_T UnitDelay1_DSTATE_j;          /* '<S874>/Unit Delay1' (DWork 1)  */
  real_T Integ4_DSTATE_p;              /* '<S877>/Integ4' (DWork 1)  */
  real_T UnitDelay_DSTATE_p;           /* '<S878>/Unit Delay' (DWork 1)  */
  real_T UnitDelay1_DSTATE_l;          /* '<S877>/Unit Delay1' (DWork 1)  */
  real_T SFunction_PreviousInput;      /* '<S2>/S-Function' (DWork 1)  */
  real_T itinit1_PreviousInput;        /* '<S94>/it init1' (DWork 1)  */
  real_T itinit_PreviousInput;         /* '<S94>/it init' (DWork 1)  */
  real_T Memory2_PreviousInput;        /* '<S94>/Memory2' (DWork 1)  */
  real_T PrevY;                        /* '<S72>/Rate Limiter' (DWork 1)  */
  real_T Memory_PreviousInput[3];      /* '<S642>/Memory' (DWork 1)  */
  real_T Memory_PreviousInput_g[3];    /* '<S666>/Memory' (DWork 1)  */
  real_T Memory1_PreviousInput[3];     /* '<S702>/Memory1' (DWork 1)  */
  real_T Memory_PreviousInput_gb[3];   /* '<S630>/Memory' (DWork 1)  */
  real_T Memory_PreviousInput_o[3];    /* '<S678>/Memory' (DWork 1)  */
  real_T Memory_PreviousInput_o5[3];   /* '<S408>/Memory' (DWork 1)  */
  real_T Memory_PreviousInput_h[3];    /* '<S654>/Memory' (DWork 1)  */
  real_T Memory_PreviousInput_l;       /* '<S719>/Memory' (DWork 1)  */
  real_T TimeStampA;                   /* '<S166>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA;                 /* '<S166>/Derivative' (DWork 2)  */
  real_T TimeStampB;                   /* '<S166>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB;                 /* '<S166>/Derivative' (DWork 4)  */
  real_T TimeStampA_l;                 /* '<S170>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_j;               /* '<S170>/Derivative' (DWork 2)  */
  real_T TimeStampB_n;                 /* '<S170>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_k;               /* '<S170>/Derivative' (DWork 4)  */
  real_T TimeStampA_o;                 /* '<S174>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_g;               /* '<S174>/Derivative' (DWork 2)  */
  real_T TimeStampB_h;                 /* '<S174>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_j;               /* '<S174>/Derivative' (DWork 4)  */
  real_T TimeStampA_e;                 /* '<S183>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_b;               /* '<S183>/Derivative' (DWork 2)  */
  real_T TimeStampB_e;                 /* '<S183>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_m;               /* '<S183>/Derivative' (DWork 4)  */
  real_T TimeStampA_f;                 /* '<S187>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_e;               /* '<S187>/Derivative' (DWork 2)  */
  real_T TimeStampB_m;                 /* '<S187>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_o;               /* '<S187>/Derivative' (DWork 4)  */
  real_T TimeStampA_li;                /* '<S191>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_o;               /* '<S191>/Derivative' (DWork 2)  */
  real_T TimeStampB_g;                 /* '<S191>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_kv;              /* '<S191>/Derivative' (DWork 4)  */
  real_T TimeStampA_d;                 /* '<S200>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_a;               /* '<S200>/Derivative' (DWork 2)  */
  real_T TimeStampB_mc;                /* '<S200>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_p;               /* '<S200>/Derivative' (DWork 4)  */
  real_T TimeStampA_c;                 /* '<S204>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_c;               /* '<S204>/Derivative' (DWork 2)  */
  real_T TimeStampB_p;                 /* '<S204>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_h;               /* '<S204>/Derivative' (DWork 4)  */
  real_T TimeStampA_fi;                /* '<S208>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_p;               /* '<S208>/Derivative' (DWork 2)  */
  real_T TimeStampB_gn;                /* '<S208>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_c;               /* '<S208>/Derivative' (DWork 4)  */
  real_T TimeStampA_a;                 /* '<S217>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_d;               /* '<S217>/Derivative' (DWork 2)  */
  real_T TimeStampB_b;                 /* '<S217>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_i;               /* '<S217>/Derivative' (DWork 4)  */
  real_T TimeStampA_lh;                /* '<S221>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_os;              /* '<S221>/Derivative' (DWork 2)  */
  real_T TimeStampB_k;                 /* '<S221>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_ot;              /* '<S221>/Derivative' (DWork 4)  */
  real_T TimeStampA_h;                 /* '<S225>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_f;               /* '<S225>/Derivative' (DWork 2)  */
  real_T TimeStampB_d;                 /* '<S225>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_ig;              /* '<S225>/Derivative' (DWork 4)  */
  real_T TimeStampA_dx;                /* '<S234>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_n;               /* '<S234>/Derivative' (DWork 2)  */
  real_T TimeStampB_pv;                /* '<S234>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_n;               /* '<S234>/Derivative' (DWork 4)  */
  real_T TimeStampA_k;                 /* '<S238>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_nc;              /* '<S238>/Derivative' (DWork 2)  */
  real_T TimeStampB_dg;                /* '<S238>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_d;               /* '<S238>/Derivative' (DWork 4)  */
  real_T TimeStampA_j;                 /* '<S242>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_h;               /* '<S242>/Derivative' (DWork 2)  */
  real_T TimeStampB_a;                 /* '<S242>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_ik;              /* '<S242>/Derivative' (DWork 4)  */
  real_T TimeStampA_au;                /* '<S251>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_g3;              /* '<S251>/Derivative' (DWork 2)  */
  real_T TimeStampB_g5;                /* '<S251>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_ml;              /* '<S251>/Derivative' (DWork 4)  */
  real_T TimeStampA_fh;                /* '<S255>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_dl;              /* '<S255>/Derivative' (DWork 2)  */
  real_T TimeStampB_kd;                /* '<S255>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_l;               /* '<S255>/Derivative' (DWork 4)  */
  real_T TimeStampA_fo;                /* '<S259>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_g4;              /* '<S259>/Derivative' (DWork 2)  */
  real_T TimeStampB_aa;                /* '<S259>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_d2;              /* '<S259>/Derivative' (DWork 4)  */
  real_T TimeStampA_g;                 /* '<S264>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_bj;              /* '<S264>/Derivative' (DWork 2)  */
  real_T TimeStampB_g5h;               /* '<S264>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_nw;              /* '<S264>/Derivative' (DWork 4)  */
  real_T TimeStampA_ho;                /* '<S268>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_og;              /* '<S268>/Derivative' (DWork 2)  */
  real_T TimeStampB_eu;                /* '<S268>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_a;               /* '<S268>/Derivative' (DWork 4)  */
  real_T TimeStampA_gy;                /* '<S272>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_l;               /* '<S272>/Derivative' (DWork 2)  */
  real_T TimeStampB_de;                /* '<S272>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_am;              /* '<S272>/Derivative' (DWork 4)  */
  real_T TimeStampA_b;                 /* '<S276>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_gf;              /* '<S276>/Derivative' (DWork 2)  */
  real_T TimeStampB_f;                 /* '<S276>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_b;               /* '<S276>/Derivative' (DWork 4)  */
  real_T TimeStampA_h2;                /* '<S280>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_ai;              /* '<S280>/Derivative' (DWork 2)  */
  real_T TimeStampB_o;                 /* '<S280>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_pk;              /* '<S280>/Derivative' (DWork 4)  */
  real_T TimeStampA_a0;                /* '<S284>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_od;              /* '<S284>/Derivative' (DWork 2)  */
  real_T TimeStampB_pz;                /* '<S284>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_cf;              /* '<S284>/Derivative' (DWork 4)  */
  real_T TimeStampA_bs;                /* '<S119>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_odu;             /* '<S119>/Derivative' (DWork 2)  */
  real_T TimeStampB_l;                 /* '<S119>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_nk;              /* '<S119>/Derivative' (DWork 4)  */
  real_T TimeStampA_a2;                /* '<S123>/Derivative' (DWork 1)  */
  real_T LastUAtTimeA_bc;              /* '<S123>/Derivative' (DWork 2)  */
  real_T TimeStampB_bg;                /* '<S123>/Derivative' (DWork 3)  */
  real_T LastUAtTimeB_hw;              /* '<S123>/Derivative' (DWork 4)  */
  real_T Memory_PreviousInput_go[3];   /* '<S690>/Memory' (DWork 1)  */
  real_T Memory_PreviousInput_n;       /* '<S48>/Memory' (DWork 1)  */
  real_T Memory1_PreviousInput_p;      /* '<S48>/Memory1' (DWork 1)  */
  real_T DiscreteDerivative_tmp;  /* '<S866>/Discrete Derivative ' (DWork 2)  */
  real_T PrevY_e;                      /* '<S864>/Rate Limiter' (DWork 1)  */
  struct {
    real_T modelTStart;
    real_T TUbufferArea[2048];
  } VariableTimeDelay_RWORK;        /* '<S69>/Variable Time Delay' (DWork 1)  */

  real_T SFunction_RWORK;              /* '<S718>/S-Function' (DWork 1)  */
  struct {
    real_T modelTStart;
    real_T TUbufferArea[16384];
  } TransportDelay_RWORK;              /* '<S719>/Transport Delay' (DWork 1)  */

  real_T SFunction_RWORK_l;            /* '<S153>/S-Function' (DWork 1)  */
  real_T SFunction_RWORK_n;            /* '<S155>/S-Function' (DWork 1)  */
  real_T SFunction_RWORK_p;            /* '<S158>/S-Function' (DWork 1)  */
  real_T SFunction_RWORK_j;            /* '<S892>/S-Function' (DWork 1)  */
  real_T SFunction_RWORK_e;            /* '<S876>/S-Function' (DWork 1)  */
  real_T SFunction_RWORK_jd;           /* '<S879>/S-Function' (DWork 1)  */
  void *StateSpace_PWORK;              /* '<S1227>/State-Space' (DWork 11)  */
  struct {
    void *TUbufferPtrs[2];
  } VariableTimeDelay_PWORK;        /* '<S69>/Variable Time Delay' (DWork 3)  */

  void *StateSpace_PWORK_a;            /* '<S1220>/State-Space' (DWork 11)  */
  void *StateSpace_PWORK_g;            /* '<S1219>/State-Space' (DWork 11)  */
  void *StateSpace_PWORK_m;            /* '<S1226>/State-Space' (DWork 11)  */
  void *StateSpace_PWORK_l;            /* '<S1228>/State-Space' (DWork 11)  */
  void *SFunction_PWORK;               /* '<S718>/S-Function' (DWork 3)  */
  struct {
    void *TUbufferPtrs[2];
  } TransportDelay_PWORK;              /* '<S719>/Transport Delay' (DWork 3)  */

  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S11>/Scope' (DWork 1)  */

  struct {
    void *LoggedData[2];
  } Scope_PWORK_h;                     /* '<S12>/Scope' (DWork 1)  */

  void *SFunction_PWORK_h;             /* '<S153>/S-Function' (DWork 3)  */
  void *SFunction_PWORK_k;             /* '<S155>/S-Function' (DWork 3)  */
  struct {
    void *LoggedData;
  } MPPTAlgorithm_PWORK;               /* '<S149>/MPPT  Algorithm' (DWork 1)  */

  void *SFunction_PWORK_o;             /* '<S158>/S-Function' (DWork 3)  */
  struct {
    void *LoggedData[4];
  } DeltaPabc_PWORK;                   /* '<S36>/Delta Pabc ' (DWork 1)  */

  struct {
    void *LoggedData;
  } CurrentInst_PWORK;                 /* '<S713>/Current Inst' (DWork 1)  */

  struct {
    void *LoggedData;
  } PowerBus_PWORK;                    /* '<S713>/Power Bus' (DWork 1)  */

  struct {
    void *LoggedData;
  } Vdc_PWORK;                         /* '<S713>/Vdc' (DWork 1)  */

  struct {
    void *LoggedData;
  } Currentgoingtofromthebattery_PW;
                   /* '<S713>/Current going to// from the battery' (DWork 1)  */

  struct {
    void *LoggedData;
  } PowerBess1_PWORK;                  /* '<S713>/Power Bess1' (DWork 1)  */

  struct {
    void *LoggedData;
  } Vbat_PWORK;                        /* '<S713>/Vbat' (DWork 1)  */

  struct {
    void *LoggedData[3];
  } PV_PWORK;                          /* '<S715>/PV' (DWork 1)  */

  struct {
    void *LoggedData;
  } CurrentgoingtoDCbus_PWORK;
                             /* '<S715>/Current going to// DC bus' (DWork 1)  */

  struct {
    void *LoggedData;
  } PowerPV_PWORK;                     /* '<S715>/Power PV' (DWork 1)  */

  struct {
    void *LoggedData;
  } VdcDCbus_PWORK;                    /* '<S715>/Vdc DC bus' (DWork 1)  */

  struct {
    void *LoggedData[2];
  } Scope_PWORK_p;                     /* '<S720>/Scope' (DWork 1)  */

  struct {
    void *LoggedData;
  } scope12_PWORK;                     /* '<S50>/scope 12' (DWork 1)  */

  struct {
    void *LoggedData;
  } scope11_PWORK;                     /* '<S50>/scope 11' (DWork 1)  */

  struct {
    void *LoggedData;
  } pack6Scope1_PWORK;                 /* '<S69>/pack6 Scope1' (DWork 1)  */

  struct {
    void *LoggedData;
  } pack6Scope2_PWORK;                 /* '<S69>/pack6 Scope2' (DWork 1)  */

  struct {
    void *LoggedData;
  } pack6Scope3_PWORK;                 /* '<S69>/pack6 Scope3' (DWork 1)  */

  struct {
    void *LoggedData;
  } Scope_PWORK_d;                     /* '<S69>/Scope' (DWork 1)  */

  struct {
    void *LoggedData;
  } Scope3_PWORK;                      /* '<S750>/Scope3' (DWork 1)  */

  struct {
    void *LoggedData[2];
  } Scope4_PWORK;                      /* '<S750>/Scope4' (DWork 1)  */

  struct {
    void *LoggedData[2];
  } Scope7_PWORK;                      /* '<S750>/Scope7' (DWork 1)  */

  struct {
    void *LoggedData[2];
  } ScopeN_PWORK;                      /* '<S750>/ScopeN' (DWork 1)  */

  struct {
    void *LoggedData[2];
  } Scope_PWORK_n;                     /* '<S766>/Scope' (DWork 1)  */

  struct {
    void *LoggedData[2];
  } Scope1_PWORK;                      /* '<S766>/Scope1' (DWork 1)  */

  struct {
    void *LoggedData[2];
  } Scope2_PWORK;                      /* '<S766>/Scope2' (DWork 1)  */

  struct {
    void *LoggedData;
  } Scope3_PWORK_i;                    /* '<S766>/Scope3' (DWork 1)  */

  struct {
    void *LoggedData[2];
  } Scope4_PWORK_m;                    /* '<S766>/Scope4' (DWork 1)  */

  struct {
    void *LoggedData[2];
  } Scope5_PWORK;                      /* '<S766>/Scope5' (DWork 1)  */

  void *SFunction_PWORK_hs;            /* '<S892>/S-Function' (DWork 3)  */
  struct {
    void *LoggedData[2];
  } Scope3_PWORK_c;                    /* '<S770>/Scope3' (DWork 1)  */

  struct {
    void *LoggedData[2];
  } Scope5_PWORK_k;                    /* '<S750>/Scope5' (DWork 1)  */

  struct {
    void *LoggedData;
  } Scope1_PWORK_f;                    /* '<S72>/Scope1' (DWork 1)  */

  struct {
    void *LoggedData[2];
  } Scope_PWORK_i;                     /* '<S72>/Scope' (DWork 1)  */

  void *StateSpace_PWORK_k;            /* '<S1218>/State-Space' (DWork 11)  */
  void *StateSpace_PWORK_d;            /* '<S1221>/State-Space' (DWork 11)  */
  void *StateSpace_PWORK_a1;           /* '<S1222>/State-Space' (DWork 11)  */
  void *StateSpace_PWORK_dc;           /* '<S1223>/State-Space' (DWork 11)  */
  void *StateSpace_PWORK_j;            /* '<S1224>/State-Space' (DWork 11)  */
  void *StateSpace_PWORK_f;            /* '<S1225>/State-Space' (DWork 11)  */
  void *SFunction_PWORK_a;             /* '<S876>/S-Function' (DWork 3)  */
  void *SFunction_PWORK_j;             /* '<S879>/S-Function' (DWork 3)  */
  struct {
    int_T Tail;
    int_T Head;
    int_T Last;
    int_T CircularBufSize;
  } VariableTimeDelay_IWORK;        /* '<S69>/Variable Time Delay' (DWork 2)  */

  int_T SFunction_IWORK[5];            /* '<S1197>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_b[5];          /* '<S1198>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_m[5];          /* '<S1199>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_e[5];          /* '<S1200>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_c[5];          /* '<S1201>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_n[5];          /* '<S1202>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_f[5];          /* '<S1203>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_ev[5];         /* '<S1204>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_ce[5];         /* '<S1205>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_i[5];          /* '<S1206>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_l[5];          /* '<S1196>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_k[5];          /* '<S1208>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_o[5];          /* '<S1209>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_h[5];          /* '<S1210>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_g[5];          /* '<S1207>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_eo[5];         /* '<S1211>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_a[5];          /* '<S1212>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_lo[5];         /* '<S1213>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_fr[5];         /* '<S1214>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_nz;            /* '<S718>/S-Function' (DWork 2)  */
  int_T SFunction_IWORK_d[5];          /* '<S1215>/S-Function' (DWork 1)  */
  struct {
    int_T Tail;
    int_T Head;
    int_T Last;
    int_T CircularBufSize;
  } TransportDelay_IWORK;              /* '<S719>/Transport Delay' (DWork 2)  */

  int_T SFunction_IWORK_ol[5];         /* '<S1216>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_bb[5];         /* '<S1217>/S-Function' (DWork 1)  */
  int_T SFunction_IWORK_oo;            /* '<S153>/S-Function' (DWork 2)  */
  int_T SFunction_IWORK_it;            /* '<S155>/S-Function' (DWork 2)  */
  int_T SFunction_IWORK_o0;            /* '<S158>/S-Function' (DWork 2)  */
  int_T SFunction_IWORK_hv;            /* '<S892>/S-Function' (DWork 2)  */
  int_T SFunction_IWORK_ml;            /* '<S876>/S-Function' (DWork 2)  */
  int_T SFunction_IWORK_il;            /* '<S879>/S-Function' (DWork 2)  */
  int8_T inti_PrevResetState;          /* '<S94>/int(i)' (DWork 2)  */
  int8_T DiscreteTimeIntegrator_PrevRese;
                              /* '<S864>/Discrete-Time Integrator' (DWork 2)  */
  uint8_T inti_IC_LOADING;             /* '<S94>/int(i)' (DWork 3)  */
  uint8_T Integ4_SYSTEM_ENABLE;        /* '<S717>/Integ4' (DWork 2)  */
  uint8_T Integ4_SYSTEM_ENABLE_n;      /* '<S152>/Integ4' (DWork 2)  */
  uint8_T Integ4_SYSTEM_ENABLE_j;      /* '<S154>/Integ4' (DWork 2)  */
  uint8_T Integ4_SYSTEM_ENABLE_l;      /* '<S157>/Integ4' (DWork 2)  */
  uint8_T Integ4_SYSTEM_ENABLE_m;      /* '<S890>/Integ4' (DWork 2)  */
  uint8_T Integ4_SYSTEM_ENABLE_h;      /* '<S874>/Integ4' (DWork 2)  */
  uint8_T Integ4_SYSTEM_ENABLE_f;      /* '<S877>/Integ4' (DWork 2)  */
  boolean_T Initial_FirstOutputTime;   /* '<S864>/Initial' (DWork 1)  */
  boolean_T AutomaticGainControl_MODE;
                                /* '<S864>/Automatic Gain Control' (DWork 1)  */
  DW_Signalgenerator_acdcmg_sim_T Signalgenerator_j;/* '<S955>/Signal generator' */
  DW_HarmonicGenerator_acdcmg_s_T HarmonicGenerator_g;/* '<S955>/Harmonic Generator' */
  DW_Signalgenerator_acdcmg_sim_T Signalgenerator;/* '<S725>/Signal generator' */
  DW_HarmonicGenerator_acdcmg_s_T HarmonicGenerator;/* '<S725>/Harmonic Generator' */
  DW_TrueRMS_acdcmg_sim8_1_sm_g_T TrueRMS_f;/* '<S703>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_grid__T RMS_ng;/* '<S703>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_g_T TrueRMS_ml;/* '<S691>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_grid__T RMS_my;/* '<S691>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_g_T TrueRMS_j2;/* '<S679>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_grid__T RMS_hk;/* '<S679>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_g_T TrueRMS_ik;/* '<S667>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_grid__T RMS_k;/* '<S667>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_g_T TrueRMS_jr;/* '<S655>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_grid__T RMS_bz;/* '<S655>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_g_T TrueRMS_dt;/* '<S643>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_grid__T RMS_pj;/* '<S643>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_g_T TrueRMS_mi;/* '<S631>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_grid__T RMS_jo;/* '<S631>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_c0;/* '<S601>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_a;/* '<S601>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_kx;/* '<S600>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_b4;/* '<S600>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_k;/* '<S599>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_bh;/* '<S599>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_gs;/* '<S571>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_cb;/* '<S571>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_h;/* '<S570>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_cc;/* '<S570>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_ay;/* '<S569>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_p2;/* '<S569>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_g;/* '<S541>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_h;/* '<S541>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_dq;/* '<S540>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_mf;/* '<S540>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_dw;/* '<S539>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_j2;/* '<S539>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_b;/* '<S511>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_o;/* '<S511>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_ae;/* '<S510>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_j;/* '<S510>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_m;/* '<S509>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_l;/* '<S509>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_c;/* '<S481>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_n;/* '<S481>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_ad;/* '<S480>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_b;/* '<S480>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_an;/* '<S479>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_p;/* '<S479>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_e;/* '<S451>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_cw;/* '<S451>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_i;/* '<S450>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_c;/* '<S450>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_d;/* '<S449>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_m;/* '<S449>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_a;/* '<S421>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_id;/* '<S421>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_j;/* '<S420>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_il;/* '<S420>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_d_T TrueRMS_p;/* '<S419>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_gri_a_T RMS_i;/* '<S419>/RMS ' */
  DW_TrueRMS_acdcmg_sim8_1_sm_g_T TrueRMS;/* '<S409>/TrueRMS ' */
  DW_RMS_acdcmg_sim8_1_sm_grid__T RMS; /* '<S409>/RMS ' */
} DW_acdcmg_sim8_1_sm_grid_simulation_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S132>/Integrator' */
  real_T integrator_CSTATE;            /* '<S719>/integrator' */
  real_T integrator_CSTATE_p;          /* '<S130>/integrator' */
  real_T integrator_CSTATE_b;          /* '<S131>/integrator' */
  real_T integrator_CSTATE_c;          /* '<S156>/integrator' */
  X_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_f;/* '<S409>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_ng;/* '<S409>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_ml;/* '<S409>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_my;/* '<S409>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_j2;/* '<S409>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_hk;/* '<S409>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_ik;/* '<S409>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_k;/* '<S409>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_jr;/* '<S409>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_bz;/* '<S409>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_dt;/* '<S409>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_pj;/* '<S409>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_mi;/* '<S409>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_jo;/* '<S409>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_c0;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_a;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_kx;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_b4;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_k;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_bh;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_gs;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_cb;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_h;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_cc;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_ay;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_p2;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_g;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_h;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_dq;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_mf;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_dw;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_j2;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_b;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_o;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_ae;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_j;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_m;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_l;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_c;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_n;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_ad;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_b;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_an;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_p;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_e;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_cw;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_i;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_c;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_d;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_m;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_a;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_id;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_j;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_il;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm__i_T TrueRMS_p;/* '<S419>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_m_T RMS_i;/* '<S419>/RMS ' */
  X_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS;/* '<S409>/TrueRMS ' */
  X_RMS_acdcmg_sim8_1_sm_grid_s_T RMS; /* '<S409>/RMS ' */
} X_acdcmg_sim8_1_sm_grid_simulation_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S132>/Integrator' */
  real_T integrator_CSTATE;            /* '<S719>/integrator' */
  real_T integrator_CSTATE_p;          /* '<S130>/integrator' */
  real_T integrator_CSTATE_b;          /* '<S131>/integrator' */
  real_T integrator_CSTATE_c;          /* '<S156>/integrator' */
  XDot_TrueRMS_acdcmg_sim8_1_sm_T TrueRMS_f;/* '<S409>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_gri_T RMS_ng;/* '<S409>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1_sm_T TrueRMS_ml;/* '<S409>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_gri_T RMS_my;/* '<S409>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1_sm_T TrueRMS_j2;/* '<S409>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_gri_T RMS_hk;/* '<S409>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1_sm_T TrueRMS_ik;/* '<S409>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_gri_T RMS_k;/* '<S409>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1_sm_T TrueRMS_jr;/* '<S409>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_gri_T RMS_bz;/* '<S409>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1_sm_T TrueRMS_dt;/* '<S409>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_gri_T RMS_pj;/* '<S409>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1_sm_T TrueRMS_mi;/* '<S409>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_gri_T RMS_jo;/* '<S409>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_c0;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_a;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_kx;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_b4;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_k;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_bh;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_gs;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_cb;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_h;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_cc;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_ay;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_p2;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_g;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_h;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_dq;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_mf;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_dw;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_j2;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_b;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_o;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_ae;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_j;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_m;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_l;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_c;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_n;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_ad;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_b;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_an;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_p;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_e;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_cw;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_i;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_c;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_d;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_m;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_a;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_id;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_j;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_il;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_p;/* '<S419>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_g_c_T RMS_i;/* '<S419>/RMS ' */
  XDot_TrueRMS_acdcmg_sim8_1_sm_T TrueRMS;/* '<S409>/TrueRMS ' */
  XDot_RMS_acdcmg_sim8_1_sm_gri_T RMS; /* '<S409>/RMS ' */
} XDot_acdcmg_sim8_1_sm_grid_simulation_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S132>/Integrator' */
  boolean_T integrator_CSTATE;         /* '<S719>/integrator' */
  boolean_T integrator_CSTATE_p;       /* '<S130>/integrator' */
  boolean_T integrator_CSTATE_b;       /* '<S131>/integrator' */
  boolean_T integrator_CSTATE_c;       /* '<S156>/integrator' */
  XDis_TrueRMS_acdcmg_sim8_1_sm_T TrueRMS_f;/* '<S409>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_gri_T RMS_ng;/* '<S409>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1_sm_T TrueRMS_ml;/* '<S409>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_gri_T RMS_my;/* '<S409>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1_sm_T TrueRMS_j2;/* '<S409>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_gri_T RMS_hk;/* '<S409>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1_sm_T TrueRMS_ik;/* '<S409>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_gri_T RMS_k;/* '<S409>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1_sm_T TrueRMS_jr;/* '<S409>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_gri_T RMS_bz;/* '<S409>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1_sm_T TrueRMS_dt;/* '<S409>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_gri_T RMS_pj;/* '<S409>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1_sm_T TrueRMS_mi;/* '<S409>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_gri_T RMS_jo;/* '<S409>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_c0;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_a;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_kx;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_b4;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_k;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_bh;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_gs;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_cb;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_h;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_cc;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_ay;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_p2;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_g;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_h;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_dq;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_mf;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_dw;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_j2;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_b;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_o;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_ae;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_j;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_m;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_l;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_c;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_n;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_ad;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_b;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_an;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_p;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_e;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_cw;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_i;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_c;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_d;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_m;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_a;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_id;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_j;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_il;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1__f_T TrueRMS_p;/* '<S419>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_g_b_T RMS_i;/* '<S419>/RMS ' */
  XDis_TrueRMS_acdcmg_sim8_1_sm_T TrueRMS;/* '<S409>/TrueRMS ' */
  XDis_RMS_acdcmg_sim8_1_sm_gri_T RMS; /* '<S409>/RMS ' */
} XDis_acdcmg_sim8_1_sm_grid_simulation_T;

#ifndef ODE8_INTG
#define ODE8_INTG

/* ODE8 Integration Data */
typedef struct {
  real_T *deltaY;                      /* output diff */
  real_T *f[13];                       /* derivatives */
  real_T *x0;                          /* Initial State */
} ODE8_IntgData;

#endif

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: [ 1  -1 ]*Kd
   * Referenced by: '<S866>/Discrete Derivative ' (Parameter: Numerator)
   */
  real_T DiscreteDerivative_rtw_collapse[2];
} ConstP_acdcmg_sim8_1_sm_grid_simulation_T;

/* Backward compatible GRT Identifiers */
#define rtB                            acdcmg_sim8_1_sm_grid_simulation_B
#define BlockIO                        B_acdcmg_sim8_1_sm_grid_simulation_T
#define rtX                            acdcmg_sim8_1_sm_grid_simulation_X
#define ContinuousStates               X_acdcmg_sim8_1_sm_grid_simulation_T
#define rtXdot                         acdcmg_sim8_1_sm_grid_simulation_XDot
#define StateDerivatives               XDot_acdcmg_sim8_1_sm_grid_simulation_T
#define tXdis                          acdcmg_sim8_1_sm_grid_simulation_XDis
#define StateDisabled                  XDis_acdcmg_sim8_1_sm_grid_simulation_T
#define rtP                            acdcmg_sim8_1_sm_grid_simulation_P
#define Parameters                     P_acdcmg_sim8_1_sm_grid_simulation_T
#define rtDWork                        acdcmg_sim8_1_sm_grid_simulation_DW
#define D_Work                         DW_acdcmg_sim8_1_sm_grid_simulation_T
#define ConstParam                     ConstP_acdcmg_sim8_1_sm_grid_simulation_T
#define rtcP                           acdcmg_sim8_1_sm_grid_simulation_ConstP

/* Parameters for system: '<S409>/RMS ' */
struct P_RMS_acdcmg_sim8_1_sm_grid_s_T_ {
  real_T Fourier1_Freq;                /* Mask Parameter: Fourier1_Freq
                                        * Referenced by:
                                        *   '<S412>/cos(wt)' (Parameter: Frequency)
                                        *   '<S412>/sin(wt)' (Parameter: Frequency)
                                        */
  real_T integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S415>/integrator' (Parameter: InitialCondition)
                                        */
  real_T integrator_IC_a;              /* Expression: 0
                                        * Referenced by: '<S416>/integrator' (Parameter: InitialCondition)
                                        */
  real_T sinwt_Amp;                    /* Expression: sps.k
                                        * Referenced by: '<S412>/sin(wt)' (Parameter: Amplitude)
                                        */
  real_T sinwt_Bias;                   /* Expression: 0
                                        * Referenced by: '<S412>/sin(wt)' (Parameter: Bias)
                                        */
  real_T sinwt_Phase;                  /* Expression: 0
                                        * Referenced by: '<S412>/sin(wt)' (Parameter: Phase)
                                        */
  real_T coswt_Amp;                    /* Expression: sps.k
                                        * Referenced by: '<S412>/cos(wt)' (Parameter: Amplitude)
                                        */
  real_T coswt_Bias;                   /* Expression: 0
                                        * Referenced by: '<S412>/cos(wt)' (Parameter: Bias)
                                        */
  real_T coswt_Phase;                  /* Expression: pi/2
                                        * Referenced by: '<S412>/cos(wt)' (Parameter: Phase)
                                        */
};

/* Parameters for system: '<S409>/TrueRMS ' */
struct P_TrueRMS_acdcmg_sim8_1_sm_gr_T_ {
  real_T integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S418>/integrator' (Parameter: InitialCondition)
                                        */
};

/* Parameters for system: '<S419>/RMS ' */
struct P_RMS_acdcmg_sim8_1_sm_grid_p_T_ {
  real_T Fourier1_Freq;                /* Mask Parameter: Fourier1_Freq
                                        * Referenced by:
                                        *   '<S424>/cos(wt)' (Parameter: Frequency)
                                        *   '<S424>/sin(wt)' (Parameter: Frequency)
                                        */
  real_T Gain_Gain;                    /* Expression: sps.Freq
                                        * Referenced by: '<S427>/Gain' (Parameter: Gain)
                                        */
  real_T Gain_Gain_g;                  /* Expression: sps.Freq
                                        * Referenced by: '<S428>/Gain' (Parameter: Gain)
                                        */
  real_T integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S428>/integrator' (Parameter: InitialCondition)
                                        */
  real_T TransportDelay_Delay;         /* Expression: 1./sps.Freq
                                        * Referenced by: '<S428>/Transport Delay' (Parameter: DelayTime)
                                        */
  real_T TransportDelay_InitOutput;    /* Expression: 0
                                        * Referenced by: '<S428>/Transport Delay' (Parameter: InitialOutput)
                                        */
  real_T K1_Value;                     /* Expression: 1./sps.Freq
                                        * Referenced by: '<S428>/K1' (Parameter: Value)
                                        */
  real_T Memory_InitialCondition;      /* Expression: sps.Vinit
                                        * Referenced by: '<S428>/Memory' (Parameter: InitialCondition)
                                        */
  real_T integrator_IC_k;              /* Expression: 0
                                        * Referenced by: '<S427>/integrator' (Parameter: InitialCondition)
                                        */
  real_T TransportDelay_Delay_n;       /* Expression: 1./sps.Freq
                                        * Referenced by: '<S427>/Transport Delay' (Parameter: DelayTime)
                                        */
  real_T TransportDelay_InitOutput_f;  /* Expression: 0
                                        * Referenced by: '<S427>/Transport Delay' (Parameter: InitialOutput)
                                        */
  real_T K1_Value_c;                   /* Expression: 1./sps.Freq
                                        * Referenced by: '<S427>/K1' (Parameter: Value)
                                        */
  real_T Memory_InitialCondition_l;    /* Expression: sps.Vinit
                                        * Referenced by: '<S427>/Memory' (Parameter: InitialCondition)
                                        */
  real_T sinwt_Amp;                    /* Expression: sps.k
                                        * Referenced by: '<S424>/sin(wt)' (Parameter: Amplitude)
                                        */
  real_T sinwt_Bias;                   /* Expression: 0
                                        * Referenced by: '<S424>/sin(wt)' (Parameter: Bias)
                                        */
  real_T sinwt_Phase;                  /* Expression: 0
                                        * Referenced by: '<S424>/sin(wt)' (Parameter: Phase)
                                        */
  real_T coswt_Amp;                    /* Expression: sps.k
                                        * Referenced by: '<S424>/cos(wt)' (Parameter: Amplitude)
                                        */
  real_T coswt_Bias;                   /* Expression: 0
                                        * Referenced by: '<S424>/cos(wt)' (Parameter: Bias)
                                        */
  real_T coswt_Phase;                  /* Expression: pi/2
                                        * Referenced by: '<S424>/cos(wt)' (Parameter: Phase)
                                        */
  real_T Gain_Gain_a;                  /* Expression: 1/sqrt(2)
                                        * Referenced by: '<S422>/Gain' (Parameter: Gain)
                                        */
};

/* Parameters for system: '<S419>/TrueRMS ' */
struct P_TrueRMS_acdcmg_sim8_1_sm__p_T_ {
  real_T Gain_Gain;                    /* Expression: sps.Freq
                                        * Referenced by: '<S430>/Gain' (Parameter: Gain)
                                        */
  real_T integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S430>/integrator' (Parameter: InitialCondition)
                                        */
  real_T TransportDelay_Delay;         /* Expression: 1./sps.Freq
                                        * Referenced by: '<S430>/Transport Delay' (Parameter: DelayTime)
                                        */
  real_T TransportDelay_InitOutput;    /* Expression: 0
                                        * Referenced by: '<S430>/Transport Delay' (Parameter: InitialOutput)
                                        */
  real_T K1_Value;                     /* Expression: 1./sps.Freq
                                        * Referenced by: '<S430>/K1' (Parameter: Value)
                                        */
  real_T Memory_InitialCondition;      /* Expression: sps.Vinit
                                        * Referenced by: '<S430>/Memory' (Parameter: InitialCondition)
                                        */
  real_T Saturationtoavoidnegativesqrt_U;/* Expression: Inf
                                          * Referenced by: '<S423>/Saturation to avoid negative sqrt' (Parameter: UpperLimit)
                                          */
  real_T Saturationtoavoidnegativesqrt_L;/* Expression: 0
                                          * Referenced by: '<S423>/Saturation to avoid negative sqrt' (Parameter: LowerLimit)
                                          */
};

/* Parameters for system: '<S725>/Harmonic Generator' */
struct P_HarmonicGenerator_acdcmg_si_T_ {
  real_T HarmonicAgeneration_Mag_Harmo;
                                /* Mask Parameter: HarmonicAgeneration_Mag_Harmo
                                 * Referenced by: '<S728>/Phase_Harmo1' (Parameter: Value)
                                 */
  real_T HarmonicBgeneration_Mag_Harmo;
                                /* Mask Parameter: HarmonicBgeneration_Mag_Harmo
                                 * Referenced by: '<S729>/Phase_Harmo1' (Parameter: Value)
                                 */
  real_T HarmonicAgeneration_Phase_Harmo;
                              /* Mask Parameter: HarmonicAgeneration_Phase_Harmo
                               * Referenced by: '<S728>/Phase_Harmo' (Parameter: Value)
                               */
  real_T HarmonicBgeneration_Phase_Harmo;
                              /* Mask Parameter: HarmonicBgeneration_Phase_Harmo
                               * Referenced by: '<S729>/Phase_Harmo' (Parameter: Value)
                               */
  real_T HarmonicAgeneration_Seq_Harmo;
                                /* Mask Parameter: HarmonicAgeneration_Seq_Harmo
                                 * Referenced by: '<S728>/Phase_Harmo2' (Parameter: Value)
                                 */
  real_T HarmonicBgeneration_Seq_Harmo;
                                /* Mask Parameter: HarmonicBgeneration_Seq_Harmo
                                 * Referenced by: '<S729>/Phase_Harmo2' (Parameter: Value)
                                 */
  real_T HarmonicAgeneration_n_Harmo;
                                  /* Mask Parameter: HarmonicAgeneration_n_Harmo
                                   * Referenced by: '<S728>/Gain1' (Parameter: Gain)
                                   */
  real_T HarmonicBgeneration_n_Harmo;
                                  /* Mask Parameter: HarmonicBgeneration_n_Harmo
                                   * Referenced by: '<S729>/Gain1' (Parameter: Gain)
                                   */
  real_T Negativesequence_Value[3];    /* Expression: [0 2*pi/3 -2*pi/3]
                                        * Referenced by: '<S728>/Negative-sequence' (Parameter: Value)
                                        */
  real_T Positivesequence_Value[3];    /* Expression: [0 -2*pi/3 2*pi/3]
                                        * Referenced by: '<S728>/Positive-sequence' (Parameter: Value)
                                        */
  real_T Zerosequence_Value[3];        /* Expression: [0 0 0]
                                        * Referenced by: '<S728>/Zero-sequence' (Parameter: Value)
                                        */
  real_T Negativesequence_Value_c[3];  /* Expression: [0 2*pi/3 -2*pi/3]
                                        * Referenced by: '<S729>/Negative-sequence' (Parameter: Value)
                                        */
  real_T Positivesequence_Value_k[3];  /* Expression: [0 -2*pi/3 2*pi/3]
                                        * Referenced by: '<S729>/Positive-sequence' (Parameter: Value)
                                        */
  real_T Zerosequence_Value_g[3];      /* Expression: [0 0 0]
                                        * Referenced by: '<S729>/Zero-sequence' (Parameter: Value)
                                        */
  real_T Out1_Y0;                      /* Expression: 0
                                        * Referenced by: '<S726>/Out1' (Parameter: InitialOutput)
                                        */
  real_T Out2_Y0;                      /* Expression: 0
                                        * Referenced by: '<S726>/Out2' (Parameter: InitialOutput)
                                        */
  real_T Gain3_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S728>/Gain3' (Parameter: Gain)
                                        */
  real_T valp_nom2_Value;              /* Expression: 1
                                        * Referenced by: '<S728>/valp_nom2' (Parameter: Value)
                                        */
  real_T Step_Time;                    /* Expression: Ton_Harmo
                                        * Referenced by: '<S726>/Step' (Parameter: Time)
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S726>/Step' (Parameter: Before)
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<S726>/Step' (Parameter: After)
                                        */
  real_T Step1_Time;                   /* Expression: Toff_Harmo
                                        * Referenced by: '<S726>/Step1' (Parameter: Time)
                                        */
  real_T Step1_Y0;                     /* Expression: 0
                                        * Referenced by: '<S726>/Step1' (Parameter: Before)
                                        */
  real_T Step1_YFinal;                 /* Expression: -1
                                        * Referenced by: '<S726>/Step1' (Parameter: After)
                                        */
  real_T Gain3_Gain_f;                 /* Expression: pi/180
                                        * Referenced by: '<S729>/Gain3' (Parameter: Gain)
                                        */
  real_T valp_nom2_Value_b;            /* Expression: 1
                                        * Referenced by: '<S729>/valp_nom2' (Parameter: Value)
                                        */
};

/* Parameters for system: '<S725>/Signal generator' */
struct P_Signalgenerator_acdcmg_sim8_T_ {
  real_T VariationSubSystem_Toff_Variati;
                              /* Mask Parameter: VariationSubSystem_Toff_Variati
                               * Referenced by: '<S731>/Step1' (Parameter: Time)
                               */
  real_T VariationSubSystem_Ton_Variatio;
                              /* Mask Parameter: VariationSubSystem_Ton_Variatio
                               * Referenced by: '<S731>/Step' (Parameter: Time)
                               */
  real_T VariationSubSystem_VariationFre;
                              /* Mask Parameter: VariationSubSystem_VariationFre
                               * Referenced by: '<S731>/valp_nom9' (Parameter: Value)
                               */
  real_T VariationSubSystem_VariationMag;
                              /* Mask Parameter: VariationSubSystem_VariationMag
                               * Referenced by: '<S731>/valp_nom8' (Parameter: Value)
                               */
  real_T VariationSubSystem_VariationRat;
                              /* Mask Parameter: VariationSubSystem_VariationRat
                               * Referenced by: '<S731>/valp_nom7' (Parameter: Value)
                               */
  real_T VariationSubSystem_VariationSte;
                              /* Mask Parameter: VariationSubSystem_VariationSte
                               * Referenced by: '<S731>/valp_nom6' (Parameter: Value)
                               */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<S727>/Constant5' (Parameter: Value)
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S727>/Constant4' (Parameter: Value)
                                        */
  real_T Gain4_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S727>/Gain4' (Parameter: Gain)
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S727>/Constant1' (Parameter: Value)
                                        */
  real_T Constant1_Value_p;            /* Expression: 0
                                        * Referenced by: '<S731>/Constant1' (Parameter: Value)
                                        */
  real_T Constant5_Value_j;            /* Expression: 0
                                        * Referenced by: '<S731>/Constant5' (Parameter: Value)
                                        */
  real_T Gain1_Gain;                   /* Expression: 2*pi
                                        * Referenced by: '<S731>/Gain1' (Parameter: Gain)
                                        */
  real_T Constant4_Value_h;            /* Expression: 0
                                        * Referenced by: '<S731>/Constant4' (Parameter: Value)
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<S731>/Constant2' (Parameter: Value)
                                        */
  real_T Constant_Value;               /* Expression: 2
                                        * Referenced by: '<S731>/Constant' (Parameter: Value)
                                        */
  real_T timer_Y0;                     /* Expression: 0
                                        * Referenced by: '<S727>/timer' (Parameter: InitialOutput)
                                        */
  real_T magnitude_Y0;                 /* Expression: 0
                                        * Referenced by: '<S727>/magnitude' (Parameter: InitialOutput)
                                        */
  real_T frequency_Y0;                 /* Expression: 0
                                        * Referenced by: '<S727>/frequency' (Parameter: InitialOutput)
                                        */
  real_T phase_Y0;                     /* Expression: 0
                                        * Referenced by: '<S727>/phase' (Parameter: InitialOutput)
                                        */
  real_T LookUpTable_XData[2];         /* Expression: sps.tv
                                        * Referenced by: '<S732>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData[2];         /* Expression: sps.opv
                                        * Referenced by: '<S732>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Constant_Value_e;             /* Expression: 2
                                        * Referenced by: '<S727>/Constant' (Parameter: Value)
                                        */
  real_T Constant2_Value_j;            /* Expression: 3
                                        * Referenced by: '<S727>/Constant2' (Parameter: Value)
                                        */
  real_T Constant3_Value;              /* Expression: 4
                                        * Referenced by: '<S727>/Constant3' (Parameter: Value)
                                        */
  real_T Constant6_Value;              /* Expression: 4
                                        * Referenced by: '<S727>/Constant6' (Parameter: Value)
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S727>/Discrete-Time Integrator' (Parameter: gainval)
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S727>/Discrete-Time Integrator' (Parameter: InitialCondition)
                                        */
  real_T Step1_Y0;                     /* Expression: 1
                                        * Referenced by: '<S731>/Step1' (Parameter: Before)
                                        */
  real_T Step1_YFinal;                 /* Expression: 0
                                        * Referenced by: '<S731>/Step1' (Parameter: After)
                                        */
  real_T valp_nom5_Value;              /* Expression: VariationType
                                        * Referenced by: '<S727>/valp_nom5' (Parameter: Value)
                                        */
  real_T Constant3_Value_m;            /* Expression: 1
                                        * Referenced by: '<S731>/Constant3' (Parameter: Value)
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S731>/Step' (Parameter: Before)
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<S731>/Step' (Parameter: After)
                                        */
  real_T DiscreteTimeIntegrator1_gainval;
                          /* Computed Parameter: DiscreteTimeIntegrator1_gainval
                           * Referenced by: '<S731>/Discrete-Time Integrator1' (Parameter: gainval)
                           */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: 0
                                        * Referenced by: '<S731>/Discrete-Time Integrator1' (Parameter: InitialCondition)
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S731>/Unit Delay' (Parameter: InitialCondition)
                                        */
  real_T Switch2_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S731>/Switch2' (Parameter: Threshold)
                                        */
  real_T Gain2_Gain;                   /* Expression: 2*pi
                                        * Referenced by: '<S727>/Gain2' (Parameter: Gain)
                                        */
  real_T Switch_Threshold;             /* Expression: 0.5
                                        * Referenced by: '<S731>/Switch' (Parameter: Threshold)
                                        */
  boolean_T selector_Y0;               /* Computed Parameter: selector_Y0
                                        * Referenced by: '<S727>/selector' (Parameter: InitialOutput)
                                        */
};

/* Parameters for system: '<S880>/Subsystem - pi//2 delay' */
struct P_Subsystempi2delay_acdcmg_si_T_ {
  real_T dq_Y0[2];                     /* Expression: [0,0]
                                        * Referenced by: '<S884>/dq' (Parameter: InitialOutput)
                                        */
};

/* Parameters for system: '<S880>/Subsystem1' */
struct P_Subsystem1_acdcmg_sim8_1_sm_T_ {
  real_T dq_Y0[2];                     /* Expression: [0,0]
                                        * Referenced by: '<S885>/dq' (Parameter: InitialOutput)
                                        */
};

/* Parameters (default storage) */
struct P_acdcmg_sim8_1_sm_grid_simulation_T_ {
  real_T Rl;                           /* Variable: Rl
                                        * Referenced by:
                                        *   '<S34>/ r1_ L13' (Parameter: Value)
                                        *   '<S36>/ r1_ L13' (Parameter: Value)
                                        */
  real_T Rls;                          /* Variable: Rls
                                        * Referenced by:
                                        *   '<S35>/ r1_ L13' (Parameter: Value)
                                        *   '<S37>/ r1_ L13' (Parameter: Value)
                                        *   '<S38>/ r1_ L13' (Parameter: Value)
                                        *   '<S39>/ r1_ L13' (Parameter: Value)
                                        *   '<S40>/ r1_ L13' (Parameter: Value)
                                        */
  real_T Ts;                           /* Variable: Ts
                                        * Referenced by:
                                        *   '<S69>/Constant' (Parameter: Value)
                                        *   '<S69>/Variable Time Delay' (Parameter: MaximumDelay)
                                        *   '<S69>/Variable Time Delay' (Parameter: InitialOutput)
                                        */
  real_T Ts_Control;                   /* Variable: Ts_Control
                                        * Referenced by:
                                        *   '<S890>/Gain' (Parameter: Gain)
                                        *   '<S874>/Gain' (Parameter: Gain)
                                        *   '<S877>/Gain' (Parameter: Gain)
                                        */
  real_T Ts_PV;                        /* Variable: Ts_PV
                                        * Referenced by: '<S141>/Deblock MPPT' (Parameter: Time)
                                        */
  real_T Vmin_mppt;                    /* Variable: Vmin_mppt
                                        * Referenced by: '<S149>/Saturation' (Parameter: LowerLimit)
                                        */
  real_T AlphaBetaZerotodq0_Alignment;
                                 /* Mask Parameter: AlphaBetaZerotodq0_Alignment
                                  * Referenced by: '<S880>/Constant' (Parameter: Value)
                                  */
  real_T AlphaBetaZerotodq0_Alignment_o;
                               /* Mask Parameter: AlphaBetaZerotodq0_Alignment_o
                                * Referenced by: '<S905>/Constant' (Parameter: Value)
                                */
  real_T AlphaBetaZerotodq0_Alignment_p;
                               /* Mask Parameter: AlphaBetaZerotodq0_Alignment_p
                                * Referenced by: '<S899>/Constant' (Parameter: Value)
                                */
  real_T dq0toAlphaBetaZero_Alignment;
                                 /* Mask Parameter: dq0toAlphaBetaZero_Alignment
                                  * Referenced by: '<S912>/Constant' (Parameter: Value)
                                  */
  real_T AlphaBetaZerotodq0_Alignment_n;
                               /* Mask Parameter: AlphaBetaZerotodq0_Alignment_n
                                * Referenced by: '<S893>/Constant' (Parameter: Value)
                                */
  real_T Battery1_BatType;             /* Mask Parameter: Battery1_BatType
                                        * Referenced by:
                                        *   '<S98>/Constant' (Parameter: Value)
                                        *   '<S99>/Constant' (Parameter: Value)
                                        */
  real_T ProgrammableVoltageSource1_Harm;
                              /* Mask Parameter: ProgrammableVoltageSource1_Harm
                               * Referenced by: '<S725>/valp_nom7' (Parameter: Value)
                               */
  real_T ProgrammableVoltageSource1_Ha_n;
                              /* Mask Parameter: ProgrammableVoltageSource1_Ha_n
                               * Referenced by: '<S955>/valp_nom7' (Parameter: Value)
                               */
  real_T Discrete_Init;                /* Mask Parameter: Discrete_Init
                                        * Referenced by: '<S866>/Discrete-Time Integrator' (Parameter: InitialCondition)
                                        */
  real_T PIDController1_InitialCondition;
                              /* Mask Parameter: PIDController1_InitialCondition
                               * Referenced by: '<S800>/Filter' (Parameter: InitialCondition)
                               */
  real_T PIDController2_InitialCondition;
                              /* Mask Parameter: PIDController2_InitialCondition
                               * Referenced by: '<S844>/Filter' (Parameter: InitialCondition)
                               */
  real_T PIDController1_InitialConditi_m;
                              /* Mask Parameter: PIDController1_InitialConditi_m
                               * Referenced by: '<S805>/Integrator' (Parameter: InitialCondition)
                               */
  real_T PIDController2_InitialConditi_f;
                              /* Mask Parameter: PIDController2_InitialConditi_f
                               * Referenced by: '<S849>/Integrator' (Parameter: InitialCondition)
                               */
  real_T Subsystem2_Kd;                /* Mask Parameter: Subsystem2_Kd
                                        * Referenced by:
                                        *   '<S799>/Derivative Gain' (Parameter: Gain)
                                        *   '<S843>/Derivative Gain' (Parameter: Gain)
                                        */
  real_T Discrete_Kd;                  /* Mask Parameter: Discrete_Kd
                                        * Referenced by: '<S866>/Discrete Derivative ' (Parameter: Numerator)
                                        */
  real_T Subsystem2_Ki;                /* Mask Parameter: Subsystem2_Ki
                                        * Referenced by:
                                        *   '<S802>/Integral Gain' (Parameter: Gain)
                                        *   '<S846>/Integral Gain' (Parameter: Gain)
                                        */
  real_T Subsystem2_Kp;                /* Mask Parameter: Subsystem2_Kp
                                        * Referenced by:
                                        *   '<S810>/Proportional Gain' (Parameter: Gain)
                                        *   '<S854>/Proportional Gain' (Parameter: Gain)
                                        */
  real_T Discrete_Kp;                  /* Mask Parameter: Discrete_Kp
                                        * Referenced by: '<S866>/Kp4' (Parameter: Gain)
                                        */
  real_T PIDController1_N;             /* Mask Parameter: PIDController1_N
                                        * Referenced by: '<S808>/Filter Coefficient' (Parameter: Gain)
                                        */
  real_T PIDController2_N;             /* Mask Parameter: PIDController2_N
                                        * Referenced by: '<S852>/Filter Coefficient' (Parameter: Gain)
                                        */
  real_T PVArray_Npar;                 /* Mask Parameter: PVArray_Npar
                                        * Referenced by:
                                        *   '<S975>/Rs_array_' (Parameter: Value)
                                        *   '<S980>/Rsh_array' (Parameter: Value)
                                        *   '<S980>/I0_array' (Parameter: Gain)
                                        *   '<S983>/Npar' (Parameter: Gain)
                                        */
  real_T PVArray_Nser;                 /* Mask Parameter: PVArray_Nser
                                        * Referenced by:
                                        *   '<S975>/Rs_array_' (Parameter: Value)
                                        *   '<S980>/Rsh_array' (Parameter: Value)
                                        *   '<S980>/VT_ref_array' (Parameter: Gain)
                                        */
  real_T Battery1_SOC;                 /* Mask Parameter: Battery1_SOC
                                        * Referenced by:
                                        *   '<S94>/it init' (Parameter: InitialCondition)
                                        *   '<S99>/Discrete-Time Integrator' (Parameter: InitialCondition)
                                        */
  real_T BreakerG1_SwitchA;            /* Mask Parameter: BreakerG1_SwitchA
                                        * Referenced by: '<S13>/Constant1' (Parameter: Value)
                                        */
  real_T BreakerbusDC1_SwitchA;        /* Mask Parameter: BreakerbusDC1_SwitchA
                                        * Referenced by: '<S17>/Constant1' (Parameter: Value)
                                        */
  real_T BreakerbusDC2_SwitchA;        /* Mask Parameter: BreakerbusDC2_SwitchA
                                        * Referenced by: '<S18>/Constant1' (Parameter: Value)
                                        */
  real_T BreakerLoad3_SwitchA;         /* Mask Parameter: BreakerLoad3_SwitchA
                                        * Referenced by: '<S15>/Constant1' (Parameter: Value)
                                        */
  real_T BreakerLoad1_SwitchA;         /* Mask Parameter: BreakerLoad1_SwitchA
                                        * Referenced by: '<S14>/Constant1' (Parameter: Value)
                                        */
  real_T BreakerMG_SwitchA;            /* Mask Parameter: BreakerMG_SwitchA
                                        * Referenced by: '<S16>/Constant1' (Parameter: Value)
                                        */
  real_T BreakerG1_SwitchB;            /* Mask Parameter: BreakerG1_SwitchB
                                        * Referenced by: '<S13>/Constant2' (Parameter: Value)
                                        */
  real_T BreakerbusDC1_SwitchB;        /* Mask Parameter: BreakerbusDC1_SwitchB
                                        * Referenced by: '<S17>/Constant2' (Parameter: Value)
                                        */
  real_T BreakerbusDC2_SwitchB;        /* Mask Parameter: BreakerbusDC2_SwitchB
                                        * Referenced by: '<S18>/Constant2' (Parameter: Value)
                                        */
  real_T BreakerLoad3_SwitchB;         /* Mask Parameter: BreakerLoad3_SwitchB
                                        * Referenced by: '<S15>/Constant2' (Parameter: Value)
                                        */
  real_T BreakerLoad1_SwitchB;         /* Mask Parameter: BreakerLoad1_SwitchB
                                        * Referenced by: '<S14>/Constant2' (Parameter: Value)
                                        */
  real_T BreakerMG_SwitchB;            /* Mask Parameter: BreakerMG_SwitchB
                                        * Referenced by: '<S16>/Constant2' (Parameter: Value)
                                        */
  real_T BreakerG1_SwitchC;            /* Mask Parameter: BreakerG1_SwitchC
                                        * Referenced by: '<S13>/Constant3' (Parameter: Value)
                                        */
  real_T BreakerbusDC1_SwitchC;        /* Mask Parameter: BreakerbusDC1_SwitchC
                                        * Referenced by: '<S17>/Constant3' (Parameter: Value)
                                        */
  real_T BreakerbusDC2_SwitchC;        /* Mask Parameter: BreakerbusDC2_SwitchC
                                        * Referenced by: '<S18>/Constant3' (Parameter: Value)
                                        */
  real_T BreakerLoad3_SwitchC;         /* Mask Parameter: BreakerLoad3_SwitchC
                                        * Referenced by: '<S15>/Constant3' (Parameter: Value)
                                        */
  real_T BreakerLoad1_SwitchC;         /* Mask Parameter: BreakerLoad1_SwitchC
                                        * Referenced by: '<S14>/Constant3' (Parameter: Value)
                                        */
  real_T BreakerMG_SwitchC;            /* Mask Parameter: BreakerMG_SwitchC
                                        * Referenced by: '<S16>/Constant3' (Parameter: Value)
                                        */
  real_T RMS2_TrueRMS;                 /* Mask Parameter: RMS2_TrueRMS
                                        * Referenced by: '<S600>/Constant' (Parameter: Value)
                                        */
  real_T RMS1_TrueRMS;                 /* Mask Parameter: RMS1_TrueRMS
                                        * Referenced by: '<S599>/Constant' (Parameter: Value)
                                        */
  real_T RMS3_TrueRMS;                 /* Mask Parameter: RMS3_TrueRMS
                                        * Referenced by: '<S601>/Constant' (Parameter: Value)
                                        */
  real_T RMS2_TrueRMS_e;               /* Mask Parameter: RMS2_TrueRMS_e
                                        * Referenced by: '<S450>/Constant' (Parameter: Value)
                                        */
  real_T RMS1_TrueRMS_h;               /* Mask Parameter: RMS1_TrueRMS_h
                                        * Referenced by: '<S449>/Constant' (Parameter: Value)
                                        */
  real_T RMS3_TrueRMS_c;               /* Mask Parameter: RMS3_TrueRMS_c
                                        * Referenced by: '<S451>/Constant' (Parameter: Value)
                                        */
  real_T RMS2_TrueRMS_n;               /* Mask Parameter: RMS2_TrueRMS_n
                                        * Referenced by: '<S510>/Constant' (Parameter: Value)
                                        */
  real_T RMS1_TrueRMS_k;               /* Mask Parameter: RMS1_TrueRMS_k
                                        * Referenced by: '<S509>/Constant' (Parameter: Value)
                                        */
  real_T RMS3_TrueRMS_g;               /* Mask Parameter: RMS3_TrueRMS_g
                                        * Referenced by: '<S511>/Constant' (Parameter: Value)
                                        */
  real_T RMS2_TrueRMS_k;               /* Mask Parameter: RMS2_TrueRMS_k
                                        * Referenced by: '<S480>/Constant' (Parameter: Value)
                                        */
  real_T RMS1_TrueRMS_ks;              /* Mask Parameter: RMS1_TrueRMS_ks
                                        * Referenced by: '<S479>/Constant' (Parameter: Value)
                                        */
  real_T RMS3_TrueRMS_gn;              /* Mask Parameter: RMS3_TrueRMS_gn
                                        * Referenced by: '<S481>/Constant' (Parameter: Value)
                                        */
  real_T RMS2_TrueRMS_g;               /* Mask Parameter: RMS2_TrueRMS_g
                                        * Referenced by: '<S540>/Constant' (Parameter: Value)
                                        */
  real_T RMS1_TrueRMS_o;               /* Mask Parameter: RMS1_TrueRMS_o
                                        * Referenced by: '<S539>/Constant' (Parameter: Value)
                                        */
  real_T RMS3_TrueRMS_e;               /* Mask Parameter: RMS3_TrueRMS_e
                                        * Referenced by: '<S541>/Constant' (Parameter: Value)
                                        */
  real_T RMS2_TrueRMS_j;               /* Mask Parameter: RMS2_TrueRMS_j
                                        * Referenced by: '<S420>/Constant' (Parameter: Value)
                                        */
  real_T RMS1_TrueRMS_f;               /* Mask Parameter: RMS1_TrueRMS_f
                                        * Referenced by: '<S419>/Constant' (Parameter: Value)
                                        */
  real_T RMS3_TrueRMS_i;               /* Mask Parameter: RMS3_TrueRMS_i
                                        * Referenced by: '<S421>/Constant' (Parameter: Value)
                                        */
  real_T RMS2_TrueRMS_d;               /* Mask Parameter: RMS2_TrueRMS_d
                                        * Referenced by: '<S570>/Constant' (Parameter: Value)
                                        */
  real_T RMS1_TrueRMS_a;               /* Mask Parameter: RMS1_TrueRMS_a
                                        * Referenced by: '<S569>/Constant' (Parameter: Value)
                                        */
  real_T RMS3_TrueRMS_p;               /* Mask Parameter: RMS3_TrueRMS_p
                                        * Referenced by: '<S571>/Constant' (Parameter: Value)
                                        */
  real_T RMS_TrueRMS;                  /* Mask Parameter: RMS_TrueRMS
                                        * Referenced by: '<S409>/Constant' (Parameter: Value)
                                        */
  real_T RMS_TrueRMS_f;                /* Mask Parameter: RMS_TrueRMS_f
                                        * Referenced by: '<S631>/Constant' (Parameter: Value)
                                        */
  real_T RMS_TrueRMS_g;                /* Mask Parameter: RMS_TrueRMS_g
                                        * Referenced by: '<S643>/Constant' (Parameter: Value)
                                        */
  real_T RMS_TrueRMS_n;                /* Mask Parameter: RMS_TrueRMS_n
                                        * Referenced by: '<S655>/Constant' (Parameter: Value)
                                        */
  real_T RMS_TrueRMS_b;                /* Mask Parameter: RMS_TrueRMS_b
                                        * Referenced by: '<S667>/Constant' (Parameter: Value)
                                        */
  real_T RMS_TrueRMS_gk;               /* Mask Parameter: RMS_TrueRMS_gk
                                        * Referenced by: '<S679>/Constant' (Parameter: Value)
                                        */
  real_T RMS_TrueRMS_k;                /* Mask Parameter: RMS_TrueRMS_k
                                        * Referenced by: '<S691>/Constant' (Parameter: Value)
                                        */
  real_T RMS_TrueRMS_l;                /* Mask Parameter: RMS_TrueRMS_l
                                        * Referenced by: '<S703>/Constant' (Parameter: Value)
                                        */
  real_T ProgrammableVoltageSource1_Vari;
                              /* Mask Parameter: ProgrammableVoltageSource1_Vari
                               * Referenced by:
                               *   '<S725>/Signal generator' (Parameter: System parameter #0)
                               *   '<S725>/valp_nom3' (Parameter: Value)
                               */
  real_T ProgrammableVoltageSource1_Va_l;
                              /* Mask Parameter: ProgrammableVoltageSource1_Va_l
                               * Referenced by:
                               *   '<S955>/Signal generator' (Parameter: System parameter #1)
                               *   '<S955>/valp_nom3' (Parameter: Value)
                               */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S882>/Constant' (Parameter: Value)
                                       */
  real_T CompareToConstant1_const;   /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S883>/Constant' (Parameter: Value)
                                      */
  real_T CompareToConstant_const_k; /* Mask Parameter: CompareToConstant_const_k
                                     * Referenced by: '<S907>/Constant' (Parameter: Value)
                                     */
  real_T CompareToConstant1_const_c;
                                   /* Mask Parameter: CompareToConstant1_const_c
                                    * Referenced by: '<S908>/Constant' (Parameter: Value)
                                    */
  real_T CompareToConstant_const_n; /* Mask Parameter: CompareToConstant_const_n
                                     * Referenced by: '<S901>/Constant' (Parameter: Value)
                                     */
  real_T CompareToConstant1_const_o;
                                   /* Mask Parameter: CompareToConstant1_const_o
                                    * Referenced by: '<S902>/Constant' (Parameter: Value)
                                    */
  real_T CompareToConstant_const_kp;
                                   /* Mask Parameter: CompareToConstant_const_kp
                                    * Referenced by: '<S913>/Constant' (Parameter: Value)
                                    */
  real_T CompareToConstant1_const_j;
                                   /* Mask Parameter: CompareToConstant1_const_j
                                    * Referenced by: '<S914>/Constant' (Parameter: Value)
                                    */
  real_T CompareToConstant_const_l; /* Mask Parameter: CompareToConstant_const_l
                                     * Referenced by: '<S895>/Constant' (Parameter: Value)
                                     */
  real_T CompareToConstant1_const_ox;
                                  /* Mask Parameter: CompareToConstant1_const_ox
                                   * Referenced by: '<S896>/Constant' (Parameter: Value)
                                   */
  real_T Constant2_Value;              /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S98>/Constant2' (Parameter: Value)
                                        */
  real_T Constant3_Value;              /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S98>/Constant3' (Parameter: Value)
                                        */
  real_T Constant1_Value;              /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S98>/Constant1' (Parameter: Value)
                                        */
  real_T Constant4_Value;              /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S98>/Constant4' (Parameter: Value)
                                        */
  real_T Saturation_UpperSat;          /* Expression: Batt.Qmax*(1/Batt.lambda)
                                        * Referenced by: '<S99>/Saturation' (Parameter: UpperLimit)
                                        */
  real_T Saturation_LowerSat;          /* Expression: -inf
                                        * Referenced by: '<S99>/Saturation' (Parameter: LowerLimit)
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<S94>/Constant9' (Parameter: Value)
                                        */
  real_T Gain_Gain;                    /* Expression: sps.K1
                                        * Referenced by: '<S152>/Gain' (Parameter: Gain)
                                        */
  real_T Gain1_Gain;                   /* Expression: sps.K2
                                        * Referenced by: '<S152>/Gain1' (Parameter: Gain)
                                        */
  real_T Gain_Gain_f;                  /* Expression: sps.K1
                                        * Referenced by: '<S154>/Gain' (Parameter: Gain)
                                        */
  real_T Gain1_Gain_i;                 /* Expression: sps.K2
                                        * Referenced by: '<S154>/Gain1' (Parameter: Gain)
                                        */
  real_T Gain_Gain_g;                  /* Expression: sps.K1
                                        * Referenced by: '<S717>/Gain' (Parameter: Gain)
                                        */
  real_T Gain1_Gain_d;                 /* Expression: sps.K2
                                        * Referenced by: '<S717>/Gain1' (Parameter: Gain)
                                        */
  real_T Gain_Gain_i;                  /* Expression: sps.Freq
                                        * Referenced by: '<S719>/Gain' (Parameter: Gain)
                                        */
  real_T Gain1_Gain_m;                 /* Expression: 0.5
                                        * Referenced by: '<S875>/Gain1' (Parameter: Gain)
                                        */
  real_T Gain1_Gain_p;                 /* Expression: 0.5
                                        * Referenced by: '<S878>/Gain1' (Parameter: Gain)
                                        */
  real_T Gain_Y0;                      /* Expression: [1]
                                        * Referenced by: '<S865>/Gain' (Parameter: InitialOutput)
                                        */
  real_T Gain3_Gain[9];
  /* Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
   * Referenced by: '<S881>/Gain3' (Parameter: Gain)
   */
  real_T Gain1_Gain_g;                 /* Expression: 2/3
                                        * Referenced by: '<S881>/Gain1' (Parameter: Gain)
                                        */
  real_T Integ4_gainval;               /* Computed Parameter: Integ4_gainval
                                        * Referenced by: '<S874>/Integ4' (Parameter: gainval)
                                        */
  real_T Integ4_IC;                    /* Expression: 0
                                        * Referenced by: '<S874>/Integ4' (Parameter: InitialCondition)
                                        */
  real_T Toavoiddivisionbyzero_UpperSat;/* Expression: 1e6
                                         * Referenced by: '<S874>/To avoid division  by zero' (Parameter: UpperLimit)
                                         */
  real_T Toavoiddivisionbyzero_LowerSat;/* Expression: eps
                                         * Referenced by: '<S874>/To avoid division  by zero' (Parameter: LowerLimit)
                                         */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S876>/S-Function' (Parameter: P1Size)
                                        */
  real_T SFunction_P1;                 /* Expression: MaxDelay
                                        * Referenced by: '<S876>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size[2];         /* Computed Parameter: SFunction_P2_Size
                                        * Referenced by: '<S876>/S-Function' (Parameter: P2Size)
                                        */
  real_T SFunction_P2;                 /* Expression: Ts
                                        * Referenced by: '<S876>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size[2];         /* Computed Parameter: SFunction_P3_Size
                                        * Referenced by: '<S876>/S-Function' (Parameter: P3Size)
                                        */
  real_T SFunction_P3;                 /* Expression: InitialValue
                                        * Referenced by: '<S876>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size[2];         /* Computed Parameter: SFunction_P4_Size
                                        * Referenced by: '<S876>/S-Function' (Parameter: P4Size)
                                        */
  real_T SFunction_P4;                 /* Expression: DFT
                                        * Referenced by: '<S876>/S-Function' (Parameter: P4)
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S875>/Unit Delay' (Parameter: InitialCondition)
                                        */
  real_T Constant_Value;               /* Expression: 1/sps.Finit
                                        * Referenced by: '<S874>/Constant' (Parameter: Value)
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: sps.Vinit
                                        * Referenced by: '<S874>/Unit Delay1' (Parameter: InitialCondition)
                                        */
  real_T Integ4_gainval_n;             /* Computed Parameter: Integ4_gainval_n
                                        * Referenced by: '<S877>/Integ4' (Parameter: gainval)
                                        */
  real_T Integ4_IC_h;                  /* Expression: 0
                                        * Referenced by: '<S877>/Integ4' (Parameter: InitialCondition)
                                        */
  real_T Toavoiddivisionbyzero_UpperSa_a;/* Expression: 1e6
                                          * Referenced by: '<S877>/To avoid division  by zero' (Parameter: UpperLimit)
                                          */
  real_T Toavoiddivisionbyzero_LowerSa_f;/* Expression: eps
                                          * Referenced by: '<S877>/To avoid division  by zero' (Parameter: LowerLimit)
                                          */
  real_T SFunction_P1_Size_m[2];      /* Computed Parameter: SFunction_P1_Size_m
                                       * Referenced by: '<S879>/S-Function' (Parameter: P1Size)
                                       */
  real_T SFunction_P1_k;               /* Expression: MaxDelay
                                        * Referenced by: '<S879>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_o[2];      /* Computed Parameter: SFunction_P2_Size_o
                                       * Referenced by: '<S879>/S-Function' (Parameter: P2Size)
                                       */
  real_T SFunction_P2_h;               /* Expression: Ts
                                        * Referenced by: '<S879>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_o[2];      /* Computed Parameter: SFunction_P3_Size_o
                                       * Referenced by: '<S879>/S-Function' (Parameter: P3Size)
                                       */
  real_T SFunction_P3_k;               /* Expression: InitialValue
                                        * Referenced by: '<S879>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_h[2];      /* Computed Parameter: SFunction_P4_Size_h
                                       * Referenced by: '<S879>/S-Function' (Parameter: P4Size)
                                       */
  real_T SFunction_P4_h;               /* Expression: DFT
                                        * Referenced by: '<S879>/S-Function' (Parameter: P4)
                                        */
  real_T UnitDelay_InitialCondition_b; /* Expression: 0
                                        * Referenced by: '<S878>/Unit Delay' (Parameter: InitialCondition)
                                        */
  real_T Constant_Value_p;             /* Expression: 1/sps.Finit
                                        * Referenced by: '<S877>/Constant' (Parameter: Value)
                                        */
  real_T UnitDelay1_InitialCondition_a;/* Expression: sps.Vinit
                                        * Referenced by: '<S877>/Unit Delay1' (Parameter: InitialCondition)
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: inf
                                        * Referenced by: '<S865>/Saturation' (Parameter: UpperLimit)
                                        */
  real_T Saturation_LowerSat_h;        /* Expression: eps
                                        * Referenced by: '<S865>/Saturation' (Parameter: LowerLimit)
                                        */
  real_T Gain1_Gain_k;                 /* Expression: 0.5
                                        * Referenced by: '<S891>/Gain1' (Parameter: Gain)
                                        */
  real_T alpha_beta_Y0[2];             /* Expression: [0,0]
                                        * Referenced by: '<S915>/alpha_beta' (Parameter: InitialOutput)
                                        */
  real_T alpha_beta_Y0_m[2];           /* Expression: [0,0]
                                        * Referenced by: '<S916>/alpha_beta' (Parameter: InitialOutput)
                                        */
  real_T Constant_Value_e;             /* Expression: 0
                                        * Referenced by: '<S96>/Constant' (Parameter: Value)
                                        */
  real_T Constant_Value_ex;            /* Expression: 0
                                        * Referenced by: '<S97>/Constant' (Parameter: Value)
                                        */
  real_T Constant_Value_pl;            /* Expression: 0
                                        * Referenced by: '<S103>/Constant' (Parameter: Value)
                                        */
  real_T SFunction1_Value;             /* Expression: 0
                                        * Referenced by: '<S2>/S-Function1' (Parameter: Value)
                                        */
  real_T SFunction_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S2>/S-Function' (Parameter: InitialCondition)
                                        */
  real_T TempC_Value;                  /* Expression: 25
                                        * Referenced by: '<S72>/Temp C' (Parameter: Value)
                                        */
  real_T Saturation_UpperSat_e;        /* Expression: 26
                                        * Referenced by: '<S72>/Saturation' (Parameter: UpperLimit)
                                        */
  real_T Saturation_LowerSat_c;        /* Expression: -0.5
                                        * Referenced by: '<S72>/Saturation' (Parameter: LowerLimit)
                                        */
  real_T Constant1_Value_m;            /* Expression: 1
                                        * Referenced by: '<S12>/Constant1' (Parameter: Value)
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S149>/Discrete-Time Integrator' (Parameter: gainval)
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0.3
                                        * Referenced by: '<S149>/Discrete-Time Integrator' (Parameter: InitialCondition)
                                        */
  real_T DiscreteTimeIntegrator_UpperSat;/* Expression: 0.9
                                          * Referenced by: '<S149>/Discrete-Time Integrator' (Parameter: UpperSaturationLimit)
                                          */
  real_T DiscreteTimeIntegrator_LowerSat;/* Expression: 0.1
                                          * Referenced by: '<S149>/Discrete-Time Integrator' (Parameter: LowerSaturationLimit)
                                          */
  real_T DeblockMPPT_Y0;               /* Expression: -1
                                        * Referenced by: '<S141>/Deblock MPPT' (Parameter: Before)
                                        */
  real_T DeblockMPPT_YFinal;           /* Expression: 1
                                        * Referenced by: '<S141>/Deblock MPPT' (Parameter: After)
                                        */
  real_T Constant1_Value_a;            /* Expression: 0
                                        * Referenced by: '<S149>/Constant1' (Parameter: Value)
                                        */
  real_T Switch1_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S149>/Switch1' (Parameter: Threshold)
                                        */
  real_T Saturation_UpperSat_i;        /* Expression: 0.9
                                        * Referenced by: '<S141>/Saturation' (Parameter: UpperLimit)
                                        */
  real_T Saturation_LowerSat_g;        /* Expression: 0.1
                                        * Referenced by: '<S141>/Saturation' (Parameter: LowerLimit)
                                        */
  real_T SwitchCurrents_Value[9];      /* Expression: zeros(9,1)
                                        * Referenced by: '<S1236>/SwitchCurrents' (Parameter: Value)
                                        */
  real_T Constant1_Value_o;            /* Expression: 2*Batt.E0
                                        * Referenced by: '<S94>/Constant1' (Parameter: Value)
                                        */
  real_T Constant_Value_j;             /* Expression: Batt.E0
                                        * Referenced by: '<S94>/Constant' (Parameter: Value)
                                        */
  real_T itinit1_InitialCondition;     /* Expression: Batt.Q
                                        * Referenced by: '<S94>/it init1' (Parameter: InitialCondition)
                                        */
  real_T R2_Gain;                      /* Expression: 0.9999
                                        * Referenced by: '<S94>/R2' (Parameter: Gain)
                                        */
  real_T Currentfilter_NumCoef;        /* Expression: [1-exp(-Ts/(Batt_Tr/3))]
                                        * Referenced by: '<S94>/Current filter' (Parameter: Numerator)
                                        */
  real_T Currentfilter_DenCoef[2];     /* Expression: [1 -exp(-Ts/(Batt_Tr/3))]
                                        * Referenced by: '<S94>/Current filter' (Parameter: Denominator)
                                        */
  real_T Currentfilter_InitialStates;  /* Expression: 0
                                        * Referenced by: '<S94>/Current filter' (Parameter: InitialStates)
                                        */
  real_T inti_gainval;                 /* Computed Parameter: inti_gainval
                                        * Referenced by: '<S94>/int(i)' (Parameter: gainval)
                                        */
  real_T inti_UpperSat;                /* Expression: Batt.Qmax*3600
                                        * Referenced by: '<S94>/int(i)' (Parameter: UpperSaturationLimit)
                                        */
  real_T inti_LowerSat;                /* Expression: -inf
                                        * Referenced by: '<S94>/int(i)' (Parameter: LowerSaturationLimit)
                                        */
  real_T Gain_Gain_p;                  /* Expression: 1/3600
                                        * Referenced by: '<S94>/Gain' (Parameter: Gain)
                                        */
  real_T R3_Gain;                      /* Expression: 0.9999
                                        * Referenced by: '<S94>/R3' (Parameter: Gain)
                                        */
  real_T DiscreteTimeIntegrator_gainva_g;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_g
                           * Referenced by: '<S99>/Discrete-Time Integrator' (Parameter: gainval)
                           */
  real_T Memory2_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S94>/Memory2' (Parameter: InitialCondition)
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0
                                        * Referenced by: '<S132>/Delay' (Parameter: InitialCondition)
                                        */
  real_T Kp1_Gain;                     /* Expression: 60
                                        * Referenced by: '<S132>/Kp1' (Parameter: Gain)
                                        */
  real_T Kp_Gain;                      /* Expression: 0.000005
                                        * Referenced by: '<S132>/Kp' (Parameter: Gain)
                                        */
  real_T Integrator_IC;                /* Expression: 0.1
                                        * Referenced by: '<S132>/Integrator' (Parameter: InitialCondition)
                                        */
  real_T Integrator_UpperSat;          /* Expression: 0.9
                                        * Referenced by: '<S132>/Integrator' (Parameter: UpperSaturationLimit)
                                        */
  real_T Integrator_LowerSat;          /* Expression: 0.1
                                        * Referenced by: '<S132>/Integrator' (Parameter: LowerSaturationLimit)
                                        */
  real_T Saturation_UpperSat_o;        /* Expression: 0.9
                                        * Referenced by: '<S114>/Saturation' (Parameter: UpperLimit)
                                        */
  real_T Saturation_LowerSat_gp;       /* Expression: 0.1
                                        * Referenced by: '<S114>/Saturation' (Parameter: LowerLimit)
                                        */
  real_T Constant_Value_m;             /* Expression: 1
                                        * Referenced by: '<S114>/Constant' (Parameter: Value)
                                        */
  real_T UnitDelay1_InitialCondition_i;/* Expression: 10
                                        * Referenced by: '<S11>/Unit Delay1' (Parameter: InitialCondition)
                                        */
  real_T Constant_Value_c;             /* Expression: 1
                                        * Referenced by: '<S12>/Constant' (Parameter: Value)
                                        */
  real_T UnitDelay1_InitialCondition_l;/* Expression: 0
                                        * Referenced by: '<S12>/Unit Delay1' (Parameter: InitialCondition)
                                        */
  real_T Constant2_Value_d;            /* Expression: 1
                                        * Referenced by: '<S12>/Constant2' (Parameter: Value)
                                        */
  real_T UnitDelay_InitialCondition_o; /* Expression: 10
                                        * Referenced by: '<S11>/Unit Delay' (Parameter: InitialCondition)
                                        */
  real_T UnitDelay_InitialCondition_i; /* Expression: 0
                                        * Referenced by: '<S12>/Unit Delay' (Parameter: InitialCondition)
                                        */
  real_T Constant3_Value_c;            /* Expression: 1
                                        * Referenced by: '<S12>/Constant3' (Parameter: Value)
                                        */
  real_T UnitDelay_InitialCondition_m; /* Expression: 0
                                        * Referenced by: '<S766>/Unit Delay' (Parameter: InitialCondition)
                                        */
  real_T SwitchCurrents_Value_b[9];    /* Expression: zeros(9,1)
                                        * Referenced by: '<S1254>/SwitchCurrents' (Parameter: Value)
                                        */
  real_T SFunction_P1_Size_l[2];      /* Computed Parameter: SFunction_P1_Size_l
                                       * Referenced by: '<S1027>/S-Function' (Parameter: P1Size)
                                       */
  real_T SFunction_P1_o;               /* Expression: Ts
                                        * Referenced by: '<S1027>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_oc[2];    /* Computed Parameter: SFunction_P2_Size_oc
                                      * Referenced by: '<S1027>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_k;               /* Expression: h
                                        * Referenced by: '<S1027>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_d[2];      /* Computed Parameter: SFunction_P3_Size_d
                                       * Referenced by: '<S1027>/S-Function' (Parameter: P3Size)
                                       */
  real_T SFunction_P3_e;               /* Expression: Z
                                        * Referenced by: '<S1027>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_c[2];      /* Computed Parameter: SFunction_P4_Size_c
                                       * Referenced by: '<S1027>/S-Function' (Parameter: P4Size)
                                       */
  real_T SFunction_P4_g;               /* Expression: Phases
                                        * Referenced by: '<S1027>/S-Function' (Parameter: P4)
                                        */
  real_T SFunction_P1_Size_n[2];      /* Computed Parameter: SFunction_P1_Size_n
                                       * Referenced by: '<S1039>/S-Function' (Parameter: P1Size)
                                       */
  real_T SFunction_P1_c;               /* Expression: Ts
                                        * Referenced by: '<S1039>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_e[2];      /* Computed Parameter: SFunction_P2_Size_e
                                       * Referenced by: '<S1039>/S-Function' (Parameter: P2Size)
                                       */
  real_T SFunction_P2_f;               /* Expression: h
                                        * Referenced by: '<S1039>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_b[2];      /* Computed Parameter: SFunction_P3_Size_b
                                       * Referenced by: '<S1039>/S-Function' (Parameter: P3Size)
                                       */
  real_T SFunction_P3_f;               /* Expression: Z
                                        * Referenced by: '<S1039>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_f[2];      /* Computed Parameter: SFunction_P4_Size_f
                                       * Referenced by: '<S1039>/S-Function' (Parameter: P4Size)
                                       */
  real_T SFunction_P4_i;               /* Expression: Phases
                                        * Referenced by: '<S1039>/S-Function' (Parameter: P4)
                                        */
  real_T Gain2_Gain;                   /* Expression: Z
                                        * Referenced by: '<S1027>/Gain2' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_h[2];      /* Computed Parameter: SFunction_P1_Size_h
                                       * Referenced by: '<S1025>/S-Function' (Parameter: P1Size)
                                       */
  real_T SFunction_P1_e;               /* Expression: Ts
                                        * Referenced by: '<S1025>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_d[2];      /* Computed Parameter: SFunction_P2_Size_d
                                       * Referenced by: '<S1025>/S-Function' (Parameter: P2Size)
                                       */
  real_T SFunction_P2_a;               /* Expression: h
                                        * Referenced by: '<S1025>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_bf[2];    /* Computed Parameter: SFunction_P3_Size_bf
                                      * Referenced by: '<S1025>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_b;               /* Expression: Z
                                        * Referenced by: '<S1025>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_g[2];      /* Computed Parameter: SFunction_P4_Size_g
                                       * Referenced by: '<S1025>/S-Function' (Parameter: P4Size)
                                       */
  real_T SFunction_P4_h3;              /* Expression: Phases
                                        * Referenced by: '<S1025>/S-Function' (Parameter: P4)
                                        */
  real_T SFunction_P1_Size_m4[2];    /* Computed Parameter: SFunction_P1_Size_m4
                                      * Referenced by: '<S1037>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_m;               /* Expression: Ts
                                        * Referenced by: '<S1037>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_l[2];      /* Computed Parameter: SFunction_P2_Size_l
                                       * Referenced by: '<S1037>/S-Function' (Parameter: P2Size)
                                       */
  real_T SFunction_P2_m;               /* Expression: h
                                        * Referenced by: '<S1037>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_d1[2];    /* Computed Parameter: SFunction_P3_Size_d1
                                      * Referenced by: '<S1037>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_a;               /* Expression: Z
                                        * Referenced by: '<S1037>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_p[2];      /* Computed Parameter: SFunction_P4_Size_p
                                       * Referenced by: '<S1037>/S-Function' (Parameter: P4Size)
                                       */
  real_T SFunction_P4_m;               /* Expression: Phases
                                        * Referenced by: '<S1037>/S-Function' (Parameter: P4)
                                        */
  real_T Gain2_Gain_a;                 /* Expression: Z
                                        * Referenced by: '<S1025>/Gain2' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_c[2];      /* Computed Parameter: SFunction_P1_Size_c
                                       * Referenced by: '<S1026>/S-Function' (Parameter: P1Size)
                                       */
  real_T SFunction_P1_f;               /* Expression: Ts
                                        * Referenced by: '<S1026>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_p[2];      /* Computed Parameter: SFunction_P2_Size_p
                                       * Referenced by: '<S1026>/S-Function' (Parameter: P2Size)
                                       */
  real_T SFunction_P2_n;               /* Expression: h
                                        * Referenced by: '<S1026>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_p[2];      /* Computed Parameter: SFunction_P3_Size_p
                                       * Referenced by: '<S1026>/S-Function' (Parameter: P3Size)
                                       */
  real_T SFunction_P3_m;               /* Expression: Z
                                        * Referenced by: '<S1026>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_i[2];      /* Computed Parameter: SFunction_P4_Size_i
                                       * Referenced by: '<S1026>/S-Function' (Parameter: P4Size)
                                       */
  real_T SFunction_P4_n;               /* Expression: Phases
                                        * Referenced by: '<S1026>/S-Function' (Parameter: P4)
                                        */
  real_T SFunction_P1_Size_d[2];      /* Computed Parameter: SFunction_P1_Size_d
                                       * Referenced by: '<S1038>/S-Function' (Parameter: P1Size)
                                       */
  real_T SFunction_P1_p;               /* Expression: Ts
                                        * Referenced by: '<S1038>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_do[2];    /* Computed Parameter: SFunction_P2_Size_do
                                      * Referenced by: '<S1038>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_e;               /* Expression: h
                                        * Referenced by: '<S1038>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_c[2];      /* Computed Parameter: SFunction_P3_Size_c
                                       * Referenced by: '<S1038>/S-Function' (Parameter: P3Size)
                                       */
  real_T SFunction_P3_mb;              /* Expression: Z
                                        * Referenced by: '<S1038>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_o[2];      /* Computed Parameter: SFunction_P4_Size_o
                                       * Referenced by: '<S1038>/S-Function' (Parameter: P4Size)
                                       */
  real_T SFunction_P4_f;               /* Expression: Phases
                                        * Referenced by: '<S1038>/S-Function' (Parameter: P4)
                                        */
  real_T Gain2_Gain_d;                 /* Expression: Z
                                        * Referenced by: '<S1026>/Gain2' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_o[2];      /* Computed Parameter: SFunction_P1_Size_o
                                       * Referenced by: '<S1091>/S-Function' (Parameter: P1Size)
                                       */
  real_T SFunction_P1_d;               /* Expression: Ts
                                        * Referenced by: '<S1091>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_g[2];      /* Computed Parameter: SFunction_P2_Size_g
                                       * Referenced by: '<S1091>/S-Function' (Parameter: P2Size)
                                       */
  real_T SFunction_P2_k3;              /* Expression: h
                                        * Referenced by: '<S1091>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_e[2];      /* Computed Parameter: SFunction_P3_Size_e
                                       * Referenced by: '<S1091>/S-Function' (Parameter: P3Size)
                                       */
  real_T SFunction_P3_i;               /* Expression: Z
                                        * Referenced by: '<S1091>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_a[2];      /* Computed Parameter: SFunction_P4_Size_a
                                       * Referenced by: '<S1091>/S-Function' (Parameter: P4Size)
                                       */
  real_T SFunction_P4_e;               /* Expression: Phases
                                        * Referenced by: '<S1091>/S-Function' (Parameter: P4)
                                        */
  real_T SFunction_P1_Size_ls[2];    /* Computed Parameter: SFunction_P1_Size_ls
                                      * Referenced by: '<S1079>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_c1;              /* Expression: Ts
                                        * Referenced by: '<S1079>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_n[2];      /* Computed Parameter: SFunction_P2_Size_n
                                       * Referenced by: '<S1079>/S-Function' (Parameter: P2Size)
                                       */
  real_T SFunction_P2_a5;              /* Expression: h
                                        * Referenced by: '<S1079>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_pk[2];    /* Computed Parameter: SFunction_P3_Size_pk
                                      * Referenced by: '<S1079>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_ik;              /* Expression: Z
                                        * Referenced by: '<S1079>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_cr[2];    /* Computed Parameter: SFunction_P4_Size_cr
                                      * Referenced by: '<S1079>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_j;               /* Expression: Phases
                                        * Referenced by: '<S1079>/S-Function' (Parameter: P4)
                                        */
  real_T Gain2_Gain_o;                 /* Expression: Z
                                        * Referenced by: '<S1091>/Gain2' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_h0[2];    /* Computed Parameter: SFunction_P1_Size_h0
                                      * Referenced by: '<S1089>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_g;               /* Expression: Ts
                                        * Referenced by: '<S1089>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_lo[2];    /* Computed Parameter: SFunction_P2_Size_lo
                                      * Referenced by: '<S1089>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_mv;              /* Expression: h
                                        * Referenced by: '<S1089>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_eq[2];    /* Computed Parameter: SFunction_P3_Size_eq
                                      * Referenced by: '<S1089>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_kb;              /* Expression: Z
                                        * Referenced by: '<S1089>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_fo[2];    /* Computed Parameter: SFunction_P4_Size_fo
                                      * Referenced by: '<S1089>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_iw;              /* Expression: Phases
                                        * Referenced by: '<S1089>/S-Function' (Parameter: P4)
                                        */
  real_T SFunction_P1_Size_lz[2];    /* Computed Parameter: SFunction_P1_Size_lz
                                      * Referenced by: '<S1077>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_k4;              /* Expression: Ts
                                        * Referenced by: '<S1077>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_gz[2];    /* Computed Parameter: SFunction_P2_Size_gz
                                      * Referenced by: '<S1077>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_l;               /* Expression: h
                                        * Referenced by: '<S1077>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_bv[2];    /* Computed Parameter: SFunction_P3_Size_bv
                                      * Referenced by: '<S1077>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_i1;              /* Expression: Z
                                        * Referenced by: '<S1077>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_gy[2];    /* Computed Parameter: SFunction_P4_Size_gy
                                      * Referenced by: '<S1077>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_c;               /* Expression: Phases
                                        * Referenced by: '<S1077>/S-Function' (Parameter: P4)
                                        */
  real_T Gain2_Gain_j;                 /* Expression: Z
                                        * Referenced by: '<S1089>/Gain2' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_g[2];      /* Computed Parameter: SFunction_P1_Size_g
                                       * Referenced by: '<S1090>/S-Function' (Parameter: P1Size)
                                       */
  real_T SFunction_P1_fd;              /* Expression: Ts
                                        * Referenced by: '<S1090>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_b[2];      /* Computed Parameter: SFunction_P2_Size_b
                                       * Referenced by: '<S1090>/S-Function' (Parameter: P2Size)
                                       */
  real_T SFunction_P2_p;               /* Expression: h
                                        * Referenced by: '<S1090>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_j[2];      /* Computed Parameter: SFunction_P3_Size_j
                                       * Referenced by: '<S1090>/S-Function' (Parameter: P3Size)
                                       */
  real_T SFunction_P3_o;               /* Expression: Z
                                        * Referenced by: '<S1090>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_aa[2];    /* Computed Parameter: SFunction_P4_Size_aa
                                      * Referenced by: '<S1090>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_i2;              /* Expression: Phases
                                        * Referenced by: '<S1090>/S-Function' (Parameter: P4)
                                        */
  real_T SFunction_P1_Size_e[2];      /* Computed Parameter: SFunction_P1_Size_e
                                       * Referenced by: '<S1078>/S-Function' (Parameter: P1Size)
                                       */
  real_T SFunction_P1_j;               /* Expression: Ts
                                        * Referenced by: '<S1078>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_j[2];      /* Computed Parameter: SFunction_P2_Size_j
                                       * Referenced by: '<S1078>/S-Function' (Parameter: P2Size)
                                       */
  real_T SFunction_P2_j;               /* Expression: h
                                        * Referenced by: '<S1078>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_dx[2];    /* Computed Parameter: SFunction_P3_Size_dx
                                      * Referenced by: '<S1078>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_mn;              /* Expression: Z
                                        * Referenced by: '<S1078>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_hc[2];    /* Computed Parameter: SFunction_P4_Size_hc
                                      * Referenced by: '<S1078>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_d;               /* Expression: Phases
                                        * Referenced by: '<S1078>/S-Function' (Parameter: P4)
                                        */
  real_T Gain2_Gain_f;                 /* Expression: Z
                                        * Referenced by: '<S1090>/Gain2' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_eb[2];    /* Computed Parameter: SFunction_P1_Size_eb
                                      * Referenced by: '<S1105>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_i;               /* Expression: Ts
                                        * Referenced by: '<S1105>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_gd[2];    /* Computed Parameter: SFunction_P2_Size_gd
                                      * Referenced by: '<S1105>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_fv;              /* Expression: h
                                        * Referenced by: '<S1105>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_be[2];    /* Computed Parameter: SFunction_P3_Size_be
                                      * Referenced by: '<S1105>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_a4;              /* Expression: Z
                                        * Referenced by: '<S1105>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_k[2];      /* Computed Parameter: SFunction_P4_Size_k
                                       * Referenced by: '<S1105>/S-Function' (Parameter: P4Size)
                                       */
  real_T SFunction_P4_l;               /* Expression: Phases
                                        * Referenced by: '<S1105>/S-Function' (Parameter: P4)
                                        */
  real_T SFunction_P1_Size_ei[2];    /* Computed Parameter: SFunction_P1_Size_ei
                                      * Referenced by: '<S1117>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_i2;              /* Expression: Ts
                                        * Referenced by: '<S1117>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_m[2];      /* Computed Parameter: SFunction_P2_Size_m
                                       * Referenced by: '<S1117>/S-Function' (Parameter: P2Size)
                                       */
  real_T SFunction_P2_fd;              /* Expression: h
                                        * Referenced by: '<S1117>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_c5[2];    /* Computed Parameter: SFunction_P3_Size_c5
                                      * Referenced by: '<S1117>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_c;               /* Expression: Z
                                        * Referenced by: '<S1117>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_kr[2];    /* Computed Parameter: SFunction_P4_Size_kr
                                      * Referenced by: '<S1117>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_a;               /* Expression: Phases
                                        * Referenced by: '<S1117>/S-Function' (Parameter: P4)
                                        */
  real_T Gain2_Gain_i;                 /* Expression: Z
                                        * Referenced by: '<S1105>/Gain2' (Parameter: Gain)
                                        */
  real_T Gain2_Gain_g;                 /* Expression: Z
                                        * Referenced by: '<S1117>/Gain2' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_gb[2];    /* Computed Parameter: SFunction_P1_Size_gb
                                      * Referenced by: '<S1103>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_b;               /* Expression: Ts
                                        * Referenced by: '<S1103>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_i[2];      /* Computed Parameter: SFunction_P2_Size_i
                                       * Referenced by: '<S1103>/S-Function' (Parameter: P2Size)
                                       */
  real_T SFunction_P2_ab;              /* Expression: h
                                        * Referenced by: '<S1103>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_f[2];      /* Computed Parameter: SFunction_P3_Size_f
                                       * Referenced by: '<S1103>/S-Function' (Parameter: P3Size)
                                       */
  real_T SFunction_P3_kv;              /* Expression: Z
                                        * Referenced by: '<S1103>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_j[2];      /* Computed Parameter: SFunction_P4_Size_j
                                       * Referenced by: '<S1103>/S-Function' (Parameter: P4Size)
                                       */
  real_T SFunction_P4_el;              /* Expression: Phases
                                        * Referenced by: '<S1103>/S-Function' (Parameter: P4)
                                        */
  real_T SFunction_P1_Size_a[2];      /* Computed Parameter: SFunction_P1_Size_a
                                       * Referenced by: '<S1115>/S-Function' (Parameter: P1Size)
                                       */
  real_T SFunction_P1_et;              /* Expression: Ts
                                        * Referenced by: '<S1115>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_c[2];      /* Computed Parameter: SFunction_P2_Size_c
                                       * Referenced by: '<S1115>/S-Function' (Parameter: P2Size)
                                       */
  real_T SFunction_P2_p4;              /* Expression: h
                                        * Referenced by: '<S1115>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_fg[2];    /* Computed Parameter: SFunction_P3_Size_fg
                                      * Referenced by: '<S1115>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_l;               /* Expression: Z
                                        * Referenced by: '<S1115>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_b[2];      /* Computed Parameter: SFunction_P4_Size_b
                                       * Referenced by: '<S1115>/S-Function' (Parameter: P4Size)
                                       */
  real_T SFunction_P4_b;               /* Expression: Phases
                                        * Referenced by: '<S1115>/S-Function' (Parameter: P4)
                                        */
  real_T Gain2_Gain_j4;                /* Expression: Z
                                        * Referenced by: '<S1103>/Gain2' (Parameter: Gain)
                                        */
  real_T Gain2_Gain_oj;                /* Expression: Z
                                        * Referenced by: '<S1115>/Gain2' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_ou[2];    /* Computed Parameter: SFunction_P1_Size_ou
                                      * Referenced by: '<S1104>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_l;               /* Expression: Ts
                                        * Referenced by: '<S1104>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_b0[2];    /* Computed Parameter: SFunction_P2_Size_b0
                                      * Referenced by: '<S1104>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_av;              /* Expression: h
                                        * Referenced by: '<S1104>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_jq[2];    /* Computed Parameter: SFunction_P3_Size_jq
                                      * Referenced by: '<S1104>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_f5;              /* Expression: Z
                                        * Referenced by: '<S1104>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_aa1[2];  /* Computed Parameter: SFunction_P4_Size_aa1
                                     * Referenced by: '<S1104>/S-Function' (Parameter: P4Size)
                                     */
  real_T SFunction_P4_nf;              /* Expression: Phases
                                        * Referenced by: '<S1104>/S-Function' (Parameter: P4)
                                        */
  real_T SFunction_P1_Size_h01[2];  /* Computed Parameter: SFunction_P1_Size_h01
                                     * Referenced by: '<S1116>/S-Function' (Parameter: P1Size)
                                     */
  real_T SFunction_P1_h;               /* Expression: Ts
                                        * Referenced by: '<S1116>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_cn[2];    /* Computed Parameter: SFunction_P2_Size_cn
                                      * Referenced by: '<S1116>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_a5i;             /* Expression: h
                                        * Referenced by: '<S1116>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_n[2];      /* Computed Parameter: SFunction_P3_Size_n
                                       * Referenced by: '<S1116>/S-Function' (Parameter: P3Size)
                                       */
  real_T SFunction_P3_cq;              /* Expression: Z
                                        * Referenced by: '<S1116>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_c1[2];    /* Computed Parameter: SFunction_P4_Size_c1
                                      * Referenced by: '<S1116>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_dt;              /* Expression: Phases
                                        * Referenced by: '<S1116>/S-Function' (Parameter: P4)
                                        */
  real_T Gain2_Gain_k;                 /* Expression: Z
                                        * Referenced by: '<S1104>/Gain2' (Parameter: Gain)
                                        */
  real_T Gain2_Gain_m;                 /* Expression: Z
                                        * Referenced by: '<S1116>/Gain2' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_b[2];      /* Computed Parameter: SFunction_P1_Size_b
                                       * Referenced by: '<S1131>/S-Function' (Parameter: P1Size)
                                       */
  real_T SFunction_P1_i2v;             /* Expression: Ts
                                        * Referenced by: '<S1131>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_i5[2];    /* Computed Parameter: SFunction_P2_Size_i5
                                      * Referenced by: '<S1131>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_kg;              /* Expression: h
                                        * Referenced by: '<S1131>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_dc[2];    /* Computed Parameter: SFunction_P3_Size_dc
                                      * Referenced by: '<S1131>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_p;               /* Expression: Z
                                        * Referenced by: '<S1131>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_oa[2];    /* Computed Parameter: SFunction_P4_Size_oa
                                      * Referenced by: '<S1131>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_a4;              /* Expression: Phases
                                        * Referenced by: '<S1131>/S-Function' (Parameter: P4)
                                        */
  real_T SFunction_P1_Size_f[2];      /* Computed Parameter: SFunction_P1_Size_f
                                       * Referenced by: '<S1143>/S-Function' (Parameter: P1Size)
                                       */
  real_T SFunction_P1_er;              /* Expression: Ts
                                        * Referenced by: '<S1143>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_a[2];      /* Computed Parameter: SFunction_P2_Size_a
                                       * Referenced by: '<S1143>/S-Function' (Parameter: P2Size)
                                       */
  real_T SFunction_P2_e1;              /* Expression: h
                                        * Referenced by: '<S1143>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_fh[2];    /* Computed Parameter: SFunction_P3_Size_fh
                                      * Referenced by: '<S1143>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_lk;              /* Expression: Z
                                        * Referenced by: '<S1143>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_po[2];    /* Computed Parameter: SFunction_P4_Size_po
                                      * Referenced by: '<S1143>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_ho;              /* Expression: Phases
                                        * Referenced by: '<S1143>/S-Function' (Parameter: P4)
                                        */
  real_T Gain2_Gain_fe;                /* Expression: Z
                                        * Referenced by: '<S1131>/Gain2' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_k[2];      /* Computed Parameter: SFunction_P1_Size_k
                                       * Referenced by: '<S1129>/S-Function' (Parameter: P1Size)
                                       */
  real_T SFunction_P1_ii;              /* Expression: Ts
                                        * Referenced by: '<S1129>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_b3[2];    /* Computed Parameter: SFunction_P2_Size_b3
                                      * Referenced by: '<S1129>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_pf;              /* Expression: h
                                        * Referenced by: '<S1129>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_p3[2];    /* Computed Parameter: SFunction_P3_Size_p3
                                      * Referenced by: '<S1129>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_pa;              /* Expression: Z
                                        * Referenced by: '<S1129>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_d[2];      /* Computed Parameter: SFunction_P4_Size_d
                                       * Referenced by: '<S1129>/S-Function' (Parameter: P4Size)
                                       */
  real_T SFunction_P4_cc;              /* Expression: Phases
                                        * Referenced by: '<S1129>/S-Function' (Parameter: P4)
                                        */
  real_T SFunction_P1_Size_ni[2];    /* Computed Parameter: SFunction_P1_Size_ni
                                      * Referenced by: '<S1141>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_dl;              /* Expression: Ts
                                        * Referenced by: '<S1141>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_h[2];      /* Computed Parameter: SFunction_P2_Size_h
                                       * Referenced by: '<S1141>/S-Function' (Parameter: P2Size)
                                       */
  real_T SFunction_P2_af;              /* Expression: h
                                        * Referenced by: '<S1141>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_k[2];      /* Computed Parameter: SFunction_P3_Size_k
                                       * Referenced by: '<S1141>/S-Function' (Parameter: P3Size)
                                       */
  real_T SFunction_P3_e5;              /* Expression: Z
                                        * Referenced by: '<S1141>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_m[2];      /* Computed Parameter: SFunction_P4_Size_m
                                       * Referenced by: '<S1141>/S-Function' (Parameter: P4Size)
                                       */
  real_T SFunction_P4_f5;              /* Expression: Phases
                                        * Referenced by: '<S1141>/S-Function' (Parameter: P4)
                                        */
  real_T Gain2_Gain_c;                 /* Expression: Z
                                        * Referenced by: '<S1129>/Gain2' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_cz[2];    /* Computed Parameter: SFunction_P1_Size_cz
                                      * Referenced by: '<S1130>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_c1j;             /* Expression: Ts
                                        * Referenced by: '<S1130>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_ey[2];    /* Computed Parameter: SFunction_P2_Size_ey
                                      * Referenced by: '<S1130>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_ls;              /* Expression: h
                                        * Referenced by: '<S1130>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_k4[2];    /* Computed Parameter: SFunction_P3_Size_k4
                                      * Referenced by: '<S1130>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_d;               /* Expression: Z
                                        * Referenced by: '<S1130>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_iw[2];    /* Computed Parameter: SFunction_P4_Size_iw
                                      * Referenced by: '<S1130>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_av;              /* Expression: Phases
                                        * Referenced by: '<S1130>/S-Function' (Parameter: P4)
                                        */
  real_T SFunction_P1_Size_ln[2];    /* Computed Parameter: SFunction_P1_Size_ln
                                      * Referenced by: '<S1142>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_fb;              /* Expression: Ts
                                        * Referenced by: '<S1142>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_pc[2];    /* Computed Parameter: SFunction_P2_Size_pc
                                      * Referenced by: '<S1142>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_g;               /* Expression: h
                                        * Referenced by: '<S1142>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_ba[2];    /* Computed Parameter: SFunction_P3_Size_ba
                                      * Referenced by: '<S1142>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_ke;              /* Expression: Z
                                        * Referenced by: '<S1142>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_he[2];    /* Computed Parameter: SFunction_P4_Size_he
                                      * Referenced by: '<S1142>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_ah;              /* Expression: Phases
                                        * Referenced by: '<S1142>/S-Function' (Parameter: P4)
                                        */
  real_T Gain2_Gain_m2;                /* Expression: Z
                                        * Referenced by: '<S1130>/Gain2' (Parameter: Gain)
                                        */
  real_T valp_nom2_Value;              /* Expression: MagnitudeVps
                                        * Referenced by: '<S725>/valp_nom2' (Parameter: Value)
                                        */
  real_T SinglePhase_Value;            /* Expression: VariationPhaseA
                                        * Referenced by: '<S725>/SinglePhase' (Parameter: Value)
                                        */
  real_T Switch5_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S725>/Switch5' (Parameter: Threshold)
                                        */
  real_T valp_nom1_Value;              /* Expression: FreqVps
                                        * Referenced by: '<S725>/valp_nom1' (Parameter: Value)
                                        */
  real_T Gain_Gain_pf;                 /* Expression: 2*pi
                                        * Referenced by: '<S725>/Gain' (Parameter: Gain)
                                        */
  real_T valp_nom_Value;               /* Expression: PhaseVps
                                        * Referenced by: '<S725>/valp_nom' (Parameter: Value)
                                        */
  real_T Gain3_Gain_k;                 /* Expression: pi/180
                                        * Referenced by: '<S725>/Gain3' (Parameter: Gain)
                                        */
  real_T P1_Value[3];                  /* Expression: [0  -2*pi/3  2*pi/3]
                                        * Referenced by: '<S725>/P1' (Parameter: Value)
                                        */
  real_T SFunction_P1_Size_fx[2];    /* Computed Parameter: SFunction_P1_Size_fx
                                      * Referenced by: '<S963>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_b3;              /* Expression: Data_width
                                        * Referenced by: '<S963>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_dv[2];    /* Computed Parameter: SFunction_P2_Size_dv
                                      * Referenced by: '<S963>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_pr[8];           /* Expression: InitialConditions
                                        * Referenced by: '<S963>/S-Function' (Parameter: P2)
                                        */
  real_T C4_Value;                     /* Expression: External
                                        * Referenced by: '<S13>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData[4];         /* Expression: sps.tv
                                        * Referenced by: '<S177>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData[4];         /* Expression: sps.opv
                                        * Referenced by: '<S177>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch3' (Parameter: Threshold)
                                        */
  real_T Constant5_Value;              /* Expression: InitialState
                                        * Referenced by: '<S13>/Constant5' (Parameter: Value)
                                        */
  real_T Switch_Threshold;             /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch' (Parameter: Threshold)
                                        */
  real_T C4_Value_h;                   /* Expression: BR.com
                                        * Referenced by: '<S165>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_a[5];       /* Expression: tv
                                        * Referenced by: '<S166>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_n[5];       /* Expression: opv
                                        * Referenced by: '<S166>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_g;          /* Expression: 0.5
                                        * Referenced by: '<S165>/Switch3' (Parameter: Threshold)
                                        */
  real_T Switch1_Threshold_c;          /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch1' (Parameter: Threshold)
                                        */
  real_T C4_Value_k;                   /* Expression: BR.com
                                        * Referenced by: '<S169>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_m[5];       /* Expression: tv
                                        * Referenced by: '<S170>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_j[5];       /* Expression: opv
                                        * Referenced by: '<S170>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_l;          /* Expression: 0.5
                                        * Referenced by: '<S169>/Switch3' (Parameter: Threshold)
                                        */
  real_T Switch2_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch2' (Parameter: Threshold)
                                        */
  real_T C4_Value_d;                   /* Expression: BR.com
                                        * Referenced by: '<S173>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_an[5];      /* Expression: tv
                                        * Referenced by: '<S174>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_m[5];       /* Expression: opv
                                        * Referenced by: '<S174>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_n;          /* Expression: 0.5
                                        * Referenced by: '<S173>/Switch3' (Parameter: Threshold)
                                        */
  real_T C4_Value_c;                   /* Expression: External
                                        * Referenced by: '<S17>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_d[4];       /* Expression: sps.tv
                                        * Referenced by: '<S245>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_d[4];       /* Expression: sps.opv
                                        * Referenced by: '<S245>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_p;          /* Expression: 0.5
                                        * Referenced by: '<S17>/Switch3' (Parameter: Threshold)
                                        */
  real_T Constant5_Value_m;            /* Expression: InitialState
                                        * Referenced by: '<S17>/Constant5' (Parameter: Value)
                                        */
  real_T Switch_Threshold_b;           /* Expression: 0.5
                                        * Referenced by: '<S17>/Switch' (Parameter: Threshold)
                                        */
  real_T C4_Value_dl;                  /* Expression: BR.com
                                        * Referenced by: '<S233>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_j[5];       /* Expression: tv
                                        * Referenced by: '<S234>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_c[5];       /* Expression: opv
                                        * Referenced by: '<S234>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_e;          /* Expression: 0.5
                                        * Referenced by: '<S233>/Switch3' (Parameter: Threshold)
                                        */
  real_T Switch1_Threshold_m;          /* Expression: 0.5
                                        * Referenced by: '<S17>/Switch1' (Parameter: Threshold)
                                        */
  real_T C4_Value_g;                   /* Expression: BR.com
                                        * Referenced by: '<S237>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_f[5];       /* Expression: tv
                                        * Referenced by: '<S238>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_k[5];       /* Expression: opv
                                        * Referenced by: '<S238>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_d;          /* Expression: 0.5
                                        * Referenced by: '<S237>/Switch3' (Parameter: Threshold)
                                        */
  real_T Switch2_Threshold_n;          /* Expression: 0.5
                                        * Referenced by: '<S17>/Switch2' (Parameter: Threshold)
                                        */
  real_T C4_Value_b;                   /* Expression: BR.com
                                        * Referenced by: '<S241>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_ms[5];      /* Expression: tv
                                        * Referenced by: '<S242>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_h[5];       /* Expression: opv
                                        * Referenced by: '<S242>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_c;          /* Expression: 0.5
                                        * Referenced by: '<S241>/Switch3' (Parameter: Threshold)
                                        */
  real_T C4_Value_n;                   /* Expression: External
                                        * Referenced by: '<S18>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_b[4];       /* Expression: sps.tv
                                        * Referenced by: '<S262>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_p[4];       /* Expression: sps.opv
                                        * Referenced by: '<S262>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_f;          /* Expression: 0.5
                                        * Referenced by: '<S18>/Switch3' (Parameter: Threshold)
                                        */
  real_T Constant5_Value_f;            /* Expression: InitialState
                                        * Referenced by: '<S18>/Constant5' (Parameter: Value)
                                        */
  real_T Switch_Threshold_n;           /* Expression: 0.5
                                        * Referenced by: '<S18>/Switch' (Parameter: Threshold)
                                        */
  real_T C4_Value_dg;                  /* Expression: BR.com
                                        * Referenced by: '<S250>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_e[5];       /* Expression: tv
                                        * Referenced by: '<S251>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_g[5];       /* Expression: opv
                                        * Referenced by: '<S251>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_b;          /* Expression: 0.5
                                        * Referenced by: '<S250>/Switch3' (Parameter: Threshold)
                                        */
  real_T Switch1_Threshold_j;          /* Expression: 0.5
                                        * Referenced by: '<S18>/Switch1' (Parameter: Threshold)
                                        */
  real_T C4_Value_l;                   /* Expression: BR.com
                                        * Referenced by: '<S254>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_fl[5];      /* Expression: tv
                                        * Referenced by: '<S255>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_hs[5];      /* Expression: opv
                                        * Referenced by: '<S255>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_bv;         /* Expression: 0.5
                                        * Referenced by: '<S254>/Switch3' (Parameter: Threshold)
                                        */
  real_T Switch2_Threshold_e;          /* Expression: 0.5
                                        * Referenced by: '<S18>/Switch2' (Parameter: Threshold)
                                        */
  real_T C4_Value_bd;                  /* Expression: BR.com
                                        * Referenced by: '<S258>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_i[5];       /* Expression: tv
                                        * Referenced by: '<S259>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_pi[5];      /* Expression: opv
                                        * Referenced by: '<S259>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_ch;         /* Expression: 0.5
                                        * Referenced by: '<S258>/Switch3' (Parameter: Threshold)
                                        */
  real_T StateSpace_P1_Size[2];        /* Computed Parameter: StateSpace_P1_Size
                                        * Referenced by: '<S1227>/State-Space' (Parameter: P1Size)
                                        */
  real_T StateSpace_P1;                /* Expression: 0
                                        * Referenced by: '<S1227>/State-Space' (Parameter: P1)
                                        */
  real_T StateSpace_P2_Size[2];        /* Computed Parameter: StateSpace_P2_Size
                                        * Referenced by: '<S1227>/State-Space' (Parameter: P2Size)
                                        */
  real_T StateSpace_P2;                /* Expression: 0
                                        * Referenced by: '<S1227>/State-Space' (Parameter: P2)
                                        */
  real_T donotdeletethisgain_Gain;     /* Expression: 1
                                        * Referenced by: '<S755>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_g;   /* Expression: 1
                                        * Referenced by: '<S756>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_k;   /* Expression: 1
                                        * Referenced by: '<S757>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Saturation_UpperSat_k;        /* Expression: inf
                                        * Referenced by: '<S69>/Saturation' (Parameter: UpperLimit)
                                        */
  real_T Saturation_LowerSat_gx;       /* Expression: 0.01
                                        * Referenced by: '<S69>/Saturation' (Parameter: LowerLimit)
                                        */
  real_T u_K_Value;                    /* Expression: 273.15
                                        * Referenced by: '<S983>/0_K' (Parameter: Value)
                                        */
  real_T Tref_K_Value;                 /* Expression: Tref_K
                                        * Referenced by: '<S983>/Tref_K' (Parameter: Value)
                                        */
  real_T alpha_Isc_Gain;               /* Expression: alpha_Isc
                                        * Referenced by: '<S983>/alpha_Isc' (Parameter: Gain)
                                        */
  real_T IL_module_Value;              /* Expression: IL
                                        * Referenced by: '<S983>/IL_module' (Parameter: Value)
                                        */
  real_T Ir1_Value;                    /* Expression: 1000
                                        * Referenced by: '<S72>/Ir1' (Parameter: Value)
                                        */
  real_T RateLimiter_RisingLim;     /* Computed Parameter: RateLimiter_RisingLim
                                     * Referenced by: '<S72>/Rate Limiter' (Parameter: RisingSlewLimit)
                                     */
  real_T RateLimiter_FallingLim;   /* Computed Parameter: RateLimiter_FallingLim
                                    * Referenced by: '<S72>/Rate Limiter' (Parameter: FallingSlewLimit)
                                    */
  real_T RateLimiter_IC;               /* Expression: 1
                                        * Referenced by: '<S72>/Rate Limiter' (Parameter: InitialCondition)
                                        */
  real_T uSref_Gain;                   /* Expression: 1e-3
                                        * Referenced by: '<S983>/1//Sref' (Parameter: Gain)
                                        */
  real_T UnitDelay_InitialCondition_d; /* Expression: 0
                                        * Referenced by: '<S987>/Unit Delay' (Parameter: InitialCondition)
                                        */
  real_T eee_Value;                    /* Expression: Vf
                                        * Referenced by: '<S977>/eee' (Parameter: Value)
                                        */
  real_T Constant_Value_cr;            /* Expression: 1
                                        * Referenced by: '<S11>/Constant' (Parameter: Value)
                                        */
  real_T C4_Value_m;                   /* Expression: BR.com
                                        * Referenced by: '<S118>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_ex[5];      /* Expression: tv
                                        * Referenced by: '<S119>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_o[5];       /* Expression: opv
                                        * Referenced by: '<S119>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_j;          /* Expression: 0.5
                                        * Referenced by: '<S118>/Switch3' (Parameter: Threshold)
                                        */
  real_T C4_Value_i;                   /* Expression: BR.com
                                        * Referenced by: '<S122>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_jc[5];      /* Expression: tv
                                        * Referenced by: '<S123>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_f[5];       /* Expression: opv
                                        * Referenced by: '<S123>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_k;          /* Expression: 0.5
                                        * Referenced by: '<S122>/Switch3' (Parameter: Threshold)
                                        */
  real_T C4_Value_d2;                  /* Expression: BR.com
                                        * Referenced by: '<S263>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_o[5];       /* Expression: tv
                                        * Referenced by: '<S264>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_l[5];       /* Expression: opv
                                        * Referenced by: '<S264>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_ds;         /* Expression: 0.5
                                        * Referenced by: '<S263>/Switch3' (Parameter: Threshold)
                                        */
  real_T C4_Value_im;                  /* Expression: BR.com
                                        * Referenced by: '<S267>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_h[5];       /* Expression: tv
                                        * Referenced by: '<S268>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_gk[5];      /* Expression: opv
                                        * Referenced by: '<S268>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_fr;         /* Expression: 0.5
                                        * Referenced by: '<S267>/Switch3' (Parameter: Threshold)
                                        */
  real_T C4_Value_m4;                  /* Expression: BR.com
                                        * Referenced by: '<S271>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_ie[5];      /* Expression: tv
                                        * Referenced by: '<S272>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_n4[5];      /* Expression: opv
                                        * Referenced by: '<S272>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_m;          /* Expression: 0.5
                                        * Referenced by: '<S271>/Switch3' (Parameter: Threshold)
                                        */
  real_T C4_Value_e;                   /* Expression: BR.com
                                        * Referenced by: '<S275>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_l[5];       /* Expression: tv
                                        * Referenced by: '<S276>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_no[5];      /* Expression: opv
                                        * Referenced by: '<S276>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_dk;         /* Expression: 0.5
                                        * Referenced by: '<S275>/Switch3' (Parameter: Threshold)
                                        */
  real_T C4_Value_a;                   /* Expression: BR.com
                                        * Referenced by: '<S279>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_n[5];       /* Expression: tv
                                        * Referenced by: '<S280>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_hm[5];      /* Expression: opv
                                        * Referenced by: '<S280>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_fd;         /* Expression: 0.5
                                        * Referenced by: '<S279>/Switch3' (Parameter: Threshold)
                                        */
  real_T C4_Value_p;                   /* Expression: BR.com
                                        * Referenced by: '<S283>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_hn[5];      /* Expression: tv
                                        * Referenced by: '<S284>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_i[5];       /* Expression: opv
                                        * Referenced by: '<S284>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_gs;         /* Expression: 0.5
                                        * Referenced by: '<S283>/Switch3' (Parameter: Threshold)
                                        */
  real_T StateSpace_P1_Size_a[2];    /* Computed Parameter: StateSpace_P1_Size_a
                                      * Referenced by: '<S1220>/State-Space' (Parameter: P1Size)
                                      */
  real_T StateSpace_P1_k;              /* Expression: 0
                                        * Referenced by: '<S1220>/State-Space' (Parameter: P1)
                                        */
  real_T StateSpace_P2_Size_j[2];    /* Computed Parameter: StateSpace_P2_Size_j
                                      * Referenced by: '<S1220>/State-Space' (Parameter: P2Size)
                                      */
  real_T StateSpace_P2_a;              /* Expression: 0
                                        * Referenced by: '<S1220>/State-Space' (Parameter: P2)
                                        */
  real_T donotdeletethisgain_Gain_k4;  /* Expression: 1
                                        * Referenced by: '<S144>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_h;   /* Expression: 1
                                        * Referenced by: '<S138>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_hw[2];    /* Computed Parameter: SFunction_P1_Size_hw
                                      * Referenced by: '<S1197>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_ll;              /* Expression: Acqu_group
                                        * Referenced by: '<S1197>/S-Function' (Parameter: P1)
                                        */
  real_T donotdeletethisgain_Gain_b;   /* Expression: 1
                                        * Referenced by: '<S986>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_bt;  /* Expression: 1
                                        * Referenced by: '<S984>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T EgRef_Value;                  /* Expression: EgRef/(k1*Tref_K)
                                        * Referenced by: '<S989>/EgRef' (Parameter: Value)
                                        */
  real_T one1_Value;                   /* Expression: 1
                                        * Referenced by: '<S980>/one1' (Parameter: Value)
                                        */
  real_T Tref_K1_Value;                /* Expression: Tref_K
                                        * Referenced by: '<S980>/Tref_K1' (Parameter: Value)
                                        */
  real_T dEgdT_Gain;                   /* Expression: dEgdT
                                        * Referenced by: '<S980>/dEgdT' (Parameter: Gain)
                                        */
  real_T EgRef_Gain;                   /* Expression: EgRef
                                        * Referenced by: '<S980>/EgRef' (Parameter: Gain)
                                        */
  real_T k1_Gain;                      /* Expression: k1
                                        * Referenced by: '<S989>/k1' (Parameter: Gain)
                                        */
  real_T Tref_K2_Value;                /* Expression: Tref_K
                                        * Referenced by: '<S980>/Tref_K2' (Parameter: Value)
                                        */
  real_T one_Value;                    /* Expression: 1
                                        * Referenced by: '<S980>/one' (Parameter: Value)
                                        */
  real_T SFunction_P1_Size_hx[2];    /* Computed Parameter: SFunction_P1_Size_hx
                                      * Referenced by: '<S1198>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_h1;              /* Expression: Acqu_group
                                        * Referenced by: '<S1198>/S-Function' (Parameter: P1)
                                        */
  real_T donotdeletethisgain_Gain_h1;  /* Expression: 1
                                        * Referenced by: '<S109>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_ox[2];    /* Computed Parameter: SFunction_P1_Size_ox
                                      * Referenced by: '<S1199>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_a;               /* Expression: Acqu_group
                                        * Referenced by: '<S1199>/S-Function' (Parameter: P1)
                                        */
  real_T donotdeletethisgain_Gain_bs;  /* Expression: 1
                                        * Referenced by: '<S353>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_c;   /* Expression: 1
                                        * Referenced by: '<S354>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_c2;  /* Expression: 1
                                        * Referenced by: '<S355>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Kv1_Gain;                     /* Expression: Kv
                                        * Referenced by: '<S29>/Kv1' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_f;   /* Expression: 1
                                        * Referenced by: '<S350>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_a;   /* Expression: 1
                                        * Referenced by: '<S351>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_p;   /* Expression: 1
                                        * Referenced by: '<S352>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Kv_Gain;                      /* Expression: Ki
                                        * Referenced by: '<S29>/Kv' (Parameter: Gain)
                                        */
  real_T puV_Gain;                     /* Expression: 1/sqrt(3)
                                        * Referenced by: '<S641>/pu->V' (Parameter: Gain)
                                        */
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S642>/Memory' (Parameter: InitialCondition)
                                        */
  real_T SFunction_P1_Size_nu[2];    /* Computed Parameter: SFunction_P1_Size_nu
                                      * Referenced by: '<S1200>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_fe;              /* Expression: Acqu_group
                                        * Referenced by: '<S1200>/S-Function' (Parameter: P1)
                                        */
  real_T donotdeletethisgain_Gain_ft;  /* Expression: 1
                                        * Referenced by: '<S115>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_pg;  /* Expression: 1
                                        * Referenced by: '<S116>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_j;   /* Expression: 1
                                        * Referenced by: '<S111>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_p[2];      /* Computed Parameter: SFunction_P1_Size_p
                                       * Referenced by: '<S1201>/S-Function' (Parameter: P1Size)
                                       */
  real_T SFunction_P1_bb;              /* Expression: Acqu_group
                                        * Referenced by: '<S1201>/S-Function' (Parameter: P1)
                                        */
  real_T donotdeletethisgain_Gain_m;   /* Expression: 1
                                        * Referenced by: '<S140>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_jp;  /* Expression: 1
                                        * Referenced by: '<S139>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_be[2];    /* Computed Parameter: SFunction_P1_Size_be
                                      * Referenced by: '<S1202>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_od;              /* Expression: Acqu_group
                                        * Referenced by: '<S1202>/S-Function' (Parameter: P1)
                                        */
  real_T SwitchCurrents_Value_m[3];    /* Expression: zeros(3,1)
                                        * Referenced by: '<S1232>/SwitchCurrents' (Parameter: Value)
                                        */
  real_T Gain2_Gain_ia;                /* Expression: Z
                                        * Referenced by: '<S1143>/Gain2' (Parameter: Gain)
                                        */
  real_T Gain2_Gain_j4q;               /* Expression: Z
                                        * Referenced by: '<S1141>/Gain2' (Parameter: Gain)
                                        */
  real_T Gain2_Gain_e;                 /* Expression: Z
                                        * Referenced by: '<S1142>/Gain2' (Parameter: Gain)
                                        */
  real_T C4_Value_kt;                  /* Expression: External
                                        * Referenced by: '<S15>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_hx[4];      /* Expression: sps.tv
                                        * Referenced by: '<S211>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_hi[4];      /* Expression: sps.opv
                                        * Referenced by: '<S211>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_gr;         /* Expression: 0.5
                                        * Referenced by: '<S15>/Switch3' (Parameter: Threshold)
                                        */
  real_T Constant5_Value_a;            /* Expression: InitialState
                                        * Referenced by: '<S15>/Constant5' (Parameter: Value)
                                        */
  real_T Switch_Threshold_j;           /* Expression: 0.5
                                        * Referenced by: '<S15>/Switch' (Parameter: Threshold)
                                        */
  real_T C4_Value_f;                   /* Expression: BR.com
                                        * Referenced by: '<S199>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_ei[5];      /* Expression: tv
                                        * Referenced by: '<S200>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_lc[5];      /* Expression: opv
                                        * Referenced by: '<S200>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_h;          /* Expression: 0.5
                                        * Referenced by: '<S199>/Switch3' (Parameter: Threshold)
                                        */
  real_T Switch1_Threshold_f;          /* Expression: 0.5
                                        * Referenced by: '<S15>/Switch1' (Parameter: Threshold)
                                        */
  real_T C4_Value_mo;                  /* Expression: BR.com
                                        * Referenced by: '<S203>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_ez[5];      /* Expression: tv
                                        * Referenced by: '<S204>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_ml[5];      /* Expression: opv
                                        * Referenced by: '<S204>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_kx;         /* Expression: 0.5
                                        * Referenced by: '<S203>/Switch3' (Parameter: Threshold)
                                        */
  real_T Switch2_Threshold_a;          /* Expression: 0.5
                                        * Referenced by: '<S15>/Switch2' (Parameter: Threshold)
                                        */
  real_T C4_Value_j;                   /* Expression: BR.com
                                        * Referenced by: '<S207>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_oa[5];      /* Expression: tv
                                        * Referenced by: '<S208>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_kj[5];      /* Expression: opv
                                        * Referenced by: '<S208>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_o;          /* Expression: 0.5
                                        * Referenced by: '<S207>/Switch3' (Parameter: Threshold)
                                        */
  real_T StateSpace_P1_Size_k[2];    /* Computed Parameter: StateSpace_P1_Size_k
                                      * Referenced by: '<S1219>/State-Space' (Parameter: P1Size)
                                      */
  real_T StateSpace_P1_ke;             /* Expression: 0
                                        * Referenced by: '<S1219>/State-Space' (Parameter: P1)
                                        */
  real_T StateSpace_P2_Size_j5[2];  /* Computed Parameter: StateSpace_P2_Size_j5
                                     * Referenced by: '<S1219>/State-Space' (Parameter: P2Size)
                                     */
  real_T StateSpace_P2_c;              /* Expression: 0
                                        * Referenced by: '<S1219>/State-Space' (Parameter: P2)
                                        */
  real_T donotdeletethisgain_Gain_i;   /* Expression: 1
                                        * Referenced by: '<S58>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW_Gain;                 /* Expression: 1e-3
                                        * Referenced by: '<S40>/W_to_kW' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_n;   /* Expression: 1
                                        * Referenced by: '<S65>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW1_Gain;                /* Expression: 1e-3
                                        * Referenced by: '<S40>/W_to_kW1' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_gj;  /* Expression: 1
                                        * Referenced by: '<S68>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW2_Gain;                /* Expression: 1e-3
                                        * Referenced by: '<S40>/W_to_kW2' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_h4[2];    /* Computed Parameter: SFunction_P1_Size_h4
                                      * Referenced by: '<S1203>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_gl;              /* Expression: Acqu_group
                                        * Referenced by: '<S1203>/S-Function' (Parameter: P1)
                                        */
  real_T donotdeletethisgain_Gain_he;  /* Expression: 1
                                        * Referenced by: '<S383>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_au;  /* Expression: 1
                                        * Referenced by: '<S384>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_nc;  /* Expression: 1
                                        * Referenced by: '<S385>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Kv1_Gain_o;                   /* Expression: Kv
                                        * Referenced by: '<S31>/Kv1' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_hp;  /* Expression: 1
                                        * Referenced by: '<S380>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_fp;  /* Expression: 1
                                        * Referenced by: '<S381>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_o;   /* Expression: 1
                                        * Referenced by: '<S382>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Kv_Gain_m;                    /* Expression: Ki
                                        * Referenced by: '<S31>/Kv' (Parameter: Gain)
                                        */
  real_T puV_Gain_p;                   /* Expression: 1/sqrt(3)
                                        * Referenced by: '<S665>/pu->V' (Parameter: Gain)
                                        */
  real_T Memory_InitialCondition_k;    /* Expression: 0
                                        * Referenced by: '<S666>/Memory' (Parameter: InitialCondition)
                                        */
  real_T SFunction_P1_Size_ds[2];    /* Computed Parameter: SFunction_P1_Size_ds
                                      * Referenced by: '<S1204>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_m2;              /* Expression: Acqu_group
                                        * Referenced by: '<S1204>/S-Function' (Parameter: P1)
                                        */
  real_T SwitchCurrents_Value_p[3];    /* Expression: zeros(3,1)
                                        * Referenced by: '<S1250>/SwitchCurrents' (Parameter: Value)
                                        */
  real_T Gain2_Gain_mz;                /* Expression: Z
                                        * Referenced by: '<S1079>/Gain2' (Parameter: Gain)
                                        */
  real_T Gain2_Gain_jq;                /* Expression: Z
                                        * Referenced by: '<S1077>/Gain2' (Parameter: Gain)
                                        */
  real_T Gain2_Gain_fh;                /* Expression: Z
                                        * Referenced by: '<S1078>/Gain2' (Parameter: Gain)
                                        */
  real_T C4_Value_f0;                  /* Expression: External
                                        * Referenced by: '<S14>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_dd[4];      /* Expression: sps.tv
                                        * Referenced by: '<S194>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_ip[4];      /* Expression: sps.opv
                                        * Referenced by: '<S194>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_pi;         /* Expression: 0.5
                                        * Referenced by: '<S14>/Switch3' (Parameter: Threshold)
                                        */
  real_T Constant5_Value_ah;           /* Expression: InitialState
                                        * Referenced by: '<S14>/Constant5' (Parameter: Value)
                                        */
  real_T Switch_Threshold_d;           /* Expression: 0.5
                                        * Referenced by: '<S14>/Switch' (Parameter: Threshold)
                                        */
  real_T C4_Value_lp;                  /* Expression: BR.com
                                        * Referenced by: '<S182>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_bt[5];      /* Expression: tv
                                        * Referenced by: '<S183>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_me[5];      /* Expression: opv
                                        * Referenced by: '<S183>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_k5;         /* Expression: 0.5
                                        * Referenced by: '<S182>/Switch3' (Parameter: Threshold)
                                        */
  real_T Switch1_Threshold_a;          /* Expression: 0.5
                                        * Referenced by: '<S14>/Switch1' (Parameter: Threshold)
                                        */
  real_T C4_Value_nn;                  /* Expression: BR.com
                                        * Referenced by: '<S186>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_bw[5];      /* Expression: tv
                                        * Referenced by: '<S187>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_e[5];       /* Expression: opv
                                        * Referenced by: '<S187>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_i;          /* Expression: 0.5
                                        * Referenced by: '<S186>/Switch3' (Parameter: Threshold)
                                        */
  real_T Switch2_Threshold_au;         /* Expression: 0.5
                                        * Referenced by: '<S14>/Switch2' (Parameter: Threshold)
                                        */
  real_T C4_Value_jo;                  /* Expression: BR.com
                                        * Referenced by: '<S190>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_ou[5];      /* Expression: tv
                                        * Referenced by: '<S191>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_a[5];       /* Expression: opv
                                        * Referenced by: '<S191>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_ek;         /* Expression: 0.5
                                        * Referenced by: '<S190>/Switch3' (Parameter: Threshold)
                                        */
  real_T StateSpace_P1_Size_b[2];    /* Computed Parameter: StateSpace_P1_Size_b
                                      * Referenced by: '<S1226>/State-Space' (Parameter: P1Size)
                                      */
  real_T StateSpace_P1_l;              /* Expression: 0
                                        * Referenced by: '<S1226>/State-Space' (Parameter: P1)
                                        */
  real_T StateSpace_P2_Size_e[2];    /* Computed Parameter: StateSpace_P2_Size_e
                                      * Referenced by: '<S1226>/State-Space' (Parameter: P2Size)
                                      */
  real_T StateSpace_P2_o;              /* Expression: 0
                                        * Referenced by: '<S1226>/State-Space' (Parameter: P2)
                                        */
  real_T donotdeletethisgain_Gain_e;   /* Expression: 1
                                        * Referenced by: '<S54>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW_Gain_j;               /* Expression: 1e-3
                                        * Referenced by: '<S35>/W_to_kW' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_go;  /* Expression: 1
                                        * Referenced by: '<S61>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW1_Gain_e;              /* Expression: 1e-3
                                        * Referenced by: '<S35>/W_to_kW1' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_jy;  /* Expression: 1
                                        * Referenced by: '<S66>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW2_Gain_p;              /* Expression: 1e-3
                                        * Referenced by: '<S35>/W_to_kW2' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_hl[2];    /* Computed Parameter: SFunction_P1_Size_hl
                                      * Referenced by: '<S1205>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_ci;              /* Expression: Acqu_group
                                        * Referenced by: '<S1205>/S-Function' (Parameter: P1)
                                        */
  real_T donotdeletethisgain_Gain_l;   /* Expression: 1
                                        * Referenced by: '<S57>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW_Gain_a;               /* Expression: 1e-3
                                        * Referenced by: '<S37>/W_to_kW' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_nn;  /* Expression: 1
                                        * Referenced by: '<S64>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW1_Gain_o;              /* Expression: 1e-3
                                        * Referenced by: '<S37>/W_to_kW1' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_cs;  /* Expression: 1
                                        * Referenced by: '<S67>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW2_Gain_c;              /* Expression: 1e-3
                                        * Referenced by: '<S37>/W_to_kW2' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_pc[2];    /* Computed Parameter: SFunction_P1_Size_pc
                                      * Referenced by: '<S1206>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_gz;              /* Expression: Acqu_group
                                        * Referenced by: '<S1206>/S-Function' (Parameter: P1)
                                        */
  real_T SwitchCurrents_Value_e[3];    /* Expression: zeros(3,1)
                                        * Referenced by: '<S1258>/SwitchCurrents' (Parameter: Value)
                                        */
  real_T Gain2_Gain_n;                 /* Expression: Z
                                        * Referenced by: '<S1039>/Gain2' (Parameter: Gain)
                                        */
  real_T Gain2_Gain_gw;                /* Expression: Z
                                        * Referenced by: '<S1037>/Gain2' (Parameter: Gain)
                                        */
  real_T Gain2_Gain_l;                 /* Expression: Z
                                        * Referenced by: '<S1038>/Gain2' (Parameter: Gain)
                                        */
  real_T valp_nom2_Value_j;            /* Expression: MagnitudeVps
                                        * Referenced by: '<S955>/valp_nom2' (Parameter: Value)
                                        */
  real_T SinglePhase_Value_m;          /* Expression: VariationPhaseA
                                        * Referenced by: '<S955>/SinglePhase' (Parameter: Value)
                                        */
  real_T Switch5_Threshold_m;          /* Expression: 0.5
                                        * Referenced by: '<S955>/Switch5' (Parameter: Threshold)
                                        */
  real_T valp_nom1_Value_d;            /* Expression: FreqVps
                                        * Referenced by: '<S955>/valp_nom1' (Parameter: Value)
                                        */
  real_T Gain_Gain_iv;                 /* Expression: 2*pi
                                        * Referenced by: '<S955>/Gain' (Parameter: Gain)
                                        */
  real_T valp_nom_Value_l;             /* Expression: PhaseVps
                                        * Referenced by: '<S955>/valp_nom' (Parameter: Value)
                                        */
  real_T Gain3_Gain_i;                 /* Expression: pi/180
                                        * Referenced by: '<S955>/Gain3' (Parameter: Gain)
                                        */
  real_T P1_Value_l[3];                /* Expression: [0  -2*pi/3  2*pi/3]
                                        * Referenced by: '<S955>/P1' (Parameter: Value)
                                        */
  real_T C4_Value_ll;                  /* Expression: External
                                        * Referenced by: '<S16>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_eo[4];      /* Expression: sps.tv
                                        * Referenced by: '<S228>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_gv[4];      /* Expression: sps.opv
                                        * Referenced by: '<S228>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_pk;         /* Expression: 0.5
                                        * Referenced by: '<S16>/Switch3' (Parameter: Threshold)
                                        */
  real_T Constant5_Value_p;            /* Expression: InitialState
                                        * Referenced by: '<S16>/Constant5' (Parameter: Value)
                                        */
  real_T Switch_Threshold_e;           /* Expression: 0.5
                                        * Referenced by: '<S16>/Switch' (Parameter: Threshold)
                                        */
  real_T C4_Value_k0;                  /* Expression: BR.com
                                        * Referenced by: '<S216>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_bk[5];      /* Expression: tv
                                        * Referenced by: '<S217>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_a2[5];      /* Expression: opv
                                        * Referenced by: '<S217>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_pu;         /* Expression: 0.5
                                        * Referenced by: '<S216>/Switch3' (Parameter: Threshold)
                                        */
  real_T Switch1_Threshold_fp;         /* Expression: 0.5
                                        * Referenced by: '<S16>/Switch1' (Parameter: Threshold)
                                        */
  real_T C4_Value_ay;                  /* Expression: BR.com
                                        * Referenced by: '<S220>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_oh[5];      /* Expression: tv
                                        * Referenced by: '<S221>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_ih[5];      /* Expression: opv
                                        * Referenced by: '<S221>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_ef;         /* Expression: 0.5
                                        * Referenced by: '<S220>/Switch3' (Parameter: Threshold)
                                        */
  real_T Switch2_Threshold_f;          /* Expression: 0.5
                                        * Referenced by: '<S16>/Switch2' (Parameter: Threshold)
                                        */
  real_T C4_Value_dv;                  /* Expression: BR.com
                                        * Referenced by: '<S224>/C4' (Parameter: Value)
                                        */
  real_T LookUpTable_XData_me[5];      /* Expression: tv
                                        * Referenced by: '<S225>/Look-Up Table' (Parameter: InputValues)
                                        */
  real_T LookUpTable_YData_my[5];      /* Expression: opv
                                        * Referenced by: '<S225>/Look-Up Table' (Parameter: Table)
                                        */
  real_T Switch3_Threshold_dy;         /* Expression: 0.5
                                        * Referenced by: '<S224>/Switch3' (Parameter: Threshold)
                                        */
  real_T StateSpace_P1_Size_d[2];    /* Computed Parameter: StateSpace_P1_Size_d
                                      * Referenced by: '<S1228>/State-Space' (Parameter: P1Size)
                                      */
  real_T StateSpace_P1_a;              /* Expression: 0
                                        * Referenced by: '<S1228>/State-Space' (Parameter: P1)
                                        */
  real_T StateSpace_P2_Size_d[2];    /* Computed Parameter: StateSpace_P2_Size_d
                                      * Referenced by: '<S1228>/State-Space' (Parameter: P2Size)
                                      */
  real_T StateSpace_P2_l;              /* Expression: 0
                                        * Referenced by: '<S1228>/State-Space' (Parameter: P2)
                                        */
  real_T donotdeletethisgain_Gain_kk;  /* Expression: 1
                                        * Referenced by: '<S53>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW_Gain_jr;              /* Expression: 1e-3
                                        * Referenced by: '<S36>/W_to_kW' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_mf;  /* Expression: 1
                                        * Referenced by: '<S60>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW1_Gain_m;              /* Expression: 1e-3
                                        * Referenced by: '<S36>/W_to_kW1' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_o3;  /* Expression: 1
                                        * Referenced by: '<S6>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW2_Gain_g;              /* Expression: 1e-3
                                        * Referenced by: '<S36>/W_to_kW2' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_m0[2];    /* Computed Parameter: SFunction_P1_Size_m0
                                      * Referenced by: '<S1196>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_n;               /* Expression: Acqu_group
                                        * Referenced by: '<S1196>/S-Function' (Parameter: P1)
                                        */
  real_T donotdeletethisgain_Gain_bk;  /* Expression: 1
                                        * Referenced by: '<S55>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW_Gain_jn;              /* Expression: 1e-3
                                        * Referenced by: '<S38>/W_to_kW' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_mi;  /* Expression: 1
                                        * Referenced by: '<S62>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW1_Gain_h;              /* Expression: 1e-3
                                        * Referenced by: '<S38>/W_to_kW1' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_ai;  /* Expression: 1
                                        * Referenced by: '<S7>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW2_Gain_pm;             /* Expression: 1e-3
                                        * Referenced by: '<S38>/W_to_kW2' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_a1[2];    /* Computed Parameter: SFunction_P1_Size_a1
                                      * Referenced by: '<S1208>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_bm;              /* Expression: Acqu_group
                                        * Referenced by: '<S1208>/S-Function' (Parameter: P1)
                                        */
  real_T donotdeletethisgain_Gain_bj;  /* Expression: 1
                                        * Referenced by: '<S338>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_nr;  /* Expression: 1
                                        * Referenced by: '<S339>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_k41; /* Expression: 1
                                        * Referenced by: '<S340>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Kv1_Gain_n;                   /* Expression: Kv
                                        * Referenced by: '<S28>/Kv1' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_mc;  /* Expression: 1
                                        * Referenced by: '<S335>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_es;  /* Expression: 1
                                        * Referenced by: '<S336>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_jk;  /* Expression: 1
                                        * Referenced by: '<S337>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Kv_Gain_g;                    /* Expression: Ki
                                        * Referenced by: '<S28>/Kv' (Parameter: Gain)
                                        */
  real_T puV_Gain_pg;                  /* Expression: 1/sqrt(3)
                                        * Referenced by: '<S701>/pu->V' (Parameter: Gain)
                                        */
  real_T Memory1_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S702>/Memory1' (Parameter: InitialCondition)
                                        */
  real_T SFunction_P1_Size_lnc[2];  /* Computed Parameter: SFunction_P1_Size_lnc
                                     * Referenced by: '<S1209>/S-Function' (Parameter: P1Size)
                                     */
  real_T SFunction_P1_ff;              /* Expression: Acqu_group
                                        * Referenced by: '<S1209>/S-Function' (Parameter: P1)
                                        */
  real_T donotdeletethisgain_Gain_ev;  /* Expression: 1
                                        * Referenced by: '<S308>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_n3;  /* Expression: 1
                                        * Referenced by: '<S309>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_c0;  /* Expression: 1
                                        * Referenced by: '<S310>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Kv1_Gain_h;                   /* Expression: Kv
                                        * Referenced by: '<S26>/Kv1' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_cr;  /* Expression: 1
                                        * Referenced by: '<S305>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_jq;  /* Expression: 1
                                        * Referenced by: '<S306>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_e5;  /* Expression: 1
                                        * Referenced by: '<S307>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Kv_Gain_gz;                   /* Expression: Ki
                                        * Referenced by: '<S26>/Kv' (Parameter: Gain)
                                        */
  real_T puV_Gain_p1;                  /* Expression: 1/sqrt(3)
                                        * Referenced by: '<S629>/pu->V' (Parameter: Gain)
                                        */
  real_T Memory_InitialCondition_g;    /* Expression: 0
                                        * Referenced by: '<S630>/Memory' (Parameter: InitialCondition)
                                        */
  real_T SFunction_P1_Size_mu[2];    /* Computed Parameter: SFunction_P1_Size_mu
                                      * Referenced by: '<S1210>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_lp;              /* Expression: Acqu_group
                                        * Referenced by: '<S1210>/S-Function' (Parameter: P1)
                                        */
  real_T donotdeletethisgain_Gain_iv;  /* Expression: 1
                                        * Referenced by: '<S398>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_lf;  /* Expression: 1
                                        * Referenced by: '<S399>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_nj;  /* Expression: 1
                                        * Referenced by: '<S400>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Kv1_Gain_f;                   /* Expression: Kv
                                        * Referenced by: '<S32>/Kv1' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_ow;  /* Expression: 1
                                        * Referenced by: '<S395>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_d;   /* Expression: 1
                                        * Referenced by: '<S396>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_g5;  /* Expression: 1
                                        * Referenced by: '<S397>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Kv_Gain_mp;                   /* Expression: Ki
                                        * Referenced by: '<S32>/Kv' (Parameter: Gain)
                                        */
  real_T puV_Gain_e;                   /* Expression: 1/sqrt(3)
                                        * Referenced by: '<S677>/pu->V' (Parameter: Gain)
                                        */
  real_T Memory_InitialCondition_p;    /* Expression: 0
                                        * Referenced by: '<S678>/Memory' (Parameter: InitialCondition)
                                        */
  real_T SFunction_P1_Size_cd[2];    /* Computed Parameter: SFunction_P1_Size_cd
                                      * Referenced by: '<S1207>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_nv;              /* Expression: Acqu_group
                                        * Referenced by: '<S1207>/S-Function' (Parameter: P1)
                                        */
  real_T donotdeletethisgain_Gain_gjk; /* Expression: 1
                                        * Referenced by: '<S5>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW_Gain_p;               /* Expression: 1e-3
                                        * Referenced by: '<S34>/W_to_kW' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_oh;  /* Expression: 1
                                        * Referenced by: '<S59>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW1_Gain_j;              /* Expression: 1e-3
                                        * Referenced by: '<S34>/W_to_kW1' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_pl;  /* Expression: 1
                                        * Referenced by: '<S52>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW2_Gain_cx;             /* Expression: 1e-3
                                        * Referenced by: '<S34>/W_to_kW2' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_dq[2];    /* Computed Parameter: SFunction_P1_Size_dq
                                      * Referenced by: '<S1211>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_cw;              /* Expression: Acqu_group
                                        * Referenced by: '<S1211>/S-Function' (Parameter: P1)
                                        */
  real_T donotdeletethisgain_Gain_mu;  /* Expression: 1
                                        * Referenced by: '<S293>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_l3;  /* Expression: 1
                                        * Referenced by: '<S294>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_ie;  /* Expression: 1
                                        * Referenced by: '<S295>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Kv1_Gain_k;                   /* Expression: Kv
                                        * Referenced by: '<S25>/Kv1' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_cx;  /* Expression: 1
                                        * Referenced by: '<S290>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_a1;  /* Expression: 1
                                        * Referenced by: '<S291>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_gz;  /* Expression: 1
                                        * Referenced by: '<S292>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Kv_Gain_g3;                   /* Expression: Ki
                                        * Referenced by: '<S25>/Kv' (Parameter: Gain)
                                        */
  real_T puV_Gain_f;                   /* Expression: 1/sqrt(3)
                                        * Referenced by: '<S407>/pu->V' (Parameter: Gain)
                                        */
  real_T Memory_InitialCondition_f;    /* Expression: 0
                                        * Referenced by: '<S408>/Memory' (Parameter: InitialCondition)
                                        */
  real_T SFunction_P1_Size_hll[2];  /* Computed Parameter: SFunction_P1_Size_hll
                                     * Referenced by: '<S1212>/S-Function' (Parameter: P1Size)
                                     */
  real_T SFunction_P1_fl;              /* Expression: Acqu_group
                                        * Referenced by: '<S1212>/S-Function' (Parameter: P1)
                                        */
  real_T donotdeletethisgain_Gain_kt;  /* Expression: 1
                                        * Referenced by: '<S56>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW_Gain_b;               /* Expression: 1e-3
                                        * Referenced by: '<S39>/W_to_kW' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_gob; /* Expression: 1
                                        * Referenced by: '<S63>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW1_Gain_hq;             /* Expression: 1e-3
                                        * Referenced by: '<S39>/W_to_kW1' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_nc0; /* Expression: 1
                                        * Referenced by: '<S8>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T W_to_kW2_Gain_j;              /* Expression: 1e-3
                                        * Referenced by: '<S39>/W_to_kW2' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_c0[2];    /* Computed Parameter: SFunction_P1_Size_c0
                                      * Referenced by: '<S1213>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_mm;              /* Expression: Acqu_group
                                        * Referenced by: '<S1213>/S-Function' (Parameter: P1)
                                        */
  real_T donotdeletethisgain_Gain_b0;  /* Expression: 1
                                        * Referenced by: '<S368>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_pc;  /* Expression: 1
                                        * Referenced by: '<S369>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_oj;  /* Expression: 1
                                        * Referenced by: '<S370>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Kv1_Gain_os;                  /* Expression: Kv
                                        * Referenced by: '<S30>/Kv1' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_cm;  /* Expression: 1
                                        * Referenced by: '<S365>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_fo;  /* Expression: 1
                                        * Referenced by: '<S366>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_n3i; /* Expression: 1
                                        * Referenced by: '<S367>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Kv_Gain_c;                    /* Expression: Ki
                                        * Referenced by: '<S30>/Kv' (Parameter: Gain)
                                        */
  real_T puV_Gain_j;                   /* Expression: 1/sqrt(3)
                                        * Referenced by: '<S653>/pu->V' (Parameter: Gain)
                                        */
  real_T Memory_InitialCondition_l;    /* Expression: 0
                                        * Referenced by: '<S654>/Memory' (Parameter: InitialCondition)
                                        */
  real_T SFunction_P1_Size_db[2];    /* Computed Parameter: SFunction_P1_Size_db
                                      * Referenced by: '<S1214>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_je;              /* Expression: Acqu_group
                                        * Referenced by: '<S1214>/S-Function' (Parameter: P1)
                                        */
  real_T Integ4_gainval_c;             /* Computed Parameter: Integ4_gainval_c
                                        * Referenced by: '<S717>/Integ4' (Parameter: gainval)
                                        */
  real_T Integ4_IC_m;                  /* Expression: 0
                                        * Referenced by: '<S717>/Integ4' (Parameter: InitialCondition)
                                        */
  real_T K1_Value;                     /* Expression: sps.Delay
                                        * Referenced by: '<S717>/K1' (Parameter: Value)
                                        */
  real_T SFunction_P1_Size_k4[2];    /* Computed Parameter: SFunction_P1_Size_k4
                                      * Referenced by: '<S718>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_iv;              /* Expression: MaxDelay
                                        * Referenced by: '<S718>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_h2[2];    /* Computed Parameter: SFunction_P2_Size_h2
                                      * Referenced by: '<S718>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_o;               /* Expression: Ts
                                        * Referenced by: '<S718>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_b5[2];    /* Computed Parameter: SFunction_P3_Size_b5
                                      * Referenced by: '<S718>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_n;               /* Expression: InitialValue
                                        * Referenced by: '<S718>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_ck[2];    /* Computed Parameter: SFunction_P4_Size_ck
                                      * Referenced by: '<S718>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_e4;              /* Expression: DFT
                                        * Referenced by: '<S718>/S-Function' (Parameter: P4)
                                        */
  real_T K2_Value;                     /* Expression: sps.Freq
                                        * Referenced by: '<S717>/K2' (Parameter: Value)
                                        */
  real_T UnitDelay_InitialCondition_iq;/* Expression: 0
                                        * Referenced by: '<S717>/Unit Delay' (Parameter: InitialCondition)
                                        */
  real_T UnitDelay1_InitialCondition_e;/* Expression: sps.Vinit
                                        * Referenced by: '<S717>/Unit Delay1' (Parameter: InitialCondition)
                                        */
  real_T toKw_Gain;                    /* Expression: 1/1000
                                        * Referenced by: '<S713>/to Kw' (Parameter: Gain)
                                        */
  real_T toKw1_Gain;                   /* Expression: 1/1000
                                        * Referenced by: '<S713>/to Kw1' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_by[2];    /* Computed Parameter: SFunction_P1_Size_by
                                      * Referenced by: '<S1215>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_dq;              /* Expression: Acqu_group
                                        * Referenced by: '<S1215>/S-Function' (Parameter: P1)
                                        */
  real_T donotdeletethisgain_Gain_pf;  /* Expression: 1
                                        * Referenced by: '<S85>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S719>/integrator' (Parameter: InitialCondition)
                                        */
  real_T TransportDelay_Delay;         /* Expression: 1./sps.Freq
                                        * Referenced by: '<S719>/Transport Delay' (Parameter: DelayTime)
                                        */
  real_T TransportDelay_InitOutput;    /* Expression: 0
                                        * Referenced by: '<S719>/Transport Delay' (Parameter: InitialOutput)
                                        */
  real_T K1_Value_k;                   /* Expression: 1./sps.Freq
                                        * Referenced by: '<S719>/K1' (Parameter: Value)
                                        */
  real_T Memory_InitialCondition_c;    /* Expression: sps.Vinit
                                        * Referenced by: '<S719>/Memory' (Parameter: InitialCondition)
                                        */
  real_T Gain_Gain_c;                  /* Expression: 1/1000
                                        * Referenced by: '<S48>/Gain' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_nn[2];    /* Computed Parameter: SFunction_P1_Size_nn
                                      * Referenced by: '<S1216>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_ow;              /* Expression: Acqu_group
                                        * Referenced by: '<S1216>/S-Function' (Parameter: P1)
                                        */
  real_T donotdeletethisgain_Gain_hb;  /* Expression: 1
                                        * Referenced by: '<S145>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T WkW_Gain;                     /* Expression: 1/1000
                                        * Referenced by: '<S720>/W-kW' (Parameter: Gain)
                                        */
  real_T toKw1_Gain_m;                 /* Expression: 1/1000
                                        * Referenced by: '<S715>/to Kw1' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_i[2];      /* Computed Parameter: SFunction_P1_Size_i
                                       * Referenced by: '<S1217>/S-Function' (Parameter: P1Size)
                                       */
  real_T SFunction_P1_jq;              /* Expression: Acqu_group
                                        * Referenced by: '<S1217>/S-Function' (Parameter: P1)
                                        */
  real_T HitCrossing_Offset;           /* Expression: 0
                                        * Referenced by: '<S166>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_e;         /* Expression: 0
                                        * Referenced by: '<S170>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_a;         /* Expression: 0
                                        * Referenced by: '<S174>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_l;         /* Expression: 0
                                        * Referenced by: '<S183>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_as;        /* Expression: 0
                                        * Referenced by: '<S187>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_m;         /* Expression: 0
                                        * Referenced by: '<S191>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_b;         /* Expression: 0
                                        * Referenced by: '<S200>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_be;        /* Expression: 0
                                        * Referenced by: '<S204>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_p;         /* Expression: 0
                                        * Referenced by: '<S208>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_f;         /* Expression: 0
                                        * Referenced by: '<S217>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_ew;        /* Expression: 0
                                        * Referenced by: '<S221>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_lm;        /* Expression: 0
                                        * Referenced by: '<S225>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_j;         /* Expression: 0
                                        * Referenced by: '<S234>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_n;         /* Expression: 0
                                        * Referenced by: '<S238>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_ax;        /* Expression: 0
                                        * Referenced by: '<S242>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_em;        /* Expression: 0
                                        * Referenced by: '<S251>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_i;         /* Expression: 0
                                        * Referenced by: '<S255>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_lh;        /* Expression: 0
                                        * Referenced by: '<S259>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_bv;        /* Expression: 0
                                        * Referenced by: '<S264>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_pe;        /* Expression: 0
                                        * Referenced by: '<S268>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_mq;        /* Expression: 0
                                        * Referenced by: '<S272>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_mp;        /* Expression: 0
                                        * Referenced by: '<S276>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_bi;        /* Expression: 0
                                        * Referenced by: '<S280>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_g;         /* Expression: 0
                                        * Referenced by: '<S284>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T donotdeletethisgain_Gain_if;  /* Expression: 1
                                        * Referenced by: '<S93>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Constant12_Value;             /* Expression: Batt.Q
                                        * Referenced by: '<S94>/Constant12' (Parameter: Value)
                                        */
  real_T Gain4_Gain;                   /* Expression: Batt.A
                                        * Referenced by: '<S99>/Gain4' (Parameter: Gain)
                                        */
  real_T Gain1_Gain_gn;                /* Expression: Batt.B/3600
                                        * Referenced by: '<S99>/Gain1' (Parameter: Gain)
                                        */
  real_T Gain2_Gain_f4;                /* Expression: 3600
                                        * Referenced by: '<S94>/Gain2' (Parameter: Gain)
                                        */
  real_T R1_Gain;                      /* Expression: Batt.R
                                        * Referenced by: '<S94>/R1' (Parameter: Gain)
                                        */
  real_T HitCrossing_Offset_k;         /* Expression: 0
                                        * Referenced by: '<S119>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T HitCrossing_Offset_c;         /* Expression: 0
                                        * Referenced by: '<S123>/Hit  Crossing' (Parameter: HitCrossingOffset)
                                        */
  real_T donotdeletethisgain_Gain_md;  /* Expression: 1
                                        * Referenced by: '<S108>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Ki_Gain;                      /* Expression: 0.001
                                        * Referenced by: '<S132>/Ki' (Parameter: Gain)
                                        */
  real_T V_ref_Value;                  /* Expression: 300
                                        * Referenced by: '<S11>/V_ref' (Parameter: Value)
                                        */
  real_T donotdeletethisgain_Gain_lz;  /* Expression: 1
                                        * Referenced by: '<S117>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T integrator_IC_o;              /* Expression: 0
                                        * Referenced by: '<S130>/integrator' (Parameter: InitialCondition)
                                        */
  real_T UnitDelay2_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S11>/Unit Delay2' (Parameter: InitialCondition)
                                        */
  real_T donotdeletethisgain_Gain_io;  /* Expression: 1
                                        * Referenced by: '<S110>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T integrator_IC_g;              /* Expression: 0
                                        * Referenced by: '<S131>/integrator' (Parameter: InitialCondition)
                                        */
  real_T UnitDelay3_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S11>/Unit Delay3' (Parameter: InitialCondition)
                                        */
  real_T Delay_InitialCondition_f;     /* Expression: 0
                                        * Referenced by: '<S149>/Delay' (Parameter: InitialCondition)
                                        */
  real_T Delay1_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S149>/Delay1' (Parameter: InitialCondition)
                                        */
  real_T Integ4_gainval_j;             /* Computed Parameter: Integ4_gainval_j
                                        * Referenced by: '<S152>/Integ4' (Parameter: gainval)
                                        */
  real_T Integ4_IC_n;                  /* Expression: 0
                                        * Referenced by: '<S152>/Integ4' (Parameter: InitialCondition)
                                        */
  real_T K1_Value_o;                   /* Expression: sps.Delay
                                        * Referenced by: '<S152>/K1' (Parameter: Value)
                                        */
  real_T SFunction_P1_Size_kw[2];    /* Computed Parameter: SFunction_P1_Size_kw
                                      * Referenced by: '<S153>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_ft;              /* Expression: MaxDelay
                                        * Referenced by: '<S153>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_jh[2];    /* Computed Parameter: SFunction_P2_Size_jh
                                      * Referenced by: '<S153>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_lw;              /* Expression: Ts
                                        * Referenced by: '<S153>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_jf[2];    /* Computed Parameter: SFunction_P3_Size_jf
                                      * Referenced by: '<S153>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_by;              /* Expression: InitialValue
                                        * Referenced by: '<S153>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_n[2];      /* Computed Parameter: SFunction_P4_Size_n
                                       * Referenced by: '<S153>/S-Function' (Parameter: P4Size)
                                       */
  real_T SFunction_P4_p;               /* Expression: DFT
                                        * Referenced by: '<S153>/S-Function' (Parameter: P4)
                                        */
  real_T K2_Value_g;                   /* Expression: sps.Freq
                                        * Referenced by: '<S152>/K2' (Parameter: Value)
                                        */
  real_T UnitDelay_InitialCondition_n; /* Expression: 0
                                        * Referenced by: '<S152>/Unit Delay' (Parameter: InitialCondition)
                                        */
  real_T UnitDelay1_InitialCondition_e0;/* Expression: sps.Vinit
                                         * Referenced by: '<S152>/Unit Delay1' (Parameter: InitialCondition)
                                         */
  real_T Integ4_gainval_m;             /* Computed Parameter: Integ4_gainval_m
                                        * Referenced by: '<S154>/Integ4' (Parameter: gainval)
                                        */
  real_T Integ4_IC_i;                  /* Expression: 0
                                        * Referenced by: '<S154>/Integ4' (Parameter: InitialCondition)
                                        */
  real_T K1_Value_c;                   /* Expression: sps.Delay
                                        * Referenced by: '<S154>/K1' (Parameter: Value)
                                        */
  real_T SFunction_P1_Size_i1[2];    /* Computed Parameter: SFunction_P1_Size_i1
                                      * Referenced by: '<S155>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_jn;              /* Expression: MaxDelay
                                        * Referenced by: '<S155>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_k[2];      /* Computed Parameter: SFunction_P2_Size_k
                                       * Referenced by: '<S155>/S-Function' (Parameter: P2Size)
                                       */
  real_T SFunction_P2_he;              /* Expression: Ts
                                        * Referenced by: '<S155>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_m[2];      /* Computed Parameter: SFunction_P3_Size_m
                                       * Referenced by: '<S155>/S-Function' (Parameter: P3Size)
                                       */
  real_T SFunction_P3_ig;              /* Expression: InitialValue
                                        * Referenced by: '<S155>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_ap[2];    /* Computed Parameter: SFunction_P4_Size_ap
                                      * Referenced by: '<S155>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_lx;              /* Expression: DFT
                                        * Referenced by: '<S155>/S-Function' (Parameter: P4)
                                        */
  real_T K2_Value_l;                   /* Expression: sps.Freq
                                        * Referenced by: '<S154>/K2' (Parameter: Value)
                                        */
  real_T UnitDelay_InitialCondition_ba;/* Expression: 0
                                        * Referenced by: '<S154>/Unit Delay' (Parameter: InitialCondition)
                                        */
  real_T UnitDelay1_InitialCondition_o;/* Expression: sps.Vinit
                                        * Referenced by: '<S154>/Unit Delay1' (Parameter: InitialCondition)
                                        */
  real_T Saturation_UpperSat_m;        /* Expression: inf
                                        * Referenced by: '<S149>/Saturation' (Parameter: UpperLimit)
                                        */
  real_T Gain_Gain_k;                  /* Expression: -1
                                        * Referenced by: '<S149>/Gain' (Parameter: Gain)
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S149>/Constant' (Parameter: Value)
                                        */
  real_T Switch_Threshold_nv;          /* Expression: 0.5
                                        * Referenced by: '<S149>/Switch' (Parameter: Threshold)
                                        */
  real_T DeadZone_Start;               /* Expression: -0.0001
                                        * Referenced by: '<S149>/Dead Zone' (Parameter: LowerValue)
                                        */
  real_T DeadZone_End;                 /* Expression: 0.0001
                                        * Referenced by: '<S149>/Dead Zone' (Parameter: UpperValue)
                                        */
  real_T MPPTGain_Gain;                /* Expression: -10
                                        * Referenced by: '<S149>/MPPT  Gain' (Parameter: Gain)
                                        */
  real_T integrator_IC_e;              /* Expression: 0
                                        * Referenced by: '<S156>/integrator' (Parameter: InitialCondition)
                                        */
  real_T UnitDelay2_InitialCondition_m;/* Expression: 0
                                        * Referenced by: '<S12>/Unit Delay2' (Parameter: InitialCondition)
                                        */
  real_T UnitDelay3_InitialCondition_b;/* Expression: 0
                                        * Referenced by: '<S12>/Unit Delay3' (Parameter: InitialCondition)
                                        */
  real_T Integ4_gainval_cw;            /* Computed Parameter: Integ4_gainval_cw
                                        * Referenced by: '<S157>/Integ4' (Parameter: gainval)
                                        */
  real_T Integ4_IC_l;                  /* Expression: 0
                                        * Referenced by: '<S157>/Integ4' (Parameter: InitialCondition)
                                        */
  real_T K1_Value_p;                   /* Expression: sps.Delay
                                        * Referenced by: '<S157>/K1' (Parameter: Value)
                                        */
  real_T SFunction_P1_Size_ov[2];    /* Computed Parameter: SFunction_P1_Size_ov
                                      * Referenced by: '<S158>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_fy;              /* Expression: MaxDelay
                                        * Referenced by: '<S158>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_cb[2];    /* Computed Parameter: SFunction_P2_Size_cb
                                      * Referenced by: '<S158>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_fm;              /* Expression: Ts
                                        * Referenced by: '<S158>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_h[2];      /* Computed Parameter: SFunction_P3_Size_h
                                       * Referenced by: '<S158>/S-Function' (Parameter: P3Size)
                                       */
  real_T SFunction_P3_al;              /* Expression: InitialValue
                                        * Referenced by: '<S158>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_iq[2];    /* Computed Parameter: SFunction_P4_Size_iq
                                      * Referenced by: '<S158>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_ii;              /* Expression: DFT
                                        * Referenced by: '<S158>/S-Function' (Parameter: P4)
                                        */
  real_T donotdeletethisgain_Gain_jv;  /* Expression: 1
                                        * Referenced by: '<S323>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_af;  /* Expression: 1
                                        * Referenced by: '<S324>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_bm;  /* Expression: 1
                                        * Referenced by: '<S325>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Kv1_Gain_nq;                  /* Expression: Kv
                                        * Referenced by: '<S27>/Kv1' (Parameter: Gain)
                                        */
  real_T Memory_InitialCondition_pj;   /* Expression: 0
                                        * Referenced by: '<S690>/Memory' (Parameter: InitialCondition)
                                        */
  real_T Memory_InitialCondition_f0;   /* Expression: 0
                                        * Referenced by: '<S48>/Memory' (Parameter: InitialCondition)
                                        */
  real_T Memory1_InitialCondition_i;   /* Expression: 0
                                        * Referenced by: '<S48>/Memory1' (Parameter: InitialCondition)
                                        */
  real_T donotdeletethisgain_Gain_lc;  /* Expression: 1
                                        * Referenced by: '<S999>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_hj;  /* Expression: 1
                                        * Referenced by: '<S1000>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_ms;  /* Expression: 1
                                        * Referenced by: '<S1001>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Kv1_Gain_c;                   /* Expression: Kv
                                        * Referenced by: '<S73>/Kv1' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_c4;  /* Expression: 1
                                        * Referenced by: '<S1014>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_lfw; /* Expression: 1
                                        * Referenced by: '<S1015>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_co;  /* Expression: 1
                                        * Referenced by: '<S1016>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Kv1_Gain_hd;                  /* Expression: Kv
                                        * Referenced by: '<S74>/Kv1' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_bc;  /* Expression: 1
                                        * Referenced by: '<S764>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_ac;  /* Expression: 1
                                        * Referenced by: '<S761>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_k2;  /* Expression: 1
                                        * Referenced by: '<S762>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_fpg; /* Expression: 1
                                        * Referenced by: '<S763>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_m5;  /* Expression: 1
                                        * Referenced by: '<S941>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_hx;  /* Expression: 1
                                        * Referenced by: '<S942>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_ji;  /* Expression: 1
                                        * Referenced by: '<S943>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Kv1_Gain_fy;                  /* Expression: Kv
                                        * Referenced by: '<S760>/Kv1' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_i1;  /* Expression: 1
                                        * Referenced by: '<S938>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_hi;  /* Expression: 1
                                        * Referenced by: '<S939>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_bjb; /* Expression: 1
                                        * Referenced by: '<S940>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Kv_Gain_ga;                   /* Expression: Ki
                                        * Referenced by: '<S760>/Kv' (Parameter: Gain)
                                        */
  real_T puV_Gain_fk;                  /* Expression: 1/sqrt(3)
                                        * Referenced by: '<S765>/pu->V' (Parameter: Gain)
                                        */
  real_T Gain3_Gain_f[9];
  /* Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
   * Referenced by: '<S906>/Gain3' (Parameter: Gain)
   */
  real_T Gain1_Gain_c;                 /* Expression: 2/3
                                        * Referenced by: '<S906>/Gain1' (Parameter: Gain)
                                        */
  real_T Constant4_Value_i;            /* Expression: 2*pi
                                        * Referenced by: '<S864>/Constant4' (Parameter: Value)
                                        */
  real_T Initial_Value;                /* Expression: sps.Phase_Init*pi/180
                                        * Referenced by: '<S864>/Initial' (Parameter: Value)
                                        */
  real_T DiscreteTimeIntegrator_gainva_n;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_n
                           * Referenced by: '<S864>/Discrete-Time Integrator' (Parameter: gainval)
                           */
  real_T Step1_Time;                   /* Expression: 0.07
                                        * Referenced by: '<S750>/Step1' (Parameter: Time)
                                        */
  real_T Step1_Y0;                     /* Expression: 0
                                        * Referenced by: '<S750>/Step1' (Parameter: Before)
                                        */
  real_T Step1_YFinal;                 /* Expression: 15e3
                                        * Referenced by: '<S750>/Step1' (Parameter: After)
                                        */
  real_T Q_ref_Value;                  /* Expression: 0
                                        * Referenced by: '<S750>/Q_ref' (Parameter: Value)
                                        */
  real_T Gain_Gain_in;                 /* Expression: 2/3
                                        * Referenced by: '<S770>/Gain' (Parameter: Gain)
                                        */
  real_T Gain3_Gain_f2[9];
  /* Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
   * Referenced by: '<S900>/Gain3' (Parameter: Gain)
   */
  real_T Gain1_Gain_kx;                /* Expression: 2/3
                                        * Referenced by: '<S900>/Gain1' (Parameter: Gain)
                                        */
  real_T L1_Value;                     /* Expression: 1e-2
                                        * Referenced by: '<S750>/L1' (Parameter: Value)
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S805>/Integrator' (Parameter: gainval)
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S800>/Filter' (Parameter: gainval)
                                        */
  real_T UnitDelay_InitialCondition_dj;/* Expression: sps.Finit
                                        * Referenced by: '<S864>/Unit Delay' (Parameter: InitialCondition)
                                        */
  real_T upai_Value;                   /* Expression: 2*pi
                                        * Referenced by: '<S771>/2pai' (Parameter: Value)
                                        */
  real_T Integrator_gainval_d;       /* Computed Parameter: Integrator_gainval_d
                                      * Referenced by: '<S849>/Integrator' (Parameter: gainval)
                                      */
  real_T Filter_gainval_o;             /* Computed Parameter: Filter_gainval_o
                                        * Referenced by: '<S844>/Filter' (Parameter: gainval)
                                        */
  real_T upai_Value_h;                 /* Expression: 2*pi
                                        * Referenced by: '<S772>/2pai' (Parameter: Value)
                                        */
  real_T Constant_Value_pc;            /* Expression: 2
                                        * Referenced by: '<S766>/Constant' (Parameter: Value)
                                        */
  real_T constant_Value;               /* Expression: 0
                                        * Referenced by: '<S766>/constant' (Parameter: Value)
                                        */
  real_T Gain3_Gain_a[9];
          /* Expression: [ 1   0   1; -1/2  sqrt(3)/2   1; -1/2  -sqrt(3)/2  1 ]
           * Referenced by: '<S911>/Gain3' (Parameter: Gain)
           */
  real_T Gain_Gain_b;                  /* Expression: 1/2
                                        * Referenced by: '<S766>/Gain' (Parameter: Gain)
                                        */
  real_T Constant1_Value_p;            /* Expression: sps.AGC
                                        * Referenced by: '<S864>/Constant1' (Parameter: Value)
                                        */
  real_T Gain3_Gain_c[9];
  /* Expression: [ 1   -1/2   -1/2; 0   sqrt(3)/2   -sqrt(3)/2; 1/2  1/2  1/2 ]
   * Referenced by: '<S894>/Gain3' (Parameter: Gain)
   */
  real_T Gain1_Gain_n;                 /* Expression: 2/3
                                        * Referenced by: '<S894>/Gain1' (Parameter: Gain)
                                        */
  real_T Integ4_gainval_p;             /* Computed Parameter: Integ4_gainval_p
                                        * Referenced by: '<S890>/Integ4' (Parameter: gainval)
                                        */
  real_T Integ4_IC_e;                  /* Expression: 0
                                        * Referenced by: '<S890>/Integ4' (Parameter: InitialCondition)
                                        */
  real_T Toavoiddivisionbyzero_UpperS_at;/* Expression: 1e6
                                          * Referenced by: '<S890>/To avoid division  by zero' (Parameter: UpperLimit)
                                          */
  real_T Toavoiddivisionbyzero_LowerSa_m;/* Expression: eps
                                          * Referenced by: '<S890>/To avoid division  by zero' (Parameter: LowerLimit)
                                          */
  real_T SFunction_P1_Size_ho[2];    /* Computed Parameter: SFunction_P1_Size_ho
                                      * Referenced by: '<S892>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_aq;              /* Expression: MaxDelay
                                        * Referenced by: '<S892>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_as[2];    /* Computed Parameter: SFunction_P2_Size_as
                                      * Referenced by: '<S892>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_c;               /* Expression: Ts
                                        * Referenced by: '<S892>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_a[2];      /* Computed Parameter: SFunction_P3_Size_a
                                       * Referenced by: '<S892>/S-Function' (Parameter: P3Size)
                                       */
  real_T SFunction_P3_g;               /* Expression: InitialValue
                                        * Referenced by: '<S892>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_h4[2];    /* Computed Parameter: SFunction_P4_Size_h4
                                      * Referenced by: '<S892>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_pj;              /* Expression: DFT
                                        * Referenced by: '<S892>/S-Function' (Parameter: P4)
                                        */
  real_T UnitDelay_InitialCondition_e; /* Expression: 0
                                        * Referenced by: '<S891>/Unit Delay' (Parameter: InitialCondition)
                                        */
  real_T Constant_Value_md;            /* Expression: 1/sps.Finit
                                        * Referenced by: '<S890>/Constant' (Parameter: Value)
                                        */
  real_T UnitDelay1_InitialCondition_g;/* Expression: sps.Vinit
                                        * Referenced by: '<S890>/Unit Delay1' (Parameter: InitialCondition)
                                        */
  real_T DiscreteDerivative_DenCoef[2];/* Expression: [ TcD  Ts-TcD ]
                                        * Referenced by: '<S866>/Discrete Derivative ' (Parameter: Denominator)
                                        */
  real_T DiscreteDerivative_InitialState;/* Expression: 0
                                          * Referenced by: '<S866>/Discrete Derivative ' (Parameter: InitialStates)
                                          */
  real_T DiscreteTimeIntegrator_gainva_f;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_f
                           * Referenced by: '<S866>/Discrete-Time Integrator' (Parameter: gainval)
                           */
  real_T DiscreteTimeIntegrator_UpperS_i;/* Expression: Par_Limits(1)
                                          * Referenced by: '<S866>/Discrete-Time Integrator' (Parameter: UpperSaturationLimit)
                                          */
  real_T DiscreteTimeIntegrator_LowerS_g;/* Expression: Par_Limits(2)
                                          * Referenced by: '<S866>/Discrete-Time Integrator' (Parameter: LowerSaturationLimit)
                                          */
  real_T Saturation1_UpperSat;         /* Expression: Par_Limits(1)
                                        * Referenced by: '<S866>/Saturation1' (Parameter: UpperLimit)
                                        */
  real_T Saturation1_LowerSat;         /* Expression: Par_Limits(2)
                                        * Referenced by: '<S866>/Saturation1' (Parameter: LowerLimit)
                                        */
  real_T Gain10_Gain;                  /* Expression: 1/2/pi
                                        * Referenced by: '<S864>/Gain10' (Parameter: Gain)
                                        */
  real_T RateLimiter_RisingLim_j; /* Computed Parameter: RateLimiter_RisingLim_j
                                   * Referenced by: '<S864>/Rate Limiter' (Parameter: RisingSlewLimit)
                                   */
  real_T RateLimiter_FallingLim_i;
                                 /* Computed Parameter: RateLimiter_FallingLim_i
                                  * Referenced by: '<S864>/Rate Limiter' (Parameter: FallingSlewLimit)
                                  */
  real_T RateLimiter_IC_h;             /* Expression: sps.Finit
                                        * Referenced by: '<S864>/Rate Limiter' (Parameter: InitialCondition)
                                        */
  real_T Delay_x1_InitialCondition;    /* Expression: sps.x0(1,:)
                                        * Referenced by: '<S886>/Delay_x1' (Parameter: InitialCondition)
                                        */
  real_T A11_Gain;                     /* Expression: sps.A11
                                        * Referenced by: '<S887>/A11' (Parameter: Gain)
                                        */
  real_T Delay_x2_InitialCondition;    /* Expression: sps.x0(2,:)
                                        * Referenced by: '<S886>/Delay_x2' (Parameter: InitialCondition)
                                        */
  real_T A12_Gain;                     /* Expression: sps.A12
                                        * Referenced by: '<S887>/A12' (Parameter: Gain)
                                        */
  real_T A21_Gain;                     /* Expression: sps.A21
                                        * Referenced by: '<S887>/A21' (Parameter: Gain)
                                        */
  real_T A22_Gain;                     /* Expression: sps.A22
                                        * Referenced by: '<S887>/A22' (Parameter: Gain)
                                        */
  real_T B11_Gain;                     /* Expression: sps.B11
                                        * Referenced by: '<S888>/B11' (Parameter: Gain)
                                        */
  real_T B21_Gain;                     /* Expression: sps.B21
                                        * Referenced by: '<S888>/B21' (Parameter: Gain)
                                        */
  real_T Duk_Gain;                     /* Expression: sps.D
                                        * Referenced by: '<S886>/D*u(k)' (Parameter: Gain)
                                        */
  real_T C11_Gain;                     /* Expression: sps.C11
                                        * Referenced by: '<S889>/C11' (Parameter: Gain)
                                        */
  real_T C12_Gain;                     /* Expression: sps.C12
                                        * Referenced by: '<S889>/C12' (Parameter: Gain)
                                        */
  real_T Rsh_array_5Sref_Value;        /* Expression: Rsh_array5pc
                                        * Referenced by: '<S980>/Rsh_array_5%Sref' (Parameter: Value)
                                        */
  real_T donotdeletethisgain_Gain_ij;  /* Expression: 1
                                        * Referenced by: '<S974>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_ln;  /* Expression: 1
                                        * Referenced by: '<S976>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_lcn; /* Expression: 1
                                        * Referenced by: '<S1029>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_em;  /* Expression: 1
                                        * Referenced by: '<S1032>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_pe;  /* Expression: 1
                                        * Referenced by: '<S1035>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_is;  /* Expression: 1
                                        * Referenced by: '<S1041>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_kj;  /* Expression: 1
                                        * Referenced by: '<S1044>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_ap;  /* Expression: 1
                                        * Referenced by: '<S1047>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_o4[2];    /* Computed Parameter: SFunction_P1_Size_o4
                                      * Referenced by: '<S1051>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_iz;              /* Expression: Ts
                                        * Referenced by: '<S1051>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_ca[2];    /* Computed Parameter: SFunction_P2_Size_ca
                                      * Referenced by: '<S1051>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_i;               /* Expression: h
                                        * Referenced by: '<S1051>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_c3[2];    /* Computed Parameter: SFunction_P3_Size_c3
                                      * Referenced by: '<S1051>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_h;               /* Expression: Z
                                        * Referenced by: '<S1051>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_bn[2];    /* Computed Parameter: SFunction_P4_Size_bn
                                      * Referenced by: '<S1051>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_hw;              /* Expression: Phases
                                        * Referenced by: '<S1051>/S-Function' (Parameter: P4)
                                        */
  real_T SFunction_P1_Size_hg[2];    /* Computed Parameter: SFunction_P1_Size_hg
                                      * Referenced by: '<S1063>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_mf;              /* Expression: Ts
                                        * Referenced by: '<S1063>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_ex[2];    /* Computed Parameter: SFunction_P2_Size_ex
                                      * Referenced by: '<S1063>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_au;              /* Expression: h
                                        * Referenced by: '<S1063>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_i[2];      /* Computed Parameter: SFunction_P3_Size_i
                                       * Referenced by: '<S1063>/S-Function' (Parameter: P3Size)
                                       */
  real_T SFunction_P3_h2;              /* Expression: Z
                                        * Referenced by: '<S1063>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_ds[2];    /* Computed Parameter: SFunction_P4_Size_ds
                                      * Referenced by: '<S1063>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_k;               /* Expression: Phases
                                        * Referenced by: '<S1063>/S-Function' (Parameter: P4)
                                        */
  real_T Gain2_Gain_nl;                /* Expression: Z
                                        * Referenced by: '<S1051>/Gain2' (Parameter: Gain)
                                        */
  real_T StateSpace_P1_Size_h[2];    /* Computed Parameter: StateSpace_P1_Size_h
                                      * Referenced by: '<S1218>/State-Space' (Parameter: P1Size)
                                      */
  real_T StateSpace_P1_n;              /* Expression: 0
                                        * Referenced by: '<S1218>/State-Space' (Parameter: P1)
                                        */
  real_T StateSpace_P2_Size_p[2];    /* Computed Parameter: StateSpace_P2_Size_p
                                      * Referenced by: '<S1218>/State-Space' (Parameter: P2Size)
                                      */
  real_T StateSpace_P2_i;              /* Expression: 0
                                        * Referenced by: '<S1218>/State-Space' (Parameter: P2)
                                        */
  real_T donotdeletethisgain_Gain_be;  /* Expression: 1
                                        * Referenced by: '<S1055>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_aq[2];    /* Computed Parameter: SFunction_P1_Size_aq
                                      * Referenced by: '<S1052>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_bl;              /* Expression: Ts
                                        * Referenced by: '<S1052>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_bg[2];    /* Computed Parameter: SFunction_P2_Size_bg
                                      * Referenced by: '<S1052>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_cl;              /* Expression: h
                                        * Referenced by: '<S1052>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_nu[2];    /* Computed Parameter: SFunction_P3_Size_nu
                                      * Referenced by: '<S1052>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_oe;              /* Expression: Z
                                        * Referenced by: '<S1052>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_pi[2];    /* Computed Parameter: SFunction_P4_Size_pi
                                      * Referenced by: '<S1052>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_pc;              /* Expression: Phases
                                        * Referenced by: '<S1052>/S-Function' (Parameter: P4)
                                        */
  real_T SFunction_P1_Size_g3[2];    /* Computed Parameter: SFunction_P1_Size_g3
                                      * Referenced by: '<S1064>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_k2;              /* Expression: Ts
                                        * Referenced by: '<S1064>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_jp[2];    /* Computed Parameter: SFunction_P2_Size_jp
                                      * Referenced by: '<S1064>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_gj;              /* Expression: h
                                        * Referenced by: '<S1064>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_jfu[2];  /* Computed Parameter: SFunction_P3_Size_jfu
                                     * Referenced by: '<S1064>/S-Function' (Parameter: P3Size)
                                     */
  real_T SFunction_P3_ko;              /* Expression: Z
                                        * Referenced by: '<S1064>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_me[2];    /* Computed Parameter: SFunction_P4_Size_me
                                      * Referenced by: '<S1064>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_eq;              /* Expression: Phases
                                        * Referenced by: '<S1064>/S-Function' (Parameter: P4)
                                        */
  real_T Gain2_Gain_b;                 /* Expression: Z
                                        * Referenced by: '<S1052>/Gain2' (Parameter: Gain)
                                        */
  real_T StateSpace_P1_Size_hg[2];  /* Computed Parameter: StateSpace_P1_Size_hg
                                     * Referenced by: '<S1221>/State-Space' (Parameter: P1Size)
                                     */
  real_T StateSpace_P1_no;             /* Expression: 0
                                        * Referenced by: '<S1221>/State-Space' (Parameter: P1)
                                        */
  real_T StateSpace_P2_Size_g[2];    /* Computed Parameter: StateSpace_P2_Size_g
                                      * Referenced by: '<S1221>/State-Space' (Parameter: P2Size)
                                      */
  real_T StateSpace_P2_if;             /* Expression: 0
                                        * Referenced by: '<S1221>/State-Space' (Parameter: P2)
                                        */
  real_T donotdeletethisgain_Gain_br;  /* Expression: 1
                                        * Referenced by: '<S1058>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T SFunction_P1_Size_ob[2];    /* Computed Parameter: SFunction_P1_Size_ob
                                      * Referenced by: '<S1053>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_bld;             /* Expression: Ts
                                        * Referenced by: '<S1053>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_l1[2];    /* Computed Parameter: SFunction_P2_Size_l1
                                      * Referenced by: '<S1053>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_ff;              /* Expression: h
                                        * Referenced by: '<S1053>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_iw[2];    /* Computed Parameter: SFunction_P3_Size_iw
                                      * Referenced by: '<S1053>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_bf;              /* Expression: Z
                                        * Referenced by: '<S1053>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_j4[2];    /* Computed Parameter: SFunction_P4_Size_j4
                                      * Referenced by: '<S1053>/S-Function' (Parameter: P4Size)
                                      */
  real_T SFunction_P4_cw;              /* Expression: Phases
                                        * Referenced by: '<S1053>/S-Function' (Parameter: P4)
                                        */
  real_T SFunction_P1_Size_he[2];    /* Computed Parameter: SFunction_P1_Size_he
                                      * Referenced by: '<S1065>/S-Function' (Parameter: P1Size)
                                      */
  real_T SFunction_P1_pb;              /* Expression: Ts
                                        * Referenced by: '<S1065>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size_c1[2];    /* Computed Parameter: SFunction_P2_Size_c1
                                      * Referenced by: '<S1065>/S-Function' (Parameter: P2Size)
                                      */
  real_T SFunction_P2_gi;              /* Expression: h
                                        * Referenced by: '<S1065>/S-Function' (Parameter: P2)
                                        */
  real_T SFunction_P3_Size_nh[2];    /* Computed Parameter: SFunction_P3_Size_nh
                                      * Referenced by: '<S1065>/S-Function' (Parameter: P3Size)
                                      */
  real_T SFunction_P3_dw;              /* Expression: Z
                                        * Referenced by: '<S1065>/S-Function' (Parameter: P3)
                                        */
  real_T SFunction_P4_Size_e[2];      /* Computed Parameter: SFunction_P4_Size_e
                                       * Referenced by: '<S1065>/S-Function' (Parameter: P4Size)
                                       */
  real_T SFunction_P4_gp;              /* Expression: Phases
                                        * Referenced by: '<S1065>/S-Function' (Parameter: P4)
                                        */
  real_T Gain2_Gain_ij;                /* Expression: Z
                                        * Referenced by: '<S1053>/Gain2' (Parameter: Gain)
                                        */
  real_T StateSpace_P1_Size_f[2];    /* Computed Parameter: StateSpace_P1_Size_f
                                      * Referenced by: '<S1222>/State-Space' (Parameter: P1Size)
                                      */
  real_T StateSpace_P1_kh;             /* Expression: 0
                                        * Referenced by: '<S1222>/State-Space' (Parameter: P1)
                                        */
  real_T StateSpace_P2_Size_i[2];    /* Computed Parameter: StateSpace_P2_Size_i
                                      * Referenced by: '<S1222>/State-Space' (Parameter: P2Size)
                                      */
  real_T StateSpace_P2_d;              /* Expression: 0
                                        * Referenced by: '<S1222>/State-Space' (Parameter: P2)
                                        */
  real_T donotdeletethisgain_Gain_gy;  /* Expression: 1
                                        * Referenced by: '<S1061>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Gain2_Gain_jz;                /* Expression: Z
                                        * Referenced by: '<S1063>/Gain2' (Parameter: Gain)
                                        */
  real_T StateSpace_P1_Size_de[2];  /* Computed Parameter: StateSpace_P1_Size_de
                                     * Referenced by: '<S1223>/State-Space' (Parameter: P1Size)
                                     */
  real_T StateSpace_P1_g;              /* Expression: 0
                                        * Referenced by: '<S1223>/State-Space' (Parameter: P1)
                                        */
  real_T StateSpace_P2_Size_b[2];    /* Computed Parameter: StateSpace_P2_Size_b
                                      * Referenced by: '<S1223>/State-Space' (Parameter: P2Size)
                                      */
  real_T StateSpace_P2_b;              /* Expression: 0
                                        * Referenced by: '<S1223>/State-Space' (Parameter: P2)
                                        */
  real_T donotdeletethisgain_Gain_ky;  /* Expression: 1
                                        * Referenced by: '<S1067>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Gain2_Gain_j4qf;              /* Expression: Z
                                        * Referenced by: '<S1064>/Gain2' (Parameter: Gain)
                                        */
  real_T StateSpace_P1_Size_l[2];    /* Computed Parameter: StateSpace_P1_Size_l
                                      * Referenced by: '<S1224>/State-Space' (Parameter: P1Size)
                                      */
  real_T StateSpace_P1_k5;             /* Expression: 0
                                        * Referenced by: '<S1224>/State-Space' (Parameter: P1)
                                        */
  real_T StateSpace_P2_Size_pi[2];  /* Computed Parameter: StateSpace_P2_Size_pi
                                     * Referenced by: '<S1224>/State-Space' (Parameter: P2Size)
                                     */
  real_T StateSpace_P2_f;              /* Expression: 0
                                        * Referenced by: '<S1224>/State-Space' (Parameter: P2)
                                        */
  real_T donotdeletethisgain_Gain_ek;  /* Expression: 1
                                        * Referenced by: '<S1070>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T Gain2_Gain_in;                /* Expression: Z
                                        * Referenced by: '<S1065>/Gain2' (Parameter: Gain)
                                        */
  real_T StateSpace_P1_Size_bz[2];  /* Computed Parameter: StateSpace_P1_Size_bz
                                     * Referenced by: '<S1225>/State-Space' (Parameter: P1Size)
                                     */
  real_T StateSpace_P1_m;              /* Expression: 0
                                        * Referenced by: '<S1225>/State-Space' (Parameter: P1)
                                        */
  real_T StateSpace_P2_Size_g5[2];  /* Computed Parameter: StateSpace_P2_Size_g5
                                     * Referenced by: '<S1225>/State-Space' (Parameter: P2Size)
                                     */
  real_T StateSpace_P2_fc;             /* Expression: 0
                                        * Referenced by: '<S1225>/State-Space' (Parameter: P2)
                                        */
  real_T donotdeletethisgain_Gain_fi;  /* Expression: 1
                                        * Referenced by: '<S1073>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_cb;  /* Expression: 1
                                        * Referenced by: '<S1081>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_p3;  /* Expression: 1
                                        * Referenced by: '<S1084>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_bi;  /* Expression: 1
                                        * Referenced by: '<S1087>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_kk1; /* Expression: 1
                                        * Referenced by: '<S1093>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_bjp; /* Expression: 1
                                        * Referenced by: '<S1096>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_m4;  /* Expression: 1
                                        * Referenced by: '<S1099>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_lv;  /* Expression: 1
                                        * Referenced by: '<S1107>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_c4d; /* Expression: 1
                                        * Referenced by: '<S1110>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_ns;  /* Expression: 1
                                        * Referenced by: '<S1113>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_cz;  /* Expression: 1
                                        * Referenced by: '<S1119>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_lm;  /* Expression: 1
                                        * Referenced by: '<S1122>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_ef;  /* Expression: 1
                                        * Referenced by: '<S1125>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_cr0; /* Expression: 1
                                        * Referenced by: '<S1133>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_d4;  /* Expression: 1
                                        * Referenced by: '<S1136>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_bb;  /* Expression: 1
                                        * Referenced by: '<S1139>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_je;  /* Expression: 1
                                        * Referenced by: '<S1145>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_kr;  /* Expression: 1
                                        * Referenced by: '<S1148>/do not delete this gain' (Parameter: Gain)
                                        */
  real_T donotdeletethisgain_Gain_no;  /* Expression: 1
                                        * Referenced by: '<S1151>/do not delete this gain' (Parameter: Gain)
                                        */
  P_Signalgenerator_acdcmg_sim8_T Signalgenerator_j;/* '<S955>/Signal generator' */
  P_HarmonicGenerator_acdcmg_si_T HarmonicGenerator_g;/* '<S955>/Harmonic Generator' */
  P_Subsystem1_acdcmg_sim8_1_sm_T Subsystem1_k;/* '<S905>/Subsystem1' */
  P_Subsystempi2delay_acdcmg_si_T Subsystempi2delay_l;/* '<S905>/Subsystem - pi//2 delay' */
  P_Subsystem1_acdcmg_sim8_1_sm_T Subsystem1_m;/* '<S899>/Subsystem1' */
  P_Subsystempi2delay_acdcmg_si_T Subsystempi2delay_j;/* '<S899>/Subsystem - pi//2 delay' */
  P_Subsystem1_acdcmg_sim8_1_sm_T Subsystem1;/* '<S893>/Subsystem1' */
  P_Subsystempi2delay_acdcmg_si_T Subsystempi2delay;/* '<S893>/Subsystem - pi//2 delay' */
  P_Subsystem1_acdcmg_sim8_1_sm_T Subsystem1_d;/* '<S880>/Subsystem1' */
  P_Subsystempi2delay_acdcmg_si_T Subsystempi2delay_lj;/* '<S880>/Subsystem - pi//2 delay' */
  P_Signalgenerator_acdcmg_sim8_T Signalgenerator;/* '<S725>/Signal generator' */
  P_HarmonicGenerator_acdcmg_si_T HarmonicGenerator;/* '<S725>/Harmonic Generator' */
  P_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_f;/* '<S703>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_ng;/* '<S703>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_ml;/* '<S691>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_my;/* '<S691>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_j2;/* '<S679>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_hk;/* '<S679>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_ik;/* '<S667>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_k;/* '<S667>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_jr;/* '<S655>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_bz;/* '<S655>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_dt;/* '<S643>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_pj;/* '<S643>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS_mi;/* '<S631>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_s_T RMS_jo;/* '<S631>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_c0;/* '<S601>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_a;/* '<S601>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_kx;/* '<S600>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_b4;/* '<S600>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_k;/* '<S599>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_bh;/* '<S599>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_gs;/* '<S571>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_cb;/* '<S571>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_h;/* '<S570>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_cc;/* '<S570>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_ay;/* '<S569>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_p2;/* '<S569>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_g;/* '<S541>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_h;/* '<S541>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_dq;/* '<S540>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_mf;/* '<S540>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_dw;/* '<S539>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_j2;/* '<S539>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_b;/* '<S511>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_o;/* '<S511>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_ae;/* '<S510>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_j;/* '<S510>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_m;/* '<S509>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_l;/* '<S509>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_c;/* '<S481>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_n;/* '<S481>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_ad;/* '<S480>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_b;/* '<S480>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_an;/* '<S479>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_p;/* '<S479>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_e;/* '<S451>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_cw;/* '<S451>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_i;/* '<S450>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_c;/* '<S450>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_d;/* '<S449>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_m;/* '<S449>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_a;/* '<S421>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_id;/* '<S421>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_j;/* '<S420>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_il;/* '<S420>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm__p_T TrueRMS_p;/* '<S419>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_p_T RMS_i;/* '<S419>/RMS ' */
  P_TrueRMS_acdcmg_sim8_1_sm_gr_T TrueRMS;/* '<S409>/TrueRMS ' */
  P_RMS_acdcmg_sim8_1_sm_grid_s_T RMS; /* '<S409>/RMS ' */
};

/* Real-time Model Data Structure */
struct tag_RTM_acdcmg_sim8_1_sm_grid_simulation_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[3];
    SimStruct childSFunctions[71];
    SimStruct *childSFunctionPtrs[71];
    struct _ssBlkInfo2 blkInfo2[71];
    struct _ssSFcnModelMethods2 methods2[71];
    struct _ssSFcnModelMethods3 methods3[71];
    struct _ssSFcnModelMethods4 methods4[71];
    struct _ssStatesInfo2 statesInfo2[71];
    ssPeriodicStatesInfo periodicStatesInfo[71];
    struct _ssPortInfo2 inputOutputPortInfo2[71];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn15;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn16;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn18;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn19;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn20;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn21;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn22;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn23;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn24;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn25;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn26;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[30];
      real_T const *UPtrs1[9];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[11];
      struct _ssDWorkAuxRecord dWorkAux[11];
    } Sfcn27;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[18];
      real_T const *UPtrs1[9];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[11];
      struct _ssDWorkAuxRecord dWorkAux[11];
    } Sfcn28;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn29;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[3];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn30;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn31;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[8];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn32;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn33;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[2];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn34;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[6];
      real_T const *UPtrs1[3];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[11];
      struct _ssDWorkAuxRecord dWorkAux[11];
    } Sfcn35;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[6];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn36;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[9];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn37;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[6];
      real_T const *UPtrs1[3];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[11];
      struct _ssDWorkAuxRecord dWorkAux[11];
    } Sfcn38;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[6];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn39;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[6];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn40;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[9];
      real_T const *UPtrs1[3];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[11];
      struct _ssDWorkAuxRecord dWorkAux[11];
    } Sfcn41;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[6];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn42;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[6];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn43;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[8];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn44;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[8];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn45;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[8];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn46;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[6];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn47;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[8];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn48;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[6];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn49;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[8];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn50;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn51;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn52;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[3];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn53;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[4];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn54;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn55;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn56;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn57;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn58;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn59;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn60;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[11];
      struct _ssDWorkAuxRecord dWorkAux[11];
    } Sfcn61;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn62;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn63;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[11];
      struct _ssDWorkAuxRecord dWorkAux[11];
    } Sfcn64;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn65;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssInPortUnit inputPortUnits[2];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn66;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[11];
      struct _ssDWorkAuxRecord dWorkAux[11];
    } Sfcn67;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[11];
      struct _ssDWorkAuxRecord dWorkAux[11];
    } Sfcn68;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[11];
      struct _ssDWorkAuxRecord dWorkAux[11];
    } Sfcn69;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[11];
      struct _ssDWorkAuxRecord dWorkAux[11];
    } Sfcn70;
  } NonInlinedSFcns;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    void *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    void *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T CTOutputIncnstWithState;
    real_T OdeDeltaY[140];
    real_T odeF[13][140];
    real_T odeX0[140];
    ODE8_IntgData intgData;
    void *dwork;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    struct {
      uint8_T TID[3];
    } TaskCounters;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[3];
    time_T offsetTimesArray[3];
    int_T sampleTimeTaskIDArray[3];
    int_T sampleHitArray[3];
    int_T perTaskSampleHitsArray[9];
    time_T tArray[3];
  } Timing;
};

/* Block parameters (default storage) */
extern P_acdcmg_sim8_1_sm_grid_simulation_T acdcmg_sim8_1_sm_grid_simulation_P;

/* Block signals (default storage) */
extern B_acdcmg_sim8_1_sm_grid_simulation_T acdcmg_sim8_1_sm_grid_simulation_B;

/* Continuous states (default storage) */
extern X_acdcmg_sim8_1_sm_grid_simulation_T acdcmg_sim8_1_sm_grid_simulation_X;

/* Block states (default storage) */
extern DW_acdcmg_sim8_1_sm_grid_simulation_T acdcmg_sim8_1_sm_grid_simulation_DW;

/* External data declarations for dependent source files */
extern const real_T acdcmg_sim8_1_sm_grid_simulation_RGND;/* real_T ground */

/* Constant parameters (default storage) */
extern const ConstP_acdcmg_sim8_1_sm_grid_simulation_T
  acdcmg_sim8_1_sm_grid_simulation_ConstP;

/* Model entry point functions */
extern void acdcmg_sim8_1_sm_grid_simulation_initialize(void);
extern void acdcmg_sim8_1_sm_grid_simulation_output(void);
extern void acdcmg_sim8_1_sm_grid_simulation_update(void);
extern void acdcmg_sim8_1_sm_grid_simulation_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern acdcmg_sim8_1_sm_grid_simulation_rtModel
  *acdcmg_sim8_1_sm_grid_simulation(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_acdcmg_sim8_1_sm_grid_simulation_T *const
  acdcmg_sim8_1_sm_grid_simulation_M;

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
 * '<Root>' : 'acdcmg_sim8_1_sm_grid_simulation'
 * '<S1>'   : 'acdcmg_sim8_1_sm_grid_simulation/ARTEMIS Guide'
 * '<S2>'   : 'acdcmg_sim8_1_sm_grid_simulation/OpCCode_do_not_touch'
 * '<S3>'   : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation'
 * '<S4>'   : 'acdcmg_sim8_1_sm_grid_simulation/powergui'
 * '<S5>'   : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/  Ic_L1'
 * '<S6>'   : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/  Ic_L11'
 * '<S7>'   : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/  Ic_L3'
 * '<S8>'   : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/  Ic_L4'
 * '<S9>'   : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/ARTEMIS Guide'
 * '<S10>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Battery Energy  Storage System (BESS) 1'
 * '<S11>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1'
 * '<S12>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V '
 * '<S13>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker G1'
 * '<S14>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 1'
 * '<S15>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 3'
 * '<S16>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker MG'
 * '<S17>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC1'
 * '<S18>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC2'
 * '<S19>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker2'
 * '<S20>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker3'
 * '<S21>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker4'
 * '<S22>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker5'
 * '<S23>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker6'
 * '<S24>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker7'
 * '<S25>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 1'
 * '<S26>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 2'
 * '<S27>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 7'
 * '<S28>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 8'
 * '<S29>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus3'
 * '<S30>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus4'
 * '<S31>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus5'
 * '<S32>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus6'
 * '<S33>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_1'
 * '<S34>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1'
 * '<S35>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2'
 * '<S36>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3'
 * '<S37>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4'
 * '<S38>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5'
 * '<S39>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6'
 * '<S40>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7'
 * '<S41>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_2'
 * '<S42>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_3'
 * '<S43>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_4'
 * '<S44>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_5'
 * '<S45>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_6'
 * '<S46>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_7'
 * '<S47>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_8'
 * '<S48>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_AC//DC3'
 * '<S49>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Current Measurement'
 * '<S50>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/DATA  ADQUISITION'
 * '<S51>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Diesel_ 50MVA'
 * '<S52>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ia_L1'
 * '<S53>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ia_L11'
 * '<S54>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ia_L2'
 * '<S55>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ia_L3'
 * '<S56>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ia_L4'
 * '<S57>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ia_L5'
 * '<S58>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ia_L6'
 * '<S59>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ib_L1'
 * '<S60>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ib_L11'
 * '<S61>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ib_L2'
 * '<S62>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ib_L3'
 * '<S63>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ib_L4'
 * '<S64>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ib_L5'
 * '<S65>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ib_L6'
 * '<S66>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ic_L2'
 * '<S67>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ic_L5'
 * '<S68>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ic_L6'
 * '<S69>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4'
 * '<S70>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Main Grid 69 kV Inf'
 * '<S71>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/OpComm1'
 * '<S72>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem'
 * '<S73>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Primary (69 kV)'
 * '<S74>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Secundario 13.8 kV LL'
 * '<S75>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine'
 * '<S76>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1'
 * '<S77>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2'
 * '<S78>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5'
 * '<S79>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6'
 * '<S80>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/TDC2 220 V // 150 V 15 kVA'
 * '<S81>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/TG 13.8 kV // 2400 V 3.5 MVA'
 * '<S82>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Transformer (T1) 13.8 kV // 220 V 1.5 MVA'
 * '<S83>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Transformer (T2) 13.8 kV // 220 V 1.5 MVA'
 * '<S84>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Transformer (T3) 69kV // 13.8 kV 4 MVA'
 * '<S85>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Vdc '
 * '<S86>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem'
 * '<S87>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/  Ic_L1/Model'
 * '<S88>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/  Ic_L11/Model'
 * '<S89>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/  Ic_L3/Model'
 * '<S90>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/  Ic_L4/Model'
 * '<S91>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Battery Energy  Storage System (BESS) 1/Battery1'
 * '<S92>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Battery Energy  Storage System (BESS) 1/Battery1/Controlled Voltage Source'
 * '<S93>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Battery Energy  Storage System (BESS) 1/Battery1/Current Measurement'
 * '<S94>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Battery Energy  Storage System (BESS) 1/Battery1/Model'
 * '<S95>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Battery Energy  Storage System (BESS) 1/Battery1/Current Measurement/Model'
 * '<S96>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Battery Energy  Storage System (BESS) 1/Battery1/Model/Compare To Zero'
 * '<S97>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Battery Energy  Storage System (BESS) 1/Battery1/Model/Compare To Zero2'
 * '<S98>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Battery Energy  Storage System (BESS) 1/Battery1/Model/E_dyn Charge'
 * '<S99>'  : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Battery Energy  Storage System (BESS) 1/Battery1/Model/Exp'
 * '<S100>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Battery Energy  Storage System (BESS) 1/Battery1/Model/Saturation Dynamic'
 * '<S101>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Battery Energy  Storage System (BESS) 1/Battery1/Model/Saturation Dynamic1'
 * '<S102>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Battery Energy  Storage System (BESS) 1/Battery1/Model/Saturation Dynamic2'
 * '<S103>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Battery Energy  Storage System (BESS) 1/Battery1/Model/Exp/Compare To Zero2'
 * '<S104>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Breaker1'
 * '<S105>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Breaker4'
 * '<S106>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Controlled Current Source'
 * '<S107>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Controlled Voltage Source'
 * '<S108>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Current Measurement'
 * '<S109>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Current Measurement2'
 * '<S110>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Current Measurement3'
 * '<S111>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Current Measurement4'
 * '<S112>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Mean'
 * '<S113>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Mean1'
 * '<S114>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Primary Control'
 * '<S115>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Vdc '
 * '<S116>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Vdc 1'
 * '<S117>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Voltage Measurement'
 * '<S118>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Breaker1/Model'
 * '<S119>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Breaker1/Model/Timer'
 * '<S120>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Breaker1/Model/fts5conversion'
 * '<S121>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Breaker1/Model/fts5conversion1'
 * '<S122>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Breaker4/Model'
 * '<S123>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Breaker4/Model/Timer'
 * '<S124>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Breaker4/Model/fts5conversion'
 * '<S125>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Breaker4/Model/fts5conversion1'
 * '<S126>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Current Measurement/Model'
 * '<S127>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Current Measurement2/Model'
 * '<S128>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Current Measurement3/Model'
 * '<S129>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Current Measurement4/Model'
 * '<S130>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Mean/Model'
 * '<S131>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Mean1/Model'
 * '<S132>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Primary Control/PID Orig Boost'
 * '<S133>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Vdc /Model'
 * '<S134>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Vdc 1/Model'
 * '<S135>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost -buck Bi-directional  converter 1/Voltage Measurement/Model'
 * '<S136>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /Controlled Current Source1'
 * '<S137>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /Controlled Voltage Source1'
 * '<S138>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /Current Measurement1'
 * '<S139>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /Current Measurement2'
 * '<S140>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /Current Measurement4'
 * '<S141>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /MPPT Controller using  Incremental Conductance and  Integral Regulator  technique '
 * '<S142>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /Mean'
 * '<S143>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /Mean1'
 * '<S144>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /Vdc '
 * '<S145>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /Vdc 1'
 * '<S146>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /Current Measurement1/Model'
 * '<S147>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /Current Measurement2/Model'
 * '<S148>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /Current Measurement4/Model'
 * '<S149>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /MPPT Controller using  Incremental Conductance and  Integral Regulator  technique /MPPT'
 * '<S150>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /MPPT Controller using  Incremental Conductance and  Integral Regulator  technique /MPPT/Mean'
 * '<S151>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /MPPT Controller using  Incremental Conductance and  Integral Regulator  technique /MPPT/Mean1'
 * '<S152>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /MPPT Controller using  Incremental Conductance and  Integral Regulator  technique /MPPT/Mean/Model'
 * '<S153>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /MPPT Controller using  Incremental Conductance and  Integral Regulator  technique /MPPT/Mean/Model/Discrete Variable Time Delay'
 * '<S154>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /MPPT Controller using  Incremental Conductance and  Integral Regulator  technique /MPPT/Mean1/Model'
 * '<S155>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /MPPT Controller using  Incremental Conductance and  Integral Regulator  technique /MPPT/Mean1/Model/Discrete Variable Time Delay'
 * '<S156>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /Mean/Model'
 * '<S157>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /Mean1/Model'
 * '<S158>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /Mean1/Model/Discrete Variable Time Delay'
 * '<S159>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /Vdc /Model'
 * '<S160>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Boost converter 2 5 kHz - 300V /Vdc 1/Model'
 * '<S161>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker G1/Breaker A'
 * '<S162>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker G1/Breaker B'
 * '<S163>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker G1/Breaker C'
 * '<S164>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker G1/Stair Generator'
 * '<S165>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker G1/Breaker A/Model'
 * '<S166>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker G1/Breaker A/Model/Timer'
 * '<S167>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker G1/Breaker A/Model/fts5conversion'
 * '<S168>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker G1/Breaker A/Model/fts5conversion1'
 * '<S169>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker G1/Breaker B/Model'
 * '<S170>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker G1/Breaker B/Model/Timer'
 * '<S171>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker G1/Breaker B/Model/fts5conversion'
 * '<S172>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker G1/Breaker B/Model/fts5conversion1'
 * '<S173>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker G1/Breaker C/Model'
 * '<S174>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker G1/Breaker C/Model/Timer'
 * '<S175>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker G1/Breaker C/Model/fts5conversion'
 * '<S176>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker G1/Breaker C/Model/fts5conversion1'
 * '<S177>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker G1/Stair Generator/Model'
 * '<S178>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 1/Breaker A'
 * '<S179>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 1/Breaker B'
 * '<S180>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 1/Breaker C'
 * '<S181>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 1/Stair Generator'
 * '<S182>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 1/Breaker A/Model'
 * '<S183>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 1/Breaker A/Model/Timer'
 * '<S184>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 1/Breaker A/Model/fts5conversion'
 * '<S185>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 1/Breaker A/Model/fts5conversion1'
 * '<S186>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 1/Breaker B/Model'
 * '<S187>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 1/Breaker B/Model/Timer'
 * '<S188>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 1/Breaker B/Model/fts5conversion'
 * '<S189>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 1/Breaker B/Model/fts5conversion1'
 * '<S190>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 1/Breaker C/Model'
 * '<S191>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 1/Breaker C/Model/Timer'
 * '<S192>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 1/Breaker C/Model/fts5conversion'
 * '<S193>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 1/Breaker C/Model/fts5conversion1'
 * '<S194>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 1/Stair Generator/Model'
 * '<S195>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 3/Breaker A'
 * '<S196>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 3/Breaker B'
 * '<S197>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 3/Breaker C'
 * '<S198>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 3/Stair Generator'
 * '<S199>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 3/Breaker A/Model'
 * '<S200>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 3/Breaker A/Model/Timer'
 * '<S201>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 3/Breaker A/Model/fts5conversion'
 * '<S202>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 3/Breaker A/Model/fts5conversion1'
 * '<S203>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 3/Breaker B/Model'
 * '<S204>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 3/Breaker B/Model/Timer'
 * '<S205>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 3/Breaker B/Model/fts5conversion'
 * '<S206>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 3/Breaker B/Model/fts5conversion1'
 * '<S207>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 3/Breaker C/Model'
 * '<S208>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 3/Breaker C/Model/Timer'
 * '<S209>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 3/Breaker C/Model/fts5conversion'
 * '<S210>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 3/Breaker C/Model/fts5conversion1'
 * '<S211>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker Load 3/Stair Generator/Model'
 * '<S212>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker MG/Breaker A'
 * '<S213>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker MG/Breaker B'
 * '<S214>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker MG/Breaker C'
 * '<S215>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker MG/Stair Generator'
 * '<S216>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker MG/Breaker A/Model'
 * '<S217>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker MG/Breaker A/Model/Timer'
 * '<S218>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker MG/Breaker A/Model/fts5conversion'
 * '<S219>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker MG/Breaker A/Model/fts5conversion1'
 * '<S220>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker MG/Breaker B/Model'
 * '<S221>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker MG/Breaker B/Model/Timer'
 * '<S222>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker MG/Breaker B/Model/fts5conversion'
 * '<S223>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker MG/Breaker B/Model/fts5conversion1'
 * '<S224>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker MG/Breaker C/Model'
 * '<S225>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker MG/Breaker C/Model/Timer'
 * '<S226>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker MG/Breaker C/Model/fts5conversion'
 * '<S227>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker MG/Breaker C/Model/fts5conversion1'
 * '<S228>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker MG/Stair Generator/Model'
 * '<S229>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC1/Breaker A'
 * '<S230>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC1/Breaker B'
 * '<S231>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC1/Breaker C'
 * '<S232>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC1/Stair Generator'
 * '<S233>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC1/Breaker A/Model'
 * '<S234>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC1/Breaker A/Model/Timer'
 * '<S235>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC1/Breaker A/Model/fts5conversion'
 * '<S236>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC1/Breaker A/Model/fts5conversion1'
 * '<S237>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC1/Breaker B/Model'
 * '<S238>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC1/Breaker B/Model/Timer'
 * '<S239>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC1/Breaker B/Model/fts5conversion'
 * '<S240>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC1/Breaker B/Model/fts5conversion1'
 * '<S241>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC1/Breaker C/Model'
 * '<S242>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC1/Breaker C/Model/Timer'
 * '<S243>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC1/Breaker C/Model/fts5conversion'
 * '<S244>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC1/Breaker C/Model/fts5conversion1'
 * '<S245>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC1/Stair Generator/Model'
 * '<S246>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC2/Breaker A'
 * '<S247>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC2/Breaker B'
 * '<S248>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC2/Breaker C'
 * '<S249>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC2/Stair Generator'
 * '<S250>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC2/Breaker A/Model'
 * '<S251>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC2/Breaker A/Model/Timer'
 * '<S252>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC2/Breaker A/Model/fts5conversion'
 * '<S253>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC2/Breaker A/Model/fts5conversion1'
 * '<S254>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC2/Breaker B/Model'
 * '<S255>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC2/Breaker B/Model/Timer'
 * '<S256>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC2/Breaker B/Model/fts5conversion'
 * '<S257>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC2/Breaker B/Model/fts5conversion1'
 * '<S258>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC2/Breaker C/Model'
 * '<S259>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC2/Breaker C/Model/Timer'
 * '<S260>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC2/Breaker C/Model/fts5conversion'
 * '<S261>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC2/Breaker C/Model/fts5conversion1'
 * '<S262>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker bus DC2/Stair Generator/Model'
 * '<S263>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker2/Model'
 * '<S264>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker2/Model/Timer'
 * '<S265>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker2/Model/fts5conversion'
 * '<S266>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker2/Model/fts5conversion1'
 * '<S267>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker3/Model'
 * '<S268>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker3/Model/Timer'
 * '<S269>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker3/Model/fts5conversion'
 * '<S270>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker3/Model/fts5conversion1'
 * '<S271>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker4/Model'
 * '<S272>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker4/Model/Timer'
 * '<S273>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker4/Model/fts5conversion'
 * '<S274>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker4/Model/fts5conversion1'
 * '<S275>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker5/Model'
 * '<S276>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker5/Model/Timer'
 * '<S277>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker5/Model/fts5conversion'
 * '<S278>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker5/Model/fts5conversion1'
 * '<S279>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker6/Model'
 * '<S280>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker6/Model/Timer'
 * '<S281>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker6/Model/fts5conversion'
 * '<S282>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker6/Model/fts5conversion1'
 * '<S283>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker7/Model'
 * '<S284>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker7/Model/Timer'
 * '<S285>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker7/Model/fts5conversion'
 * '<S286>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Breaker7/Model/fts5conversion1'
 * '<S287>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 1/Mode I'
 * '<S288>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 1/Mode V'
 * '<S289>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 1/Model'
 * '<S290>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 1/Model/I A:'
 * '<S291>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 1/Model/I B:'
 * '<S292>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 1/Model/I C:'
 * '<S293>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 1/Model/U AB:'
 * '<S294>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 1/Model/U BC:'
 * '<S295>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 1/Model/U CA:'
 * '<S296>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 1/Model/I A:/Model'
 * '<S297>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 1/Model/I B:/Model'
 * '<S298>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 1/Model/I C:/Model'
 * '<S299>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 1/Model/U AB:/Model'
 * '<S300>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 1/Model/U BC:/Model'
 * '<S301>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 1/Model/U CA:/Model'
 * '<S302>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 2/Mode I'
 * '<S303>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 2/Mode V'
 * '<S304>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 2/Model'
 * '<S305>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 2/Model/I A:'
 * '<S306>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 2/Model/I B:'
 * '<S307>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 2/Model/I C:'
 * '<S308>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 2/Model/U AB:'
 * '<S309>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 2/Model/U BC:'
 * '<S310>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 2/Model/U CA:'
 * '<S311>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 2/Model/I A:/Model'
 * '<S312>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 2/Model/I B:/Model'
 * '<S313>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 2/Model/I C:/Model'
 * '<S314>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 2/Model/U AB:/Model'
 * '<S315>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 2/Model/U BC:/Model'
 * '<S316>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 2/Model/U CA:/Model'
 * '<S317>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 7/Mode I'
 * '<S318>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 7/Mode V'
 * '<S319>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 7/Model'
 * '<S320>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 7/Model/I A:'
 * '<S321>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 7/Model/I B:'
 * '<S322>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 7/Model/I C:'
 * '<S323>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 7/Model/U AB:'
 * '<S324>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 7/Model/U BC:'
 * '<S325>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 7/Model/U CA:'
 * '<S326>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 7/Model/I A:/Model'
 * '<S327>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 7/Model/I B:/Model'
 * '<S328>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 7/Model/I C:/Model'
 * '<S329>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 7/Model/U AB:/Model'
 * '<S330>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 7/Model/U BC:/Model'
 * '<S331>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 7/Model/U CA:/Model'
 * '<S332>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 8/Mode I'
 * '<S333>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 8/Mode V'
 * '<S334>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 8/Model'
 * '<S335>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 8/Model/I A:'
 * '<S336>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 8/Model/I B:'
 * '<S337>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 8/Model/I C:'
 * '<S338>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 8/Model/U AB:'
 * '<S339>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 8/Model/U BC:'
 * '<S340>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 8/Model/U CA:'
 * '<S341>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 8/Model/I A:/Model'
 * '<S342>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 8/Model/I B:/Model'
 * '<S343>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 8/Model/I C:/Model'
 * '<S344>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 8/Model/U AB:/Model'
 * '<S345>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 8/Model/U BC:/Model'
 * '<S346>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus 8/Model/U CA:/Model'
 * '<S347>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus3/Mode I'
 * '<S348>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus3/Mode V'
 * '<S349>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus3/Model'
 * '<S350>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus3/Model/I A:'
 * '<S351>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus3/Model/I B:'
 * '<S352>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus3/Model/I C:'
 * '<S353>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus3/Model/U AB:'
 * '<S354>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus3/Model/U BC:'
 * '<S355>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus3/Model/U CA:'
 * '<S356>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus3/Model/I A:/Model'
 * '<S357>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus3/Model/I B:/Model'
 * '<S358>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus3/Model/I C:/Model'
 * '<S359>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus3/Model/U AB:/Model'
 * '<S360>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus3/Model/U BC:/Model'
 * '<S361>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus3/Model/U CA:/Model'
 * '<S362>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus4/Mode I'
 * '<S363>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus4/Mode V'
 * '<S364>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus4/Model'
 * '<S365>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus4/Model/I A:'
 * '<S366>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus4/Model/I B:'
 * '<S367>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus4/Model/I C:'
 * '<S368>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus4/Model/U AB:'
 * '<S369>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus4/Model/U BC:'
 * '<S370>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus4/Model/U CA:'
 * '<S371>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus4/Model/I A:/Model'
 * '<S372>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus4/Model/I B:/Model'
 * '<S373>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus4/Model/I C:/Model'
 * '<S374>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus4/Model/U AB:/Model'
 * '<S375>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus4/Model/U BC:/Model'
 * '<S376>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus4/Model/U CA:/Model'
 * '<S377>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus5/Mode I'
 * '<S378>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus5/Mode V'
 * '<S379>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus5/Model'
 * '<S380>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus5/Model/I A:'
 * '<S381>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus5/Model/I B:'
 * '<S382>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus5/Model/I C:'
 * '<S383>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus5/Model/U AB:'
 * '<S384>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus5/Model/U BC:'
 * '<S385>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus5/Model/U CA:'
 * '<S386>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus5/Model/I A:/Model'
 * '<S387>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus5/Model/I B:/Model'
 * '<S388>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus5/Model/I C:/Model'
 * '<S389>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus5/Model/U AB:/Model'
 * '<S390>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus5/Model/U BC:/Model'
 * '<S391>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus5/Model/U CA:/Model'
 * '<S392>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus6/Mode I'
 * '<S393>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus6/Mode V'
 * '<S394>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus6/Model'
 * '<S395>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus6/Model/I A:'
 * '<S396>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus6/Model/I B:'
 * '<S397>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus6/Model/I C:'
 * '<S398>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus6/Model/U AB:'
 * '<S399>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus6/Model/U BC:'
 * '<S400>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus6/Model/U CA:'
 * '<S401>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus6/Model/I A:/Model'
 * '<S402>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus6/Model/I B:/Model'
 * '<S403>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus6/Model/I C:/Model'
 * '<S404>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus6/Model/U AB:/Model'
 * '<S405>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus6/Model/U BC:/Model'
 * '<S406>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus6/Model/U CA:/Model'
 * '<S407>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_1/Power (3ph, Instantaneous)'
 * '<S408>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_1/Power Factor Block1'
 * '<S409>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_1/Power Factor Block1/RMS'
 * '<S410>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_1/Power Factor Block1/RMS/RMS '
 * '<S411>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_1/Power Factor Block1/RMS/TrueRMS '
 * '<S412>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_1/Power Factor Block1/RMS/RMS /Fourier1'
 * '<S413>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_1/Power Factor Block1/RMS/RMS /Fourier1/Mean'
 * '<S414>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_1/Power Factor Block1/RMS/RMS /Fourier1/Mean value1'
 * '<S415>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_1/Power Factor Block1/RMS/RMS /Fourier1/Mean/Model'
 * '<S416>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_1/Power Factor Block1/RMS/RMS /Fourier1/Mean value1/Model'
 * '<S417>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_1/Power Factor Block1/RMS/TrueRMS /Mean value'
 * '<S418>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_1/Power Factor Block1/RMS/TrueRMS /Mean value/Model'
 * '<S419>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS1'
 * '<S420>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS2'
 * '<S421>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS3'
 * '<S422>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS1/RMS '
 * '<S423>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS1/TrueRMS '
 * '<S424>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS1/RMS /Fourier1'
 * '<S425>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS1/RMS /Fourier1/Mean'
 * '<S426>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS1/RMS /Fourier1/Mean value1'
 * '<S427>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS1/RMS /Fourier1/Mean/Model'
 * '<S428>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS1/RMS /Fourier1/Mean value1/Model'
 * '<S429>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS1/TrueRMS /Mean value'
 * '<S430>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS1/TrueRMS /Mean value/Model'
 * '<S431>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS2/RMS '
 * '<S432>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS2/TrueRMS '
 * '<S433>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS2/RMS /Fourier1'
 * '<S434>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS2/RMS /Fourier1/Mean'
 * '<S435>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS2/RMS /Fourier1/Mean value1'
 * '<S436>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS2/RMS /Fourier1/Mean/Model'
 * '<S437>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS2/RMS /Fourier1/Mean value1/Model'
 * '<S438>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS2/TrueRMS /Mean value'
 * '<S439>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS2/TrueRMS /Mean value/Model'
 * '<S440>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS3/RMS '
 * '<S441>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS3/TrueRMS '
 * '<S442>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS3/RMS /Fourier1'
 * '<S443>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS3/RMS /Fourier1/Mean'
 * '<S444>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS3/RMS /Fourier1/Mean value1'
 * '<S445>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS3/RMS /Fourier1/Mean/Model'
 * '<S446>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS3/RMS /Fourier1/Mean value1/Model'
 * '<S447>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS3/TrueRMS /Mean value'
 * '<S448>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 1/RMS3/TrueRMS /Mean value/Model'
 * '<S449>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS1'
 * '<S450>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS2'
 * '<S451>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS3'
 * '<S452>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS1/RMS '
 * '<S453>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS1/TrueRMS '
 * '<S454>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS1/RMS /Fourier1'
 * '<S455>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS1/RMS /Fourier1/Mean'
 * '<S456>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS1/RMS /Fourier1/Mean value1'
 * '<S457>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS1/RMS /Fourier1/Mean/Model'
 * '<S458>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS1/RMS /Fourier1/Mean value1/Model'
 * '<S459>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS1/TrueRMS /Mean value'
 * '<S460>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS1/TrueRMS /Mean value/Model'
 * '<S461>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS2/RMS '
 * '<S462>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS2/TrueRMS '
 * '<S463>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS2/RMS /Fourier1'
 * '<S464>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS2/RMS /Fourier1/Mean'
 * '<S465>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS2/RMS /Fourier1/Mean value1'
 * '<S466>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS2/RMS /Fourier1/Mean/Model'
 * '<S467>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS2/RMS /Fourier1/Mean value1/Model'
 * '<S468>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS2/TrueRMS /Mean value'
 * '<S469>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS2/TrueRMS /Mean value/Model'
 * '<S470>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS3/RMS '
 * '<S471>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS3/TrueRMS '
 * '<S472>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS3/RMS /Fourier1'
 * '<S473>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS3/RMS /Fourier1/Mean'
 * '<S474>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS3/RMS /Fourier1/Mean value1'
 * '<S475>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS3/RMS /Fourier1/Mean/Model'
 * '<S476>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS3/RMS /Fourier1/Mean value1/Model'
 * '<S477>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS3/TrueRMS /Mean value'
 * '<S478>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 2/RMS3/TrueRMS /Mean value/Model'
 * '<S479>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS1'
 * '<S480>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS2'
 * '<S481>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS3'
 * '<S482>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS1/RMS '
 * '<S483>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS1/TrueRMS '
 * '<S484>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS1/RMS /Fourier1'
 * '<S485>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS1/RMS /Fourier1/Mean'
 * '<S486>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS1/RMS /Fourier1/Mean value1'
 * '<S487>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS1/RMS /Fourier1/Mean/Model'
 * '<S488>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS1/RMS /Fourier1/Mean value1/Model'
 * '<S489>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS1/TrueRMS /Mean value'
 * '<S490>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS1/TrueRMS /Mean value/Model'
 * '<S491>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS2/RMS '
 * '<S492>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS2/TrueRMS '
 * '<S493>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS2/RMS /Fourier1'
 * '<S494>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS2/RMS /Fourier1/Mean'
 * '<S495>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS2/RMS /Fourier1/Mean value1'
 * '<S496>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS2/RMS /Fourier1/Mean/Model'
 * '<S497>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS2/RMS /Fourier1/Mean value1/Model'
 * '<S498>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS2/TrueRMS /Mean value'
 * '<S499>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS2/TrueRMS /Mean value/Model'
 * '<S500>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS3/RMS '
 * '<S501>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS3/TrueRMS '
 * '<S502>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS3/RMS /Fourier1'
 * '<S503>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS3/RMS /Fourier1/Mean'
 * '<S504>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS3/RMS /Fourier1/Mean value1'
 * '<S505>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS3/RMS /Fourier1/Mean/Model'
 * '<S506>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS3/RMS /Fourier1/Mean value1/Model'
 * '<S507>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS3/TrueRMS /Mean value'
 * '<S508>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 3/RMS3/TrueRMS /Mean value/Model'
 * '<S509>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS1'
 * '<S510>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS2'
 * '<S511>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS3'
 * '<S512>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS1/RMS '
 * '<S513>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS1/TrueRMS '
 * '<S514>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS1/RMS /Fourier1'
 * '<S515>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS1/RMS /Fourier1/Mean'
 * '<S516>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS1/RMS /Fourier1/Mean value1'
 * '<S517>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS1/RMS /Fourier1/Mean/Model'
 * '<S518>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS1/RMS /Fourier1/Mean value1/Model'
 * '<S519>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS1/TrueRMS /Mean value'
 * '<S520>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS1/TrueRMS /Mean value/Model'
 * '<S521>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS2/RMS '
 * '<S522>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS2/TrueRMS '
 * '<S523>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS2/RMS /Fourier1'
 * '<S524>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS2/RMS /Fourier1/Mean'
 * '<S525>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS2/RMS /Fourier1/Mean value1'
 * '<S526>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS2/RMS /Fourier1/Mean/Model'
 * '<S527>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS2/RMS /Fourier1/Mean value1/Model'
 * '<S528>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS2/TrueRMS /Mean value'
 * '<S529>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS2/TrueRMS /Mean value/Model'
 * '<S530>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS3/RMS '
 * '<S531>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS3/TrueRMS '
 * '<S532>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS3/RMS /Fourier1'
 * '<S533>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS3/RMS /Fourier1/Mean'
 * '<S534>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS3/RMS /Fourier1/Mean value1'
 * '<S535>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS3/RMS /Fourier1/Mean/Model'
 * '<S536>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS3/RMS /Fourier1/Mean value1/Model'
 * '<S537>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS3/TrueRMS /Mean value'
 * '<S538>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 4/RMS3/TrueRMS /Mean value/Model'
 * '<S539>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS1'
 * '<S540>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS2'
 * '<S541>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS3'
 * '<S542>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS1/RMS '
 * '<S543>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS1/TrueRMS '
 * '<S544>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS1/RMS /Fourier1'
 * '<S545>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS1/RMS /Fourier1/Mean'
 * '<S546>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS1/RMS /Fourier1/Mean value1'
 * '<S547>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS1/RMS /Fourier1/Mean/Model'
 * '<S548>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS1/RMS /Fourier1/Mean value1/Model'
 * '<S549>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS1/TrueRMS /Mean value'
 * '<S550>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS1/TrueRMS /Mean value/Model'
 * '<S551>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS2/RMS '
 * '<S552>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS2/TrueRMS '
 * '<S553>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS2/RMS /Fourier1'
 * '<S554>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS2/RMS /Fourier1/Mean'
 * '<S555>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS2/RMS /Fourier1/Mean value1'
 * '<S556>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS2/RMS /Fourier1/Mean/Model'
 * '<S557>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS2/RMS /Fourier1/Mean value1/Model'
 * '<S558>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS2/TrueRMS /Mean value'
 * '<S559>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS2/TrueRMS /Mean value/Model'
 * '<S560>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS3/RMS '
 * '<S561>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS3/TrueRMS '
 * '<S562>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS3/RMS /Fourier1'
 * '<S563>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS3/RMS /Fourier1/Mean'
 * '<S564>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS3/RMS /Fourier1/Mean value1'
 * '<S565>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS3/RMS /Fourier1/Mean/Model'
 * '<S566>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS3/RMS /Fourier1/Mean value1/Model'
 * '<S567>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS3/TrueRMS /Mean value'
 * '<S568>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 5/RMS3/TrueRMS /Mean value/Model'
 * '<S569>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS1'
 * '<S570>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS2'
 * '<S571>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS3'
 * '<S572>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS1/RMS '
 * '<S573>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS1/TrueRMS '
 * '<S574>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS1/RMS /Fourier1'
 * '<S575>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS1/RMS /Fourier1/Mean'
 * '<S576>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS1/RMS /Fourier1/Mean value1'
 * '<S577>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS1/RMS /Fourier1/Mean/Model'
 * '<S578>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS1/RMS /Fourier1/Mean value1/Model'
 * '<S579>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS1/TrueRMS /Mean value'
 * '<S580>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS1/TrueRMS /Mean value/Model'
 * '<S581>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS2/RMS '
 * '<S582>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS2/TrueRMS '
 * '<S583>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS2/RMS /Fourier1'
 * '<S584>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS2/RMS /Fourier1/Mean'
 * '<S585>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS2/RMS /Fourier1/Mean value1'
 * '<S586>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS2/RMS /Fourier1/Mean/Model'
 * '<S587>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS2/RMS /Fourier1/Mean value1/Model'
 * '<S588>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS2/TrueRMS /Mean value'
 * '<S589>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS2/TrueRMS /Mean value/Model'
 * '<S590>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS3/RMS '
 * '<S591>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS3/TrueRMS '
 * '<S592>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS3/RMS /Fourier1'
 * '<S593>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS3/RMS /Fourier1/Mean'
 * '<S594>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS3/RMS /Fourier1/Mean value1'
 * '<S595>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS3/RMS /Fourier1/Mean/Model'
 * '<S596>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS3/RMS /Fourier1/Mean value1/Model'
 * '<S597>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS3/TrueRMS /Mean value'
 * '<S598>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 6/RMS3/TrueRMS /Mean value/Model'
 * '<S599>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS1'
 * '<S600>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS2'
 * '<S601>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS3'
 * '<S602>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS1/RMS '
 * '<S603>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS1/TrueRMS '
 * '<S604>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS1/RMS /Fourier1'
 * '<S605>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS1/RMS /Fourier1/Mean'
 * '<S606>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS1/RMS /Fourier1/Mean value1'
 * '<S607>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS1/RMS /Fourier1/Mean/Model'
 * '<S608>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS1/RMS /Fourier1/Mean value1/Model'
 * '<S609>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS1/TrueRMS /Mean value'
 * '<S610>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS1/TrueRMS /Mean value/Model'
 * '<S611>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS2/RMS '
 * '<S612>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS2/TrueRMS '
 * '<S613>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS2/RMS /Fourier1'
 * '<S614>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS2/RMS /Fourier1/Mean'
 * '<S615>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS2/RMS /Fourier1/Mean value1'
 * '<S616>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS2/RMS /Fourier1/Mean/Model'
 * '<S617>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS2/RMS /Fourier1/Mean value1/Model'
 * '<S618>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS2/TrueRMS /Mean value'
 * '<S619>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS2/TrueRMS /Mean value/Model'
 * '<S620>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS3/RMS '
 * '<S621>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS3/TrueRMS '
 * '<S622>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS3/RMS /Fourier1'
 * '<S623>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS3/RMS /Fourier1/Mean'
 * '<S624>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS3/RMS /Fourier1/Mean value1'
 * '<S625>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS3/RMS /Fourier1/Mean/Model'
 * '<S626>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS3/RMS /Fourier1/Mean value1/Model'
 * '<S627>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS3/TrueRMS /Mean value'
 * '<S628>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_14 7/RMS3/TrueRMS /Mean value/Model'
 * '<S629>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_2/Power (3ph, Instantaneous)'
 * '<S630>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_2/Power Factor Block1'
 * '<S631>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_2/Power Factor Block1/RMS'
 * '<S632>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_2/Power Factor Block1/RMS/RMS '
 * '<S633>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_2/Power Factor Block1/RMS/TrueRMS '
 * '<S634>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_2/Power Factor Block1/RMS/RMS /Fourier1'
 * '<S635>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_2/Power Factor Block1/RMS/RMS /Fourier1/Mean'
 * '<S636>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_2/Power Factor Block1/RMS/RMS /Fourier1/Mean value1'
 * '<S637>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_2/Power Factor Block1/RMS/RMS /Fourier1/Mean/Model'
 * '<S638>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_2/Power Factor Block1/RMS/RMS /Fourier1/Mean value1/Model'
 * '<S639>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_2/Power Factor Block1/RMS/TrueRMS /Mean value'
 * '<S640>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_2/Power Factor Block1/RMS/TrueRMS /Mean value/Model'
 * '<S641>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_3/Power (3ph, Instantaneous)'
 * '<S642>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_3/Power Factor Block1'
 * '<S643>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_3/Power Factor Block1/RMS'
 * '<S644>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_3/Power Factor Block1/RMS/RMS '
 * '<S645>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_3/Power Factor Block1/RMS/TrueRMS '
 * '<S646>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_3/Power Factor Block1/RMS/RMS /Fourier1'
 * '<S647>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_3/Power Factor Block1/RMS/RMS /Fourier1/Mean'
 * '<S648>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_3/Power Factor Block1/RMS/RMS /Fourier1/Mean value1'
 * '<S649>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_3/Power Factor Block1/RMS/RMS /Fourier1/Mean/Model'
 * '<S650>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_3/Power Factor Block1/RMS/RMS /Fourier1/Mean value1/Model'
 * '<S651>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_3/Power Factor Block1/RMS/TrueRMS /Mean value'
 * '<S652>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_3/Power Factor Block1/RMS/TrueRMS /Mean value/Model'
 * '<S653>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_4/Power (3ph, Instantaneous)'
 * '<S654>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_4/Power Factor Block1'
 * '<S655>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_4/Power Factor Block1/RMS'
 * '<S656>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_4/Power Factor Block1/RMS/RMS '
 * '<S657>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_4/Power Factor Block1/RMS/TrueRMS '
 * '<S658>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_4/Power Factor Block1/RMS/RMS /Fourier1'
 * '<S659>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_4/Power Factor Block1/RMS/RMS /Fourier1/Mean'
 * '<S660>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_4/Power Factor Block1/RMS/RMS /Fourier1/Mean value1'
 * '<S661>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_4/Power Factor Block1/RMS/RMS /Fourier1/Mean/Model'
 * '<S662>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_4/Power Factor Block1/RMS/RMS /Fourier1/Mean value1/Model'
 * '<S663>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_4/Power Factor Block1/RMS/TrueRMS /Mean value'
 * '<S664>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_4/Power Factor Block1/RMS/TrueRMS /Mean value/Model'
 * '<S665>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_5/Power (3ph, Instantaneous)'
 * '<S666>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_5/Power Factor Block1'
 * '<S667>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_5/Power Factor Block1/RMS'
 * '<S668>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_5/Power Factor Block1/RMS/RMS '
 * '<S669>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_5/Power Factor Block1/RMS/TrueRMS '
 * '<S670>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_5/Power Factor Block1/RMS/RMS /Fourier1'
 * '<S671>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_5/Power Factor Block1/RMS/RMS /Fourier1/Mean'
 * '<S672>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_5/Power Factor Block1/RMS/RMS /Fourier1/Mean value1'
 * '<S673>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_5/Power Factor Block1/RMS/RMS /Fourier1/Mean/Model'
 * '<S674>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_5/Power Factor Block1/RMS/RMS /Fourier1/Mean value1/Model'
 * '<S675>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_5/Power Factor Block1/RMS/TrueRMS /Mean value'
 * '<S676>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_5/Power Factor Block1/RMS/TrueRMS /Mean value/Model'
 * '<S677>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_6/Power (3ph, Instantaneous)'
 * '<S678>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_6/Power Factor Block1'
 * '<S679>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_6/Power Factor Block1/RMS'
 * '<S680>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_6/Power Factor Block1/RMS/RMS '
 * '<S681>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_6/Power Factor Block1/RMS/TrueRMS '
 * '<S682>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_6/Power Factor Block1/RMS/RMS /Fourier1'
 * '<S683>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_6/Power Factor Block1/RMS/RMS /Fourier1/Mean'
 * '<S684>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_6/Power Factor Block1/RMS/RMS /Fourier1/Mean value1'
 * '<S685>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_6/Power Factor Block1/RMS/RMS /Fourier1/Mean/Model'
 * '<S686>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_6/Power Factor Block1/RMS/RMS /Fourier1/Mean value1/Model'
 * '<S687>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_6/Power Factor Block1/RMS/TrueRMS /Mean value'
 * '<S688>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_6/Power Factor Block1/RMS/TrueRMS /Mean value/Model'
 * '<S689>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_7/Power (3ph, Instantaneous)'
 * '<S690>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_7/Power Factor Block1'
 * '<S691>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_7/Power Factor Block1/RMS'
 * '<S692>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_7/Power Factor Block1/RMS/RMS '
 * '<S693>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_7/Power Factor Block1/RMS/TrueRMS '
 * '<S694>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_7/Power Factor Block1/RMS/RMS /Fourier1'
 * '<S695>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_7/Power Factor Block1/RMS/RMS /Fourier1/Mean'
 * '<S696>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_7/Power Factor Block1/RMS/RMS /Fourier1/Mean value1'
 * '<S697>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_7/Power Factor Block1/RMS/RMS /Fourier1/Mean/Model'
 * '<S698>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_7/Power Factor Block1/RMS/RMS /Fourier1/Mean value1/Model'
 * '<S699>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_7/Power Factor Block1/RMS/TrueRMS /Mean value'
 * '<S700>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_7/Power Factor Block1/RMS/TrueRMS /Mean value/Model'
 * '<S701>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_8/Power (3ph, Instantaneous)'
 * '<S702>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_8/Power Factor Block1'
 * '<S703>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_8/Power Factor Block1/RMS'
 * '<S704>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_8/Power Factor Block1/RMS/RMS '
 * '<S705>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_8/Power Factor Block1/RMS/TrueRMS '
 * '<S706>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_8/Power Factor Block1/RMS/RMS /Fourier1'
 * '<S707>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_8/Power Factor Block1/RMS/RMS /Fourier1/Mean'
 * '<S708>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_8/Power Factor Block1/RMS/RMS /Fourier1/Mean value1'
 * '<S709>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_8/Power Factor Block1/RMS/RMS /Fourier1/Mean/Model'
 * '<S710>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_8/Power Factor Block1/RMS/RMS /Fourier1/Mean value1/Model'
 * '<S711>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_8/Power Factor Block1/RMS/TrueRMS /Mean value'
 * '<S712>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_8/Power Factor Block1/RMS/TrueRMS /Mean value/Model'
 * '<S713>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_AC//DC3/Battery system'
 * '<S714>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_AC//DC3/Mean'
 * '<S715>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_AC//DC3/PV system'
 * '<S716>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_AC//DC3/Battery system/Mean'
 * '<S717>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_AC//DC3/Battery system/Mean/Model'
 * '<S718>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_AC//DC3/Battery system/Mean/Model/Discrete Variable Time Delay'
 * '<S719>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_AC//DC3/Mean/Model'
 * '<S720>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Bus_AC//DC3/PV system/Pmean'
 * '<S721>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Current Measurement/Model'
 * '<S722>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/DATA  ADQUISITION/Power_Losses_abc'
 * '<S723>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/DATA  ADQUISITION/VoltageLL_pu_abc'
 * '<S724>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Diesel_ 50MVA/Programmable Voltage Source1'
 * '<S725>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Diesel_ 50MVA/Programmable Voltage Source1/Model'
 * '<S726>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Diesel_ 50MVA/Programmable Voltage Source1/Model/Harmonic Generator'
 * '<S727>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Diesel_ 50MVA/Programmable Voltage Source1/Model/Signal generator'
 * '<S728>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Diesel_ 50MVA/Programmable Voltage Source1/Model/Harmonic Generator/Harmonic A generation'
 * '<S729>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Diesel_ 50MVA/Programmable Voltage Source1/Model/Harmonic Generator/Harmonic B generation'
 * '<S730>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Diesel_ 50MVA/Programmable Voltage Source1/Model/Signal generator/Stair Generator'
 * '<S731>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Diesel_ 50MVA/Programmable Voltage Source1/Model/Signal generator/Variation SubSystem'
 * '<S732>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Diesel_ 50MVA/Programmable Voltage Source1/Model/Signal generator/Stair Generator/Model'
 * '<S733>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ia_L1/Model'
 * '<S734>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ia_L11/Model'
 * '<S735>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ia_L2/Model'
 * '<S736>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ia_L3/Model'
 * '<S737>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ia_L4/Model'
 * '<S738>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ia_L5/Model'
 * '<S739>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ia_L6/Model'
 * '<S740>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ib_L1/Model'
 * '<S741>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ib_L11/Model'
 * '<S742>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ib_L2/Model'
 * '<S743>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ib_L3/Model'
 * '<S744>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ib_L4/Model'
 * '<S745>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ib_L5/Model'
 * '<S746>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ib_L6/Model'
 * '<S747>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ic_L2/Model'
 * '<S748>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ic_L5/Model'
 * '<S749>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Ic_L6/Model'
 * '<S750>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter'
 * '<S751>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Controlled Current Source1'
 * '<S752>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Controlled Voltage Source4'
 * '<S753>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Controlled Voltage Source5'
 * '<S754>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Controlled Voltage Source9'
 * '<S755>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Ia_L3'
 * '<S756>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Ia_L4'
 * '<S757>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Ia_L5'
 * '<S758>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Power (3ph, Instantaneous)'
 * '<S759>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement1'
 * '<S760>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement2'
 * '<S761>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Voltage Measurement6'
 * '<S762>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Voltage Measurement7'
 * '<S763>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Voltage Measurement8'
 * '<S764>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/v1'
 * '<S765>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Power (3ph, Instantaneous)'
 * '<S766>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2'
 * '<S767>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1'
 * '<S768>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2'
 * '<S769>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)'
 * '<S770>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/Subsystem1'
 * '<S771>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/WL'
 * '<S772>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/WL1'
 * '<S773>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/abc to dq0'
 * '<S774>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/abc to dq1'
 * '<S775>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/dq0 to abc'
 * '<S776>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Anti-windup'
 * '<S777>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/D Gain'
 * '<S778>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Filter'
 * '<S779>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Filter ICs'
 * '<S780>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/I Gain'
 * '<S781>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Ideal P Gain'
 * '<S782>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Ideal P Gain Fdbk'
 * '<S783>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Integrator'
 * '<S784>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Integrator ICs'
 * '<S785>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/N Copy'
 * '<S786>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/N Gain'
 * '<S787>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/P Copy'
 * '<S788>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Parallel P Gain'
 * '<S789>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Reset Signal'
 * '<S790>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Saturation'
 * '<S791>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Saturation Fdbk'
 * '<S792>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Sum'
 * '<S793>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Sum Fdbk'
 * '<S794>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Tracking Mode'
 * '<S795>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Tracking Mode Sum'
 * '<S796>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/postSat Signal'
 * '<S797>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/preSat Signal'
 * '<S798>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Anti-windup/Passthrough'
 * '<S799>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/D Gain/Internal Parameters'
 * '<S800>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S801>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S802>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/I Gain/Internal Parameters'
 * '<S803>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Ideal P Gain/Passthrough'
 * '<S804>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S805>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Integrator/Discrete'
 * '<S806>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Integrator ICs/Internal IC'
 * '<S807>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/N Copy/Disabled'
 * '<S808>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/N Gain/Internal Parameters'
 * '<S809>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/P Copy/Disabled'
 * '<S810>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S811>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Reset Signal/Disabled'
 * '<S812>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Saturation/Passthrough'
 * '<S813>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Saturation Fdbk/Disabled'
 * '<S814>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Sum/Sum_PID'
 * '<S815>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Sum Fdbk/Disabled'
 * '<S816>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Tracking Mode/Disabled'
 * '<S817>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S818>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/postSat Signal/Forward_Path'
 * '<S819>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller1/preSat Signal/Forward_Path'
 * '<S820>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Anti-windup'
 * '<S821>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/D Gain'
 * '<S822>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Filter'
 * '<S823>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Filter ICs'
 * '<S824>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/I Gain'
 * '<S825>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Ideal P Gain'
 * '<S826>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Ideal P Gain Fdbk'
 * '<S827>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Integrator'
 * '<S828>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Integrator ICs'
 * '<S829>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/N Copy'
 * '<S830>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/N Gain'
 * '<S831>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/P Copy'
 * '<S832>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Parallel P Gain'
 * '<S833>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Reset Signal'
 * '<S834>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Saturation'
 * '<S835>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Saturation Fdbk'
 * '<S836>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Sum'
 * '<S837>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Sum Fdbk'
 * '<S838>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Tracking Mode'
 * '<S839>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Tracking Mode Sum'
 * '<S840>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/postSat Signal'
 * '<S841>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/preSat Signal'
 * '<S842>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Anti-windup/Passthrough'
 * '<S843>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/D Gain/Internal Parameters'
 * '<S844>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Filter/Disc. Forward Euler Filter'
 * '<S845>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Filter ICs/Internal IC - Filter'
 * '<S846>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/I Gain/Internal Parameters'
 * '<S847>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Ideal P Gain/Passthrough'
 * '<S848>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Ideal P Gain Fdbk/Disabled'
 * '<S849>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Integrator/Discrete'
 * '<S850>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Integrator ICs/Internal IC'
 * '<S851>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/N Copy/Disabled'
 * '<S852>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/N Gain/Internal Parameters'
 * '<S853>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/P Copy/Disabled'
 * '<S854>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Parallel P Gain/Internal Parameters'
 * '<S855>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Reset Signal/Disabled'
 * '<S856>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Saturation/Passthrough'
 * '<S857>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Saturation Fdbk/Disabled'
 * '<S858>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Sum/Sum_PID'
 * '<S859>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Sum Fdbk/Disabled'
 * '<S860>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Tracking Mode/Disabled'
 * '<S861>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/Tracking Mode Sum/Passthrough'
 * '<S862>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/postSat Signal/Forward_Path'
 * '<S863>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PID Controller2/preSat Signal/Forward_Path'
 * '<S864>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model'
 * '<S865>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Automatic Gain Control'
 * '<S866>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Discrete'
 * '<S867>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Second-Order Filter'
 * '<S868>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Variable Frequency Mean value'
 * '<S869>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/abc to dq0'
 * '<S870>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)'
 * '<S871>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1'
 * '<S872>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2'
 * '<S873>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0'
 * '<S874>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model'
 * '<S875>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Correction subsystem'
 * '<S876>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Discrete Variable Time Delay'
 * '<S877>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model'
 * '<S878>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Correction subsystem'
 * '<S879>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Discrete Variable Time Delay'
 * '<S880>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0'
 * '<S881>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/abc to Alpha-Beta-Zero'
 * '<S882>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S883>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S884>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S885>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S886>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Second-Order Filter/Model'
 * '<S887>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Second-Order Filter/Model/A*k(k-1)'
 * '<S888>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Second-Order Filter/Model/B*(u(k)+u(k-1))'
 * '<S889>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Second-Order Filter/Model/C*x(k)'
 * '<S890>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Variable Frequency Mean value/Model'
 * '<S891>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Variable Frequency Mean value/Model/Correction subsystem'
 * '<S892>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/Variable Frequency Mean value/Model/Discrete Variable Time Delay'
 * '<S893>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0'
 * '<S894>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/abc to dq0/abc to Alpha-Beta-Zero'
 * '<S895>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S896>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S897>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S898>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S899>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/abc to dq0/Alpha-Beta-Zero to dq0'
 * '<S900>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/abc to dq0/abc to Alpha-Beta-Zero'
 * '<S901>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S902>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S903>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S904>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S905>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/abc to dq1/Alpha-Beta-Zero to dq0'
 * '<S906>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/abc to dq1/abc to Alpha-Beta-Zero'
 * '<S907>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/abc to dq1/Alpha-Beta-Zero to dq0/Compare To Constant'
 * '<S908>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/abc to dq1/Alpha-Beta-Zero to dq0/Compare To Constant1'
 * '<S909>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay'
 * '<S910>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem1'
 * '<S911>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/dq0 to abc/Alpha-Beta-Zero to abc'
 * '<S912>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/dq0 to abc/dq0 to Alpha-Beta-Zero'
 * '<S913>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/dq0 to abc/dq0 to Alpha-Beta-Zero/Compare To Constant'
 * '<S914>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/dq0 to abc/dq0 to Alpha-Beta-Zero/Compare To Constant1'
 * '<S915>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/dq0 to abc/dq0 to Alpha-Beta-Zero/Subsystem - pi//2 delay'
 * '<S916>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Control of  Inverter/Subsystem2/dq0 to abc/dq0 to Alpha-Beta-Zero/Subsystem1'
 * '<S917>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Ia_L3/Model'
 * '<S918>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Ia_L4/Model'
 * '<S919>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Ia_L5/Model'
 * '<S920>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement1/Mode I'
 * '<S921>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement1/Mode V'
 * '<S922>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement1/Model'
 * '<S923>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement1/Model/I A:'
 * '<S924>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement1/Model/I B:'
 * '<S925>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement1/Model/I C:'
 * '<S926>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement1/Model/U A:'
 * '<S927>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement1/Model/U B:'
 * '<S928>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement1/Model/U C:'
 * '<S929>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement1/Model/I A:/Model'
 * '<S930>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement1/Model/I B:/Model'
 * '<S931>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement1/Model/I C:/Model'
 * '<S932>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement1/Model/U A:/Model'
 * '<S933>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement1/Model/U B:/Model'
 * '<S934>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement1/Model/U C:/Model'
 * '<S935>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement2/Mode I'
 * '<S936>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement2/Mode V'
 * '<S937>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement2/Model'
 * '<S938>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement2/Model/I A:'
 * '<S939>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement2/Model/I B:'
 * '<S940>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement2/Model/I C:'
 * '<S941>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement2/Model/U A:'
 * '<S942>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement2/Model/U B:'
 * '<S943>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement2/Model/U C:'
 * '<S944>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement2/Model/I A:/Model'
 * '<S945>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement2/Model/I B:/Model'
 * '<S946>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement2/Model/I C:/Model'
 * '<S947>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement2/Model/U A:/Model'
 * '<S948>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement2/Model/U B:/Model'
 * '<S949>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Three-Phase V-I Measurement2/Model/U C:/Model'
 * '<S950>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Voltage Measurement6/Model'
 * '<S951>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Voltage Measurement7/Model'
 * '<S952>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/Voltage Measurement8/Model'
 * '<S953>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Inverter   300 (DC) // 150 V (AC) P_nom 10 kW4/v1/Model'
 * '<S954>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Main Grid 69 kV Inf/Programmable Voltage Source1'
 * '<S955>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Main Grid 69 kV Inf/Programmable Voltage Source1/Model'
 * '<S956>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Main Grid 69 kV Inf/Programmable Voltage Source1/Model/Harmonic Generator'
 * '<S957>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Main Grid 69 kV Inf/Programmable Voltage Source1/Model/Signal generator'
 * '<S958>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Main Grid 69 kV Inf/Programmable Voltage Source1/Model/Harmonic Generator/Harmonic A generation'
 * '<S959>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Main Grid 69 kV Inf/Programmable Voltage Source1/Model/Harmonic Generator/Harmonic B generation'
 * '<S960>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Main Grid 69 kV Inf/Programmable Voltage Source1/Model/Signal generator/Stair Generator'
 * '<S961>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Main Grid 69 kV Inf/Programmable Voltage Source1/Model/Signal generator/Variation SubSystem'
 * '<S962>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Main Grid 69 kV Inf/Programmable Voltage Source1/Model/Signal generator/Stair Generator/Model'
 * '<S963>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/OpComm1/Receive'
 * '<S964>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/OpComm1/busStruct'
 * '<S965>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/OpComm1/busStruct/Sub1'
 * '<S966>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/OpComm1/busStruct/Sub2'
 * '<S967>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/OpComm1/busStruct/Sub3'
 * '<S968>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/OpComm1/busStruct/Sub4'
 * '<S969>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/OpComm1/busStruct/Sub5'
 * '<S970>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/OpComm1/busStruct/Sub6'
 * '<S971>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/OpComm1/busStruct/Sub7'
 * '<S972>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/OpComm1/busStruct/Sub8'
 * '<S973>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/Diode1'
 * '<S974>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/I'
 * '<S975>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/PV Array'
 * '<S976>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/V'
 * '<S977>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/Diode1/Model'
 * '<S978>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/Diode1/Model/Measurement list'
 * '<S979>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/I/Model'
 * '<S980>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/PV Array/Diode Rsh'
 * '<S981>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/PV Array/I Filter'
 * '<S982>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/PV Array/IL'
 * '<S983>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/PV Array/IL ctrl'
 * '<S984>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/PV Array/I_PV'
 * '<S985>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/PV Array/V Filter'
 * '<S986>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/PV Array/V_PV'
 * '<S987>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/PV Array/Diode Rsh/BAL'
 * '<S988>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/PV Array/Diode Rsh/Id+IRsh'
 * '<S989>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/PV Array/Diode Rsh/Subsystem'
 * '<S990>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/PV Array/I_PV/Model'
 * '<S991>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/PV Array/V_PV/Model'
 * '<S992>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/PV Subsystem/V/Model'
 * '<S993>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Primary (69 kV)/Mode I'
 * '<S994>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Primary (69 kV)/Mode V'
 * '<S995>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Primary (69 kV)/Model'
 * '<S996>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Primary (69 kV)/Model/I A:'
 * '<S997>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Primary (69 kV)/Model/I B:'
 * '<S998>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Primary (69 kV)/Model/I C:'
 * '<S999>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Primary (69 kV)/Model/U AB:'
 * '<S1000>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Primary (69 kV)/Model/U BC:'
 * '<S1001>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Primary (69 kV)/Model/U CA:'
 * '<S1002>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Primary (69 kV)/Model/I A:/Model'
 * '<S1003>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Primary (69 kV)/Model/I B:/Model'
 * '<S1004>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Primary (69 kV)/Model/I C:/Model'
 * '<S1005>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Primary (69 kV)/Model/U AB:/Model'
 * '<S1006>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Primary (69 kV)/Model/U BC:/Model'
 * '<S1007>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Primary (69 kV)/Model/U CA:/Model'
 * '<S1008>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Secundario 13.8 kV LL/Mode I'
 * '<S1009>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Secundario 13.8 kV LL/Mode V'
 * '<S1010>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Secundario 13.8 kV LL/Model'
 * '<S1011>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Secundario 13.8 kV LL/Model/I A:'
 * '<S1012>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Secundario 13.8 kV LL/Model/I B:'
 * '<S1013>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Secundario 13.8 kV LL/Model/I C:'
 * '<S1014>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Secundario 13.8 kV LL/Model/U AB:'
 * '<S1015>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Secundario 13.8 kV LL/Model/U BC:'
 * '<S1016>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Secundario 13.8 kV LL/Model/U CA:'
 * '<S1017>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Secundario 13.8 kV LL/Model/I A:/Model'
 * '<S1018>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Secundario 13.8 kV LL/Model/I B:/Model'
 * '<S1019>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Secundario 13.8 kV LL/Model/I C:/Model'
 * '<S1020>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Secundario 13.8 kV LL/Model/U AB:/Model'
 * '<S1021>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Secundario 13.8 kV LL/Model/U BC:/Model'
 * '<S1022>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Secundario 13.8 kV LL/Model/U CA:/Model'
 * '<S1023>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL1'
 * '<S1024>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL2'
 * '<S1025>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL1/Half 1-ph Stubline1'
 * '<S1026>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL1/Half 1-ph Stubline2'
 * '<S1027>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL1/Half 1-ph Stubline3'
 * '<S1028>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL1/Half 1-ph Stubline1/Controlled  Voltage Source'
 * '<S1029>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL1/Half 1-ph Stubline1/vm1'
 * '<S1030>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL1/Half 1-ph Stubline1/vm1/Model'
 * '<S1031>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL1/Half 1-ph Stubline2/Controlled  Voltage Source'
 * '<S1032>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL1/Half 1-ph Stubline2/vm1'
 * '<S1033>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL1/Half 1-ph Stubline2/vm1/Model'
 * '<S1034>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL1/Half 1-ph Stubline3/Controlled  Voltage Source'
 * '<S1035>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL1/Half 1-ph Stubline3/vm1'
 * '<S1036>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL1/Half 1-ph Stubline3/vm1/Model'
 * '<S1037>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL2/Half 1-ph Stubline1'
 * '<S1038>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL2/Half 1-ph Stubline2'
 * '<S1039>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL2/Half 1-ph Stubline3'
 * '<S1040>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL2/Half 1-ph Stubline1/Controlled  Voltage Source'
 * '<S1041>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL2/Half 1-ph Stubline1/vm1'
 * '<S1042>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL2/Half 1-ph Stubline1/vm1/Model'
 * '<S1043>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL2/Half 1-ph Stubline2/Controlled  Voltage Source'
 * '<S1044>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL2/Half 1-ph Stubline2/vm1'
 * '<S1045>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL2/Half 1-ph Stubline2/vm1/Model'
 * '<S1046>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL2/Half 1-ph Stubline3/Controlled  Voltage Source'
 * '<S1047>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL2/Half 1-ph Stubline3/vm1'
 * '<S1048>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine/SL2/Half 1-ph Stubline3/vm1/Model'
 * '<S1049>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL1'
 * '<S1050>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL2'
 * '<S1051>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL1/Half 1-ph Stubline1'
 * '<S1052>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL1/Half 1-ph Stubline2'
 * '<S1053>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL1/Half 1-ph Stubline3'
 * '<S1054>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL1/Half 1-ph Stubline1/Controlled  Voltage Source'
 * '<S1055>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL1/Half 1-ph Stubline1/vm1'
 * '<S1056>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL1/Half 1-ph Stubline1/vm1/Model'
 * '<S1057>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL1/Half 1-ph Stubline2/Controlled  Voltage Source'
 * '<S1058>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL1/Half 1-ph Stubline2/vm1'
 * '<S1059>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL1/Half 1-ph Stubline2/vm1/Model'
 * '<S1060>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL1/Half 1-ph Stubline3/Controlled  Voltage Source'
 * '<S1061>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL1/Half 1-ph Stubline3/vm1'
 * '<S1062>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL1/Half 1-ph Stubline3/vm1/Model'
 * '<S1063>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL2/Half 1-ph Stubline1'
 * '<S1064>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL2/Half 1-ph Stubline2'
 * '<S1065>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL2/Half 1-ph Stubline3'
 * '<S1066>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL2/Half 1-ph Stubline1/Controlled  Voltage Source'
 * '<S1067>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL2/Half 1-ph Stubline1/vm1'
 * '<S1068>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL2/Half 1-ph Stubline1/vm1/Model'
 * '<S1069>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL2/Half 1-ph Stubline2/Controlled  Voltage Source'
 * '<S1070>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL2/Half 1-ph Stubline2/vm1'
 * '<S1071>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL2/Half 1-ph Stubline2/vm1/Model'
 * '<S1072>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL2/Half 1-ph Stubline3/Controlled  Voltage Source'
 * '<S1073>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL2/Half 1-ph Stubline3/vm1'
 * '<S1074>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine1/SL2/Half 1-ph Stubline3/vm1/Model'
 * '<S1075>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL1'
 * '<S1076>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL2'
 * '<S1077>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL1/Half 1-ph Stubline1'
 * '<S1078>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL1/Half 1-ph Stubline2'
 * '<S1079>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL1/Half 1-ph Stubline3'
 * '<S1080>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL1/Half 1-ph Stubline1/Controlled  Voltage Source'
 * '<S1081>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL1/Half 1-ph Stubline1/vm1'
 * '<S1082>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL1/Half 1-ph Stubline1/vm1/Model'
 * '<S1083>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL1/Half 1-ph Stubline2/Controlled  Voltage Source'
 * '<S1084>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL1/Half 1-ph Stubline2/vm1'
 * '<S1085>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL1/Half 1-ph Stubline2/vm1/Model'
 * '<S1086>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL1/Half 1-ph Stubline3/Controlled  Voltage Source'
 * '<S1087>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL1/Half 1-ph Stubline3/vm1'
 * '<S1088>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL1/Half 1-ph Stubline3/vm1/Model'
 * '<S1089>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL2/Half 1-ph Stubline1'
 * '<S1090>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL2/Half 1-ph Stubline2'
 * '<S1091>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL2/Half 1-ph Stubline3'
 * '<S1092>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL2/Half 1-ph Stubline1/Controlled  Voltage Source'
 * '<S1093>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL2/Half 1-ph Stubline1/vm1'
 * '<S1094>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL2/Half 1-ph Stubline1/vm1/Model'
 * '<S1095>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL2/Half 1-ph Stubline2/Controlled  Voltage Source'
 * '<S1096>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL2/Half 1-ph Stubline2/vm1'
 * '<S1097>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL2/Half 1-ph Stubline2/vm1/Model'
 * '<S1098>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL2/Half 1-ph Stubline3/Controlled  Voltage Source'
 * '<S1099>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL2/Half 1-ph Stubline3/vm1'
 * '<S1100>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine2/SL2/Half 1-ph Stubline3/vm1/Model'
 * '<S1101>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL1'
 * '<S1102>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL2'
 * '<S1103>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL1/Half 1-ph Stubline1'
 * '<S1104>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL1/Half 1-ph Stubline2'
 * '<S1105>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL1/Half 1-ph Stubline3'
 * '<S1106>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL1/Half 1-ph Stubline1/Controlled  Voltage Source'
 * '<S1107>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL1/Half 1-ph Stubline1/vm1'
 * '<S1108>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL1/Half 1-ph Stubline1/vm1/Model'
 * '<S1109>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL1/Half 1-ph Stubline2/Controlled  Voltage Source'
 * '<S1110>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL1/Half 1-ph Stubline2/vm1'
 * '<S1111>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL1/Half 1-ph Stubline2/vm1/Model'
 * '<S1112>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL1/Half 1-ph Stubline3/Controlled  Voltage Source'
 * '<S1113>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL1/Half 1-ph Stubline3/vm1'
 * '<S1114>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL1/Half 1-ph Stubline3/vm1/Model'
 * '<S1115>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL2/Half 1-ph Stubline1'
 * '<S1116>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL2/Half 1-ph Stubline2'
 * '<S1117>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL2/Half 1-ph Stubline3'
 * '<S1118>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL2/Half 1-ph Stubline1/Controlled  Voltage Source'
 * '<S1119>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL2/Half 1-ph Stubline1/vm1'
 * '<S1120>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL2/Half 1-ph Stubline1/vm1/Model'
 * '<S1121>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL2/Half 1-ph Stubline2/Controlled  Voltage Source'
 * '<S1122>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL2/Half 1-ph Stubline2/vm1'
 * '<S1123>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL2/Half 1-ph Stubline2/vm1/Model'
 * '<S1124>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL2/Half 1-ph Stubline3/Controlled  Voltage Source'
 * '<S1125>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL2/Half 1-ph Stubline3/vm1'
 * '<S1126>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine5/SL2/Half 1-ph Stubline3/vm1/Model'
 * '<S1127>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL1'
 * '<S1128>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL2'
 * '<S1129>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL1/Half 1-ph Stubline1'
 * '<S1130>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL1/Half 1-ph Stubline2'
 * '<S1131>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL1/Half 1-ph Stubline3'
 * '<S1132>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL1/Half 1-ph Stubline1/Controlled  Voltage Source'
 * '<S1133>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL1/Half 1-ph Stubline1/vm1'
 * '<S1134>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL1/Half 1-ph Stubline1/vm1/Model'
 * '<S1135>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL1/Half 1-ph Stubline2/Controlled  Voltage Source'
 * '<S1136>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL1/Half 1-ph Stubline2/vm1'
 * '<S1137>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL1/Half 1-ph Stubline2/vm1/Model'
 * '<S1138>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL1/Half 1-ph Stubline3/Controlled  Voltage Source'
 * '<S1139>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL1/Half 1-ph Stubline3/vm1'
 * '<S1140>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL1/Half 1-ph Stubline3/vm1/Model'
 * '<S1141>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL2/Half 1-ph Stubline1'
 * '<S1142>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL2/Half 1-ph Stubline2'
 * '<S1143>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL2/Half 1-ph Stubline3'
 * '<S1144>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL2/Half 1-ph Stubline1/Controlled  Voltage Source'
 * '<S1145>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL2/Half 1-ph Stubline1/vm1'
 * '<S1146>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL2/Half 1-ph Stubline1/vm1/Model'
 * '<S1147>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL2/Half 1-ph Stubline2/Controlled  Voltage Source'
 * '<S1148>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL2/Half 1-ph Stubline2/vm1'
 * '<S1149>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL2/Half 1-ph Stubline2/vm1/Model'
 * '<S1150>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL2/Half 1-ph Stubline3/Controlled  Voltage Source'
 * '<S1151>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL2/Half 1-ph Stubline3/vm1'
 * '<S1152>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/StubLine6/SL2/Half 1-ph Stubline3/vm1/Model'
 * '<S1153>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/TDC2 220 V // 150 V 15 kVA/Model'
 * '<S1154>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/TDC2 220 V // 150 V 15 kVA/Model/Linear'
 * '<S1155>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/TDC2 220 V // 150 V 15 kVA/Model/Linear1'
 * '<S1156>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/TDC2 220 V // 150 V 15 kVA/Model/Linear2'
 * '<S1157>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/TG 13.8 kV // 2400 V 3.5 MVA/Model'
 * '<S1158>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/TG 13.8 kV // 2400 V 3.5 MVA/Model/Linear'
 * '<S1159>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/TG 13.8 kV // 2400 V 3.5 MVA/Model/Linear1'
 * '<S1160>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/TG 13.8 kV // 2400 V 3.5 MVA/Model/Linear2'
 * '<S1161>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Transformer (T1) 13.8 kV // 220 V 1.5 MVA/Model'
 * '<S1162>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Transformer (T1) 13.8 kV // 220 V 1.5 MVA/Model/Linear'
 * '<S1163>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Transformer (T1) 13.8 kV // 220 V 1.5 MVA/Model/Linear1'
 * '<S1164>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Transformer (T1) 13.8 kV // 220 V 1.5 MVA/Model/Linear2'
 * '<S1165>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Transformer (T2) 13.8 kV // 220 V 1.5 MVA/Model'
 * '<S1166>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Transformer (T2) 13.8 kV // 220 V 1.5 MVA/Model/Linear'
 * '<S1167>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Transformer (T2) 13.8 kV // 220 V 1.5 MVA/Model/Linear1'
 * '<S1168>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Transformer (T2) 13.8 kV // 220 V 1.5 MVA/Model/Linear2'
 * '<S1169>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Transformer (T3) 69kV // 13.8 kV 4 MVA/Model'
 * '<S1170>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Transformer (T3) 69kV // 13.8 kV 4 MVA/Model/Linear'
 * '<S1171>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Transformer (T3) 69kV // 13.8 kV 4 MVA/Model/Linear1'
 * '<S1172>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Transformer (T3) 69kV // 13.8 kV 4 MVA/Model/Linear2'
 * '<S1173>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/Vdc /Model'
 * '<S1174>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem1'
 * '<S1175>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem10'
 * '<S1176>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem11'
 * '<S1177>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem12'
 * '<S1178>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem13'
 * '<S1179>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem14'
 * '<S1180>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem15'
 * '<S1181>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem16'
 * '<S1182>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem17'
 * '<S1183>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem18'
 * '<S1184>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem19'
 * '<S1185>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem2'
 * '<S1186>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem20'
 * '<S1187>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem21'
 * '<S1188>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem22'
 * '<S1189>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem3'
 * '<S1190>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem4'
 * '<S1191>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem5'
 * '<S1192>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem6'
 * '<S1193>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem7'
 * '<S1194>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem8'
 * '<S1195>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem9'
 * '<S1196>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem1/Send1'
 * '<S1197>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem10/Send10'
 * '<S1198>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem11/Send11'
 * '<S1199>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem12/Send12'
 * '<S1200>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem13/Send13'
 * '<S1201>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem14/Send14'
 * '<S1202>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem15/Send15'
 * '<S1203>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem16/Send16'
 * '<S1204>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem17/Send17'
 * '<S1205>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem18/Send18'
 * '<S1206>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem19/Send19'
 * '<S1207>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem2/Send2'
 * '<S1208>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem20/Send20'
 * '<S1209>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem21/Send21'
 * '<S1210>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem22/Send22'
 * '<S1211>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem3/Send3'
 * '<S1212>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem4/Send4'
 * '<S1213>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem5/Send5'
 * '<S1214>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem6/Send6'
 * '<S1215>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem7/Send7'
 * '<S1216>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem8/Send8'
 * '<S1217>' : 'acdcmg_sim8_1_sm_grid_simulation/SM_Grid_Simulation/rtlab_send_subsystem/Subsystem9/Send9'
 * '<S1218>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel1'
 * '<S1219>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel10'
 * '<S1220>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel11'
 * '<S1221>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel2'
 * '<S1222>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel3'
 * '<S1223>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel4'
 * '<S1224>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel5'
 * '<S1225>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel6'
 * '<S1226>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel7'
 * '<S1227>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel8'
 * '<S1228>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel9'
 * '<S1229>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel1/Sources'
 * '<S1230>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel1/Yout'
 * '<S1231>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel10/Gates'
 * '<S1232>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel10/Sources'
 * '<S1233>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel10/Status'
 * '<S1234>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel10/Yout'
 * '<S1235>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel11/Gates'
 * '<S1236>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel11/Sources'
 * '<S1237>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel11/Status'
 * '<S1238>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel11/Yout'
 * '<S1239>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel2/Sources'
 * '<S1240>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel2/Yout'
 * '<S1241>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel3/Sources'
 * '<S1242>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel3/Yout'
 * '<S1243>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel4/Sources'
 * '<S1244>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel4/Yout'
 * '<S1245>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel5/Sources'
 * '<S1246>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel5/Yout'
 * '<S1247>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel6/Sources'
 * '<S1248>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel6/Yout'
 * '<S1249>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel7/Gates'
 * '<S1250>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel7/Sources'
 * '<S1251>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel7/Status'
 * '<S1252>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel7/Yout'
 * '<S1253>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel8/Gates'
 * '<S1254>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel8/Sources'
 * '<S1255>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel8/Status'
 * '<S1256>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel8/Yout'
 * '<S1257>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel9/Gates'
 * '<S1258>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel9/Sources'
 * '<S1259>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel9/Status'
 * '<S1260>' : 'acdcmg_sim8_1_sm_grid_simulation/powergui/EquivalentModel9/Yout'
 */
#endif                      /* RTW_HEADER_acdcmg_sim8_1_sm_grid_simulation_h_ */
