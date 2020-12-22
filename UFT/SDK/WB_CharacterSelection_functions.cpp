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

// Function WB_CharacterSelection.WB_CharacterSelection_C.GetSpawnCountDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_CharacterSelection_C::GetSpawnCountDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterSelection.WB_CharacterSelection_C.GetSpawnCountDown");

	UWB_CharacterSelection_C_GetSpawnCountDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_CharacterSelection.WB_CharacterSelection_C.GetTeamText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_CharacterSelection_C::GetTeamText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterSelection.WB_CharacterSelection_C.GetTeamText");

	UWB_CharacterSelection_C_GetTeamText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_CharacterSelection.WB_CharacterSelection_C.GetReadyToSpawnButtonIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_CharacterSelection_C::GetReadyToSpawnButtonIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterSelection.WB_CharacterSelection_C.GetReadyToSpawnButtonIsEnabled");

	UWB_CharacterSelection_C_GetReadyToSpawnButtonIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_CharacterSelection.WB_CharacterSelection_C.GetTeamImage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UWB_CharacterSelection_C::GetTeamImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterSelection.WB_CharacterSelection_C.GetTeamImage");

	UWB_CharacterSelection_C_GetTeamImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_CharacterSelection.WB_CharacterSelection_C.OnButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_CharacterSelection_C::OnButtonHovered(class UButton* Button, class UTextBlock* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterSelection.WB_CharacterSelection_C.OnButtonHovered");

	UWB_CharacterSelection_C_OnButtonHovered_Params params;
	params.Button = Button;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CharacterSelection.WB_CharacterSelection_C.OnButtonUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_CharacterSelection_C::OnButtonUnhovered(class UButton* Button, class UTextBlock* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterSelection.WB_CharacterSelection_C.OnButtonUnhovered");

	UWB_CharacterSelection_C_OnButtonUnhovered_Params params;
	params.Button = Button;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CharacterSelection.WB_CharacterSelection_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_CharacterSelection_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterSelection.WB_CharacterSelection_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	UWB_CharacterSelection_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CharacterSelection.WB_CharacterSelection_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_CharacterSelection_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterSelection.WB_CharacterSelection_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");

	UWB_CharacterSelection_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CharacterSelection.WB_CharacterSelection_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_CharacterSelection_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterSelection.WB_CharacterSelection_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature");

	UWB_CharacterSelection_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CharacterSelection.WB_CharacterSelection_C.BndEvt__Button_127_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_CharacterSelection_C::BndEvt__Button_127_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterSelection.WB_CharacterSelection_C.BndEvt__Button_127_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	UWB_CharacterSelection_C_BndEvt__Button_127_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CharacterSelection.WB_CharacterSelection_C.BndEvt__ToggleTeamButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_CharacterSelection_C::BndEvt__ToggleTeamButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterSelection.WB_CharacterSelection_C.BndEvt__ToggleTeamButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature");

	UWB_CharacterSelection_C_BndEvt__ToggleTeamButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CharacterSelection.WB_CharacterSelection_C.BndEvt__ToggleTeamButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_CharacterSelection_C::BndEvt__ToggleTeamButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterSelection.WB_CharacterSelection_C.BndEvt__ToggleTeamButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature");

	UWB_CharacterSelection_C_BndEvt__ToggleTeamButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CharacterSelection.WB_CharacterSelection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_CharacterSelection_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterSelection.WB_CharacterSelection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature");

	UWB_CharacterSelection_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CharacterSelection.WB_CharacterSelection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_CharacterSelection_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterSelection.WB_CharacterSelection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature");

	UWB_CharacterSelection_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CharacterSelection.WB_CharacterSelection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_CharacterSelection_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterSelection.WB_CharacterSelection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");

	UWB_CharacterSelection_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CharacterSelection.WB_CharacterSelection_C.InitButtons
// (BlueprintCallable, BlueprintEvent)
void UWB_CharacterSelection_C::InitButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterSelection.WB_CharacterSelection_C.InitButtons");

	UWB_CharacterSelection_C_InitButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CharacterSelection.WB_CharacterSelection_C.ExecuteUbergraph_WB_CharacterSelection
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_CharacterSelection_C::ExecuteUbergraph_WB_CharacterSelection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterSelection.WB_CharacterSelection_C.ExecuteUbergraph_WB_CharacterSelection");

	UWB_CharacterSelection_C_ExecuteUbergraph_WB_CharacterSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
