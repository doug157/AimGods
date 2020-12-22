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

// Function WB_Setting.WB_Setting_C.Set_Deactivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Disable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Setting_C::Set_Deactivated(bool Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.Set_Deactivated");

	UWB_Setting_C_Set_Deactivated_Params params;
	params.Disable = Disable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.Update_Slider_Visual_Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Setting_C::Update_Slider_Visual_Value(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.Update_Slider_Visual_Value");

	UWB_Setting_C_Update_Slider_Visual_Value_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.Force_Set_Slider_Values
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MinValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CurrentValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Setting_C::Force_Set_Slider_Values(float MinValue, float MaxValue, float CurrentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.Force_Set_Slider_Values");

	UWB_Setting_C_Force_Set_Slider_Values_Params params;
	params.MinValue = MinValue;
	params.MaxValue = MaxValue;
	params.CurrentValue = CurrentValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.Force_Check_Selector_Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Setting_C::Force_Check_Selector_Text(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.Force_Check_Selector_Text");

	UWB_Setting_C_Force_Check_Selector_Text_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.Force_Check_Binary
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OnOff                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Setting_C::Force_Check_Binary(bool OnOff)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.Force_Check_Binary");

	UWB_Setting_C_Force_Check_Binary_Params params;
	params.OnOff = OnOff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.Check_BinaryActiveOption
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Setting_C::Check_BinaryActiveOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.Check_BinaryActiveOption");

	UWB_Setting_C_Check_BinaryActiveOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.Force_DropList_Selected_Option
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_Setting_C::Force_DropList_Selected_Option(const struct FString& Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.Force_DropList_Selected_Option");

	UWB_Setting_C_Force_DropList_Selected_Option_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.Check_If_Odd_Or_Even
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Setting_C::Check_If_Odd_Or_Even()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.Check_If_Odd_Or_Even");

	UWB_Setting_C_Check_If_Odd_Or_Even_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Setting_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.Initialize");

	UWB_Setting_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.Force_DropList_Generate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Options                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 SelectedOption                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_Setting_C::Force_DropList_Generate(TArray<struct FString>* Options, const struct FString& SelectedOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.Force_DropList_Generate");

	UWB_Setting_C_Force_DropList_Generate_Params params;
	params.SelectedOption = SelectedOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Options != nullptr)
		*Options = params.Options;

}


// Function WB_Setting.WB_Setting_C.Generate_DropList
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Setting_C::Generate_DropList()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.Generate_DropList");

	UWB_Setting_C_Generate_DropList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_Setting_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWB_Setting_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_Setting_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWB_Setting_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.BndEvt__Button_On_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_Setting_C::BndEvt__Button_On_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.BndEvt__Button_On_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UWB_Setting_C_BndEvt__Button_On_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.BndEvt__Button_Off_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_Setting_C::BndEvt__Button_Off_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.BndEvt__Button_Off_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UWB_Setting_C_BndEvt__Button_Off_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.BndEvt__ResolutionCombo_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Setting_C::BndEvt__ResolutionCombo_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.BndEvt__ResolutionCombo_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	UWB_Setting_C_BndEvt__ResolutionCombo_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Setting_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.Construct");

	UWB_Setting_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_Setting_C::BndEvt__Button_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UWB_Setting_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_Setting_C::BndEvt__Button_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UWB_Setting_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Setting_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.PreConstruct");

	UWB_Setting_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.BndEvt__SliderBar_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Setting_C::BndEvt__SliderBar_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.BndEvt__SliderBar_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature");

	UWB_Setting_C_BndEvt__SliderBar_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.BndEvt__SliderBar_K2Node_ComponentBoundEvent_8_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
void UWB_Setting_C::BndEvt__SliderBar_K2Node_ComponentBoundEvent_8_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.BndEvt__SliderBar_K2Node_ComponentBoundEvent_8_OnMouseCaptureEndEvent__DelegateSignature");

	UWB_Setting_C_BndEvt__SliderBar_K2Node_ComponentBoundEvent_8_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.ExecuteUbergraph_WB_Setting
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Setting_C::ExecuteUbergraph_WB_Setting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.ExecuteUbergraph_WB_Setting");

	UWB_Setting_C_ExecuteUbergraph_WB_Setting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.Slider_CaptureEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Setting_C::Slider_CaptureEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.Slider_CaptureEnd__DelegateSignature");

	UWB_Setting_C_Slider_CaptureEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.Slider_OnValueChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Setting_C::Slider_OnValueChange__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.Slider_OnValueChange__DelegateSignature");

	UWB_Setting_C_Slider_OnValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.Selector_Right__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Setting_C::Selector_Right__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.Selector_Right__DelegateSignature");

	UWB_Setting_C_Selector_Right__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.Selector_Left__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Setting_C::Selector_Left__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.Selector_Left__DelegateSignature");

	UWB_Setting_C_Selector_Left__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.Binary_Off__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Setting_C::Binary_Off__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.Binary_Off__DelegateSignature");

	UWB_Setting_C_Binary_Off__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.Binary_On__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Setting_C::Binary_On__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.Binary_On__DelegateSignature");

	UWB_Setting_C_Binary_On__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Setting.WB_Setting_C.DropBox_SelectionChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Setting_C::DropBox_SelectionChange__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Setting.WB_Setting_C.DropBox_SelectionChange__DelegateSignature");

	UWB_Setting_C_DropBox_SelectionChange__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
