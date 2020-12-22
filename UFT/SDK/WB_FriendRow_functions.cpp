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

// Function WB_FriendRow.WB_FriendRow_C.Check_Online
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Online_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_FriendRow_C::Check_Online(bool Online_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRow.WB_FriendRow_C.Check_Online");

	UWB_FriendRow_C_Check_Online_Params params;
	params.Online_ = Online_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRow.WB_FriendRow_C.BndEvt__AddToParty_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_FriendRow_C::BndEvt__AddToParty_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRow.WB_FriendRow_C.BndEvt__AddToParty_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWB_FriendRow_C_BndEvt__AddToParty_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRow.WB_FriendRow_C.BndEvt__Btn_Row_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_FriendRow_C::BndEvt__Btn_Row_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRow.WB_FriendRow_C.BndEvt__Btn_Row_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UWB_FriendRow_C_BndEvt__Btn_Row_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRow.WB_FriendRow_C.OnMessageReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OtherPlayerId                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 OtherPlayerUsername            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 ChatConversationId             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 SenderPlayerId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_FriendRow_C::OnMessageReceived(const struct FString& OtherPlayerId, const struct FString& OtherPlayerUsername, const struct FString& ChatConversationId, const struct FString& SenderPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRow.WB_FriendRow_C.OnMessageReceived");

	UWB_FriendRow_C_OnMessageReceived_Params params;
	params.OtherPlayerId = OtherPlayerId;
	params.OtherPlayerUsername = OtherPlayerUsername;
	params.ChatConversationId = ChatConversationId;
	params.SenderPlayerId = SenderPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRow.WB_FriendRow_C.OnRemoveFriend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_FriendRow_C::OnRemoveFriend(bool Success, const struct FString& Response, const struct FAGFriendError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRow.WB_FriendRow_C.OnRemoveFriend");

	UWB_FriendRow_C_OnRemoveFriend_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRow.WB_FriendRow_C.BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_FriendRow_C::BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRow.WB_FriendRow_C.BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWB_FriendRow_C_BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRow.WB_FriendRow_C.BndEvt__Btn_AddToCustomGame_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_FriendRow_C::BndEvt__Btn_AddToCustomGame_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRow.WB_FriendRow_C.BndEvt__Btn_AddToCustomGame_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UWB_FriendRow_C_BndEvt__Btn_AddToCustomGame_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRow.WB_FriendRow_C.BndEvt__Btn_BlockPlayer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_FriendRow_C::BndEvt__Btn_BlockPlayer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRow.WB_FriendRow_C.BndEvt__Btn_BlockPlayer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWB_FriendRow_C_BndEvt__Btn_BlockPlayer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRow.WB_FriendRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_FriendRow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRow.WB_FriendRow_C.Construct");

	UWB_FriendRow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRow.WB_FriendRow_C.BndEvt__ForgiveFriend_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_FriendRow_C::BndEvt__ForgiveFriend_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRow.WB_FriendRow_C.BndEvt__ForgiveFriend_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UWB_FriendRow_C_BndEvt__ForgiveFriend_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRow.WB_FriendRow_C.ExecuteUbergraph_WB_FriendRow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_FriendRow_C::ExecuteUbergraph_WB_FriendRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRow.WB_FriendRow_C.ExecuteUbergraph_WB_FriendRow");

	UWB_FriendRow_C_ExecuteUbergraph_WB_FriendRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
