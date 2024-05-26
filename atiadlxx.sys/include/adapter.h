#ifndef ADAPTER_H_
#define ADAPTER_H_

#include "adl_structures.h"

#ifndef ADL_EXTERNC
#ifdef __cplusplus
#define ADL_EXTERNC extern "C"
#else
#define ADL_EXTERNC
#endif
#endif

#ifndef EXPOSED
#define EXPOSED
#endif /* EXPOSED*/

ADL_EXTERNC int EXPOSED ADL2_Adapter_ObservedClockInfo_Get(ADL_CONTEXT_HANDLE context, int iAdapterIndex, int* lpCoreClock, int* lpMemoryClock);

ADL_EXTERNC int EXPOSED ADL_Adapter_ObservedClockInfo_Get(int iAdapterIndex, int* lpCoreClock, int*lpMemoryClock);

ADL_EXTERNC int EXPOSED ADL_AdapterObservedGameClockInfo_Get(ADL_CONTEXT_HANDLE context, int iAdapterIndex, int* lpBaseClock, int* lpGameClock, int* lpBoostClock, int* lpMemoryClcok);

ADL_EXTERNC int EXPOSED ADL2_Adapter_Active_Set(ADL_CONTEXT_HANDLE context, int iAdapterIndex,
        int iStatus,
        int * lpNewlyActivate);

ADL_EXTERNC int EXPOSED ADL2_Adapter_Active_SetPrefer(ADL_CONTEXT HANDLE context, int iAdapterIndex,
        int iStatus,
        int* lpNewlyActivate);
        