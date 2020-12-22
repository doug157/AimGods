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

// Function GA_Absorb.GA_Absorb_C.EventReceived_3F5F7B8E457BA5E79A3DFA9C98F422A0
struct UGA_Absorb_C_EventReceived_3F5F7B8E457BA5E79A3DFA9C98F422A0_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Absorb.GA_Absorb_C.InvalidHandle_B87303FE4D2FB094FA56B196781983AF
struct UGA_Absorb_C_InvalidHandle_B87303FE4D2FB094FA56B196781983AF_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Absorb.GA_Absorb_C.OnRemoved_B87303FE4D2FB094FA56B196781983AF
struct UGA_Absorb_C_OnRemoved_B87303FE4D2FB094FA56B196781983AF_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Absorb.GA_Absorb_C.K2_ActivateAbility
struct UGA_Absorb_C_K2_ActivateAbility_Params
{
};

// Function GA_Absorb.GA_Absorb_C.K2_OnEndAbility
struct UGA_Absorb_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Absorb.GA_Absorb_C.ExecuteUbergraph_GA_Absorb
struct UGA_Absorb_C_ExecuteUbergraph_GA_Absorb_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
