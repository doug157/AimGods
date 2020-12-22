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

// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.BndEvt__Txt_UsernameToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_SendFriendRequestDialog_C::BndEvt__Txt_UsernameToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.BndEvt__Txt_UsernameToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UWB_SendFriendRequestDialog_C_BndEvt__Txt_UsernameToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.OnSendFriendRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_SendFriendRequestDialog_C::OnSendFriendRequest(bool Success, const struct FString& Response, const struct FAGFriendError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.OnSendFriendRequest");

	UWB_SendFriendRequestDialog_C_OnSendFriendRequest_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.BndEvt__Button_140_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_SendFriendRequestDialog_C::BndEvt__Button_140_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.BndEvt__Button_140_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UWB_SendFriendRequestDialog_C_BndEvt__Button_140_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.BndEvt__ButtonLeave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_SendFriendRequestDialog_C::BndEvt__ButtonLeave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.BndEvt__ButtonLeave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWB_SendFriendRequestDialog_C_BndEvt__ButtonLeave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.ExecuteUbergraph_WB_SendFriendRequestDialog
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_SendFriendRequestDialog_C::ExecuteUbergraph_WB_SendFriendRequestDialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.ExecuteUbergraph_WB_SendFriendRequestDialog");

	UWB_SendFriendRequestDialog_C_ExecuteUbergraph_WB_SendFriendRequestDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.CloseWindow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_SendFriendRequestDialog_C::CloseWindow__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.CloseWindow__DelegateSignature");

	UWB_SendFriendRequestDialog_C_CloseWindow__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.FriendSearchOperationDone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_SendFriendRequestDialog_C::FriendSearchOperationDone__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.FriendSearchOperationDone__DelegateSignature");

	UWB_SendFriendRequestDialog_C_FriendSearchOperationDone__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
