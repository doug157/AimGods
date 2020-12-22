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

// Function WB_FriendRequestsList.WB_FriendRequestsList_C.Load Requests
struct UWB_FriendRequestsList_C_Load_Requests_Params
{
};

// Function WB_FriendRequestsList.WB_FriendRequestsList_C.Construct
struct UWB_FriendRequestsList_C_Construct_Params
{
};

// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnGetIncomingFriendRequests
struct UWB_FriendRequestsList_C_OnGetIncomingFriendRequests_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                              Error;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FAGPendingFriendRequest>             FriendRequests;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnGetOutgoingFriendRequests
struct UWB_FriendRequestsList_C_OnGetOutgoingFriendRequests_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                              Error;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FAGPendingFriendRequest>             FriendRequests;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnFriendRequestReceivedWs
struct UWB_FriendRequestsList_C_OnFriendRequestReceivedWs_Params
{
	struct FString                                     RequestId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Username;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_FriendRequestsList.WB_FriendRequestsList_C.AcceptFriend
struct UWB_FriendRequestsList_C_AcceptFriend_Params
{
};

// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnSendFriendRequest
struct UWB_FriendRequestsList_C_OnSendFriendRequest_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                              Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnOutgoingFriendRequestAcceptedWs
struct UWB_FriendRequestsList_C_OnOutgoingFriendRequestAcceptedWs_Params
{
	struct FString                                     RequestId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnAcceptFriendRequest
struct UWB_FriendRequestsList_C_OnAcceptFriendRequest_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                              Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_FriendRequestsList.WB_FriendRequestsList_C.UpdateFriendNotifications
struct UWB_FriendRequestsList_C_UpdateFriendNotifications_Params
{
};

// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnCancelOutgoingFriendshipRequest
struct UWB_FriendRequestsList_C_OnCancelOutgoingFriendshipRequest_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                              Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_FriendRequestsList.WB_FriendRequestsList_C.OnIncomingFriendRequestCancelledWs
struct UWB_FriendRequestsList_C_OnIncomingFriendRequestCancelledWs_Params
{
	struct FString                                     RequestId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_FriendRequestsList.WB_FriendRequestsList_C.RemoveFriendRequests
struct UWB_FriendRequestsList_C_RemoveFriendRequests_Params
{
};

// Function WB_FriendRequestsList.WB_FriendRequestsList_C.ExecuteUbergraph_WB_FriendRequestsList
struct UWB_FriendRequestsList_C_ExecuteUbergraph_WB_FriendRequestsList_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_FriendRequestsList.WB_FriendRequestsList_C.UpdateFriendsList__DelegateSignature
struct UWB_FriendRequestsList_C_UpdateFriendsList__DelegateSignature_Params
{
};

// Function WB_FriendRequestsList.WB_FriendRequestsList_C.WeHaveNothing__DelegateSignature
struct UWB_FriendRequestsList_C_WeHaveNothing__DelegateSignature_Params
{
};

// Function WB_FriendRequestsList.WB_FriendRequestsList_C.WeHaveSomething__DelegateSignature
struct UWB_FriendRequestsList_C_WeHaveSomething__DelegateSignature_Params
{
	int                                                Quantity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
