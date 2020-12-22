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

// Function GA_Fear.GA_Fear_C.EventReceived_DB04C05143244B4400271081633A8D89
struct UGA_Fear_C_EventReceived_DB04C05143244B4400271081633A8D89_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Fear.GA_Fear_C.InvalidHandle_80A807C04901CB1686762780886EDD88
struct UGA_Fear_C_InvalidHandle_80A807C04901CB1686762780886EDD88_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Fear.GA_Fear_C.OnRemoved_80A807C04901CB1686762780886EDD88
struct UGA_Fear_C_OnRemoved_80A807C04901CB1686762780886EDD88_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Fear.GA_Fear_C.K2_ActivateAbility
struct UGA_Fear_C_K2_ActivateAbility_Params
{
};

// Function GA_Fear.GA_Fear_C.K2_OnEndAbility
struct UGA_Fear_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Fear.GA_Fear_C.ExecuteUbergraph_GA_Fear
struct UGA_Fear_C_ExecuteUbergraph_GA_Fear_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
