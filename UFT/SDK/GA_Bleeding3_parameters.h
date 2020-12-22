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

// Function GA_Bleeding3.GA_Bleeding3_C.CheckAndSetupCachables
struct UGA_Bleeding3_C_CheckAndSetupCachables_Params
{
};

// Function GA_Bleeding3.GA_Bleeding3_C.EventReceived_D305570244C224E70090539D4FA6A770
struct UGA_Bleeding3_C_EventReceived_D305570244C224E70090539D4FA6A770_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Bleeding3.GA_Bleeding3_C.InvalidHandle_DA22B6CB4F0226417E0A4AA489FE9496
struct UGA_Bleeding3_C_InvalidHandle_DA22B6CB4F0226417E0A4AA489FE9496_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Bleeding3.GA_Bleeding3_C.OnRemoved_DA22B6CB4F0226417E0A4AA489FE9496
struct UGA_Bleeding3_C_OnRemoved_DA22B6CB4F0226417E0A4AA489FE9496_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Bleeding3.GA_Bleeding3_C.K2_ActivateAbility
struct UGA_Bleeding3_C_K2_ActivateAbility_Params
{
};

// Function GA_Bleeding3.GA_Bleeding3_C.K2_OnEndAbility
struct UGA_Bleeding3_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Bleeding3.GA_Bleeding3_C.ExecuteUbergraph_GA_Bleeding3
struct UGA_Bleeding3_C_ExecuteUbergraph_GA_Bleeding3_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
