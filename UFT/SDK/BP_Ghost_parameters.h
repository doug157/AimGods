#pragma once

// Name: AimGods, Version: Beta 2

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_Ghost.BP_Ghost_C.ReceiveBeginPlay
struct ABP_Ghost_C_ReceiveBeginPlay_Params
{
};

// Function BP_Ghost.BP_Ghost_C.BPOnSpectateModeChanged
struct ABP_Ghost_C_BPOnSpectateModeChanged_Params
{
	bool                                               bFreeMode;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Ghost.BP_Ghost_C.ExecuteUbergraph_BP_Ghost
struct ABP_Ghost_C_ExecuteUbergraph_BP_Ghost_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
