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

// Function GA_Regen3.GA_Regen3_C.EventReceived_266F808C43B94E83012AE59295F16B87
struct UGA_Regen3_C_EventReceived_266F808C43B94E83012AE59295F16B87_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Regen3.GA_Regen3_C.InvalidHandle_2C6569E248B9FC63A4E69497EE7EC42D
struct UGA_Regen3_C_InvalidHandle_2C6569E248B9FC63A4E69497EE7EC42D_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Regen3.GA_Regen3_C.OnRemoved_2C6569E248B9FC63A4E69497EE7EC42D
struct UGA_Regen3_C_OnRemoved_2C6569E248B9FC63A4E69497EE7EC42D_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Regen3.GA_Regen3_C.K2_ActivateAbility
struct UGA_Regen3_C_K2_ActivateAbility_Params
{
};

// Function GA_Regen3.GA_Regen3_C.K2_OnEndAbility
struct UGA_Regen3_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Regen3.GA_Regen3_C.ExecuteUbergraph_GA_Regen3
struct UGA_Regen3_C_ExecuteUbergraph_GA_Regen3_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
