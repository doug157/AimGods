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

// Function GA_PowerShot2_new.GA_PowerShot2_new_C.EventReceived_ED9677824316327FCB04A886A2735AF6
struct UGA_PowerShot2_new_C_EventReceived_ED9677824316327FCB04A886A2735AF6_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_PowerShot2_new.GA_PowerShot2_new_C.InvalidHandle_10029C514423AD1B2E03CCA1275B9603
struct UGA_PowerShot2_new_C_InvalidHandle_10029C514423AD1B2E03CCA1275B9603_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_PowerShot2_new.GA_PowerShot2_new_C.OnRemoved_10029C514423AD1B2E03CCA1275B9603
struct UGA_PowerShot2_new_C_OnRemoved_10029C514423AD1B2E03CCA1275B9603_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_PowerShot2_new.GA_PowerShot2_new_C.K2_ActivateAbility
struct UGA_PowerShot2_new_C_K2_ActivateAbility_Params
{
};

// Function GA_PowerShot2_new.GA_PowerShot2_new_C.K2_OnEndAbility
struct UGA_PowerShot2_new_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_PowerShot2_new.GA_PowerShot2_new_C.ExecuteUbergraph_GA_PowerShot2_new
struct UGA_PowerShot2_new_C_ExecuteUbergraph_GA_PowerShot2_new_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
