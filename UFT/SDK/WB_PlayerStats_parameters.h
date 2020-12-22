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

// Function WB_PlayerStats.WB_PlayerStats_C.SelectSide
struct UWB_PlayerStats_C_SelectSide_Params
{
};

// Function WB_PlayerStats.WB_PlayerStats_C.OnAttributeChanged_5E239EF24EAB27B0B6F5B1B7435E0F3B
struct UWB_PlayerStats_C_OnAttributeChanged_5E239EF24EAB27B0B6F5B1B7435E0F3B_Params
{
	struct FGameplayAttribute                          Attribute;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	float                                              NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OldValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayerStats.WB_PlayerStats_C.PreConstruct
struct UWB_PlayerStats_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_PlayerStats.WB_PlayerStats_C.Construct
struct UWB_PlayerStats_C_Construct_Params
{
};

// Function WB_PlayerStats.WB_PlayerStats_C.On Gameplay Effect Added
struct UWB_PlayerStats_C_On_Gameplay_Effect_Added_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameplayEffect*                             AddedEffect;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpec                         EffectSpec;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FActiveGameplayEffectHandle                 ActiveEffectHandle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayerStats.WB_PlayerStats_C.On Gameplay Effect Removed
struct UWB_PlayerStats_C_On_Gameplay_Effect_Removed_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameplayEffect*                             AddedEffect;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpec                         EffectSpec;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FActiveGameplayEffectHandle                 ActiveEffectHandle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayerStats.WB_PlayerStats_C.Handle Attribute Change
struct UWB_PlayerStats_C_Handle_Attribute_Change_Params
{
	struct FGameplayAttribute                          Attribute;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	float                                              OldValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayerStats.WB_PlayerStats_C.PrepareAbilityLoadoutDisplay
struct UWB_PlayerStats_C_PrepareAbilityLoadoutDisplay_Params
{
};

// Function WB_PlayerStats.WB_PlayerStats_C.OnAGGameplayAbilityAdded
struct UWB_PlayerStats_C_OnAGGameplayAbilityAdded_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      GameplayAbilityClass;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAGAbilityInputID                                  InputID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayerStats.WB_PlayerStats_C.Wait for Abilities
struct UWB_PlayerStats_C_Wait_for_Abilities_Params
{
};

// Function WB_PlayerStats.WB_PlayerStats_C.Retry Abilities
struct UWB_PlayerStats_C_Retry_Abilities_Params
{
};

// Function WB_PlayerStats.WB_PlayerStats_C.ExecuteUbergraph_WB_PlayerStats
struct UWB_PlayerStats_C_ExecuteUbergraph_WB_PlayerStats_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
