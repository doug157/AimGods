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

// Function AimGods.WebSocketManager.UpdateInMatchStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsInMatch                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSocketManager::UpdateInMatchStatus(bool bIsInMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.WebSocketManager.UpdateInMatchStatus");

	UWebSocketManager_UpdateInMatchStatus_Params params;
	params.bIsInMatch = bIsInMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.WebSocketManager.SendMessageToWebSocketApi
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSocketManager::SendMessageToWebSocketApi(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.WebSocketManager.SendMessageToWebSocketApi");

	UWebSocketManager_SendMessageToWebSocketApi_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.WebSocketManager.SendLatencyUpdate
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FRegionLatency>  RegionLatencies                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UWebSocketManager::SendLatencyUpdate(TArray<struct FRegionLatency> RegionLatencies)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.WebSocketManager.SendLatencyUpdate");

	UWebSocketManager_SendLatencyUpdate_Params params;
	params.RegionLatencies = RegionLatencies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.WebSocketManager.SendHeartbeat
// (Final, Native, Public)
void UWebSocketManager::SendHeartbeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.WebSocketManager.SendHeartbeat");

	UWebSocketManager_SendHeartbeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.WebSocketManager.SendChatMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ToUserId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MessageText                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSocketManager::SendChatMessage(const struct FString& ToUserId, const struct FString& MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.WebSocketManager.SendChatMessage");

	UWebSocketManager_SendChatMessage_Params params;
	params.ToUserId = ToUserId;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.WebSocketManager.Reconnect
// (Final, Native, Public)
void UWebSocketManager::Reconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.WebSocketManager.Reconnect");

	UWebSocketManager_Reconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.WebSocketManager.OpenConnection
// (Final, Native, Public, BlueprintCallable)
void UWebSocketManager::OpenConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.WebSocketManager.OpenConnection");

	UWebSocketManager_OpenConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.WebSocketManager.OnWebSocketConnectionClosed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            StatusCode                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Reason                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWasClean                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSocketManager::OnWebSocketConnectionClosed(int StatusCode, const struct FString& Reason, bool bWasClean)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.WebSocketManager.OnWebSocketConnectionClosed");

	UWebSocketManager_OnWebSocketConnectionClosed_Params params;
	params.StatusCode = StatusCode;
	params.Reason = Reason;
	params.bWasClean = bWasClean;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.WebSocketManager.OnReceivedWebSocketApiMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSocketManager::OnReceivedWebSocketApiMessage(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.WebSocketManager.OnReceivedWebSocketApiMessage");

	UWebSocketManager_OnReceivedWebSocketApiMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.WebSocketManager.OnConnectToWebSocketApiError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Error                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWebSocketManager::OnConnectToWebSocketApiError(const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.WebSocketManager.OnConnectToWebSocketApiError");

	UWebSocketManager_OnConnectToWebSocketApiError_Params params;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.WebSocketManager.OnConnectToWebSocketApi
// (Final, Native, Public, BlueprintCallable)
void UWebSocketManager::OnConnectToWebSocketApi()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.WebSocketManager.OnConnectToWebSocketApi");

	UWebSocketManager_OnConnectToWebSocketApi_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.WebSocketManager.CloseWebSocketConnection
// (Final, Native, Public, BlueprintCallable)
void UWebSocketManager::CloseWebSocketConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.WebSocketManager.CloseWebSocketConnection");

	UWebSocketManager_CloseWebSocketConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.GameLiftClientUtils.StopMatchmaking
// (Final, Native, Public, BlueprintCallable)
void UGameLiftClientUtils::StopMatchmaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.GameLiftClientUtils.StopMatchmaking");

	UGameLiftClientUtils_StopMatchmaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.GameLiftClientUtils.StartMatchmaking
// (Final, Native, Public, BlueprintCallable)
void UGameLiftClientUtils::StartMatchmaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.GameLiftClientUtils.StartMatchmaking");

	UGameLiftClientUtils_StartMatchmaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.GameLiftClientUtils.StartGameSessionPlacement
// (Final, Native, Public, BlueprintCallable)
void UGameLiftClientUtils::StartGameSessionPlacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.GameLiftClientUtils.StartGameSessionPlacement");

	UGameLiftClientUtils_StartGameSessionPlacement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.GameLiftClientUtils.SetLastPotentialMatchCreatedTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Time                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameLiftClientUtils::SetLastPotentialMatchCreatedTime(const struct FString& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.GameLiftClientUtils.SetLastPotentialMatchCreatedTime");

	UGameLiftClientUtils_SetLastPotentialMatchCreatedTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.GameLiftClientUtils.SetLastMatchmakingSearchingTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Time                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameLiftClientUtils::SetLastMatchmakingSearchingTime(const struct FString& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.GameLiftClientUtils.SetLastMatchmakingSearchingTime");

	UGameLiftClientUtils_SetLastMatchmakingSearchingTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.GameLiftClientUtils.ResetTicket
// (Final, Native, Public, BlueprintCallable)
void UGameLiftClientUtils::ResetTicket()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.GameLiftClientUtils.ResetTicket");

	UGameLiftClientUtils_ResetTicket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.GameLiftClientUtils.ResetPlacement
// (Final, Native, Public)
void UGameLiftClientUtils::ResetPlacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.GameLiftClientUtils.ResetPlacement");

	UGameLiftClientUtils_ResetPlacement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.GameLiftClientUtils.PollMatchmaking
// (Final, Native, Public, BlueprintCallable)
void UGameLiftClientUtils::PollMatchmaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.GameLiftClientUtils.PollMatchmaking");

	UGameLiftClientUtils_PollMatchmaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.GameLiftClientUtils.NewLastPotentialMatchCreatedTimeIsGreater
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Time                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameLiftClientUtils::NewLastPotentialMatchCreatedTimeIsGreater(const struct FString& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.GameLiftClientUtils.NewLastPotentialMatchCreatedTimeIsGreater");

	UGameLiftClientUtils_NewLastPotentialMatchCreatedTimeIsGreater_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.GameLiftClientUtils.NewLastMatchmakingSearchingTimeIsGreater
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Time                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameLiftClientUtils::NewLastMatchmakingSearchingTimeIsGreater(const struct FString& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.GameLiftClientUtils.NewLastMatchmakingSearchingTimeIsGreater");

	UGameLiftClientUtils_NewLastMatchmakingSearchingTimeIsGreater_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.GameLiftClientUtils.GetResponseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Region                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameLiftClientUtils::GetResponseTime(const struct FString& Region)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.GameLiftClientUtils.GetResponseTime");

	UGameLiftClientUtils_GetResponseTime_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.GameLiftClientUtils.DescribeGameSessionPlacement
// (Final, Native, Public, BlueprintCallable)
void UGameLiftClientUtils::DescribeGameSessionPlacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.GameLiftClientUtils.DescribeGameSessionPlacement");

	UGameLiftClientUtils_DescribeGameSessionPlacement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.GameLiftClientUtils.AcceptMatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AcceptanceType                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameLiftClientUtils::AcceptMatch(const struct FString& AcceptanceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.GameLiftClientUtils.AcceptMatch");

	UGameLiftClientUtils_AcceptMatch_Params params;
	params.AcceptanceType = AcceptanceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.FriendsLibrary.UnblockPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UsernameToUnblock              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriendsLibrary::UnblockPlayer(const struct FString& UsernameToUnblock)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.FriendsLibrary.UnblockPlayer");

	UFriendsLibrary_UnblockPlayer_Params params;
	params.UsernameToUnblock = UsernameToUnblock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.FriendsLibrary.SendFriendRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Username                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriendsLibrary::SendFriendRequest(const struct FString& Username)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.FriendsLibrary.SendFriendRequest");

	UFriendsLibrary_SendFriendRequest_Params params;
	params.Username = Username;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.FriendsLibrary.RemoveFriend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FriendId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriendsLibrary::RemoveFriend(const struct FString& FriendId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.FriendsLibrary.RemoveFriend");

	UFriendsLibrary_RemoveFriend_Params params;
	params.FriendId = FriendId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.FriendsLibrary.GetPendingOutgoingFriendRequests
// (Final, Native, Public, BlueprintCallable)
void UFriendsLibrary::GetPendingOutgoingFriendRequests()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.FriendsLibrary.GetPendingOutgoingFriendRequests");

	UFriendsLibrary_GetPendingOutgoingFriendRequests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.FriendsLibrary.GetPendingIncomingFriendRequests
// (Final, Native, Public, BlueprintCallable)
void UFriendsLibrary::GetPendingIncomingFriendRequests()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.FriendsLibrary.GetPendingIncomingFriendRequests");

	UFriendsLibrary_GetPendingIncomingFriendRequests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.FriendsLibrary.GetFriendsList
// (Final, Native, Public, BlueprintCallable)
void UFriendsLibrary::GetFriendsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.FriendsLibrary.GetFriendsList");

	UFriendsLibrary_GetFriendsList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.FriendsLibrary.GetFriendNameByPlayerId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFriendsLibrary::GetFriendNameByPlayerId(const struct FString& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.FriendsLibrary.GetFriendNameByPlayerId");

	UFriendsLibrary_GetFriendNameByPlayerId_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.FriendsLibrary.GetBlockedPlayers
// (Final, Native, Public, BlueprintCallable)
void UFriendsLibrary::GetBlockedPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.FriendsLibrary.GetBlockedPlayers");

	UFriendsLibrary_GetBlockedPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.FriendsLibrary.CancelOutgoingFriendshipRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 RequestId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriendsLibrary::CancelOutgoingFriendshipRequest(const struct FString& RequestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.FriendsLibrary.CancelOutgoingFriendshipRequest");

	UFriendsLibrary_CancelOutgoingFriendshipRequest_Params params;
	params.RequestId = RequestId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.FriendsLibrary.BlockPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Username                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriendsLibrary::BlockPlayer(const struct FString& Username)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.FriendsLibrary.BlockPlayer");

	UFriendsLibrary_BlockPlayer_Params params;
	params.Username = Username;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.FriendsLibrary.AcceptFriendRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Username                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFriendsLibrary::AcceptFriendRequest(const struct FString& Username)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.FriendsLibrary.AcceptFriendRequest");

	UFriendsLibrary_AcceptFriendRequest_Params params;
	params.Username = Username;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.EacSubsystem.SendPlayerReport
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReportedPlayerGUID             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReportingPlayerGUID            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EFPlayerReportCategory> ReportCategoryID               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReportDescription              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEacSubsystem::SendPlayerReport(const struct FString& ReportedPlayerGUID, const struct FString& ReportingPlayerGUID, TEnumAsByte<EFPlayerReportCategory> ReportCategoryID, const struct FString& ReportDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.EacSubsystem.SendPlayerReport");

	UEacSubsystem_SendPlayerReport_Params params;
	params.ReportedPlayerGUID = ReportedPlayerGUID;
	params.ReportingPlayerGUID = ReportingPlayerGUID;
	params.ReportCategoryID = ReportCategoryID;
	params.ReportDescription = ReportDescription;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AwsHttpRequestLibrary.SetAuthDetails
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Access                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Refresh                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RefreshExpiresIn               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAwsHttpRequestLibrary::SetAuthDetails(const struct FString& ID, const struct FString& Access, const struct FString& Refresh, int RefreshExpiresIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AwsHttpRequestLibrary.SetAuthDetails");

	UAwsHttpRequestLibrary_SetAuthDetails_Params params;
	params.ID = ID;
	params.Access = Access;
	params.Refresh = Refresh;
	params.RefreshExpiresIn = RefreshExpiresIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AwsHttpRequestLibrary.IsLoggedIn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAwsHttpRequestLibrary::IsLoggedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AwsHttpRequestLibrary.IsLoggedIn");

	UAwsHttpRequestLibrary_IsLoggedIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AsyncTaskWalkInDirection.WalkInDirectionAndWait
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APawn*                   PawnToMove                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 WorldDirection                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ScaleValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncTaskWalkInDirection* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAsyncTaskWalkInDirection* UAsyncTaskWalkInDirection::STATIC_WalkInDirectionAndWait(class APawn* PawnToMove, float Duration, const struct FVector& WorldDirection, float ScaleValue, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AsyncTaskWalkInDirection.WalkInDirectionAndWait");

	UAsyncTaskWalkInDirection_WalkInDirectionAndWait_Params params;
	params.PawnToMove = PawnToMove;
	params.Duration = Duration;
	params.WorldDirection = WorldDirection;
	params.ScaleValue = ScaleValue;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AsyncTaskWalkInDirection.EndTask
// (Final, Native, Public, BlueprintCallable)
void UAsyncTaskWalkInDirection::EndTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AsyncTaskWalkInDirection.EndTask");

	UAsyncTaskWalkInDirection_EndTask_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AsyncTaskOwnedTagChanged.ListenForOwnedTagChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   OwnedTags                      (Parm, NativeAccessSpecifierPublic)
// class UAsyncTaskOwnedTagChanged* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAsyncTaskOwnedTagChanged* UAsyncTaskOwnedTagChanged::STATIC_ListenForOwnedTagChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTagContainer& OwnedTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AsyncTaskOwnedTagChanged.ListenForOwnedTagChange");

	UAsyncTaskOwnedTagChanged_ListenForOwnedTagChange_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.OwnedTags = OwnedTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AsyncTaskOwnedTagChanged.EndTask
// (Final, Native, Public, BlueprintCallable)
void UAsyncTaskOwnedTagChanged::EndTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AsyncTaskOwnedTagChanged.EndTask");

	UAsyncTaskOwnedTagChanged_EndTask_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AsyncTaskEffectStackChanged.ListenForGameplayEffectStackChange
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag            EffectGameplayTag              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncTaskEffectStackChanged* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAsyncTaskEffectStackChanged* UAsyncTaskEffectStackChanged::STATIC_ListenForGameplayEffectStackChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& EffectGameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AsyncTaskEffectStackChanged.ListenForGameplayEffectStackChange");

	UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.EffectGameplayTag = EffectGameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AsyncTaskEffectStackChanged.EndTask
// (Final, Native, Private, BlueprintCallable)
void UAsyncTaskEffectStackChanged::EndTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AsyncTaskEffectStackChanged.EndTask");

	UAsyncTaskEffectStackChanged_EndTask_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AsyncTaskCooldownChanged.ListenForCooldownChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   CooldownTags                   (Parm, NativeAccessSpecifierPublic)
// bool                           UseServerCooldown              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncTaskCooldownChanged* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAsyncTaskCooldownChanged* UAsyncTaskCooldownChanged::STATIC_ListenForCooldownChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTagContainer& CooldownTags, bool UseServerCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AsyncTaskCooldownChanged.ListenForCooldownChange");

	UAsyncTaskCooldownChanged_ListenForCooldownChange_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.CooldownTags = CooldownTags;
	params.UseServerCooldown = UseServerCooldown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AsyncTaskCooldownChanged.EndTask
// (Final, Native, Public, BlueprintCallable)
void UAsyncTaskCooldownChanged::EndTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AsyncTaskCooldownChanged.EndTask");

	UAsyncTaskCooldownChanged_EndTask_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AsyncTaskAttributeChanged.ListenForAttributesChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FGameplayAttribute> Attributes                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UAsyncTaskAttributeChanged* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAsyncTaskAttributeChanged* UAsyncTaskAttributeChanged::STATIC_ListenForAttributesChange(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FGameplayAttribute> Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AsyncTaskAttributeChanged.ListenForAttributesChange");

	UAsyncTaskAttributeChanged_ListenForAttributesChange_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AsyncTaskAttributeChanged.ListenForAttributeChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute      Attribute                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncTaskAttributeChanged* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAsyncTaskAttributeChanged* UAsyncTaskAttributeChanged::STATIC_ListenForAttributeChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AsyncTaskAttributeChanged.ListenForAttributeChange");

	UAsyncTaskAttributeChanged_ListenForAttributeChange_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AsyncTaskAttributeChanged.EndTask
// (Final, Native, Public, BlueprintCallable)
void UAsyncTaskAttributeChanged::EndTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AsyncTaskAttributeChanged.EndTask");

	UAsyncTaskAttributeChanged_EndTask_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGWeapon.ServerNotifyMiss
// (Net, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FHitResult              Impact                         (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                 Origin                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGWeapon::ServerNotifyMiss(const struct FHitResult& Impact, const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGWeapon.ServerNotifyMiss");

	AAGWeapon_ServerNotifyMiss_Params params;
	params.Impact = Impact;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGWeapon.ServerNotifyHit
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FHitResult              Impact                         (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector_NetQuantizeNormal ShootDir                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGWeapon::ServerNotifyHit(const struct FHitResult& Impact, const struct FVector_NetQuantizeNormal& ShootDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGWeapon.ServerNotifyHit");

	AAGWeapon_ServerNotifyHit_Params params;
	params.Impact = Impact;
	params.ShootDir = ShootDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGWeapon.RegenAmmo
// (Final, Native, Protected)
void AAGWeapon::RegenAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGWeapon.RegenAmmo");

	AAGWeapon_RegenAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGWeapon.OnRep_HitNotify
// (Final, Native, Protected)
void AAGWeapon::OnRep_HitNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGWeapon.OnRep_HitNotify");

	AAGWeapon_OnRep_HitNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGTowerTarget.OnHealthModified
// (Final, Native, Protected)
// Parameters:
// float                          NewHealth                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OldHealth                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGTowerTarget::OnHealthModified(float NewHealth, float OldHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGTowerTarget.OnHealthModified");

	AAGTowerTarget_OnHealthModified_Params params;
	params.NewHealth = NewHealth;
	params.OldHealth = OldHealth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGTowerBase.SpawnTarget
// (Final, Native, Protected)
void AAGTowerBase::SpawnTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGTowerBase.SpawnTarget");

	AAGTowerBase_SpawnTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGTowerBase.ShootPlayer
// (Final, Native, Public)
// Parameters:
// class AAGCharacterBase*        Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGTowerBase::ShootPlayer(class AAGCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGTowerBase.ShootPlayer");

	AAGTowerBase_ShootPlayer_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGTowerBase.ShootBestTarget
// (Final, Native, Public)
void AAGTowerBase::ShootBestTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGTowerBase.ShootBestTarget");

	AAGTowerBase_ShootBestTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGTowerBase.SetTowerGlow
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bNewEnabled                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGTowerBase::SetTowerGlow(bool bNewEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGTowerBase.SetTowerGlow");

	AAGTowerBase_SetTowerGlow_Params params;
	params.bNewEnabled = bNewEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGTowerBase.RespawnMissingTargets
// (Final, Native, Public)
void AAGTowerBase::RespawnMissingTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGTowerBase.RespawnMissingTargets");

	AAGTowerBase_RespawnMissingTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGTowerBase.OnRep_bShieldEnabled
// (Final, Native, Protected)
void AAGTowerBase::OnRep_bShieldEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGTowerBase.OnRep_bShieldEnabled");

	AAGTowerBase_OnRep_bShieldEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGTowerBase.OnRep_bIsDestroyed
// (Final, Native, Protected)
void AAGTowerBase::OnRep_bIsDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGTowerBase.OnRep_bIsDestroyed");

	AAGTowerBase_OnRep_bIsDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGTowerBase.OnDeath
// (Final, Native, Protected)
// Parameters:
// class AActor*                  KilledActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGTowerBase::OnDeath(class AActor* KilledActor, class AController* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGTowerBase.OnDeath");

	AAGTowerBase_OnDeath_Params params;
	params.KilledActor = KilledActor;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGTowerBase.EnemyLeftAggroRadius
// (Final, Native, Public)
// Parameters:
// class AActor*                  EnemyActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGTowerBase::EnemyLeftAggroRadius(class AActor* EnemyActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGTowerBase.EnemyLeftAggroRadius");

	AAGTowerBase_EnemyLeftAggroRadius_Params params;
	params.EnemyActor = EnemyActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGTowerBase.EnemyEnteredAggroRadius
// (Final, Native, Public)
// Parameters:
// class AActor*                  EnemyActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGTowerBase::EnemyEnteredAggroRadius(class AActor* EnemyActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGTowerBase.EnemyEnteredAggroRadius");

	AAGTowerBase_EnemyEnteredAggroRadius_Params params;
	params.EnemyActor = EnemyActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGTowerBase.BPPlayTowerDestroyedEffects
// (Event, Public, BlueprintEvent)
void AAGTowerBase::BPPlayTowerDestroyedEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGTowerBase.BPPlayTowerDestroyedEffects");

	AAGTowerBase_BPPlayTowerDestroyedEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGStatsSubsystem.GetTimeLeftInCurrentSeason
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime               CurrentSeasonEndDateTime       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAGStatsSubsystem::GetTimeLeftInCurrentSeason(const struct FDateTime& CurrentSeasonEndDateTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGStatsSubsystem.GetTimeLeftInCurrentSeason");

	UAGStatsSubsystem_GetTimeLeftInCurrentSeason_Params params;
	params.CurrentSeasonEndDateTime = CurrentSeasonEndDateTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGStatsSubsystem.GetSeasonInfo
// (Final, Native, Public, BlueprintCallable)
void UAGStatsSubsystem::GetSeasonInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGStatsSubsystem.GetSeasonInfo");

	UAGStatsSubsystem_GetSeasonInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGStatsSubsystem.GetPreviousPlayerStatsFromServer
// (Final, Native, Public, BlueprintCallable)
void UAGStatsSubsystem::GetPreviousPlayerStatsFromServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGStatsSubsystem.GetPreviousPlayerStatsFromServer");

	UAGStatsSubsystem_GetPreviousPlayerStatsFromServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGStatsSubsystem.GetPlayerStatsFromServer
// (Final, Native, Public, BlueprintCallable)
void UAGStatsSubsystem::GetPlayerStatsFromServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGStatsSubsystem.GetPlayerStatsFromServer");

	UAGStatsSubsystem_GetPlayerStatsFromServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGStatics.ReplaceTableReferenceStringsWithCorrespondingValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCurveTable*             CurveTable                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   Text                           (Parm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UAGStatics::STATIC_ReplaceTableReferenceStringsWithCorrespondingValue(class UCurveTable* CurveTable, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGStatics.ReplaceTableReferenceStringsWithCorrespondingValue");

	UAGStatics_ReplaceTableReferenceStringsWithCorrespondingValue_Params params;
	params.CurveTable = CurveTable;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGStatics.RemoveAllLowercase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 inString                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAGStatics::STATIC_RemoveAllLowercase(const struct FString& inString)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGStatics.RemoveAllLowercase");

	UAGStatics_RemoveAllLowercase_Params params;
	params.inString = inString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGStatics.IsSameTeam
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ActorA                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ActorB                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAGStatics::STATIC_IsSameTeam(class AActor* ActorA, class AActor* ActorB)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGStatics.IsSameTeam");

	UAGStatics_IsSameTeam_Params params;
	params.ActorA = ActorA;
	params.ActorB = ActorB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGStatics.IsRedTeam
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TestActor                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAGStatics::STATIC_IsRedTeam(class AActor* TestActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGStatics.IsRedTeam");

	UAGStatics_IsRedTeam_Params params;
	params.TestActor = TestActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGStatics.IsEffectSpecHandleValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpecHandle EffectSpecHandle               (Parm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAGStatics::STATIC_IsEffectSpecHandleValid(const struct FGameplayEffectSpecHandle& EffectSpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGStatics.IsEffectSpecHandleValid");

	UAGStatics_IsEffectSpecHandleValid_Params params;
	params.EffectSpecHandle = EffectSpecHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGStatics.IsChargeEffect
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGameplayEffect*         GameplayEffect                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAGStatics::STATIC_IsChargeEffect(class UGameplayEffect* GameplayEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGStatics.IsChargeEffect");

	UAGStatics_IsChargeEffect_Params params;
	params.GameplayEffect = GameplayEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGStatics.GetHandleFromAbilitySpec
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilitySpec    AbilitySpec                    (Parm, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGameplayAbilitySpecHandle UAGStatics::STATIC_GetHandleFromAbilitySpec(const struct FGameplayAbilitySpec& AbilitySpec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGStatics.GetHandleFromAbilitySpec");

	UAGStatics_GetHandleFromAbilitySpec_Params params;
	params.AbilitySpec = AbilitySpec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGStatics.GetGameDefaultMapName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAGStatics::STATIC_GetGameDefaultMapName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGStatics.GetGameDefaultMapName");

	UAGStatics_GetGameDefaultMapName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGStatics.GetEffectSpecDuration
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpec     EffectSpec                     (Parm, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAGStatics::STATIC_GetEffectSpecDuration(const struct FGameplayEffectSpec& EffectSpec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGStatics.GetEffectSpecDuration");

	UAGStatics_GetEffectSpecDuration_Params params;
	params.EffectSpec = EffectSpec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGStatics.GetCurrentTowerForTeam
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWorld*                  World                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsRedTeam                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAGTowerBase*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AAGTowerBase* UAGStatics::STATIC_GetCurrentTowerForTeam(class UWorld* World, bool bIsRedTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGStatics.GetCurrentTowerForTeam");

	UAGStatics_GetCurrentTowerForTeam_Params params;
	params.World = World;
	params.bIsRedTeam = bIsRedTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGStatics.GetAbilityActivationBlockedTags
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilitySpec    AbilitySpec                    (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FGameplayTagContainer UAGStatics::STATIC_GetAbilityActivationBlockedTags(const struct FGameplayAbilitySpec& AbilitySpec)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGStatics.GetAbilityActivationBlockedTags");

	UAGStatics_GetAbilityActivationBlockedTags_Params params;
	params.AbilitySpec = AbilitySpec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGStatics.DrawDebugSphereShippingIncluded
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Center                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Segments                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            LineColor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGStatics::STATIC_DrawDebugSphereShippingIncluded(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int Segments, const struct FLinearColor& LineColor, float Duration, float Thickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGStatics.DrawDebugSphereShippingIncluded");

	UAGStatics_DrawDebugSphereShippingIncluded_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Center = Center;
	params.Radius = Radius;
	params.Segments = Segments;
	params.LineColor = LineColor;
	params.Duration = Duration;
	params.Thickness = Thickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.TrySwapAbilities
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EAGAbilityInputID              AbilityA                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EAGAbilityInputID              AbilityB                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AAGPlayerState::TrySwapAbilities(EAGAbilityInputID AbilityA, EAGAbilityInputID AbilityB)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.TrySwapAbilities");

	AAGPlayerState_TrySwapAbilities_Params params;
	params.AbilityA = AbilityA;
	params.AbilityB = AbilityB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGPlayerState.TryBuyAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  AbilityToBuy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AAGPlayerState::TryBuyAbility(class UClass* AbilityToBuy)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.TryBuyAbility");

	AAGPlayerState_TryBuyAbility_Params params;
	params.AbilityToBuy = AbilityToBuy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGPlayerState.Suicide
// (Final, Native, Public, BlueprintCallable)
void AAGPlayerState::Suicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.Suicide");

	AAGPlayerState_Suicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.ServerTrySwapAbilities
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// EAGAbilityInputID              AbilityA                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EAGAbilityInputID              AbilityB                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGPlayerState::ServerTrySwapAbilities(EAGAbilityInputID AbilityA, EAGAbilityInputID AbilityB)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.ServerTrySwapAbilities");

	AAGPlayerState_ServerTrySwapAbilities_Params params;
	params.AbilityA = AbilityA;
	params.AbilityB = AbilityB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.ServerTryBuyAbility
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UClass*                  AbilityToBuy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGPlayerState::ServerTryBuyAbility(class UClass* AbilityToBuy)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.ServerTryBuyAbility");

	AAGPlayerState_ServerTryBuyAbility_Params params;
	params.AbilityToBuy = AbilityToBuy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.ResetScore
// (Final, Native, Public, BlueprintCallable)
void AAGPlayerState::ResetScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.ResetScore");

	AAGPlayerState_ResetScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.OnRep_ReplicatedPurchasedAbilities
// (Final, Native, Public)
void AAGPlayerState::OnRep_ReplicatedPurchasedAbilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.OnRep_ReplicatedPurchasedAbilities");

	AAGPlayerState_OnRep_ReplicatedPurchasedAbilities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.OnRep_Gold
// (Final, Native, Public)
// Parameters:
// int                            OldGold                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGPlayerState::OnRep_Gold(int OldGold)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.OnRep_Gold");

	AAGPlayerState_OnRep_Gold_Params params;
	params.OldGold = OldGold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.OnRep_ConnectedGameSessionId
// (Final, Native, Public)
// Parameters:
// struct FString                 OldGameSessionId               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGPlayerState::OnRep_ConnectedGameSessionId(const struct FString& OldGameSessionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.OnRep_ConnectedGameSessionId");

	AAGPlayerState_OnRep_ConnectedGameSessionId_Params params;
	params.OldGameSessionId = OldGameSessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.OnRep_ConnectedFleetId
// (Final, Native, Public)
// Parameters:
// struct FString                 OldFleetId                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGPlayerState::OnRep_ConnectedFleetId(const struct FString& OldFleetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.OnRep_ConnectedFleetId");

	AAGPlayerState_OnRep_ConnectedFleetId_Params params;
	params.OldFleetId = OldFleetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.OnMainMenuStatsReceived
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           Success                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FStatsError             StatError                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameStatsPayload       ReceivedGameStats              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AAGPlayerState::OnMainMenuStatsReceived(bool Success, const struct FStatsError& StatError, const struct FGameStatsPayload& ReceivedGameStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.OnMainMenuStatsReceived");

	AAGPlayerState_OnMainMenuStatsReceived_Params params;
	params.Success = Success;
	params.StatError = StatError;
	params.ReceivedGameStats = ReceivedGameStats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.OnEndGameStatsReceived
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           Success                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FStatsError             StatError                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FGameStatsPayload> ReceivedGameStats              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AAGPlayerState::OnEndGameStatsReceived(bool Success, const struct FStatsError& StatError, TArray<struct FGameStatsPayload> ReceivedGameStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.OnEndGameStatsReceived");

	AAGPlayerState_OnEndGameStatsReceived_Params params;
	params.Success = Success;
	params.StatError = StatError;
	params.ReceivedGameStats = ReceivedGameStats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.OnCustomGameEndReceieved
// (Final, Native, Public)
void AAGPlayerState::OnCustomGameEndReceieved()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.OnCustomGameEndReceieved");

	AAGPlayerState_OnCustomGameEndReceieved_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.GetUniqueIdAsString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString AAGPlayerState::GetUniqueIdAsString()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.GetUniqueIdAsString");

	AAGPlayerState_GetUniqueIdAsString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGPlayerState.GetEndGameStatsByPlayerId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InPlayerId                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameStatsPayload       ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FGameStatsPayload AAGPlayerState::GetEndGameStatsByPlayerId(const struct FString& InPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.GetEndGameStatsByPlayerId");

	AAGPlayerState_GetEndGameStatsByPlayerId_Params params;
	params.InPlayerId = InPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGPlayerState.ClientShowScore
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// float                          Points                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   Text                           (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void AAGPlayerState::ClientShowScore(float Points, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.ClientShowScore");

	AAGPlayerState_ClientShowScore_Params params;
	params.Points = Points;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.BPShowScore
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Points                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AAGPlayerState::BPShowScore(float Points, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.BPShowScore");

	AAGPlayerState_BPShowScore_Params params;
	params.Points = Points;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.BPShowDebuffIcon
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAGGameplayEffect*       AppliedEffect                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGPlayerState::BPShowDebuffIcon(class UAGGameplayEffect* AppliedEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.BPShowDebuffIcon");

	AAGPlayerState_BPShowDebuffIcon_Params params;
	params.AppliedEffect = AppliedEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.AwardGold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Amount                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGPlayerState::AwardGold(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.AwardGold");

	AAGPlayerState_AwardGold_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.AddScorePoints
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// float                          Points                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   Reason                         (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void AAGPlayerState::AddScorePoints(float Points, const struct FText& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.AddScorePoints");

	AAGPlayerState_AddScorePoints_Params params;
	params.Points = Points;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.AddHealing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGPlayerState::AddHealing(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.AddHealing");

	AAGPlayerState_AddHealing_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.AddDeath
// (Final, Native, Public, BlueprintCallable)
void AAGPlayerState::AddDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.AddDeath");

	AAGPlayerState_AddDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.AddDamageTaken
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGPlayerState::AddDamageTaken(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.AddDamageTaken");

	AAGPlayerState_AddDamageTaken_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerState.AddDamage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGPlayerState::AddDamage(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerState.AddDamage");

	AAGPlayerState_AddDamage_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.SuicidePoints
// (Final, Native, Public)
void AAGPlayerController::SuicidePoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.SuicidePoints");

	AAGPlayerController_SuicidePoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.ShowRespawnScreen
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          RespawnTimer                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGPlayerController::ShowRespawnScreen(float RespawnTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.ShowRespawnScreen");

	AAGPlayerController_ShowRespawnScreen_Params params;
	params.RespawnTimer = RespawnTimer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.ShowDamageNumber
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class AAGCharacterBase*        Avatar                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAGDamageNumber         DamageNumber                   (Parm, NativeAccessSpecifierPublic)
void AAGPlayerController::ShowDamageNumber(class AAGCharacterBase* Avatar, const struct FAGDamageNumber& DamageNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.ShowDamageNumber");

	AAGPlayerController_ShowDamageNumber_Params params;
	params.Avatar = Avatar;
	params.DamageNumber = DamageNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.ServerSetIsPlaying
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// bool                           bCond                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGPlayerController::ServerSetIsPlaying(bool bCond)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.ServerSetIsPlaying");

	AAGPlayerController_ServerSetIsPlaying_Params params;
	params.bCond = bCond;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.ServerAddToReadyToSpawnList
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// class APlayerController*       ReadyPC                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGPlayerController::ServerAddToReadyToSpawnList(class APlayerController* ReadyPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.ServerAddToReadyToSpawnList");

	AAGPlayerController_ServerAddToReadyToSpawnList_Params params;
	params.ReadyPC = ReadyPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.ReportPlayer
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// struct FString                 PlayerToReport                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReportCategory                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGPlayerController::ReportPlayer(const struct FString& PlayerToReport, const struct FString& ReportCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.ReportPlayer");

	AAGPlayerController_ReportPlayer_Params params;
	params.PlayerToReport = PlayerToReport;
	params.ReportCategory = ReportCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.OnGameOver
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  InstigatorPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWonGame                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGPlayerController::OnGameOver(class AActor* InstigatorPawn, bool bWonGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.OnGameOver");

	AAGPlayerController_OnGameOver_Params params;
	params.InstigatorPawn = InstigatorPawn;
	params.bWonGame = bWonGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.LoadSoundSettings
// (Event, Public, BlueprintEvent)
void AAGPlayerController::LoadSoundSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.LoadSoundSettings");

	AAGPlayerController_LoadSoundSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.LoadInputSettings
// (Event, Public, BlueprintEvent)
void AAGPlayerController::LoadInputSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.LoadInputSettings");

	AAGPlayerController_LoadInputSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.KillPawn
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
void AAGPlayerController::KillPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.KillPawn");

	AAGPlayerController_KillPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.GetTimeLeft
// (Net, Native, Event, Public, NetServer)
void AAGPlayerController::GetTimeLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.GetTimeLeft");

	AAGPlayerController_GetTimeLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.GetTime
// (Net, Native, Event, Public, NetServer, BlueprintCallable)
void AAGPlayerController::GetTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.GetTime");

	AAGPlayerController_GetTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.GetPlayerName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText AAGPlayerController::GetPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.GetPlayerName");

	AAGPlayerController_GetPlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGPlayerController.ClientUpdateJoinInProgressTime
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGPlayerController::ClientUpdateJoinInProgressTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.ClientUpdateJoinInProgressTime");

	AAGPlayerController_ClientUpdateJoinInProgressTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.ClientShowRespawnScreen
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// float                          RespawnTimer                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGPlayerController::ClientShowRespawnScreen(float RespawnTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.ClientShowRespawnScreen");

	AAGPlayerController_ClientShowRespawnScreen_Params params;
	params.RespawnTimer = RespawnTimer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.BPUpdateHealth
// (Event, Public, BlueprintEvent)
void AAGPlayerController::BPUpdateHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.BPUpdateHealth");

	AAGPlayerController_BPUpdateHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.BPShowDamageText
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DamageToDo                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWasHeadshot                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWasImmune                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGPlayerController::BPShowDamageText(float DamageToDo, bool bWasHeadshot, bool bWasImmune)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.BPShowDamageText");

	AAGPlayerController_BPShowDamageText_Params params;
	params.DamageToDo = DamageToDo;
	params.bWasHeadshot = bWasHeadshot;
	params.bWasImmune = bWasImmune;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.BPKicked
// (Event, Public, BlueprintEvent)
void AAGPlayerController::BPKicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.BPKicked");

	AAGPlayerController_BPKicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.BPCloseWidgets
// (Event, Public, BlueprintEvent)
void AAGPlayerController::BPCloseWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.BPCloseWidgets");

	AAGPlayerController_BPCloseWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.BPCloseCharacterSelection
// (Event, Public, BlueprintEvent)
void AAGPlayerController::BPCloseCharacterSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.BPCloseCharacterSelection");

	AAGPlayerController_BPCloseCharacterSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPlayerController.AddDamageNumber
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  TargetCharacter                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EDamageTextType                DamageTextType                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UTexture2D*>      EffectIcons                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AAGPlayerController::AddDamageNumber(float DamageAmount, class AActor* TargetCharacter, EDamageTextType DamageTextType, TArray<class UTexture2D*> EffectIcons)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPlayerController.AddDamageNumber");

	AAGPlayerController_AddDamageNumber_Params params;
	params.DamageAmount = DamageAmount;
	params.TargetCharacter = TargetCharacter;
	params.DamageTextType = DamageTextType;
	params.EffectIcons = EffectIcons;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPartySubsystem.SendPartyInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGPartySubsystem::SendPartyInvite(const struct FString& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPartySubsystem.SendPartyInvite");

	UAGPartySubsystem_SendPartyInvite_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPartySubsystem.LeaveCurrentParty
// (Final, Native, Public, BlueprintCallable)
void UAGPartySubsystem::LeaveCurrentParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPartySubsystem.LeaveCurrentParty");

	UAGPartySubsystem_LeaveCurrentParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPartySubsystem.IsPartyLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAGPartySubsystem::IsPartyLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPartySubsystem.IsPartyLeader");

	UAGPartySubsystem_IsPartyLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGPartySubsystem.IsInParty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAGPartySubsystem::IsInParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPartySubsystem.IsInParty");

	UAGPartySubsystem_IsInParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGPartySubsystem.GetPartyInvites
// (Final, Native, Public, BlueprintCallable)
void UAGPartySubsystem::GetPartyInvites()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPartySubsystem.GetPartyInvites");

	UAGPartySubsystem_GetPartyInvites_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPartySubsystem.GetCurrentParty
// (Final, Native, Public, BlueprintCallable)
void UAGPartySubsystem::GetCurrentParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPartySubsystem.GetCurrentParty");

	UAGPartySubsystem_GetCurrentParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPartySubsystem.CancelPartyInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PartyInviteId                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGPartySubsystem::CancelPartyInvite(const struct FString& PartyInviteId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPartySubsystem.CancelPartyInvite");

	UAGPartySubsystem_CancelPartyInvite_Params params;
	params.PartyInviteId = PartyInviteId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGPartySubsystem.AcceptPartyInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PartyInviteId                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGPartySubsystem::AcceptPartyInvite(const struct FString& PartyInviteId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGPartySubsystem.AcceptPartyInvite");

	UAGPartySubsystem_AcceptPartyInvite_Params params;
	params.PartyInviteId = PartyInviteId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGNewsFeedSubsystem.GetNewsFeedForCurrentPlayer
// (Final, Native, Public, BlueprintCallable)
void UAGNewsFeedSubsystem::GetNewsFeedForCurrentPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGNewsFeedSubsystem.GetNewsFeedForCurrentPlayer");

	UAGNewsFeedSubsystem_GetNewsFeedForCurrentPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGNewsFeedSubsystem.CreateNewsFeedTest
// (Final, Native, Public, BlueprintCallable)
void UAGNewsFeedSubsystem::CreateNewsFeedTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGNewsFeedSubsystem.CreateNewsFeedTest");

	UAGNewsFeedSubsystem_CreateNewsFeedTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGHealthComponent.OnRep_HP
// (Final, Native, Protected)
// Parameters:
// float                          OldHP                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGHealthComponent::OnRep_HP(float OldHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGHealthComponent.OnRep_HP");

	UAGHealthComponent_OnRep_HP_Params params;
	params.OldHP = OldHP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGhost.Server_SendGhostPCToTeammate
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void AAGGhost::Server_SendGhostPCToTeammate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGhost.Server_SendGhostPCToTeammate");

	AAGGhost_Server_SendGhostPCToTeammate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGhost.Server_RemoveGhostPCFromTeammate
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void AAGGhost::Server_RemoveGhostPCFromTeammate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGhost.Server_RemoveGhostPCFromTeammate");

	AAGGhost_Server_RemoveGhostPCFromTeammate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGhost.BPOnSpectateModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bFreeMode                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGGhost::BPOnSpectateModeChanged(bool bFreeMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGhost.BPOnSpectateModeChanged");

	AAGGhost_BPOnSpectateModeChanged_Params params;
	params.bFreeMode = bFreeMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameState.OnRep_PrematchTimeRemaining
// (Final, Native, Public)
void AAGGameState::OnRep_PrematchTimeRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameState.OnRep_PrematchTimeRemaining");

	AAGGameState_OnRep_PrematchTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameState.OnRep_MatchTimeSeconds
// (Final, Native, Public)
void AAGGameState::OnRep_MatchTimeSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameState.OnRep_MatchTimeSeconds");

	AAGGameState_OnRep_MatchTimeSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameState.OnRep_bIsPostMatch
// (Final, Native, Public)
void AAGGameState::OnRep_bIsPostMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameState.OnRep_bIsPostMatch");

	AAGGameState_OnRep_bIsPostMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameState.OnEndGameStatsReceived
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FStatsError             StatError                      (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FGameStatsPayload> EndGameStats                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AAGGameState::OnEndGameStatsReceived(bool Success, const struct FStatsError& StatError, TArray<struct FGameStatsPayload> EndGameStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameState.OnEndGameStatsReceived");

	AAGGameState_OnEndGameStatsReceived_Params params;
	params.Success = Success;
	params.StatError = StatError;
	params.EndGameStats = EndGameStats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameState.OnCustomGameEnded
// (Net, NetReliable, Native, Event, Public, NetClient)
void AAGGameState::OnCustomGameEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameState.OnCustomGameEnded");

	AAGGameState_OnCustomGameEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameState.IncrementMatchTimer
// (Final, Native, Public)
void AAGGameState::IncrementMatchTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameState.IncrementMatchTimer");

	AAGGameState_IncrementMatchTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameState.GetTeam
// (Final, Native, Public)
// Parameters:
// bool                           bRedTeam                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AAGPlayerController*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AAGPlayerController*> AAGGameState::GetTeam(bool bRedTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameState.GetTeam");

	AAGGameState_GetTeam_Params params;
	params.bRedTeam = bRedTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGGameState.GetBaseLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIsRedTeam                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AAGGameState::GetBaseLocation(bool bIsRedTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameState.GetBaseLocation");

	AAGGameState_GetBaseLocation_Params params;
	params.bIsRedTeam = bIsRedTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGGameState.EndGame
// (Net, NetReliable, Native, Event, Public, NetServer)
void AAGGameState::EndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameState.EndGame");

	AAGGameState_EndGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameState.CheckElapsedTime
// (Net, NetReliable, Native, Event, Public, NetServer)
void AAGGameState::CheckElapsedTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameState.CheckElapsedTime");

	AAGGameState_CheckElapsedTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameState.AddTeamPoints
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// bool                           bOnBlueTeam                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGGameState::AddTeamPoints(bool bOnBlueTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameState.AddTeamPoints");

	AAGGameState_AddTeamPoints_Params params;
	params.bOnBlueTeam = bOnBlueTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameState.AddPlayerToReadyList
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// class APlayerController*       ReadyPC                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGGameState::AddPlayerToReadyList(class APlayerController* ReadyPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameState.AddPlayerToReadyList");

	AAGGameState_AddPlayerToReadyList_Params params;
	params.ReadyPC = ReadyPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameplayCueNotify_Actor.GetNumberOfSameActiveGameplayCues
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AAGGameplayCueNotify_Actor::GetNumberOfSameActiveGameplayCues()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameplayCueNotify_Actor.GetNumberOfSameActiveGameplayCues");

	AAGGameplayCueNotify_Actor_GetNumberOfSameActiveGameplayCues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGGameplayAbility.GetActivationBlockedTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FGameplayTagContainer UAGGameplayAbility::GetActivationBlockedTags()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameplayAbility.GetActivationBlockedTags");

	UAGGameplayAbility_GetActivationBlockedTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGGameModeTest.RespondToOnActorKilled
// (Final, Native, Public)
// Parameters:
// class AActor*                  VictimActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  KillerActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*             KillerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGGameModeTest::RespondToOnActorKilled(class AActor* VictimActor, class AActor* KillerActor, class AController* KillerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameModeTest.RespondToOnActorKilled");

	AAGGameModeTest_RespondToOnActorKilled_Params params;
	params.VictimActor = VictimActor;
	params.KillerActor = KillerActor;
	params.KillerController = KillerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameModeTest.OnGameOver
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  InstigatorPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWonGame                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGGameModeTest::OnGameOver(class AActor* InstigatorPawn, bool bWonGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameModeTest.OnGameOver");

	AAGGameModeTest_OnGameOver_Params params;
	params.InstigatorPawn = InstigatorPawn;
	params.bWonGame = bWonGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameliftSubsystem.UpdatePlayersInMatchStatus
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPlayerIsInMatch               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGGameliftSubsystem::UpdatePlayersInMatchStatus(const struct FString& PlayerId, bool bPlayerIsInMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameliftSubsystem.UpdatePlayersInMatchStatus");

	UAGGameliftSubsystem_UpdatePlayersInMatchStatus_Params params;
	params.PlayerId = PlayerId;
	params.bPlayerIsInMatch = bPlayerIsInMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameliftSubsystem.StartMatchmaking
// (Final, Native, Public, BlueprintCallable)
void UAGGameliftSubsystem::StartMatchmaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameliftSubsystem.StartMatchmaking");

	UAGGameliftSubsystem_StartMatchmaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameliftSubsystem.StartCustomGame
// (Final, Native, Public, BlueprintCallable)
void UAGGameliftSubsystem::StartCustomGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameliftSubsystem.StartCustomGame");

	UAGGameliftSubsystem_StartCustomGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameliftSubsystem.ResetMatchmaking
// (Final, Native, Public, BlueprintCallable)
void UAGGameliftSubsystem::ResetMatchmaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameliftSubsystem.ResetMatchmaking");

	UAGGameliftSubsystem_ResetMatchmaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameliftSubsystem.JoinMatch
// (Final, Native, Public, BlueprintCallable)
void UAGGameliftSubsystem::JoinMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameliftSubsystem.JoinMatch");

	UAGGameliftSubsystem_JoinMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameliftSubsystem.GetMatchmakingTicket
// (Final, Native, Public, BlueprintCallable)
void UAGGameliftSubsystem::GetMatchmakingTicket()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameliftSubsystem.GetMatchmakingTicket");

	UAGGameliftSubsystem_GetMatchmakingTicket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameliftSubsystem.CancelMatchmaking
// (Final, Native, Public, BlueprintCallable)
void UAGGameliftSubsystem::CancelMatchmaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameliftSubsystem.CancelMatchmaking");

	UAGGameliftSubsystem_CancelMatchmaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameliftSubsystem.AcceptMatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDidAccept                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGGameliftSubsystem::AcceptMatch(bool bDidAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameliftSubsystem.AcceptMatch");

	UAGGameliftSubsystem_AcceptMatch_Params params;
	params.bDidAccept = bDidAccept;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameInstance.SwapAbilities
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EAGAbilityInputID              SlotA                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EAGAbilityInputID              SlotB                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSaveToDisk                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAGGameInstance::SwapAbilities(EAGAbilityInputID SlotA, EAGAbilityInputID SlotB, bool bSaveToDisk)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameInstance.SwapAbilities");

	UAGGameInstance_SwapAbilities_Params params;
	params.SlotA = SlotA;
	params.SlotB = SlotB;
	params.bSaveToDisk = bSaveToDisk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGGameInstance.SetUserInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InUsername                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InUserId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGGameInstance::SetUserInfo(const struct FString& InUsername, const struct FString& InUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameInstance.SetUserInfo");

	UAGGameInstance_SetUserInfo_Params params;
	params.InUsername = InUsername;
	params.InUserId = InUserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameInstance.SetAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EAGAbilityInputID              Slot                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  Ability                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSaveToDisk                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAGGameInstance::SetAbility(EAGAbilityInputID Slot, class UClass* Ability, bool bSaveToDisk)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameInstance.SetAbility");

	UAGGameInstance_SetAbility_Params params;
	params.Slot = Slot;
	params.Ability = Ability;
	params.bSaveToDisk = bSaveToDisk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGGameInstance.SaveGame
// (Final, Native, Public, BlueprintCallable)
void UAGGameInstance::SaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameInstance.SaveGame");

	UAGGameInstance_SaveGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameInstance.LoadGame
// (Final, Native, Public, BlueprintCallable)
void UAGGameInstance::LoadGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameInstance.LoadGame");

	UAGGameInstance_LoadGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameInstance.HandleDowntimeNotification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasStarted                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGGameInstance::HandleDowntimeNotification(const struct FString& Message, bool bHasStarted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameInstance.HandleDowntimeNotification");

	UAGGameInstance_HandleDowntimeNotification_Params params;
	params.Message = Message;
	params.bHasStarted = bHasStarted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameInstance.ExitGame
// (Final, Native, Public, BlueprintCallable)
void UAGGameInstance::ExitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameInstance.ExitGame");

	UAGGameInstance_ExitGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameInstance.BPRemoveSettingsMenu
// (Event, Public, BlueprintEvent)
void UAGGameInstance::BPRemoveSettingsMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameInstance.BPRemoveSettingsMenu");

	UAGGameInstance_BPRemoveSettingsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGDamageTextWidgetComponent.SetDamageText
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EDamageTextType                DamageTextType                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GoldAmount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              DebuffIcon                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGDamageTextWidgetComponent::SetDamageText(float Damage, EDamageTextType DamageTextType, int GoldAmount, class UTexture2D* DebuffIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGDamageTextWidgetComponent.SetDamageText");

	UAGDamageTextWidgetComponent_SetDamageText_Params params;
	params.Damage = Damage;
	params.DamageTextType = DamageTextType;
	params.GoldAmount = GoldAmount;
	params.DebuffIcon = DebuffIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGDamageTextWidgetComponent.AddDebuffIcon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  DebuffImage                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGDamageTextWidgetComponent::AddDebuffIcon(class UImage* DebuffImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGDamageTextWidgetComponent.AddDebuffIcon");

	UAGDamageTextWidgetComponent_AddDebuffIcon_Params params;
	params.DebuffImage = DebuffImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCustomGameSubsystem.StartCustomLobbyGameSessionPlacement
// (Final, Native, Public, BlueprintCallable)
void UAGCustomGameSubsystem::StartCustomLobbyGameSessionPlacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCustomGameSubsystem.StartCustomLobbyGameSessionPlacement");

	UAGCustomGameSubsystem_StartCustomLobbyGameSessionPlacement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCustomGameSubsystem.SetPlayerIsReady
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsReady                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGCustomGameSubsystem::SetPlayerIsReady(bool bIsReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCustomGameSubsystem.SetPlayerIsReady");

	UAGCustomGameSubsystem_SetPlayerIsReady_Params params;
	params.bIsReady = bIsReady;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCustomGameSubsystem.SendCustomGameInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGCustomGameSubsystem::SendCustomGameInvite(const struct FString& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCustomGameSubsystem.SendCustomGameInvite");

	UAGCustomGameSubsystem_SendCustomGameInvite_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCustomGameSubsystem.LeaveCurrentGame
// (Final, Native, Public, BlueprintCallable)
void UAGCustomGameSubsystem::LeaveCurrentGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCustomGameSubsystem.LeaveCurrentGame");

	UAGCustomGameSubsystem_LeaveCurrentGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCustomGameSubsystem.KickPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PlayerId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGCustomGameSubsystem::KickPlayer(const struct FString& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCustomGameSubsystem.KickPlayer");

	UAGCustomGameSubsystem_KickPlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCustomGameSubsystem.GetIsReady
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAGCustomGameSubsystem::GetIsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCustomGameSubsystem.GetIsReady");

	UAGCustomGameSubsystem_GetIsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGCustomGameSubsystem.GetIsLeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAGCustomGameSubsystem::GetIsLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCustomGameSubsystem.GetIsLeader");

	UAGCustomGameSubsystem_GetIsLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGCustomGameSubsystem.GetIncomingInvites
// (Final, Native, Public, BlueprintCallable)
void UAGCustomGameSubsystem::GetIncomingInvites()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCustomGameSubsystem.GetIncomingInvites");

	UAGCustomGameSubsystem_GetIncomingInvites_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCustomGameSubsystem.GetCurrentGame
// (Final, Native, Public, BlueprintCallable)
void UAGCustomGameSubsystem::GetCurrentGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCustomGameSubsystem.GetCurrentGame");

	UAGCustomGameSubsystem_GetCurrentGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCustomGameSubsystem.DescribeGameSessionPlacement
// (Final, Native, Public, BlueprintCallable)
void UAGCustomGameSubsystem::DescribeGameSessionPlacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCustomGameSubsystem.DescribeGameSessionPlacement");

	UAGCustomGameSubsystem_DescribeGameSessionPlacement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCustomGameSubsystem.CreateCustomGame
// (Final, Native, Public, BlueprintCallable)
void UAGCustomGameSubsystem::CreateCustomGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCustomGameSubsystem.CreateCustomGame");

	UAGCustomGameSubsystem_CreateCustomGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCustomGameSubsystem.ChangeTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EFCustomGameTeam>  NewTeam                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGCustomGameSubsystem::ChangeTeam(TEnumAsByte<EFCustomGameTeam> NewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCustomGameSubsystem.ChangeTeam");

	UAGCustomGameSubsystem_ChangeTeam_Params params;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCustomGameSubsystem.CancelOutgoingInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InviteId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGCustomGameSubsystem::CancelOutgoingInvite(const struct FString& InviteId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCustomGameSubsystem.CancelOutgoingInvite");

	UAGCustomGameSubsystem_CancelOutgoingInvite_Params params;
	params.InviteId = InviteId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCustomGameSubsystem.CancelInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InviteId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGCustomGameSubsystem::CancelInvite(const struct FString& InviteId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCustomGameSubsystem.CancelInvite");

	UAGCustomGameSubsystem_CancelInvite_Params params;
	params.InviteId = InviteId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCustomGameSubsystem.CancelIncomingInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InviteId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGCustomGameSubsystem::CancelIncomingInvite(const struct FString& InviteId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCustomGameSubsystem.CancelIncomingInvite");

	UAGCustomGameSubsystem_CancelIncomingInvite_Params params;
	params.InviteId = InviteId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCustomGameSubsystem.AllPlayersReady
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAGCustomGameSubsystem::AllPlayersReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCustomGameSubsystem.AllPlayersReady");

	UAGCustomGameSubsystem_AllPlayersReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGCustomGameSubsystem.AcceptInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InviteId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGCustomGameSubsystem::AcceptInvite(const struct FString& InviteId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCustomGameSubsystem.AcceptInvite");

	UAGCustomGameSubsystem_AcceptInvite_Params params;
	params.InviteId = InviteId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameMode.TerminateGame
// (Final, Native, Private)
void AAGGameMode::TerminateGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.TerminateGame");

	AAGGameMode_TerminateGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameMode.SpawnMinions
// (Final, Native, Protected)
void AAGGameMode::SpawnMinions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.SpawnMinions");

	AAGGameMode_SpawnMinions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameMode.ResetSpawns
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
void AAGGameMode::ResetSpawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.ResetSpawns");

	AAGGameMode_ResetSpawns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameMode.QuitIfNotInEditor
// (Net, NetReliable, Native, Event, Protected, NetServer, BlueprintCallable)
void AAGGameMode::QuitIfNotInEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.QuitIfNotInEditor");

	AAGGameMode_QuitIfNotInEditor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameMode.QueueEndGame
// (Final, Native, Public)
// Parameters:
// bool                           bGameEndedEarly                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bServerShutdownEarly           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGGameMode::QueueEndGame(bool bGameEndedEarly, bool bServerShutdownEarly)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.QueueEndGame");

	AAGGameMode_QueueEndGame_Params params;
	params.bGameEndedEarly = bGameEndedEarly;
	params.bServerShutdownEarly = bServerShutdownEarly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameMode.OnServerToBeTerminated
// (Final, Native, Public)
void AAGGameMode::OnServerToBeTerminated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.OnServerToBeTerminated");

	AAGGameMode_OnServerToBeTerminated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameMode.OnServerHealthCheck
// (Final, Native, Public)
void AAGGameMode::OnServerHealthCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.OnServerHealthCheck");

	AAGGameMode_OnServerHealthCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameMode.Logout
// (Native, Protected, BlueprintCallable)
// Parameters:
// class AController*             Exiting                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGGameMode::Logout(class AController* Exiting)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.Logout");

	AAGGameMode_Logout_Params params;
	params.Exiting = Exiting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameMode.KickAllPlayers
// (Net, NetReliable, Native, Event, Protected, NetServer, BlueprintCallable)
void AAGGameMode::KickAllPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.KickAllPlayers");

	AAGGameMode_KickAllPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameMode.InitPlayerSpawns
// (Final, Native, Protected, BlueprintCallable)
void AAGGameMode::InitPlayerSpawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.InitPlayerSpawns");

	AAGGameMode_InitPlayerSpawns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameMode.HandleRageQuit
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class AController*             Exiting                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGGameMode::HandleRageQuit(class AController* Exiting)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.HandleRageQuit");

	AAGGameMode_HandleRageQuit_Params params;
	params.Exiting = Exiting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameMode.GetMinionPlayerStarts
// (Final, Native, Protected)
// Parameters:
// bool                           bIsRedTeam                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AAGMinionPlayerStart*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AAGMinionPlayerStart*> AAGGameMode::GetMinionPlayerStarts(bool bIsRedTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.GetMinionPlayerStarts");

	AAGGameMode_GetMinionPlayerStarts_Params params;
	params.bIsRedTeam = bIsRedTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGGameMode.EndGameQueueExpired
// (Final, Native, Public)
void AAGGameMode::EndGameQueueExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.EndGameQueueExpired");

	AAGGameMode_EndGameQueueExpired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameMode.EndGame
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bRedTeamWon                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGGameMode::EndGame(bool bRedTeamWon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.EndGame");

	AAGGameMode_EndGame_Params params;
	params.bRedTeamWon = bRedTeamWon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameMode.CheckIfPlayersJoined
// (Final, Native, Private)
void AAGGameMode::CheckIfPlayersJoined()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.CheckIfPlayersJoined");

	AAGGameMode_CheckIfPlayersJoined_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameMode.CheckIfGameSessionActivated
// (Final, Native, Private)
void AAGGameMode::CheckIfGameSessionActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.CheckIfGameSessionActivated");

	AAGGameMode_CheckIfGameSessionActivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameMode.AutoWin
// (Final, Native, Public)
void AAGGameMode::AutoWin()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.AutoWin");

	AAGGameMode_AutoWin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameMode.ApplyRespawnMultipliers
// (Final, Native, Protected)
void AAGGameMode::ApplyRespawnMultipliers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.ApplyRespawnMultipliers");

	AAGGameMode_ApplyRespawnMultipliers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameMode.AddToDamageTaken
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DamageDone                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGGameMode::AddToDamageTaken(class AActor* DamagedActor, float DamageDone)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.AddToDamageTaken");

	AAGGameMode_AddToDamageTaken_Params params;
	params.DamagedActor = DamagedActor;
	params.DamageDone = DamageDone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGGameMode.AddToDamageDone
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// class AAGPlayerState*          InPlayerState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DamageDone                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGGameMode::AddToDamageDone(class AAGPlayerState* InPlayerState, float DamageDone)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGGameMode.AddToDamageDone");

	AAGGameMode_AddToDamageDone_Params params;
	params.InPlayerState = InPlayerState;
	params.DamageDone = DamageDone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCheatManager.Cheat.OpenShop
// (Final, Exec, Native, Private)
void UAGCheatManager::Cheat_OpenShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCheatManager.Cheat.OpenShop");

	UAGCheatManager_Cheat_OpenShop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCheatManager.Cheat.Gold
// (Final, Exec, Native, Private)
// Parameters:
// int                            Gold                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGCheatManager::Cheat_Gold(int Gold)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCheatManager.Cheat.Gold");

	UAGCheatManager_Cheat_Gold_Params params;
	params.Gold = Gold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGChatSubsystem.ShowChatBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 OtherPlayerId                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OtherPlayerUsername            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGChatSubsystem::ShowChatBox(const struct FString& OtherPlayerId, const struct FString& OtherPlayerUsername)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGChatSubsystem.ShowChatBox");

	UAGChatSubsystem_ShowChatBox_Params params;
	params.OtherPlayerId = OtherPlayerId;
	params.OtherPlayerUsername = OtherPlayerUsername;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGChatSubsystem.SendChatMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ToUserId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MessageText                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGChatSubsystem::SendChatMessage(const struct FString& ToUserId, const struct FString& MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGChatSubsystem.SendChatMessage");

	UAGChatSubsystem_SendChatMessage_Params params;
	params.ToUserId = ToUserId;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGChatSubsystem.GetChatConversationsFromServer
// (Final, Native, Public, BlueprintCallable)
void UAGChatSubsystem::GetChatConversationsFromServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGChatSubsystem.GetChatConversationsFromServer");

	UAGChatSubsystem_GetChatConversationsFromServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGChatSubsystem.GetChatConversationById
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ChatConversationId             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FChatConversation       ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FChatConversation UAGChatSubsystem::GetChatConversationById(const struct FString& ChatConversationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGChatSubsystem.GetChatConversationById");

	UAGChatSubsystem_GetChatConversationById_Params params;
	params.ChatConversationId = ChatConversationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGChatSubsystem.CreateChatMessage
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 FromUserId                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 FromUsername                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64_t                        MessageTimeStamp               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MessageText                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FChatMessage            ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FChatMessage UAGChatSubsystem::CreateChatMessage(const struct FString& FromUserId, const struct FString& FromUsername, int64_t MessageTimeStamp, const struct FString& MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGChatSubsystem.CreateChatMessage");

	UAGChatSubsystem_CreateChatMessage_Params params;
	params.FromUserId = FromUserId;
	params.FromUsername = FromUsername;
	params.MessageTimeStamp = MessageTimeStamp;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGCharacterMovementComponent.SetSlowWalking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSlowWalk                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGCharacterMovementComponent::SetSlowWalking(bool bSlowWalk)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacterMovementComponent.SetSlowWalking");

	UAGCharacterMovementComponent_SetSlowWalking_Params params;
	params.bSlowWalk = bSlowWalk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacterBase.SetCanMove
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// bool                           CanMove                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGCharacterBase::SetCanMove(bool CanMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacterBase.SetCanMove");

	AAGCharacterBase_SetCanMove_Params params;
	params.CanMove = CanMove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacterBase.Server_ShowDamageNumberOnSpectators
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class AAGCharacterBase*        DamagedCharacter               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAGDamageNumber         DamageNumber                   (Parm, NativeAccessSpecifierPublic)
void AAGCharacterBase::Server_ShowDamageNumberOnSpectators(class AAGCharacterBase* DamagedCharacter, const struct FAGDamageNumber& DamageNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacterBase.Server_ShowDamageNumberOnSpectators");

	AAGCharacterBase_Server_ShowDamageNumberOnSpectators_Params params;
	params.DamagedCharacter = DamagedCharacter;
	params.DamageNumber = DamageNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacterBase.IsDead
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AAGCharacterBase::IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacterBase.IsDead");

	AAGCharacterBase_IsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGCharacterBase.IsAlive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AAGCharacterBase::IsAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacterBase.IsAlive");

	AAGCharacterBase_IsAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGCharacterBase.GetMoveSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AAGCharacterBase::GetMoveSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacterBase.GetMoveSpeed");

	AAGCharacterBase_GetMoveSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGCharacter.StunTagChanged
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTag            CallbackTag                    (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NewCount                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGCharacter::StunTagChanged(const struct FGameplayTag& CallbackTag, int NewCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.StunTagChanged");

	AAGCharacter_StunTagChanged_Params params;
	params.CallbackTag = CallbackTag;
	params.NewCount = NewCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.SpawnWeapon
// (Final, Native, Protected)
void AAGCharacter::SpawnWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.SpawnWeapon");

	AAGCharacter_SpawnWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.ShowHitIndicator
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FVector                 DamagerLocation                (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGCharacter::ShowHitIndicator(const struct FVector& DamagerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.ShowHitIndicator");

	AAGCharacter_ShowHitIndicator_Params params;
	params.DamagerLocation = DamagerLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.SetupPlayerCard
// (Event, Protected, BlueprintEvent)
void AAGCharacter::SetupPlayerCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.SetupPlayerCard");

	AAGCharacter_SetupPlayerCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.SetLastImpact
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGCharacter::SetLastImpact(const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.SetLastImpact");

	AAGCharacter_SetLastImpact_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.ServerReload
// (Net, NetReliable, Native, Event, Public, NetServer)
void AAGCharacter::ServerReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.ServerReload");

	AAGCharacter_ServerReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.ServerGrantLoadoutAbilities
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// TArray<struct FLoadoutAbility> LoadoutAbilities               (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AAGCharacter::ServerGrantLoadoutAbilities(TArray<struct FLoadoutAbility> LoadoutAbilities)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.ServerGrantLoadoutAbilities");

	AAGCharacter_ServerGrantLoadoutAbilities_Params params;
	params.LoadoutAbilities = LoadoutAbilities;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.ServerEndWalk
// (Net, NetReliable, Native, Event, Protected, NetServer)
void AAGCharacter::ServerEndWalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.ServerEndWalk");

	AAGCharacter_ServerEndWalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.ServerBeginWalk
// (Net, NetReliable, Native, Event, Protected, NetServer)
void AAGCharacter::ServerBeginWalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.ServerBeginWalk");

	AAGCharacter_ServerBeginWalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.Play3PReloadEffects
// (Net, NetReliable, Native, Event, NetMulticast, Public)
void AAGCharacter::Play3PReloadEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.Play3PReloadEffects");

	AAGCharacter_Play3PReloadEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.OnRep_DeathInfo
// (Final, Native, Protected)
void AAGCharacter::OnRep_DeathInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.OnRep_DeathInfo");

	AAGCharacter_OnRep_DeathInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.OnRep_bIsDead
// (Final, Native, Protected)
void AAGCharacter::OnRep_bIsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.OnRep_bIsDead");

	AAGCharacter_OnRep_bIsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.OnDeath
// (Final, Native, Protected)
// Parameters:
// class AActor*                  KilledActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*             KillerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGCharacter::OnDeath(class AActor* KilledActor, class AController* KillerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.OnDeath");

	AAGCharacter_OnDeath_Params params;
	params.KilledActor = KilledActor;
	params.KillerController = KillerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.HandleLocalDeath
// (Final, Native, Public)
void AAGCharacter::HandleLocalDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.HandleLocalDeath");

	AAGCharacter_HandleLocalDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.Fire
// (Final, Native, Public, BlueprintCallable)
void AAGCharacter::Fire()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.Fire");

	AAGCharacter_Fire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.EndCrouch
// (Net, Native, Event, Protected, NetClient, BlueprintCallable)
void AAGCharacter::EndCrouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.EndCrouch");

	AAGCharacter_EndCrouch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.CheatOpenShop
// (Event, Public, BlueprintEvent)
void AAGCharacter::CheatOpenShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.CheatOpenShop");

	AAGCharacter_CheatOpenShop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.CheatGold
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            Gold                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGCharacter::CheatGold(int Gold)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.CheatGold");

	AAGCharacter_CheatGold_Params params;
	params.Gold = Gold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.BPUpdateKillFeed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAGPlayerState*          KillerPC                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAGCharacter*            DeadActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGCharacter::BPUpdateKillFeed(class AAGPlayerState* KillerPC, class AAGCharacter* DeadActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.BPUpdateKillFeed");

	AAGCharacter_BPUpdateKillFeed_Params params;
	params.KillerPC = KillerPC;
	params.DeadActor = DeadActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.BPShowHitIndicator
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 DamagerLocation                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGCharacter::BPShowHitIndicator(const struct FVector& DamagerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.BPShowHitIndicator");

	AAGCharacter_BPShowHitIndicator_Params params;
	params.DamagerLocation = DamagerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.BPShowGameplayUI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAGPlayerController*     NewController                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGCharacter::BPShowGameplayUI(class AAGPlayerController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.BPShowGameplayUI");

	AAGCharacter_BPShowGameplayUI_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.BPShowDamageDirection
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGCharacter::BPShowDamageDirection(class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.BPShowDamageDirection");

	AAGCharacter_BPShowDamageDirection_Params params;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.BPSendInfoToKillFeed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             KillerPC                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAGCharacter*            DeadActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGCharacter::BPSendInfoToKillFeed(class AController* KillerPC, class AAGCharacter* DeadActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.BPSendInfoToKillFeed");

	AAGCharacter_BPSendInfoToKillFeed_Params params;
	params.KillerPC = KillerPC;
	params.DeadActor = DeadActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGCharacter.BPOnDeath
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAGPlayerState*          Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGCharacter::BPOnDeath(class AAGPlayerState* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGCharacter.BPOnDeath");

	AAGCharacter_BPOnDeath_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAuthSubsystem.Login
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Username                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Password                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGAuthSubsystem::Login(const struct FString& Username, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAuthSubsystem.Login");

	UAGAuthSubsystem_Login_Params params;
	params.Username = Username;
	params.Password = Password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAuthSubsystem.GetUserInfo
// (Final, Native, Public, BlueprintCallable)
void UAGAuthSubsystem::GetUserInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAuthSubsystem.GetUserInfo");

	UAGAuthSubsystem_GetUserInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAuthSubsystem.ForceLogin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Username                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Password                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGAuthSubsystem::ForceLogin(const struct FString& Username, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAuthSubsystem.ForceLogin");

	UAGAuthSubsystem_ForceLogin_Params params;
	params.Username = Username;
	params.Password = Password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAuthSubsystem.AutoRefreshToken
// (Final, Native, Public)
void UAGAuthSubsystem::AutoRefreshToken()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAuthSubsystem.AutoRefreshToken");

	UAGAuthSubsystem_AutoRefreshToken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAttributeSetPlayer.OnRep_TimeBetweenShots
// (Native, Public, HasOutParms)
// Parameters:
// struct FGameplayAttributeData  OldTimeBetweenShots            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAGAttributeSetPlayer::OnRep_TimeBetweenShots(const struct FGameplayAttributeData& OldTimeBetweenShots)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAttributeSetPlayer.OnRep_TimeBetweenShots");

	UAGAttributeSetPlayer_OnRep_TimeBetweenShots_Params params;
	params.OldTimeBetweenShots = OldTimeBetweenShots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAttributeSetPlayer.OnRep_HeadshotDamageMultiplier
// (Native, Public, HasOutParms)
// Parameters:
// struct FGameplayAttributeData  OldHeadshotDamageMultiplier    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAGAttributeSetPlayer::OnRep_HeadshotDamageMultiplier(const struct FGameplayAttributeData& OldHeadshotDamageMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAttributeSetPlayer.OnRep_HeadshotDamageMultiplier");

	UAGAttributeSetPlayer_OnRep_HeadshotDamageMultiplier_Params params;
	params.OldHeadshotDamageMultiplier = OldHeadshotDamageMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAttributeSetPlayer.OnRep_Gold
// (Native, Public, HasOutParms)
// Parameters:
// struct FGameplayAttributeData  OldGold                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAGAttributeSetPlayer::OnRep_Gold(const struct FGameplayAttributeData& OldGold)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAttributeSetPlayer.OnRep_Gold");

	UAGAttributeSetPlayer_OnRep_Gold_Params params;
	params.OldGold = OldGold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAttributes.OnRep_MoveSpeed
// (Native, Public, HasOutParms)
// Parameters:
// struct FGameplayAttributeData  OldMoveSpeed                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAGAttributes::OnRep_MoveSpeed(const struct FGameplayAttributeData& OldMoveSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAttributes.OnRep_MoveSpeed");

	UAGAttributes_OnRep_MoveSpeed_Params params;
	params.OldMoveSpeed = OldMoveSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAttributes.OnRep_MaxHealth
// (Native, Public, HasOutParms)
// Parameters:
// struct FGameplayAttributeData  OldMaxHealth                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAGAttributes::OnRep_MaxHealth(const struct FGameplayAttributeData& OldMaxHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAttributes.OnRep_MaxHealth");

	UAGAttributes_OnRep_MaxHealth_Params params;
	params.OldMaxHealth = OldMaxHealth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAttributes.OnRep_Lifesteal
// (Native, Public, HasOutParms)
// Parameters:
// struct FGameplayAttributeData  OldLifesteal                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAGAttributes::OnRep_Lifesteal(const struct FGameplayAttributeData& OldLifesteal)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAttributes.OnRep_Lifesteal");

	UAGAttributes_OnRep_Lifesteal_Params params;
	params.OldLifesteal = OldLifesteal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAttributes.OnRep_IncomingHealMultiplier
// (Native, Public, HasOutParms)
// Parameters:
// struct FGameplayAttributeData  OldIncomingHealMultiplier      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAGAttributes::OnRep_IncomingHealMultiplier(const struct FGameplayAttributeData& OldIncomingHealMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAttributes.OnRep_IncomingHealMultiplier");

	UAGAttributes_OnRep_IncomingHealMultiplier_Params params;
	params.OldIncomingHealMultiplier = OldIncomingHealMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAttributes.OnRep_HealthRegeneration
// (Native, Public, HasOutParms)
// Parameters:
// struct FGameplayAttributeData  OldHealthRegeneration          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAGAttributes::OnRep_HealthRegeneration(const struct FGameplayAttributeData& OldHealthRegeneration)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAttributes.OnRep_HealthRegeneration");

	UAGAttributes_OnRep_HealthRegeneration_Params params;
	params.OldHealthRegeneration = OldHealthRegeneration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAttributes.OnRep_Health
// (Native, Public, HasOutParms)
// Parameters:
// struct FGameplayAttributeData  OldHealth                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAGAttributes::OnRep_Health(const struct FGameplayAttributeData& OldHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAttributes.OnRep_Health");

	UAGAttributes_OnRep_Health_Params params;
	params.OldHealth = OldHealth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAttributes.OnRep_HeadshotDefense
// (Native, Public, HasOutParms)
// Parameters:
// struct FGameplayAttributeData  OldHeadshotDefense             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAGAttributes::OnRep_HeadshotDefense(const struct FGameplayAttributeData& OldHeadshotDefense)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAttributes.OnRep_HeadshotDefense");

	UAGAttributes_OnRep_HeadshotDefense_Params params;
	params.OldHeadshotDefense = OldHeadshotDefense;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAttributes.OnRep_HeadshotDamageMultiplier
// (Native, Public, HasOutParms)
// Parameters:
// struct FGameplayAttributeData  OldHeadshotDamageMultiplier    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAGAttributes::OnRep_HeadshotDamageMultiplier(const struct FGameplayAttributeData& OldHeadshotDamageMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAttributes.OnRep_HeadshotDamageMultiplier");

	UAGAttributes_OnRep_HeadshotDamageMultiplier_Params params;
	params.OldHeadshotDamageMultiplier = OldHeadshotDamageMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAttributes.OnRep_DelayBetweenShots
// (Native, Public, HasOutParms)
// Parameters:
// struct FGameplayAttributeData  OldDelayBetweenShots           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAGAttributes::OnRep_DelayBetweenShots(const struct FGameplayAttributeData& OldDelayBetweenShots)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAttributes.OnRep_DelayBetweenShots");

	UAGAttributes_OnRep_DelayBetweenShots_Params params;
	params.OldDelayBetweenShots = OldDelayBetweenShots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAttributes.OnRep_Defense
// (Native, Public, HasOutParms)
// Parameters:
// struct FGameplayAttributeData  OldDefense                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAGAttributes::OnRep_Defense(const struct FGameplayAttributeData& OldDefense)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAttributes.OnRep_Defense");

	UAGAttributes_OnRep_Defense_Params params;
	params.OldDefense = OldDefense;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAttributes.OnRep_AttackPower
// (Native, Public, HasOutParms)
// Parameters:
// struct FGameplayAttributeData  OldAttackPower                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAGAttributes::OnRep_AttackPower(const struct FGameplayAttributeData& OldAttackPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAttributes.OnRep_AttackPower");

	UAGAttributes_OnRep_AttackPower_Params params;
	params.OldAttackPower = OldAttackPower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAIController.GetTowerToAttack
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AAGTowerBase*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AAGTowerBase* AAGAIController::GetTowerToAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAIController.GetTowerToAttack");

	AAGAIController_GetTowerToAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGAIController.FindTarget
// (Final, Native, Public, BlueprintCallable)
void AAGAIController::FindTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAIController.FindTarget");

	AAGAIController_FindTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAIController.EnemyLeftAggroRadius
// (Final, Native, Protected)
// Parameters:
// class AActor*                  EnemyActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGAIController::EnemyLeftAggroRadius(class AActor* EnemyActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAIController.EnemyLeftAggroRadius");

	AAGAIController_EnemyLeftAggroRadius_Params params;
	params.EnemyActor = EnemyActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAIController.EnemyEnteredAggroRadius
// (Final, Native, Protected)
// Parameters:
// class AActor*                  EnemADetourCrowdAIControlleryActor (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGAIController::EnemyEnteredAggroRadius(class AActor* EnemADetourCrowdAIControlleryActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAIController.EnemyEnteredAggroRadius");

	AAGAIController_EnemyEnteredAggroRadius_Params params;
	params.EnemADetourCrowdAIControlleryActor = EnemADetourCrowdAIControlleryActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAICharacter.ShootTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGAICharacter::ShootTarget(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAICharacter.ShootTarget");

	AAGAICharacter_ShootTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAICharacter.OnRep_Killer
// (Final, Native, Protected)
void AAGAICharacter::OnRep_Killer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAICharacter.OnRep_Killer");

	AAGAICharacter_OnRep_Killer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAICharacter.EnemyLeftAggroRadius
// (Final, Native, Protected)
// Parameters:
// class AActor*                  EnemyActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGAICharacter::EnemyLeftAggroRadius(class AActor* EnemyActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAICharacter.EnemyLeftAggroRadius");

	AAGAICharacter_EnemyLeftAggroRadius_Params params;
	params.EnemyActor = EnemyActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAICharacter.EnemyEnteredAggroRadius
// (Final, Native, Protected)
// Parameters:
// class AActor*                  EnemyActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGAICharacter::EnemyEnteredAggroRadius(class AActor* EnemyActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAICharacter.EnemyEnteredAggroRadius");

	AAGAICharacter_EnemyEnteredAggroRadius_Params params;
	params.EnemyActor = EnemyActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAICharacter.BPHandleDeath
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  KillerActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGAICharacter::BPHandleDeath(class AActor* KillerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAICharacter.BPHandleDeath");

	AAGAICharacter_BPHandleDeath_Params params;
	params.KillerActor = KillerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAICharacter.ActivateShieldFX
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bEnableFX                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAGAICharacter::ActivateShieldFX(bool bEnableFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAICharacter.ActivateShieldFX");

	AAGAICharacter_ActivateShieldFX_Params params;
	params.bEnableFX = bEnableFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAggroSphereComponent.GetAggroActors
// (Final, Native, Public, Const)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AActor*> UAGAggroSphereComponent::GetAggroActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAggroSphereComponent.GetAggroActors");

	UAGAggroSphereComponent_GetAggroActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGAggroSphereComponent.ActorLeftAggroRadius
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGAggroSphereComponent::ActorLeftAggroRadius(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAggroSphereComponent.ActorLeftAggroRadius");

	UAGAggroSphereComponent_ActorLeftAggroRadius_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAggroSphereComponent.ActorEnteredAggroRadius
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UAGAggroSphereComponent::ActorEnteredAggroRadius(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAggroSphereComponent.ActorEnteredAggroRadius");

	UAGAggroSphereComponent_ActorEnteredAggroRadius_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAggroSphereComponent.ActorDiedInAggroRadius
// (Final, Native, Public)
// Parameters:
// class AActor*                  KilledActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGAggroSphereComponent::ActorDiedInAggroRadius(class AActor* KilledActor, class AController* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAggroSphereComponent.ActorDiedInAggroRadius");

	UAGAggroSphereComponent_ActorDiedInAggroRadius_Params params;
	params.KilledActor = KilledActor;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAbilitySystemComponent.RemoveActiveEffectsByAssetTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   GameplayCueTag                 (Parm, NativeAccessSpecifierPublic)
void UAGAbilitySystemComponent::RemoveActiveEffectsByAssetTags(const struct FGameplayTagContainer& GameplayCueTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAbilitySystemComponent.RemoveActiveEffectsByAssetTags");

	UAGAbilitySystemComponent_RemoveActiveEffectsByAssetTags_Params params;
	params.GameplayCueTag = GameplayCueTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAbilitySystemComponent.OnActiveGameplayEffectRemoved
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FActiveGameplayEffect   RemovedEffect                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAGAbilitySystemComponent::OnActiveGameplayEffectRemoved(const struct FActiveGameplayEffect& RemovedEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAbilitySystemComponent.OnActiveGameplayEffectRemoved");

	UAGAbilitySystemComponent_OnActiveGameplayEffectRemoved_Params params;
	params.RemovedEffect = RemovedEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAbilitySystemComponent.OnActiveGameplayEffectAddedToSelf
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpec     EffectSpec                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle EffectHandle                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGAbilitySystemComponent::OnActiveGameplayEffectAddedToSelf(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayEffectSpec& EffectSpec, const struct FActiveGameplayEffectHandle& EffectHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAbilitySystemComponent.OnActiveGameplayEffectAddedToSelf");

	UAGAbilitySystemComponent_OnActiveGameplayEffectAddedToSelf_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.EffectSpec = EffectSpec;
	params.EffectHandle = EffectHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAbilitySystemComponent.GetActionNamePairedWithAbilityTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            AbilityTag                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAGAbilitySystemComponent::GetActionNamePairedWithAbilityTag(const struct FGameplayTag& AbilityTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAbilitySystemComponent.GetActionNamePairedWithAbilityTag");

	UAGAbilitySystemComponent_GetActionNamePairedWithAbilityTag_Params params;
	params.AbilityTag = AbilityTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGAbilitySystemComponent.CancelAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            AbilityTag                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGAbilitySystemComponent::CancelAbility(const struct FGameplayTag& AbilityTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAbilitySystemComponent.CancelAbility");

	UAGAbilitySystemComponent_CancelAbility_Params params;
	params.AbilityTag = AbilityTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAbilitySystemComponent.BP_RemoveLooseGameplayTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGAbilitySystemComponent::BP_RemoveLooseGameplayTag(const struct FGameplayTag& GameplayCueTag, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAbilitySystemComponent.BP_RemoveLooseGameplayTag");

	UAGAbilitySystemComponent_BP_RemoveLooseGameplayTag_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAbilitySystemComponent.BP_RemoveGameplayCue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAGAbilitySystemComponent::BP_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAbilitySystemComponent.BP_RemoveGameplayCue");

	UAGAbilitySystemComponent_BP_RemoveGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAbilitySystemComponent.BP_RemoveAllGameplayCues
// (Final, Native, Public, BlueprintCallable)
void UAGAbilitySystemComponent::BP_RemoveAllGameplayCues()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAbilitySystemComponent.BP_RemoveAllGameplayCues");

	UAGAbilitySystemComponent_BP_RemoveAllGameplayCues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAbilitySystemComponent.BP_GetGameplayEffectRemainingDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAGAbilitySystemComponent::BP_GetGameplayEffectRemainingDuration(const struct FActiveGameplayEffectHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAbilitySystemComponent.BP_GetGameplayEffectRemainingDuration");

	UAGAbilitySystemComponent_BP_GetGameplayEffectRemainingDuration_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGAbilitySystemComponent.BP_GetBlockedAbilityTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FGameplayTagContainer UAGAbilitySystemComponent::BP_GetBlockedAbilityTags()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAbilitySystemComponent.BP_GetBlockedAbilityTags");

	UAGAbilitySystemComponent_BP_GetBlockedAbilityTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGAbilitySystemComponent.BP_FindAbilitySpecFromClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  InAbilityClass                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpec    ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FGameplayAbilitySpec UAGAbilitySystemComponent::BP_FindAbilitySpecFromClass(class UClass* InAbilityClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAbilitySystemComponent.BP_FindAbilitySpecFromClass");

	UAGAbilitySystemComponent_BP_FindAbilitySpecFromClass_Params params;
	params.InAbilityClass = InAbilityClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AimGods.AGAbilitySystemComponent.BP_ExecuteGameplayCue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  EffectParameters               (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UAGAbilitySystemComponent::BP_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& EffectParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAbilitySystemComponent.BP_ExecuteGameplayCue");

	UAGAbilitySystemComponent_BP_ExecuteGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.EffectParameters = EffectParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AimGods.AGAbilitySystemComponent.BP_AddGameplayCue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters  EffectParameters               (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UAGAbilitySystemComponent::BP_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& EffectParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimGods.AGAbilitySystemComponent.BP_AddGameplayCue");

	UAGAbilitySystemComponent_BP_AddGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.EffectParameters = EffectParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
