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

// Function WB_ActionBarSlot.WB_ActionBarSlot_C.ToggleAbilityUsable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUsable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_ActionBarSlot_C::ToggleAbilityUsable(bool IsUsable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBarSlot.WB_ActionBarSlot_C.ToggleAbilityUsable");

	UWB_ActionBarSlot_C_ToggleAbilityUsable_Params params;
	params.IsUsable = IsUsable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBarSlot.WB_ActionBarSlot_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_ActionBarSlot_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBarSlot.WB_ActionBarSlot_C.OnDrop");

	UWB_ActionBarSlot_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_ActionBarSlot.WB_ActionBarSlot_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ActionBarSlot_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBarSlot.WB_ActionBarSlot_C.OnDragDetected");

	UWB_ActionBarSlot_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;

}


// Function WB_ActionBarSlot.WB_ActionBarSlot_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWB_ActionBarSlot_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBarSlot.WB_ActionBarSlot_C.OnMouseButtonDown");

	UWB_ActionBarSlot_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_ActionBarSlot.WB_ActionBarSlot_C.Display Ability
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Ability                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ActionBarSlot_C::Display_Ability(class UClass* Ability)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBarSlot.WB_ActionBarSlot_C.Display Ability");

	UWB_ActionBarSlot_C_Display_Ability_Params params;
	params.Ability = Ability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBarSlot.WB_ActionBarSlot_C.On Gameplay Effect Added
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffect*         AddedEffect                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec     EffectSpec                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FActiveGameplayEffectHandle ActiveEffectHandle             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWB_ActionBarSlot_C::On_Gameplay_Effect_Added(class UAbilitySystemComponent* AbilitySystemComponent, class UGameplayEffect* AddedEffect, const struct FGameplayEffectSpec& EffectSpec, const struct FActiveGameplayEffectHandle& ActiveEffectHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBarSlot.WB_ActionBarSlot_C.On Gameplay Effect Added");

	UWB_ActionBarSlot_C_On_Gameplay_Effect_Added_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.AddedEffect = AddedEffect;
	params.EffectSpec = EffectSpec;
	params.ActiveEffectHandle = ActiveEffectHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBarSlot.WB_ActionBarSlot_C.On Gameplay Effect Removed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffect*         AddedEffect                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec     EffectSpec                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FActiveGameplayEffectHandle ActiveEffectHandle             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWB_ActionBarSlot_C::On_Gameplay_Effect_Removed(class UAbilitySystemComponent* AbilitySystemComponent, class UGameplayEffect* AddedEffect, const struct FGameplayEffectSpec& EffectSpec, const struct FActiveGameplayEffectHandle& ActiveEffectHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBarSlot.WB_ActionBarSlot_C.On Gameplay Effect Removed");

	UWB_ActionBarSlot_C_On_Gameplay_Effect_Removed_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.AddedEffect = AddedEffect;
	params.EffectSpec = EffectSpec;
	params.ActiveEffectHandle = ActiveEffectHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBarSlot.WB_ActionBarSlot_C.Update Timers
// (BlueprintCallable, BlueprintEvent)
void UWB_ActionBarSlot_C::Update_Timers()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBarSlot.WB_ActionBarSlot_C.Update Timers");

	UWB_ActionBarSlot_C_Update_Timers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBarSlot.WB_ActionBarSlot_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ActionBarSlot_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBarSlot.WB_ActionBarSlot_C.OnDragEnter");

	UWB_ActionBarSlot_C_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBarSlot.WB_ActionBarSlot_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ActionBarSlot_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBarSlot.WB_ActionBarSlot_C.OnDragLeave");

	UWB_ActionBarSlot_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBarSlot.WB_ActionBarSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_ActionBarSlot_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBarSlot.WB_ActionBarSlot_C.PreConstruct");

	UWB_ActionBarSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBarSlot.WB_ActionBarSlot_C.Init
// (BlueprintCallable, BlueprintEvent)
void UWB_ActionBarSlot_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBarSlot.WB_ActionBarSlot_C.Init");

	UWB_ActionBarSlot_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBarSlot.WB_ActionBarSlot_C.CancelCooldowns
// (BlueprintCallable, BlueprintEvent)
void UWB_ActionBarSlot_C::CancelCooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBarSlot.WB_ActionBarSlot_C.CancelCooldowns");

	UWB_ActionBarSlot_C_CancelCooldowns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBarSlot.WB_ActionBarSlot_C.On Input Binding Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   BindingName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                    NewKey                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_ActionBarSlot_C::On_Input_Binding_Changed(const struct FName& BindingName, const struct FKey& NewKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBarSlot.WB_ActionBarSlot_C.On Input Binding Changed");

	UWB_ActionBarSlot_C_On_Input_Binding_Changed_Params params;
	params.BindingName = BindingName;
	params.NewKey = NewKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBarSlot.WB_ActionBarSlot_C.ErrorCast
// (BlueprintCallable, BlueprintEvent)
void UWB_ActionBarSlot_C::ErrorCast()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBarSlot.WB_ActionBarSlot_C.ErrorCast");

	UWB_ActionBarSlot_C_ErrorCast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ActionBarSlot.WB_ActionBarSlot_C.ExecuteUbergraph_WB_ActionBarSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ActionBarSlot_C::ExecuteUbergraph_WB_ActionBarSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ActionBarSlot.WB_ActionBarSlot_C.ExecuteUbergraph_WB_ActionBarSlot");

	UWB_ActionBarSlot_C_ExecuteUbergraph_WB_ActionBarSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
