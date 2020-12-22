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

// Function WB_ActionBar.WB_ActionBar_C.CheckAbilityActivationStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            InOwningTag                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// EAGAbilityInputID              InAbilityInput                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ActionBarSlotAbilityInfo InActionBarSlotAbilityInfo     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int                            InCount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ActionBar_C::CheckAbilityActivationStatus(const struct FGameplayTag& InOwningTag, EAGAbilityInputID InAbilityInput, const struct FStruct_ActionBarSlotAbilityInfo& InActionBarSlotAbilityInfo, int InCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBar.WB_ActionBar_C.CheckAbilityActivationStatus");

	UWB_ActionBar_C_CheckAbilityActivationStatus_Params params;
	params.InOwningTag = InOwningTag;
	params.InAbilityInput = InAbilityInput;
	params.InActionBarSlotAbilityInfo = InActionBarSlotAbilityInfo;
	params.InCount = InCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBar.WB_ActionBar_C.OnOwnedTagChanged_D84337954CD10C215BAB2A89C4B2221E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            OwningTag                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ActionBar_C::OnOwnedTagChanged_D84337954CD10C215BAB2A89C4B2221E(const struct FGameplayTag& OwningTag, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBar.WB_ActionBar_C.OnOwnedTagChanged_D84337954CD10C215BAB2A89C4B2221E");

	UWB_ActionBar_C_OnOwnedTagChanged_D84337954CD10C215BAB2A89C4B2221E_Params params;
	params.OwningTag = OwningTag;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBar.WB_ActionBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_ActionBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBar.WB_ActionBar_C.Construct");

	UWB_ActionBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBar.WB_ActionBar_C.On Ability Added
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  GameplayAbilityClass           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EAGAbilityInputID              InputID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ActionBar_C::On_Ability_Added(class UAbilitySystemComponent* AbilitySystemComponent, class UClass* GameplayAbilityClass, EAGAbilityInputID InputID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBar.WB_ActionBar_C.On Ability Added");

	UWB_ActionBar_C_On_Ability_Added_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.GameplayAbilityClass = GameplayAbilityClass;
	params.InputID = InputID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBar.WB_ActionBar_C.Wait for Valid Data
// (BlueprintCallable, BlueprintEvent)
void UWB_ActionBar_C::Wait_for_Valid_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBar.WB_ActionBar_C.Wait for Valid Data");

	UWB_ActionBar_C_Wait_for_Valid_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBar.WB_ActionBar_C.ListenForAbilitiesBeingBlocked
// (BlueprintCallable, BlueprintEvent)
void UWB_ActionBar_C::ListenForAbilitiesBeingBlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBar.WB_ActionBar_C.ListenForAbilitiesBeingBlocked");

	UWB_ActionBar_C_ListenForAbilitiesBeingBlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBar.WB_ActionBar_C.ListenForAbilitiesBeingUsed
// (BlueprintCallable, BlueprintEvent)
void UWB_ActionBar_C::ListenForAbilitiesBeingUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBar.WB_ActionBar_C.ListenForAbilitiesBeingUsed");

	UWB_ActionBar_C_ListenForAbilitiesBeingUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBar.WB_ActionBar_C.OnLocalAbilityInputPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAGAbilityInputID              AbilityInputID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ActionBar_C::OnLocalAbilityInputPressed(EAGAbilityInputID AbilityInputID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBar.WB_ActionBar_C.OnLocalAbilityInputPressed");

	UWB_ActionBar_C_OnLocalAbilityInputPressed_Params params;
	params.AbilityInputID = AbilityInputID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBar.WB_ActionBar_C.ExecuteUbergraph_WB_ActionBar
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ActionBar_C::ExecuteUbergraph_WB_ActionBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBar.WB_ActionBar_C.ExecuteUbergraph_WB_ActionBar");

	UWB_ActionBar_C_ExecuteUbergraph_WB_ActionBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
