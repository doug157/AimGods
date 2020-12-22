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

// Function GA_Break_new.GA_Break_new_C.EventReceived_20522A814B65D74C8F91E29599CB5265
struct UGA_Break_new_C_EventReceived_20522A814B65D74C8F91E29599CB5265_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Break_new.GA_Break_new_C.InvalidHandle_51A166A445F98D3052A5B882D53C6B07
struct UGA_Break_new_C_InvalidHandle_51A166A445F98D3052A5B882D53C6B07_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Break_new.GA_Break_new_C.OnRemoved_51A166A445F98D3052A5B882D53C6B07
struct UGA_Break_new_C_OnRemoved_51A166A445F98D3052A5B882D53C6B07_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Break_new.GA_Break_new_C.K2_ActivateAbility
struct UGA_Break_new_C_K2_ActivateAbility_Params
{
};

// Function GA_Break_new.GA_Break_new_C.K2_OnEndAbility
struct UGA_Break_new_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Break_new.GA_Break_new_C.ExecuteUbergraph_GA_Break_new
struct UGA_Break_new_C_ExecuteUbergraph_GA_Break_new_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
