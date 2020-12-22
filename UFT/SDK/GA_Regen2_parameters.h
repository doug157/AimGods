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

// Function GA_Regen2.GA_Regen2_C.EventReceived_6E03EDB24282BDB7142E54B9043D4104
struct UGA_Regen2_C_EventReceived_6E03EDB24282BDB7142E54B9043D4104_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Regen2.GA_Regen2_C.InvalidHandle_1A7E9C4F4CEE12B76DBB12BA93DF969B
struct UGA_Regen2_C_InvalidHandle_1A7E9C4F4CEE12B76DBB12BA93DF969B_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Regen2.GA_Regen2_C.OnRemoved_1A7E9C4F4CEE12B76DBB12BA93DF969B
struct UGA_Regen2_C_OnRemoved_1A7E9C4F4CEE12B76DBB12BA93DF969B_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Regen2.GA_Regen2_C.K2_ActivateAbility
struct UGA_Regen2_C_K2_ActivateAbility_Params
{
};

// Function GA_Regen2.GA_Regen2_C.K2_OnEndAbility
struct UGA_Regen2_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Regen2.GA_Regen2_C.ExecuteUbergraph_GA_Regen2
struct UGA_Regen2_C_ExecuteUbergraph_GA_Regen2_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
