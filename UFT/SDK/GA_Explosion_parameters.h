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

// Function GA_Explosion.GA_Explosion_C.EventReceived_853F63924242BE40FE382D97BE33D12E
struct UGA_Explosion_C_EventReceived_853F63924242BE40FE382D97BE33D12E_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Explosion.GA_Explosion_C.InvalidHandle_95F059D74A5F1FE420D8F6918A0DBA79
struct UGA_Explosion_C_InvalidHandle_95F059D74A5F1FE420D8F6918A0DBA79_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Explosion.GA_Explosion_C.OnRemoved_95F059D74A5F1FE420D8F6918A0DBA79
struct UGA_Explosion_C_OnRemoved_95F059D74A5F1FE420D8F6918A0DBA79_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Explosion.GA_Explosion_C.K2_ActivateAbility
struct UGA_Explosion_C_K2_ActivateAbility_Params
{
};

// Function GA_Explosion.GA_Explosion_C.K2_OnEndAbility
struct UGA_Explosion_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Explosion.GA_Explosion_C.ExecuteUbergraph_GA_Explosion
struct UGA_Explosion_C_ExecuteUbergraph_GA_Explosion_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
