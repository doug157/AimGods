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

// Function WB_Gameplay.WB_Gameplay_C.Get_Health_Number
struct UWB_Gameplay_C_Get_Health_Number_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_Gameplay.WB_Gameplay_C.Get_Health_Percentage
struct UWB_Gameplay_C_Get_Health_Percentage_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Gameplay.WB_Gameplay_C.Get_Mana_Percentage
struct UWB_Gameplay_C_Get_Mana_Percentage_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Gameplay.WB_Gameplay_C.GetDamageTextColor
struct UWB_Gameplay_C_GetDamageTextColor_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Was_Headshot_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateColor                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_Gameplay.WB_Gameplay_C.RefreshHealth
struct UWB_Gameplay_C_RefreshHealth_Params
{
};

// Function WB_Gameplay.WB_Gameplay_C.UpdateTimer
struct UWB_Gameplay_C_UpdateTimer_Params
{
};

// Function WB_Gameplay.WB_Gameplay_C.UpdateScores
struct UWB_Gameplay_C_UpdateScores_Params
{
};

// Function WB_Gameplay.WB_Gameplay_C.Get Ammo Per Clip
struct UWB_Gameplay_C_Get_Ammo_Per_Clip_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_Gameplay.WB_Gameplay_C.GetAmmoInClip
struct UWB_Gameplay_C_GetAmmoInClip_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_Gameplay.WB_Gameplay_C.OnMouseButtonDown
struct UWB_Gameplay_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_Gameplay.WB_Gameplay_C.OnAttributeChanged_992CD9B7462442386928C2AC0338BC67
struct UWB_Gameplay_C_OnAttributeChanged_992CD9B7462442386928C2AC0338BC67_Params
{
	struct FGameplayAttribute                          Attribute;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	float                                              NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OldValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Gameplay.WB_Gameplay_C.OnGameplayEffectStackChange_55531E8B4ABD8149014A1D9B51CFA46E
struct UWB_Gameplay_C_OnGameplayEffectStackChange_55531E8B4ABD8149014A1D9B51CFA46E_Params
{
	struct FGameplayTag                                EffectGameplayTag;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle                 Handle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int                                                NewStackCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OldStackCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Gameplay.WB_Gameplay_C.On Health Changed
struct UWB_Gameplay_C_On_Health_Changed_Params
{
	float                                              Health;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OldValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Gameplay.WB_Gameplay_C.On Max Health Changed
struct UWB_Gameplay_C_On_Max_Health_Changed_Params
{
	float                                              Max_Health;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Gameplay.WB_Gameplay_C.Construct
struct UWB_Gameplay_C_Construct_Params
{
};

// Function WB_Gameplay.WB_Gameplay_C.AddDamageIndicator
struct UWB_Gameplay_C_AddDamageIndicator_Params
{
	struct FVector                                     DmgLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Gameplay.WB_Gameplay_C.ShowHitMarker
struct UWB_Gameplay_C_ShowHitMarker_Params
{
};

// Function WB_Gameplay.WB_Gameplay_C.SetTeamIcon
struct UWB_Gameplay_C_SetTeamIcon_Params
{
};

// Function WB_Gameplay.WB_Gameplay_C.On Gold Changed
struct UWB_Gameplay_C_On_Gold_Changed_Params
{
	int                                                OldAmount;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NewAmount;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Gameplay.WB_Gameplay_C.Set Prompt Text
struct UWB_Gameplay_C_Set_Prompt_Text_Params
{
	struct FText                                       Prompt;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Gameplay.WB_Gameplay_C.Bind GAS Attributes to UI
struct UWB_Gameplay_C_Bind_GAS_Attributes_to_UI_Params
{
};

// Function WB_Gameplay.WB_Gameplay_C.On Player Destroyed
struct UWB_Gameplay_C_On_Player_Destroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Gameplay.WB_Gameplay_C.Begin Recall
struct UWB_Gameplay_C_Begin_Recall_Params
{
};

// Function WB_Gameplay.WB_Gameplay_C.End Recall
struct UWB_Gameplay_C_End_Recall_Params
{
};

// Function WB_Gameplay.WB_Gameplay_C.Tick
struct UWB_Gameplay_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Gameplay.WB_Gameplay_C.Welcome
struct UWB_Gameplay_C_Welcome_Params
{
};

// Function WB_Gameplay.WB_Gameplay_C.On Gameplay Effect Added
struct UWB_Gameplay_C_On_Gameplay_Effect_Added_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameplayEffect*                             AddedEffect;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpec                         EffectSpec;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FActiveGameplayEffectHandle                 ActiveEffectHandle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Gameplay.WB_Gameplay_C.On Gameplay Effect Removed
struct UWB_Gameplay_C_On_Gameplay_Effect_Removed_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameplayEffect*                             AddedEffect;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpec                         EffectSpec;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FActiveGameplayEffectHandle                 ActiveEffectHandle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Gameplay.WB_Gameplay_C.Setup Playercards
struct UWB_Gameplay_C_Setup_Playercards_Params
{
};

// Function WB_Gameplay.WB_Gameplay_C.Wait for Players
struct UWB_Gameplay_C_Wait_for_Players_Params
{
};

// Function WB_Gameplay.WB_Gameplay_C.BndEvt__WB_Countdown_K2Node_ComponentBoundEvent_0_ShowTime__DelegateSignature
struct UWB_Gameplay_C_BndEvt__WB_Countdown_K2Node_ComponentBoundEvent_0_ShowTime__DelegateSignature_Params
{
};

// Function WB_Gameplay.WB_Gameplay_C.DisplayAbilityActivateErrorMessages
struct UWB_Gameplay_C_DisplayAbilityActivateErrorMessages_Params
{
	struct FGameplayTagContainer                       AbilityBlockedByTags;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Gameplay.WB_Gameplay_C.ExecuteUbergraph_WB_Gameplay
struct UWB_Gameplay_C_ExecuteUbergraph_WB_Gameplay_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
