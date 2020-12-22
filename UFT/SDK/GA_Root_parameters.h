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

// Function GA_Root.GA_Root_C.EventReceived_7897C47B4073DF74733EC89C2DCF30A0
struct UGA_Root_C_EventReceived_7897C47B4073DF74733EC89C2DCF30A0_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Root.GA_Root_C.InvalidHandle_A5A10FE440F020C4746FA8A26ACB2EF1
struct UGA_Root_C_InvalidHandle_A5A10FE440F020C4746FA8A26ACB2EF1_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Root.GA_Root_C.OnRemoved_A5A10FE440F020C4746FA8A26ACB2EF1
struct UGA_Root_C_OnRemoved_A5A10FE440F020C4746FA8A26ACB2EF1_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Root.GA_Root_C.K2_ActivateAbility
struct UGA_Root_C_K2_ActivateAbility_Params
{
};

// Function GA_Root.GA_Root_C.K2_OnEndAbility
struct UGA_Root_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Root.GA_Root_C.ExecuteUbergraph_GA_Root
struct UGA_Root_C_ExecuteUbergraph_GA_Root_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
