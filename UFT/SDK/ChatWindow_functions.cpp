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

// Function ChatWindow.ChatWindow_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UChatWindow_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.OnKeyDown");

	UChatWindow_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChatWindow.ChatWindow_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UChatWindow_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.OnMouseButtonUp");

	UChatWindow_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChatWindow.ChatWindow_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UChatWindow_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.OnMouseButtonDown");

	UChatWindow_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChatWindow.ChatWindow_C.SetTextToSend
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bTeamChat                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Sender                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Msg                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   TexToSend                      (Parm, OutParm)
void UChatWindow_C::SetTextToSend(bool bTeamChat, const struct FText& Sender, const struct FText& Msg, struct FText* TexToSend)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.SetTextToSend");

	UChatWindow_C_SetTextToSend_Params params;
	params.bTeamChat = bTeamChat;
	params.Sender = Sender;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TexToSend != nullptr)
		*TexToSend = params.TexToSend;

}


// Function ChatWindow.ChatWindow_C.BndEvt__ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatWindow_C::BndEvt__ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.BndEvt__ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UChatWindow_C_BndEvt__ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWindow.ChatWindow_C.UpdateChatWindow
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Sender                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Msg                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bTeamChat                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChatWindow_C::UpdateChatWindow(const struct FText& Sender, const struct FText& Msg, bool bTeamChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.UpdateChatWindow");

	UChatWindow_C_UpdateChatWindow_Params params;
	params.Sender = Sender;
	params.Msg = Msg;
	params.bTeamChat = bTeamChat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWindow.ChatWindow_C.FadeChatWindow
// (BlueprintCallable, BlueprintEvent)
void UChatWindow_C::FadeChatWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.FadeChatWindow");

	UChatWindow_C_FadeChatWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWindow.ChatWindow_C.ShowChat
// (BlueprintCallable, BlueprintEvent)
void UChatWindow_C::ShowChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.ShowChat");

	UChatWindow_C_ShowChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWindow.ChatWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UChatWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.Construct");

	UChatWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWindow.ChatWindow_C.InitChatEntry
// (BlueprintCallable, BlueprintEvent)
void UChatWindow_C::InitChatEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.InitChatEntry");

	UChatWindow_C_InitChatEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWindow.ChatWindow_C.ResetKeyboardFocus
// (BlueprintCallable, BlueprintEvent)
void UChatWindow_C::ResetKeyboardFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.ResetKeyboardFocus");

	UChatWindow_C_ResetKeyboardFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWindow.ChatWindow_C.BndEvt__ChatEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UChatWindow_C::BndEvt__ChatEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.BndEvt__ChatEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	UChatWindow_C_BndEvt__ChatEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChatWindow.ChatWindow_C.ExecuteUbergraph_ChatWindow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatWindow_C::ExecuteUbergraph_ChatWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.ExecuteUbergraph_ChatWindow");

	UChatWindow_C_ExecuteUbergraph_ChatWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
