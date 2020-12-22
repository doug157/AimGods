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

// Function WB_FriendChatWindow.WB_FriendChatWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_FriendChatWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendChatWindow.WB_FriendChatWindow_C.Construct");

	UWB_FriendChatWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendChatWindow.WB_FriendChatWindow_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_FriendChatWindow_C::BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendChatWindow.WB_FriendChatWindow_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWB_FriendChatWindow_C_BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendChatWindow.WB_FriendChatWindow_C.BndEvt__TB_ChatEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_FriendChatWindow_C::BndEvt__TB_ChatEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendChatWindow.WB_FriendChatWindow_C.BndEvt__TB_ChatEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UWB_FriendChatWindow_C_BndEvt__TB_ChatEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendChatWindow.WB_FriendChatWindow_C.OnShowChatBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OtherPlayerId                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 OtherPlayerUsername            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 ChatConversationId             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_FriendChatWindow_C::OnShowChatBox(const struct FString& OtherPlayerId, const struct FString& OtherPlayerUsername, const struct FString& ChatConversationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendChatWindow.WB_FriendChatWindow_C.OnShowChatBox");

	UWB_FriendChatWindow_C_OnShowChatBox_Params params;
	params.OtherPlayerId = OtherPlayerId;
	params.OtherPlayerUsername = OtherPlayerUsername;
	params.ChatConversationId = ChatConversationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendChatWindow.WB_FriendChatWindow_C.OnMessageReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OtherPlayerId                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 OtherPlayerUsername            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 ChatConversationId             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 SenderPlayerId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_FriendChatWindow_C::OnMessageReceived(const struct FString& OtherPlayerId, const struct FString& OtherPlayerUsername, const struct FString& ChatConversationId, const struct FString& SenderPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendChatWindow.WB_FriendChatWindow_C.OnMessageReceived");

	UWB_FriendChatWindow_C_OnMessageReceived_Params params;
	params.OtherPlayerId = OtherPlayerId;
	params.OtherPlayerUsername = OtherPlayerUsername;
	params.ChatConversationId = ChatConversationId;
	params.SenderPlayerId = SenderPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendChatWindow.WB_FriendChatWindow_C.BndEvt__TB_ChatEntry_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_FriendChatWindow_C::BndEvt__TB_ChatEntry_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendChatWindow.WB_FriendChatWindow_C.BndEvt__TB_ChatEntry_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");

	UWB_FriendChatWindow_C_BndEvt__TB_ChatEntry_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendChatWindow.WB_FriendChatWindow_C.ExecuteUbergraph_WB_FriendChatWindow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_FriendChatWindow_C::ExecuteUbergraph_WB_FriendChatWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendChatWindow.WB_FriendChatWindow_C.ExecuteUbergraph_WB_FriendChatWindow");

	UWB_FriendChatWindow_C_ExecuteUbergraph_WB_FriendChatWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
