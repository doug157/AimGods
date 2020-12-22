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

// Function GA_SelfHeal.GA_SelfHeal_C.K2_ActivateAbility
struct UGA_SelfHeal_C_K2_ActivateAbility_Params
{
};

// Function GA_SelfHeal.GA_SelfHeal_C.K2_OnEndAbility
struct UGA_SelfHeal_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_SelfHeal.GA_SelfHeal_C.ExecuteUbergraph_GA_SelfHeal
struct UGA_SelfHeal_C_ExecuteUbergraph_GA_SelfHeal_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
