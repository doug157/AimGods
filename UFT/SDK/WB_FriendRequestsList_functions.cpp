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

// Function WB_FriendRequestsList.WB_FriendRequestsList_C.Load Requests
// (BlueprintCallable, BlueprintEvent)
void UWB_FriendRequestsList_C::Load_Requests()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRequestsList.WB_FriendRequestsList_C.Load Requests");

	UWB_FriendRequestsList_C_Load_Requests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_FriendRequestsList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRequestsList.WB_FriendRequestsList_C.Construct");

	UWB_FriendRequestsList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnGetIncomingFriendRequests
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FAGPendingFriendRequest> FriendRequests                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWB_FriendRequestsList_C::OnGetIncomingFriendRequests(bool Success, const struct FString& Response, const struct FAGFriendError& Error, TArray<struct FAGPendingFriendRequest> FriendRequests)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnGetIncomingFriendRequests");

	UWB_FriendRequestsList_C_OnGetIncomingFriendRequests_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;
	params.FriendRequests = FriendRequests;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnGetOutgoingFriendRequests
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FAGPendingFriendRequest> FriendRequests                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWB_FriendRequestsList_C::OnGetOutgoingFriendRequests(bool Success, const struct FString& Response, const struct FAGFriendError& Error, TArray<struct FAGPendingFriendRequest> FriendRequests)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnGetOutgoingFriendRequests");

	UWB_FriendRequestsList_C_OnGetOutgoingFriendRequests_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;
	params.FriendRequests = FriendRequests;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnFriendRequestReceivedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RequestId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Username                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_FriendRequestsList_C::OnFriendRequestReceivedWs(const struct FString& RequestId, const struct FString& Username)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnFriendRequestReceivedWs");

	UWB_FriendRequestsList_C_OnFriendRequestReceivedWs_Params params;
	params.RequestId = RequestId;
	params.Username = Username;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.AcceptFriend
// (BlueprintCallable, BlueprintEvent)
void UWB_FriendRequestsList_C::AcceptFriend()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRequestsList.WB_FriendRequestsList_C.AcceptFriend");

	UWB_FriendRequestsList_C_AcceptFriend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnSendFriendRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_FriendRequestsList_C::OnSendFriendRequest(bool Success, const struct FString& Response, const struct FAGFriendError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnSendFriendRequest");

	UWB_FriendRequestsList_C_OnSendFriendRequest_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnOutgoingFriendRequestAcceptedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RequestId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_FriendRequestsList_C::OnOutgoingFriendRequestAcceptedWs(const struct FString& RequestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnOutgoingFriendRequestAcceptedWs");

	UWB_FriendRequestsList_C_OnOutgoingFriendRequestAcceptedWs_Params params;
	params.RequestId = RequestId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnAcceptFriendRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_FriendRequestsList_C::OnAcceptFriendRequest(bool Success, const struct FString& Response, const struct FAGFriendError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnAcceptFriendRequest");

	UWB_FriendRequestsList_C_OnAcceptFriendRequest_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.UpdateFriendNotifications
// (BlueprintCallable, BlueprintEvent)
void UWB_FriendRequestsList_C::UpdateFriendNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRequestsList.WB_FriendRequestsList_C.UpdateFriendNotifications");

	UWB_FriendRequestsList_C_UpdateFriendNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnCancelOutgoingFriendshipRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_FriendRequestsList_C::OnCancelOutgoingFriendshipRequest(bool Success, const struct FString& Response, const struct FAGFriendError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnCancelOutgoingFriendshipRequest");

	UWB_FriendRequestsList_C_OnCancelOutgoingFriendshipRequest_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnIncomingFriendRequestCancelledWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RequestId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_FriendRequestsList_C::OnIncomingFriendRequestCancelledWs(const struct FString& RequestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnIncomingFriendRequestCancelledWs");

	UWB_FriendRequestsList_C_OnIncomingFriendRequestCancelledWs_Params params;
	params.RequestId = RequestId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.RemoveFriendRequests
// (BlueprintCallable, BlueprintEvent)
void UWB_FriendRequestsList_C::RemoveFriendRequests()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRequestsList.WB_FriendRequestsList_C.RemoveFriendRequests");

	UWB_FriendRequestsList_C_RemoveFriendRequests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.ExecuteUbergraph_WB_FriendRequestsList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_FriendRequestsList_C::ExecuteUbergraph_WB_FriendRequestsList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRequestsList.WB_FriendRequestsList_C.ExecuteUbergraph_WB_FriendRequestsList");

	UWB_FriendRequestsList_C_ExecuteUbergraph_WB_FriendRequestsList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.UpdateFriendsList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_FriendRequestsList_C::UpdateFriendsList__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRequestsList.WB_FriendRequestsList_C.UpdateFriendsList__DelegateSignature");

	UWB_FriendRequestsList_C_UpdateFriendsList__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.WeHaveNothing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_FriendRequestsList_C::WeHaveNothing__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRequestsList.WB_FriendRequestsList_C.WeHaveNothing__DelegateSignature");

	UWB_FriendRequestsList_C_WeHaveNothing__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_FriendRequestsList.WB_FriendRequestsList_C.WeHaveSomething__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_FriendRequestsList_C::WeHaveSomething__DelegateSignature(int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_FriendRequestsList.WB_FriendRequestsList_C.WeHaveSomething__DelegateSignature");

	UWB_FriendRequestsList_C_WeHaveSomething__DelegateSignature_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
