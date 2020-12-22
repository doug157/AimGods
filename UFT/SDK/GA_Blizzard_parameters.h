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

// Function GA_Blizzard.GA_Blizzard_C.EventReceived_E4A4E2A443AA2CE13AFE58A82F5A2934
struct UGA_Blizzard_C_EventReceived_E4A4E2A443AA2CE13AFE58A82F5A2934_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Blizzard.GA_Blizzard_C.InvalidHandle_E8B017064A0D334A66446E924354C892
struct UGA_Blizzard_C_InvalidHandle_E8B017064A0D334A66446E924354C892_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Blizzard.GA_Blizzard_C.OnRemoved_E8B017064A0D334A66446E924354C892
struct UGA_Blizzard_C_OnRemoved_E8B017064A0D334A66446E924354C892_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Blizzard.GA_Blizzard_C.K2_ActivateAbility
struct UGA_Blizzard_C_K2_ActivateAbility_Params
{
};

// Function GA_Blizzard.GA_Blizzard_C.K2_OnEndAbility
struct UGA_Blizzard_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Blizzard.GA_Blizzard_C.ExecuteUbergraph_GA_Blizzard
struct UGA_Blizzard_C_ExecuteUbergraph_GA_Blizzard_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
