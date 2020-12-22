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

// Function GA_Heal.GA_Heal_C.EventReceived_2C7C17654363447157E312A00F5AF860
struct UGA_Heal_C_EventReceived_2C7C17654363447157E312A00F5AF860_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Heal.GA_Heal_C.InvalidHandle_532949E1418EFD8B2DA563A2102A94B6
struct UGA_Heal_C_InvalidHandle_532949E1418EFD8B2DA563A2102A94B6_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Heal.GA_Heal_C.OnRemoved_532949E1418EFD8B2DA563A2102A94B6
struct UGA_Heal_C_OnRemoved_532949E1418EFD8B2DA563A2102A94B6_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Heal.GA_Heal_C.K2_ActivateAbility
struct UGA_Heal_C_K2_ActivateAbility_Params
{
};

// Function GA_Heal.GA_Heal_C.K2_OnEndAbility
struct UGA_Heal_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Heal.GA_Heal_C.ExecuteUbergraph_GA_Heal
struct UGA_Heal_C_ExecuteUbergraph_GA_Heal_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
