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

// Function GA_Curse.GA_Curse_C.EventReceived_555AAEF74EA92E3AE9297A9137BBC146
struct UGA_Curse_C_EventReceived_555AAEF74EA92E3AE9297A9137BBC146_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Curse.GA_Curse_C.InvalidHandle_D47480A34760B7274C35AE8109DE370F
struct UGA_Curse_C_InvalidHandle_D47480A34760B7274C35AE8109DE370F_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Curse.GA_Curse_C.OnRemoved_D47480A34760B7274C35AE8109DE370F
struct UGA_Curse_C_OnRemoved_D47480A34760B7274C35AE8109DE370F_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Curse.GA_Curse_C.K2_ActivateAbility
struct UGA_Curse_C_K2_ActivateAbility_Params
{
};

// Function GA_Curse.GA_Curse_C.K2_OnEndAbility
struct UGA_Curse_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Curse.GA_Curse_C.ExecuteUbergraph_GA_Curse
struct UGA_Curse_C_ExecuteUbergraph_GA_Curse_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
