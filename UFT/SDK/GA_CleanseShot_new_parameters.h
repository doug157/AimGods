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

// Function GA_CleanseShot_new.GA_CleanseShot_new_C.EventReceived_0A6E37B143CFBABB82B584903EC5332A
struct UGA_CleanseShot_new_C_EventReceived_0A6E37B143CFBABB82B584903EC5332A_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_CleanseShot_new.GA_CleanseShot_new_C.InvalidHandle_C2436D904E59C252613C6C933CF6A852
struct UGA_CleanseShot_new_C_InvalidHandle_C2436D904E59C252613C6C933CF6A852_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_CleanseShot_new.GA_CleanseShot_new_C.OnRemoved_C2436D904E59C252613C6C933CF6A852
struct UGA_CleanseShot_new_C_OnRemoved_C2436D904E59C252613C6C933CF6A852_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_CleanseShot_new.GA_CleanseShot_new_C.K2_ActivateAbility
struct UGA_CleanseShot_new_C_K2_ActivateAbility_Params
{
};

// Function GA_CleanseShot_new.GA_CleanseShot_new_C.K2_OnEndAbility
struct UGA_CleanseShot_new_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_CleanseShot_new.GA_CleanseShot_new_C.ExecuteUbergraph_GA_CleanseShot_new
struct UGA_CleanseShot_new_C_ExecuteUbergraph_GA_CleanseShot_new_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
