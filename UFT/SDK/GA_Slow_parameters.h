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

// Function GA_Slow.GA_Slow_C.EventReceived_8C05C42E4A4A154A0AA97E86DE76A269
struct UGA_Slow_C_EventReceived_8C05C42E4A4A154A0AA97E86DE76A269_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Slow.GA_Slow_C.InvalidHandle_083D573A49EF46DD23593389EE9BB218
struct UGA_Slow_C_InvalidHandle_083D573A49EF46DD23593389EE9BB218_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Slow.GA_Slow_C.OnRemoved_083D573A49EF46DD23593389EE9BB218
struct UGA_Slow_C_OnRemoved_083D573A49EF46DD23593389EE9BB218_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Slow.GA_Slow_C.K2_ActivateAbility
struct UGA_Slow_C_K2_ActivateAbility_Params
{
};

// Function GA_Slow.GA_Slow_C.K2_OnEndAbility
struct UGA_Slow_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Slow.GA_Slow_C.ExecuteUbergraph_GA_Slow
struct UGA_Slow_C_ExecuteUbergraph_GA_Slow_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
