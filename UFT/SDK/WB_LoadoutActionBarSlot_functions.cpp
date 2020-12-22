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

// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.GetLoadoutSlotTooltip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWB_LoadoutActionBarSlot_C::GetLoadoutSlotTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.GetLoadoutSlotTooltip");

	UWB_LoadoutActionBarSlot_C_GetLoadoutSlotTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_LoadoutActionBarSlot_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnDrop");

	UWB_LoadoutActionBarSlot_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_LoadoutActionBarSlot_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnDragDetected");

	UWB_LoadoutActionBarSlot_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;

}


// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWB_LoadoutActionBarSlot_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnMouseButtonDown");

	UWB_LoadoutActionBarSlot_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_LoadoutActionBarSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.Construct");

	UWB_LoadoutActionBarSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.Display Ability
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Ability                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_LoadoutActionBarSlot_C::Display_Ability(class UClass* Ability)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.Display Ability");

	UWB_LoadoutActionBarSlot_C_Display_Ability_Params params;
	params.Ability = Ability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_LoadoutActionBarSlot_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnDragEnter");

	UWB_LoadoutActionBarSlot_C_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_LoadoutActionBarSlot_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnDragLeave");

	UWB_LoadoutActionBarSlot_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_LoadoutActionBarSlot_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.PreConstruct");

	UWB_LoadoutActionBarSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.BndEvt__Button_183_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_LoadoutActionBarSlot_C::BndEvt__Button_183_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.BndEvt__Button_183_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWB_LoadoutActionBarSlot_C_BndEvt__Button_183_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.BndEvt__ClickableButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_LoadoutActionBarSlot_C::BndEvt__ClickableButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.BndEvt__ClickableButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWB_LoadoutActionBarSlot_C_BndEvt__ClickableButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.BndEvt__ClickableButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_LoadoutActionBarSlot_C::BndEvt__ClickableButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.BndEvt__ClickableButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWB_LoadoutActionBarSlot_C_BndEvt__ClickableButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_LoadoutActionBarSlot_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnMouseEnter");

	UWB_LoadoutActionBarSlot_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_LoadoutActionBarSlot_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnMouseLeave");

	UWB_LoadoutActionBarSlot_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.On Input Binding Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   BindingName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                    NewKey                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_LoadoutActionBarSlot_C::On_Input_Binding_Changed(const struct FName& BindingName, const struct FKey& NewKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.On Input Binding Changed");

	UWB_LoadoutActionBarSlot_C_On_Input_Binding_Changed_Params params;
	params.BindingName = BindingName;
	params.NewKey = NewKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.ExecuteUbergraph_WB_LoadoutActionBarSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_LoadoutActionBarSlot_C::ExecuteUbergraph_WB_LoadoutActionBarSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.ExecuteUbergraph_WB_LoadoutActionBarSlot");

	UWB_LoadoutActionBarSlot_C_ExecuteUbergraph_WB_LoadoutActionBarSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_LoadoutActionBarSlot_C::Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.Clicked__DelegateSignature");

	UWB_LoadoutActionBarSlot_C_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
