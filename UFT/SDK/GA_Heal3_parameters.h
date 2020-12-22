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

// Function GA_Heal3.GA_Heal3_C.EventReceived_0225B4D8480001A476428194229CE6B2
struct UGA_Heal3_C_EventReceived_0225B4D8480001A476428194229CE6B2_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Heal3.GA_Heal3_C.InvalidHandle_8B07A82B455DF0047321E2AE8BCEE70F
struct UGA_Heal3_C_InvalidHandle_8B07A82B455DF0047321E2AE8BCEE70F_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Heal3.GA_Heal3_C.OnRemoved_8B07A82B455DF0047321E2AE8BCEE70F
struct UGA_Heal3_C_OnRemoved_8B07A82B455DF0047321E2AE8BCEE70F_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Heal3.GA_Heal3_C.K2_ActivateAbility
struct UGA_Heal3_C_K2_ActivateAbility_Params
{
};

// Function GA_Heal3.GA_Heal3_C.K2_OnEndAbility
struct UGA_Heal3_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Heal3.GA_Heal3_C.ExecuteUbergraph_GA_Heal3
struct UGA_Heal3_C_ExecuteUbergraph_GA_Heal3_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
