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

// Function GA_SelfRegen2.GA_SelfRegen2_C.K2_ActivateAbility
struct UGA_SelfRegen2_C_K2_ActivateAbility_Params
{
};

// Function GA_SelfRegen2.GA_SelfRegen2_C.K2_OnEndAbility
struct UGA_SelfRegen2_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_SelfRegen2.GA_SelfRegen2_C.ExecuteUbergraph_GA_SelfRegen2
struct UGA_SelfRegen2_C_ExecuteUbergraph_GA_SelfRegen2_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
