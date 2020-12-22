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

// Function WB_InGameMenu.WB_InGameMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWB_InGameMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InGameMenu.WB_InGameMenu_C.OnKeyDown");

	UWB_InGameMenu_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_InGameMenu.WB_InGameMenu_C.ReturnToGame
// (BlueprintCallable, BlueprintEvent)
void UWB_InGameMenu_C::ReturnToGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InGameMenu.WB_InGameMenu_C.ReturnToGame");

	UWB_InGameMenu_C_ReturnToGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InGameMenu.WB_InGameMenu_C.OnKeyPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_InGameMenu_C::OnKeyPressed(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InGameMenu.WB_InGameMenu_C.OnKeyPressed");

	UWB_InGameMenu_C_OnKeyPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InGameMenu.WB_InGameMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_InGameMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InGameMenu.WB_InGameMenu_C.Construct");

	UWB_InGameMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InGameMenu.WB_InGameMenu_C.OnButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_InGameMenu_C::OnButtonHovered(class UButton* Button, class UTextBlock* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InGameMenu.WB_InGameMenu_C.OnButtonHovered");

	UWB_InGameMenu_C_OnButtonHovered_Params params;
	params.Button = Button;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InGameMenu.WB_InGameMenu_C.OnButtonUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_InGameMenu_C::OnButtonUnhovered(class UButton* Button, class UTextBlock* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InGameMenu.WB_InGameMenu_C.OnButtonUnhovered");

	UWB_InGameMenu_C_OnButtonUnhovered_Params params;
	params.Button = Button;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_Return_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_InGameMenu_C::BndEvt__WB_Btn_Return_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_Return_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature");

	UWB_InGameMenu_C_BndEvt__WB_Btn_Return_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_Report_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_InGameMenu_C::BndEvt__WB_Btn_Report_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_Report_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature");

	UWB_InGameMenu_C_BndEvt__WB_Btn_Report_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_MainMenu_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_InGameMenu_C::BndEvt__WB_Btn_MainMenu_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_MainMenu_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature");

	UWB_InGameMenu_C_BndEvt__WB_Btn_MainMenu_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_Quit_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_InGameMenu_C::BndEvt__WB_Btn_Quit_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_Quit_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature");

	UWB_InGameMenu_C_BndEvt__WB_Btn_Quit_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_Settings_K2Node_ComponentBoundEvent_19_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_InGameMenu_C::BndEvt__WB_Btn_Settings_K2Node_ComponentBoundEvent_19_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_Settings_K2Node_ComponentBoundEvent_19_Clicked__DelegateSignature");

	UWB_InGameMenu_C_BndEvt__WB_Btn_Settings_K2Node_ComponentBoundEvent_19_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InGameMenu.WB_InGameMenu_C.ExecuteUbergraph_WB_InGameMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_InGameMenu_C::ExecuteUbergraph_WB_InGameMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InGameMenu.WB_InGameMenu_C.ExecuteUbergraph_WB_InGameMenu");

	UWB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
