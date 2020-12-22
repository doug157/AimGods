#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function WB_IncomingRequest.WB_IncomingRequest_C.BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWB_IncomingRequest_C_BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_IncomingRequest.WB_IncomingRequest_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWB_IncomingRequest_C_BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_IncomingRequest.WB_IncomingRequest_C.OnAcceptFriendRequest
struct UWB_IncomingRequest_C_OnAcceptFriendRequest_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                              Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_IncomingRequest.WB_IncomingRequest_C.OnCancelOutgoingFriendshipRequest
struct UWB_IncomingRequest_C_OnCancelOutgoingFriendshipRequest_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                              Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_IncomingRequest.WB_IncomingRequest_C.OnIncomingFriendRequestCancelledWs
struct UWB_IncomingRequest_C_OnIncomingFriendRequestCancelledWs_Params
{
	struct FString                                     RequestId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_IncomingRequest.WB_IncomingRequest_C.Construct
struct UWB_IncomingRequest_C_Construct_Params
{
};

// Function WB_IncomingRequest.WB_IncomingRequest_C.RemoveRequest
struct UWB_IncomingRequest_C_RemoveRequest_Params
{
};

// Function WB_IncomingRequest.WB_IncomingRequest_C.ExecuteUbergraph_WB_IncomingRequest
struct UWB_IncomingRequest_C_ExecuteUbergraph_WB_IncomingRequest_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_IncomingRequest.WB_IncomingRequest_C.AcceptFriend__DelegateSignature
struct UWB_IncomingRequest_C_AcceptFriend__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
