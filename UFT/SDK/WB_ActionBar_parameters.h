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

// Function WB_ActionBar.WB_ActionBar_C.CheckAbilityActivationStatus
struct UWB_ActionBar_C_CheckAbilityActivationStatus_Params
{
	struct FGameplayTag                                InOwningTag;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	EAGAbilityInputID                                  InAbilityInput;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_ActionBarSlotAbilityInfo            InActionBarSlotAbilityInfo;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int                                                InCount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ActionBar.WB_ActionBar_C.OnOwnedTagChanged_D84337954CD10C215BAB2A89C4B2221E
struct UWB_ActionBar_C_OnOwnedTagChanged_D84337954CD10C215BAB2A89C4B2221E_Params
{
	struct FGameplayTag                                OwningTag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int                                                Amount;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ActionBar.WB_ActionBar_C.Construct
struct UWB_ActionBar_C_Construct_Params
{
};

// Function WB_ActionBar.WB_ActionBar_C.On Ability Added
struct UWB_ActionBar_C_On_Ability_Added_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      GameplayAbilityClass;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAGAbilityInputID                                  InputID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ActionBar.WB_ActionBar_C.Wait for Valid Data
struct UWB_ActionBar_C_Wait_for_Valid_Data_Params
{
};

// Function WB_ActionBar.WB_ActionBar_C.ListenForAbilitiesBeingBlocked
struct UWB_ActionBar_C_ListenForAbilitiesBeingBlocked_Params
{
};

// Function WB_ActionBar.WB_ActionBar_C.ListenForAbilitiesBeingUsed
struct UWB_ActionBar_C_ListenForAbilitiesBeingUsed_Params
{
};

// Function WB_ActionBar.WB_ActionBar_C.OnLocalAbilityInputPressed
struct UWB_ActionBar_C_OnLocalAbilityInputPressed_Params
{
	EAGAbilityInputID                                  AbilityInputID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ActionBar.WB_ActionBar_C.ExecuteUbergraph_WB_ActionBar
struct UWB_ActionBar_C_ExecuteUbergraph_WB_ActionBar_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
