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

// Function GA_CounterShot.GA_CounterShot_C.EventReceived_39C797A34890824BA8F94CBFC99A65B9
struct UGA_CounterShot_C_EventReceived_39C797A34890824BA8F94CBFC99A65B9_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_CounterShot.GA_CounterShot_C.InvalidHandle_81CE147C497798F3CDD20B82EFFCF873
struct UGA_CounterShot_C_InvalidHandle_81CE147C497798F3CDD20B82EFFCF873_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_CounterShot.GA_CounterShot_C.OnRemoved_81CE147C497798F3CDD20B82EFFCF873
struct UGA_CounterShot_C_OnRemoved_81CE147C497798F3CDD20B82EFFCF873_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_CounterShot.GA_CounterShot_C.K2_ActivateAbility
struct UGA_CounterShot_C_K2_ActivateAbility_Params
{
};

// Function GA_CounterShot.GA_CounterShot_C.K2_OnEndAbility
struct UGA_CounterShot_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_CounterShot.GA_CounterShot_C.ExecuteUbergraph_GA_CounterShot
struct UGA_CounterShot_C_ExecuteUbergraph_GA_CounterShot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
