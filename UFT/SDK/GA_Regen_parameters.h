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

// Function GA_Regen.GA_Regen_C.EventReceived_665E0BC14041662014358C9A26BA9BD3
struct UGA_Regen_C_EventReceived_665E0BC14041662014358C9A26BA9BD3_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Regen.GA_Regen_C.InvalidHandle_BB7162634B297C88B7CFECACF202D9AA
struct UGA_Regen_C_InvalidHandle_BB7162634B297C88B7CFECACF202D9AA_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Regen.GA_Regen_C.OnRemoved_BB7162634B297C88B7CFECACF202D9AA
struct UGA_Regen_C_OnRemoved_BB7162634B297C88B7CFECACF202D9AA_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Regen.GA_Regen_C.K2_ActivateAbility
struct UGA_Regen_C_K2_ActivateAbility_Params
{
};

// Function GA_Regen.GA_Regen_C.K2_OnEndAbility
struct UGA_Regen_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Regen.GA_Regen_C.ExecuteUbergraph_GA_Regen
struct UGA_Regen_C_ExecuteUbergraph_GA_Regen_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
