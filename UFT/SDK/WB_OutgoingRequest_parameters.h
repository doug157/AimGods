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

// Function WB_OutgoingRequest.WB_OutgoingRequest_C.OnCancelOutgoingFriendshipRequest
struct UWB_OutgoingRequest_C_OnCancelOutgoingFriendshipRequest_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                              Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_OutgoingRequest.WB_OutgoingRequest_C.OnOutgoingFriendRequestAcceptedWs
struct UWB_OutgoingRequest_C_OnOutgoingFriendRequestAcceptedWs_Params
{
	struct FString                                     RequestId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_OutgoingRequest.WB_OutgoingRequest_C.OnIncomingFriendRequestCancelledWs
struct UWB_OutgoingRequest_C_OnIncomingFriendRequestCancelledWs_Params
{
	struct FString                                     RequestId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_OutgoingRequest.WB_OutgoingRequest_C.Construct
struct UWB_OutgoingRequest_C_Construct_Params
{
};

// Function WB_OutgoingRequest.WB_OutgoingRequest_C.BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWB_OutgoingRequest_C_BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_OutgoingRequest.WB_OutgoingRequest_C.RemoveRequest
struct UWB_OutgoingRequest_C_RemoveRequest_Params
{
};

// Function WB_OutgoingRequest.WB_OutgoingRequest_C.ExecuteUbergraph_WB_OutgoingRequest
struct UWB_OutgoingRequest_C_ExecuteUbergraph_WB_OutgoingRequest_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
