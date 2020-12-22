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

// Function GA_Snipe.GA_Snipe_C.EventReceived_43D97A3E4CAC783DF253CBB5E1B6946B
struct UGA_Snipe_C_EventReceived_43D97A3E4CAC783DF253CBB5E1B6946B_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Snipe.GA_Snipe_C.InvalidHandle_17F4CA39409C4EFCD2E294957DCCCA6A
struct UGA_Snipe_C_InvalidHandle_17F4CA39409C4EFCD2E294957DCCCA6A_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Snipe.GA_Snipe_C.OnRemoved_17F4CA39409C4EFCD2E294957DCCCA6A
struct UGA_Snipe_C_OnRemoved_17F4CA39409C4EFCD2E294957DCCCA6A_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Snipe.GA_Snipe_C.K2_ActivateAbility
struct UGA_Snipe_C_K2_ActivateAbility_Params
{
};

// Function GA_Snipe.GA_Snipe_C.K2_OnEndAbility
struct UGA_Snipe_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Snipe.GA_Snipe_C.ExecuteUbergraph_GA_Snipe
struct UGA_Snipe_C_ExecuteUbergraph_GA_Snipe_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
