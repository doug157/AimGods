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

// Function WB_ActionBarSlot.WB_ActionBarSlot_C.ToggleAbilityUsable
struct UWB_ActionBarSlot_C_ToggleAbilityUsable_Params
{
	bool                                               IsUsable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_ActionBarSlot.WB_ActionBarSlot_C.OnDrop
struct UWB_ActionBarSlot_C_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_ActionBarSlot.WB_ActionBarSlot_C.OnDragDetected
struct UWB_ActionBarSlot_C_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ActionBarSlot.WB_ActionBarSlot_C.OnMouseButtonDown
struct UWB_ActionBarSlot_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_ActionBarSlot.WB_ActionBarSlot_C.Display Ability
struct UWB_ActionBarSlot_C_Display_Ability_Params
{
	class UClass*                                      Ability;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ActionBarSlot.WB_ActionBarSlot_C.On Gameplay Effect Added
struct UWB_ActionBarSlot_C_On_Gameplay_Effect_Added_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameplayEffect*                             AddedEffect;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpec                         EffectSpec;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FActiveGameplayEffectHandle                 ActiveEffectHandle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ActionBarSlot.WB_ActionBarSlot_C.On Gameplay Effect Removed
struct UWB_ActionBarSlot_C_On_Gameplay_Effect_Removed_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameplayEffect*                             AddedEffect;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpec                         EffectSpec;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FActiveGameplayEffectHandle                 ActiveEffectHandle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ActionBarSlot.WB_ActionBarSlot_C.Update Timers
struct UWB_ActionBarSlot_C_Update_Timers_Params
{
};

// Function WB_ActionBarSlot.WB_ActionBarSlot_C.OnDragEnter
struct UWB_ActionBarSlot_C_OnDragEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ActionBarSlot.WB_ActionBarSlot_C.OnDragLeave
struct UWB_ActionBarSlot_C_OnDragLeave_Params
{
	struct FPointerEvent                               PointerEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ActionBarSlot.WB_ActionBarSlot_C.PreConstruct
struct UWB_ActionBarSlot_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_ActionBarSlot.WB_ActionBarSlot_C.Init
struct UWB_ActionBarSlot_C_Init_Params
{
};

// Function WB_ActionBarSlot.WB_ActionBarSlot_C.CancelCooldowns
struct UWB_ActionBarSlot_C_CancelCooldowns_Params
{
};

// Function WB_ActionBarSlot.WB_ActionBarSlot_C.On Input Binding Changed
struct UWB_ActionBarSlot_C_On_Input_Binding_Changed_Params
{
	struct FName                                       BindingName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        NewKey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_ActionBarSlot.WB_ActionBarSlot_C.ErrorCast
struct UWB_ActionBarSlot_C_ErrorCast_Params
{
};

// Function WB_ActionBarSlot.WB_ActionBarSlot_C.ExecuteUbergraph_WB_ActionBarSlot
struct UWB_ActionBarSlot_C_ExecuteUbergraph_WB_ActionBarSlot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
