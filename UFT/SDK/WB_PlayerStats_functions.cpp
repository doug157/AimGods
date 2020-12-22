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

// Function WB_PlayerStats.WB_PlayerStats_C.SelectSide
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_PlayerStats_C::SelectSide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats.WB_PlayerStats_C.SelectSide");

	UWB_PlayerStats_C_SelectSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerStats.WB_PlayerStats_C.OnAttributeChanged_5E239EF24EAB27B0B6F5B1B7435E0F3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute      Attribute                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          OldValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PlayerStats_C::OnAttributeChanged_5E239EF24EAB27B0B6F5B1B7435E0F3B(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats.WB_PlayerStats_C.OnAttributeChanged_5E239EF24EAB27B0B6F5B1B7435E0F3B");

	UWB_PlayerStats_C_OnAttributeChanged_5E239EF24EAB27B0B6F5B1B7435E0F3B_Params params;
	params.Attribute = Attribute;
	params.NewValue = NewValue;
	params.OldValue = OldValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerStats.WB_PlayerStats_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_PlayerStats_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats.WB_PlayerStats_C.PreConstruct");

	UWB_PlayerStats_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerStats.WB_PlayerStats_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_PlayerStats_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats.WB_PlayerStats_C.Construct");

	UWB_PlayerStats_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerStats.WB_PlayerStats_C.On Gameplay Effect Added
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffect*         AddedEffect                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec     EffectSpec                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FActiveGameplayEffectHandle ActiveEffectHandle             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWB_PlayerStats_C::On_Gameplay_Effect_Added(class UAbilitySystemComponent* AbilitySystemComponent, class UGameplayEffect* AddedEffect, const struct FGameplayEffectSpec& EffectSpec, const struct FActiveGameplayEffectHandle& ActiveEffectHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats.WB_PlayerStats_C.On Gameplay Effect Added");

	UWB_PlayerStats_C_On_Gameplay_Effect_Added_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.AddedEffect = AddedEffect;
	params.EffectSpec = EffectSpec;
	params.ActiveEffectHandle = ActiveEffectHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerStats.WB_PlayerStats_C.On Gameplay Effect Removed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffect*         AddedEffect                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec     EffectSpec                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FActiveGameplayEffectHandle ActiveEffectHandle             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWB_PlayerStats_C::On_Gameplay_Effect_Removed(class UAbilitySystemComponent* AbilitySystemComponent, class UGameplayEffect* AddedEffect, const struct FGameplayEffectSpec& EffectSpec, const struct FActiveGameplayEffectHandle& ActiveEffectHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats.WB_PlayerStats_C.On Gameplay Effect Removed");

	UWB_PlayerStats_C_On_Gameplay_Effect_Removed_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.AddedEffect = AddedEffect;
	params.EffectSpec = EffectSpec;
	params.ActiveEffectHandle = ActiveEffectHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerStats.WB_PlayerStats_C.Handle Attribute Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute      Attribute                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                          OldValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PlayerStats_C::Handle_Attribute_Change(const struct FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats.WB_PlayerStats_C.Handle Attribute Change");

	UWB_PlayerStats_C_Handle_Attribute_Change_Params params;
	params.Attribute = Attribute;
	params.OldValue = OldValue;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerStats.WB_PlayerStats_C.PrepareAbilityLoadoutDisplay
// (BlueprintCallable, BlueprintEvent)
void UWB_PlayerStats_C::PrepareAbilityLoadoutDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats.WB_PlayerStats_C.PrepareAbilityLoadoutDisplay");

	UWB_PlayerStats_C_PrepareAbilityLoadoutDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerStats.WB_PlayerStats_C.OnAGGameplayAbilityAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  GameplayAbilityClass           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EAGAbilityInputID              InputID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PlayerStats_C::OnAGGameplayAbilityAdded(class UAbilitySystemComponent* AbilitySystemComponent, class UClass* GameplayAbilityClass, EAGAbilityInputID InputID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats.WB_PlayerStats_C.OnAGGameplayAbilityAdded");

	UWB_PlayerStats_C_OnAGGameplayAbilityAdded_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.GameplayAbilityClass = GameplayAbilityClass;
	params.InputID = InputID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerStats.WB_PlayerStats_C.Wait for Abilities
// (BlueprintCallable, BlueprintEvent)
void UWB_PlayerStats_C::Wait_for_Abilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats.WB_PlayerStats_C.Wait for Abilities");

	UWB_PlayerStats_C_Wait_for_Abilities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerStats.WB_PlayerStats_C.Retry Abilities
// (BlueprintCallable, BlueprintEvent)
void UWB_PlayerStats_C::Retry_Abilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats.WB_PlayerStats_C.Retry Abilities");

	UWB_PlayerStats_C_Retry_Abilities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerStats.WB_PlayerStats_C.ExecuteUbergraph_WB_PlayerStats
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PlayerStats_C::ExecuteUbergraph_WB_PlayerStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerStats.WB_PlayerStats_C.ExecuteUbergraph_WB_PlayerStats");

	UWB_PlayerStats_C_ExecuteUbergraph_WB_PlayerStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
