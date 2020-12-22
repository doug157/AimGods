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

// Function GA_Stun.GA_Stun_C.EventReceived_D5A647D5418D8C672A3FE1B6FD79BC3E
struct UGA_Stun_C_EventReceived_D5A647D5418D8C672A3FE1B6FD79BC3E_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Stun.GA_Stun_C.InvalidHandle_96ED5C654F76CC9C2BCFE68E8EDA82F7
struct UGA_Stun_C_InvalidHandle_96ED5C654F76CC9C2BCFE68E8EDA82F7_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Stun.GA_Stun_C.OnRemoved_96ED5C654F76CC9C2BCFE68E8EDA82F7
struct UGA_Stun_C_OnRemoved_96ED5C654F76CC9C2BCFE68E8EDA82F7_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Stun.GA_Stun_C.K2_ActivateAbility
struct UGA_Stun_C_K2_ActivateAbility_Params
{
};

// Function GA_Stun.GA_Stun_C.K2_OnEndAbility
struct UGA_Stun_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Stun.GA_Stun_C.ExecuteUbergraph_GA_Stun
struct UGA_Stun_C_ExecuteUbergraph_GA_Stun_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
