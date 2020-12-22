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

// Function GA_PowerShot_new.GA_PowerShot_new_C.EventReceived_5268730746588438709D9CA6D512C34E
struct UGA_PowerShot_new_C_EventReceived_5268730746588438709D9CA6D512C34E_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PowerShot_new.GA_PowerShot_new_C.InvalidHandle_423042D143082123B831878B37606DA1
struct UGA_PowerShot_new_C_InvalidHandle_423042D143082123B831878B37606DA1_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_PowerShot_new.GA_PowerShot_new_C.OnRemoved_423042D143082123B831878B37606DA1
struct UGA_PowerShot_new_C_OnRemoved_423042D143082123B831878B37606DA1_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_PowerShot_new.GA_PowerShot_new_C.K2_ActivateAbility
struct UGA_PowerShot_new_C_K2_ActivateAbility_Params
{
};

// Function GA_PowerShot_new.GA_PowerShot_new_C.K2_OnEndAbility
struct UGA_PowerShot_new_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_PowerShot_new.GA_PowerShot_new_C.ExecuteUbergraph_GA_PowerShot_new
struct UGA_PowerShot_new_C_ExecuteUbergraph_GA_PowerShot_new_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
