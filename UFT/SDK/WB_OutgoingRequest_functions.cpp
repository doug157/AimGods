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

// Function WB_OutgoingRequest.WB_OutgoingRequest_C.OnCancelOutgoingFriendshipRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_OutgoingRequest_C::OnCancelOutgoingFriendshipRequest(bool Success, const struct FString& Response, const struct FAGFriendError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_OutgoingRequest.WB_OutgoingRequest_C.OnCancelOutgoingFriendshipRequest");

	UWB_OutgoingRequest_C_OnCancelOutgoingFriendshipRequest_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_OutgoingRequest.WB_OutgoingRequest_C.OnOutgoingFriendRequestAcceptedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RequestId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_OutgoingRequest_C::OnOutgoingFriendRequestAcceptedWs(const struct FString& RequestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_OutgoingRequest.WB_OutgoingRequest_C.OnOutgoingFriendRequestAcceptedWs");

	UWB_OutgoingRequest_C_OnOutgoingFriendRequestAcceptedWs_Params params;
	params.RequestId = RequestId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_OutgoingRequest.WB_OutgoingRequest_C.OnIncomingFriendRequestCancelledWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RequestId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_OutgoingRequest_C::OnIncomingFriendRequestCancelledWs(const struct FString& RequestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_OutgoingRequest.WB_OutgoingRequest_C.OnIncomingFriendRequestCancelledWs");

	UWB_OutgoingRequest_C_OnIncomingFriendRequestCancelledWs_Params params;
	params.RequestId = RequestId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_OutgoingRequest.WB_OutgoingRequest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_OutgoingRequest_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_OutgoingRequest.WB_OutgoingRequest_C.Construct");

	UWB_OutgoingRequest_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_OutgoingRequest.WB_OutgoingRequest_C.BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_OutgoingRequest_C::BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_OutgoingRequest.WB_OutgoingRequest_C.BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWB_OutgoingRequest_C_BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_OutgoingRequest.WB_OutgoingRequest_C.RemoveRequest
// (BlueprintCallable, BlueprintEvent)
void UWB_OutgoingRequest_C::RemoveRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_OutgoingRequest.WB_OutgoingRequest_C.RemoveRequest");

	UWB_OutgoingRequest_C_RemoveRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_OutgoingRequest.WB_OutgoingRequest_C.ExecuteUbergraph_WB_OutgoingRequest
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_OutgoingRequest_C::ExecuteUbergraph_WB_OutgoingRequest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_OutgoingRequest.WB_OutgoingRequest_C.ExecuteUbergraph_WB_OutgoingRequest");

	UWB_OutgoingRequest_C_ExecuteUbergraph_WB_OutgoingRequest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
