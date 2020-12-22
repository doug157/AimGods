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

// Function WB_Login.WB_Login_C.DisableOnLoggingIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsLoggingIn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Login_C::DisableOnLoggingIn(bool bIsLoggingIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Login.WB_Login_C.DisableOnLoggingIn");

	UWB_Login_C_DisableOnLoggingIn_Params params;
	params.bIsLoggingIn = bIsLoggingIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Login.WB_Login_C.Finished_29AFE36048D8C87FEF83DBBB11D802BB
// (BlueprintCallable, BlueprintEvent)
void UWB_Login_C::Finished_29AFE36048D8C87FEF83DBBB11D802BB()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Login.WB_Login_C.Finished_29AFE36048D8C87FEF83DBBB11D802BB");

	UWB_Login_C_Finished_29AFE36048D8C87FEF83DBBB11D802BB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Login.WB_Login_C.BndEvt__Txt_Password_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Login_C::BndEvt__Txt_Password_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Login.WB_Login_C.BndEvt__Txt_Password_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UWB_Login_C_BndEvt__Txt_Password_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Login.WB_Login_C.BndEvt__Txt_Username_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_Login_C::BndEvt__Txt_Username_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Login.WB_Login_C.BndEvt__Txt_Username_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");

	UWB_Login_C_BndEvt__Txt_Username_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Login.WB_Login_C.BndEvt__Txt_Password_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_Login_C::BndEvt__Txt_Password_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Login.WB_Login_C.BndEvt__Txt_Password_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature");

	UWB_Login_C_BndEvt__Txt_Password_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Login.WB_Login_C.BndEvt__WB_Btn_BIG_Login_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_Login_C::BndEvt__WB_Btn_BIG_Login_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Login.WB_Login_C.BndEvt__WB_Btn_BIG_Login_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature");

	UWB_Login_C_BndEvt__WB_Btn_BIG_Login_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Login.WB_Login_C.BndEvt__WB_Btn_Generic_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_Login_C::BndEvt__WB_Btn_Generic_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Login.WB_Login_C.BndEvt__WB_Btn_Generic_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature");

	UWB_Login_C_BndEvt__WB_Btn_Generic_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Login.WB_Login_C.BndEvt__WB_Btn_Generic_253_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_Login_C::BndEvt__WB_Btn_Generic_253_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Login.WB_Login_C.BndEvt__WB_Btn_Generic_253_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature");

	UWB_Login_C_BndEvt__WB_Btn_Generic_253_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Login.WB_Login_C.OnPlayerAlreadyLoggedIn
// (BlueprintCallable, BlueprintEvent)
void UWB_Login_C::OnPlayerAlreadyLoggedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Login.WB_Login_C.OnPlayerAlreadyLoggedIn");

	UWB_Login_C_OnPlayerAlreadyLoggedIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Login.WB_Login_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Login_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Login.WB_Login_C.Construct");

	UWB_Login_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Login.WB_Login_C.OnLogin_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAuthError              AuthError                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAuthData               AuthData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_Login_C::OnLogin_Event(bool Success, const struct FAuthError& AuthError, const struct FAuthData& AuthData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Login.WB_Login_C.OnLogin_Event");

	UWB_Login_C_OnLogin_Event_Params params;
	params.Success = Success;
	params.AuthError = AuthError;
	params.AuthData = AuthData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Login.WB_Login_C.ExecuteUbergraph_WB_Login
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Login_C::ExecuteUbergraph_WB_Login(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Login.WB_Login_C.ExecuteUbergraph_WB_Login");

	UWB_Login_C_ExecuteUbergraph_WB_Login_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
