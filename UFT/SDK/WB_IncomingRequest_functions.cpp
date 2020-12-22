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

// Function WB_IncomingRequest.WB_IncomingRequest_C.BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_IncomingRequest_C::BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IncomingRequest.WB_IncomingRequest_C.BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWB_IncomingRequest_C_BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_IncomingRequest.WB_IncomingRequest_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_IncomingRequest_C::BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IncomingRequest.WB_IncomingRequest_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWB_IncomingRequest_C_BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_IncomingRequest.WB_IncomingRequest_C.OnAcceptFriendRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_IncomingRequest_C::OnAcceptFriendRequest(bool Success, const struct FString& Response, const struct FAGFriendError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IncomingRequest.WB_IncomingRequest_C.OnAcceptFriendRequest");

	UWB_IncomingRequest_C_OnAcceptFriendRequest_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_IncomingRequest.WB_IncomingRequest_C.OnCancelOutgoingFriendshipRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FAGFriendError          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_IncomingRequest_C::OnCancelOutgoingFriendshipRequest(bool Success, const struct FString& Response, const struct FAGFriendError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IncomingRequest.WB_IncomingRequest_C.OnCancelOutgoingFriendshipRequest");

	UWB_IncomingRequest_C_OnCancelOutgoingFriendshipRequest_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_IncomingRequest.WB_IncomingRequest_C.OnIncomingFriendRequestCancelledWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RequestId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_IncomingRequest_C::OnIncomingFriendRequestCancelledWs(const struct FString& RequestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IncomingRequest.WB_IncomingRequest_C.OnIncomingFriendRequestCancelledWs");

	UWB_IncomingRequest_C_OnIncomingFriendRequestCancelledWs_Params params;
	params.RequestId = RequestId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_IncomingRequest.WB_IncomingRequest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_IncomingRequest_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IncomingRequest.WB_IncomingRequest_C.Construct");

	UWB_IncomingRequest_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_IncomingRequest.WB_IncomingRequest_C.RemoveRequest
// (BlueprintCallable, BlueprintEvent)
void UWB_IncomingRequest_C::RemoveRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IncomingRequest.WB_IncomingRequest_C.RemoveRequest");

	UWB_IncomingRequest_C_RemoveRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_IncomingRequest.WB_IncomingRequest_C.ExecuteUbergraph_WB_IncomingRequest
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_IncomingRequest_C::ExecuteUbergraph_WB_IncomingRequest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IncomingRequest.WB_IncomingRequest_C.ExecuteUbergraph_WB_IncomingRequest");

	UWB_IncomingRequest_C_ExecuteUbergraph_WB_IncomingRequest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_IncomingRequest.WB_IncomingRequest_C.AcceptFriend__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_IncomingRequest_C::AcceptFriend__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_IncomingRequest.WB_IncomingRequest_C.AcceptFriend__DelegateSignature");

	UWB_IncomingRequest_C_AcceptFriend__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
