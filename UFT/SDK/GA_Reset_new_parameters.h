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

// Function GA_Reset_new.GA_Reset_new_C.K2_CanActivateAbility
struct UGA_Reset_new_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayTagContainer                       RelevantTags;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_Reset_new.GA_Reset_new_C.CheckAndSetupCachables
struct UGA_Reset_new_C_CheckAndSetupCachables_Params
{
};

// Function GA_Reset_new.GA_Reset_new_C.K2_ActivateAbility
struct UGA_Reset_new_C_K2_ActivateAbility_Params
{
};

// Function GA_Reset_new.GA_Reset_new_C.K2_OnEndAbility
struct UGA_Reset_new_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Reset_new.GA_Reset_new_C.ExecuteUbergraph_GA_Reset_new
struct UGA_Reset_new_C_ExecuteUbergraph_GA_Reset_new_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
