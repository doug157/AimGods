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

// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.Set Health Percent
struct UWB_PlayerStats_Overhead_C_Set_Health_Percent_Params
{
};

// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.SelectSide
struct UWB_PlayerStats_Overhead_C_SelectSide_Params
{
};

// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.OnAttributeChanged_C67460624B6DD8FA943FB8818A5F571B
struct UWB_PlayerStats_Overhead_C_OnAttributeChanged_C67460624B6DD8FA943FB8818A5F571B_Params
{
	struct FGameplayAttribute                          Attribute;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	float                                              NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OldValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.PreConstruct
struct UWB_PlayerStats_Overhead_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.On Gameplay Effect Added
struct UWB_PlayerStats_Overhead_C_On_Gameplay_Effect_Added_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameplayEffect*                             AddedEffect;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpec                         EffectSpec;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FActiveGameplayEffectHandle                 ActiveEffectHandle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.On Gameplay Effect Removed
struct UWB_PlayerStats_Overhead_C_On_Gameplay_Effect_Removed_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameplayEffect*                             AddedEffect;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpec                         EffectSpec;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FActiveGameplayEffectHandle                 ActiveEffectHandle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.Handle Attribute Change
struct UWB_PlayerStats_Overhead_C_Handle_Attribute_Change_Params
{
	struct FGameplayAttribute                          Attribute;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	float                                              OldValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.Set Player
struct UWB_PlayerStats_Overhead_C_Set_Player_Params
{
	class ABP_AGPlayerState_C*                         Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.ExecuteUbergraph_WB_PlayerStats_Overhead
struct UWB_PlayerStats_Overhead_C_ExecuteUbergraph_WB_PlayerStats_Overhead_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
