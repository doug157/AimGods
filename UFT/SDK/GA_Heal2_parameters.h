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

// Function GA_Heal2.GA_Heal2_C.EventReceived_4E3B9D16429C9582D1AD04ACCA34B8C8
struct UGA_Heal2_C_EventReceived_4E3B9D16429C9582D1AD04ACCA34B8C8_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Heal2.GA_Heal2_C.InvalidHandle_2BE542BE4327E15B41826E80C59D30B4
struct UGA_Heal2_C_InvalidHandle_2BE542BE4327E15B41826E80C59D30B4_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Heal2.GA_Heal2_C.OnRemoved_2BE542BE4327E15B41826E80C59D30B4
struct UGA_Heal2_C_OnRemoved_2BE542BE4327E15B41826E80C59D30B4_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Heal2.GA_Heal2_C.K2_ActivateAbility
struct UGA_Heal2_C_K2_ActivateAbility_Params
{
};

// Function GA_Heal2.GA_Heal2_C.K2_OnEndAbility
struct UGA_Heal2_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Heal2.GA_Heal2_C.ExecuteUbergraph_GA_Heal2
struct UGA_Heal2_C_ExecuteUbergraph_GA_Heal2_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
