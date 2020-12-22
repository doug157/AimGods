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
// Functions
//---------------------------------------------------------------------------

// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.Set Health Percent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_PlayerStats_Overhead_C::Set_Health_Percent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.Set Health Percent");

	UWB_PlayerStats_Overhead_C_Set_Health_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.SelectSide
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_PlayerStats_Overhead_C::SelectSide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.SelectSide");

	UWB_PlayerStats_Overhead_C_SelectSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.OnAttributeChanged_C67460624B6DD8FA943FB8818A5F571B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute      Attribute                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          OldValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PlayerStats_Overhead_C::OnAttributeChanged_C67460624B6DD8FA943FB8818A5F571B(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.OnAttributeChanged_C67460624B6DD8FA943FB8818A5F571B");

	UWB_PlayerStats_Overhead_C_OnAttributeChanged_C67460624B6DD8FA943FB8818A5F571B_Params params;
	params.Attribute = Attribute;
	params.NewValue = NewValue;
	params.OldValue = OldValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_PlayerStats_Overhead_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.PreConstruct");

	UWB_PlayerStats_Overhead_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.On Gameplay Effect Added
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffect*         AddedEffect                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec     EffectSpec                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FActiveGameplayEffectHandle ActiveEffectHandle             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWB_PlayerStats_Overhead_C::On_Gameplay_Effect_Added(class UAbilitySystemComponent* AbilitySystemComponent, class UGameplayEffect* AddedEffect, const struct FGameplayEffectSpec& EffectSpec, const struct FActiveGameplayEffectHandle& ActiveEffectHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.On Gameplay Effect Added");

	UWB_PlayerStats_Overhead_C_On_Gameplay_Effect_Added_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.AddedEffect = AddedEffect;
	params.EffectSpec = EffectSpec;
	params.ActiveEffectHandle = ActiveEffectHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.On Gameplay Effect Removed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffect*         AddedEffect                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec     EffectSpec                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FActiveGameplayEffectHandle ActiveEffectHandle             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWB_PlayerStats_Overhead_C::On_Gameplay_Effect_Removed(class UAbilitySystemComponent* AbilitySystemComponent, class UGameplayEffect* AddedEffect, const struct FGameplayEffectSpec& EffectSpec, const struct FActiveGameplayEffectHandle& ActiveEffectHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.On Gameplay Effect Removed");

	UWB_PlayerStats_Overhead_C_On_Gameplay_Effect_Removed_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.AddedEffect = AddedEffect;
	params.EffectSpec = EffectSpec;
	params.ActiveEffectHandle = ActiveEffectHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.Handle Attribute Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute      Attribute                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                          OldValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PlayerStats_Overhead_C::Handle_Attribute_Change(const struct FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.Handle Attribute Change");

	UWB_PlayerStats_Overhead_C_Handle_Attribute_Change_Params params;
	params.Attribute = Attribute;
	params.OldValue = OldValue;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.Set Player
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AGPlayerState_C*     Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PlayerStats_Overhead_C::Set_Player(class ABP_AGPlayerState_C* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.Set Player");

	UWB_PlayerStats_Overhead_C_Set_Player_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.ExecuteUbergraph_WB_PlayerStats_Overhead
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PlayerStats_Overhead_C::ExecuteUbergraph_WB_PlayerStats_Overhead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats_Overhead.WB_PlayerStats_Overhead_C.ExecuteUbergraph_WB_PlayerStats_Overhead");

	UWB_PlayerStats_Overhead_C_ExecuteUbergraph_WB_PlayerStats_Overhead_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
