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

// Function WB_FriendsList.WB_FriendsList_C.OnGetFriendsList
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FAGFriend>       Friends                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWB_FriendsList_C::OnGetFriendsList(bool Success, const struct FString& Response, const struct FAGFriendError& Error, TArray<struct FAGFriend> Friends)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendsList.WB_FriendsList_C.OnGetFriendsList");

	UWB_FriendsList_C_OnGetFriendsList_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;
	params.Friends = Friends;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendsList.WB_FriendsList_C.Load Friends
// (BlueprintCallable, BlueprintEvent)
void UWB_FriendsList_C::Load_Friends()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendsList.WB_FriendsList_C.Load Friends");

	UWB_FriendsList_C_Load_Friends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendsList.WB_FriendsList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_FriendsList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendsList.WB_FriendsList_C.Construct");

	UWB_FriendsList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendsList.WB_FriendsList_C.OnFriendOnlineStatusChangedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           IsOnline                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_FriendsList_C::OnFriendOnlineStatusChangedWs(const struct FString& PlayerId, bool IsOnline)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendsList.WB_FriendsList_C.OnFriendOnlineStatusChangedWs");

	UWB_FriendsList_C_OnFriendOnlineStatusChangedWs_Params params;
	params.PlayerId = PlayerId;
	params.IsOnline = IsOnline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendsList.WB_FriendsList_C.OnRemoveFriend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_FriendsList_C::OnRemoveFriend(bool Success, const struct FString& Response, const struct FAGFriendError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendsList.WB_FriendsList_C.OnRemoveFriend");

	UWB_FriendsList_C_OnRemoveFriend_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendsList.WB_FriendsList_C.OnAcceptFriendRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_FriendsList_C::OnAcceptFriendRequest(bool Success, const struct FString& Response, const struct FAGFriendError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendsList.WB_FriendsList_C.OnAcceptFriendRequest");

	UWB_FriendsList_C_OnAcceptFriendRequest_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendsList.WB_FriendsList_C.OnOutgoingFriendRequestAcceptedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RequestId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_FriendsList_C::OnOutgoingFriendRequestAcceptedWs(const struct FString& RequestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendsList.WB_FriendsList_C.OnOutgoingFriendRequestAcceptedWs");

	UWB_FriendsList_C_OnOutgoingFriendRequestAcceptedWs_Params params;
	params.RequestId = RequestId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendsList.WB_FriendsList_C.OnPlayerUnfriendedYou
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Username                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_FriendsList_C::OnPlayerUnfriendedYou(const struct FString& Username)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendsList.WB_FriendsList_C.OnPlayerUnfriendedYou");

	UWB_FriendsList_C_OnPlayerUnfriendedYou_Params params;
	params.Username = Username;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendsList.WB_FriendsList_C.OnBlockPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_FriendsList_C::OnBlockPlayer(bool Success, const struct FString& Response, const struct FAGFriendError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendsList.WB_FriendsList_C.OnBlockPlayer");

	UWB_FriendsList_C_OnBlockPlayer_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendsList.WB_FriendsList_C.OnGetBlockedPlayers
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FAGFriend>       Friends                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWB_FriendsList_C::OnGetBlockedPlayers(bool Success, const struct FString& Response, const struct FAGFriendError& Error, TArray<struct FAGFriend> Friends)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendsList.WB_FriendsList_C.OnGetBlockedPlayers");

	UWB_FriendsList_C_OnGetBlockedPlayers_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;
	params.Friends = Friends;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendsList.WB_FriendsList_C.OnUnblockPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_FriendsList_C::OnUnblockPlayer(bool Success, const struct FString& Response, const struct FAGFriendError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendsList.WB_FriendsList_C.OnUnblockPlayer");

	UWB_FriendsList_C_OnUnblockPlayer_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendsList.WB_FriendsList_C.ExecuteUbergraph_WB_FriendsList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_FriendsList_C::ExecuteUbergraph_WB_FriendsList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendsList.WB_FriendsList_C.ExecuteUbergraph_WB_FriendsList");

	UWB_FriendsList_C_ExecuteUbergraph_WB_FriendsList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
