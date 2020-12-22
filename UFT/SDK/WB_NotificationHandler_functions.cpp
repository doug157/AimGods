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

// Function WB_NotificationHandler.WB_NotificationHandler_C.AddTextNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENotificationType> Notification_Type              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Notification_Text              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_NotificationHandler_C::AddTextNotification(TEnumAsByte<ENotificationType> Notification_Type, const struct FString& Notification_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationHandler.WB_NotificationHandler_C.AddTextNotification");

	UWB_NotificationHandler_C_AddTextNotification_Params params;
	params.Notification_Type = Notification_Type;
	params.Notification_Text = Notification_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnRemoveFriend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_NotificationHandler_C::OnRemoveFriend(bool Success, const struct FString& Response, const struct FAGFriendError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationHandler.WB_NotificationHandler_C.OnRemoveFriend");

	UWB_NotificationHandler_C_OnRemoveFriend_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnOutgoingFriendRequestAccepted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RequestId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_NotificationHandler_C::OnOutgoingFriendRequestAccepted(const struct FString& RequestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationHandler.WB_NotificationHandler_C.OnOutgoingFriendRequestAccepted");

	UWB_NotificationHandler_C_OnOutgoingFriendRequestAccepted_Params params;
	params.RequestId = RequestId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnBlockPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_NotificationHandler_C::OnBlockPlayer(bool Success, const struct FString& Response, const struct FAGFriendError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationHandler.WB_NotificationHandler_C.OnBlockPlayer");

	UWB_NotificationHandler_C_OnBlockPlayer_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnFriendOnlineStatusChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           IsOnline                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_NotificationHandler_C::OnFriendOnlineStatusChanged(const struct FString& PlayerId, bool IsOnline)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationHandler.WB_NotificationHandler_C.OnFriendOnlineStatusChanged");

	UWB_NotificationHandler_C_OnFriendOnlineStatusChanged_Params params;
	params.PlayerId = PlayerId;
	params.IsOnline = IsOnline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnCustomGameInviteReceived
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIncomingCustomGameInvite CustomGameInvite               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_NotificationHandler_C::OnCustomGameInviteReceived(const struct FIncomingCustomGameInvite& CustomGameInvite)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationHandler.WB_NotificationHandler_C.OnCustomGameInviteReceived");

	UWB_NotificationHandler_C_OnCustomGameInviteReceived_Params params;
	params.CustomGameInvite = CustomGameInvite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnUnblockPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_NotificationHandler_C::OnUnblockPlayer(bool Success, const struct FString& Response, const struct FAGFriendError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationHandler.WB_NotificationHandler_C.OnUnblockPlayer");

	UWB_NotificationHandler_C_OnUnblockPlayer_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnSendFriendRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_NotificationHandler_C::OnSendFriendRequest(bool Success, const struct FString& Response, const struct FAGFriendError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationHandler.WB_NotificationHandler_C.OnSendFriendRequest");

	UWB_NotificationHandler_C_OnSendFriendRequest_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnFriendRequestReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RequestId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Username                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_NotificationHandler_C::OnFriendRequestReceived(const struct FString& RequestId, const struct FString& Username)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationHandler.WB_NotificationHandler_C.OnFriendRequestReceived");

	UWB_NotificationHandler_C_OnFriendRequestReceived_Params params;
	params.RequestId = RequestId;
	params.Username = Username;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_NotificationHandler_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationHandler.WB_NotificationHandler_C.Construct");

	UWB_NotificationHandler_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnSendPartyInvite
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPartyError             Error                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOutgoingPartyInvite    OutgoingInvite                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_NotificationHandler_C::OnSendPartyInvite(bool Success, const struct FString& Response, const struct FPartyError& Error, const struct FOutgoingPartyInvite& OutgoingInvite)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationHandler.WB_NotificationHandler_C.OnSendPartyInvite");

	UWB_NotificationHandler_C_OnSendPartyInvite_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;
	params.OutgoingInvite = OutgoingInvite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnPartyInviteReceieved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PartyInviteId                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Username                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int64_t                        InviteExpiresAt                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_NotificationHandler_C::OnPartyInviteReceieved(const struct FString& PartyInviteId, const struct FString& Username, int64_t InviteExpiresAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationHandler.WB_NotificationHandler_C.OnPartyInviteReceieved");

	UWB_NotificationHandler_C_OnPartyInviteReceieved_Params params;
	params.PartyInviteId = PartyInviteId;
	params.Username = Username;
	params.InviteExpiresAt = InviteExpiresAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnPartyDisbanded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_NotificationHandler_C::OnPartyDisbanded(const struct FString& PartyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationHandler.WB_NotificationHandler_C.OnPartyDisbanded");

	UWB_NotificationHandler_C_OnPartyDisbanded_Params params;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnLeaveParty
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPartyError             Error                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_NotificationHandler_C::OnLeaveParty(bool Success, const struct FString& Response, const struct FPartyError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationHandler.WB_NotificationHandler_C.OnLeaveParty");

	UWB_NotificationHandler_C_OnLeaveParty_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnAcceptPartyInvite
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPartyError             Error                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FCurrentParty           CurrentParty                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_NotificationHandler_C::OnAcceptPartyInvite(bool Success, const struct FPartyError& Error, const struct FCurrentParty& CurrentParty)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationHandler.WB_NotificationHandler_C.OnAcceptPartyInvite");

	UWB_NotificationHandler_C_OnAcceptPartyInvite_Params params;
	params.Success = Success;
	params.Error = Error;
	params.CurrentParty = CurrentParty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.OnOutgoingPartyInviteAcceptedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 UserId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Username                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_NotificationHandler_C::OnOutgoingPartyInviteAcceptedWs(const struct FString& PartyId, const struct FString& UserId, const struct FString& Username)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationHandler.WB_NotificationHandler_C.OnOutgoingPartyInviteAcceptedWs");

	UWB_NotificationHandler_C_OnOutgoingPartyInviteAcceptedWs_Params params;
	params.PartyId = PartyId;
	params.UserId = UserId;
	params.Username = Username;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NotificationHandler.WB_NotificationHandler_C.ExecuteUbergraph_WB_NotificationHandler
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_NotificationHandler_C::ExecuteUbergraph_WB_NotificationHandler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationHandler.WB_NotificationHandler_C.ExecuteUbergraph_WB_NotificationHandler");

	UWB_NotificationHandler_C_ExecuteUbergraph_WB_NotificationHandler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
