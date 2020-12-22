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

// Function WB_NotificationHandler.WB_NotificationHandler_C.AddTextNotification
struct UWB_NotificationHandler_C_AddTextNotification_Params
{
	TEnumAsByte<ENotificationType>                     Notification_Type;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Notification_Text;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_NotificationHandler.WB_NotificationHandler_C.OnRemoveFriend
struct UWB_NotificationHandler_C_OnRemoveFriend_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                              Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_NotificationHandler.WB_NotificationHandler_C.OnOutgoingFriendRequestAccepted
struct UWB_NotificationHandler_C_OnOutgoingFriendRequestAccepted_Params
{
	struct FString                                     RequestId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_NotificationHandler.WB_NotificationHandler_C.OnBlockPlayer
struct UWB_NotificationHandler_C_OnBlockPlayer_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                              Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_NotificationHandler.WB_NotificationHandler_C.OnFriendOnlineStatusChanged
struct UWB_NotificationHandler_C_OnFriendOnlineStatusChanged_Params
{
	struct FString                                     PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsOnline;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_NotificationHandler.WB_NotificationHandler_C.OnCustomGameInviteReceived
struct UWB_NotificationHandler_C_OnCustomGameInviteReceived_Params
{
	struct FIncomingCustomGameInvite                   CustomGameInvite;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_NotificationHandler.WB_NotificationHandler_C.OnUnblockPlayer
struct UWB_NotificationHandler_C_OnUnblockPlayer_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                              Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_NotificationHandler.WB_NotificationHandler_C.OnSendFriendRequest
struct UWB_NotificationHandler_C_OnSendFriendRequest_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                              Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_NotificationHandler.WB_NotificationHandler_C.OnFriendRequestReceived
struct UWB_NotificationHandler_C_OnFriendRequestReceived_Params
{
	struct FString                                     RequestId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Username;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_NotificationHandler.WB_NotificationHandler_C.Construct
struct UWB_NotificationHandler_C_Construct_Params
{
};

// Function WB_NotificationHandler.WB_NotificationHandler_C.OnSendPartyInvite
struct UWB_NotificationHandler_C_OnSendPartyInvite_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPartyError                                 Error;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOutgoingPartyInvite                        OutgoingInvite;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_NotificationHandler.WB_NotificationHandler_C.OnPartyInviteReceieved
struct UWB_NotificationHandler_C_OnPartyInviteReceieved_Params
{
	struct FString                                     PartyInviteId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Username;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int64_t                                            InviteExpiresAt;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_NotificationHandler.WB_NotificationHandler_C.OnPartyDisbanded
struct UWB_NotificationHandler_C_OnPartyDisbanded_Params
{
	struct FString                                     PartyId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_NotificationHandler.WB_NotificationHandler_C.OnLeaveParty
struct UWB_NotificationHandler_C_OnLeaveParty_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPartyError                                 Error;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_NotificationHandler.WB_NotificationHandler_C.OnAcceptPartyInvite
struct UWB_NotificationHandler_C_OnAcceptPartyInvite_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPartyError                                 Error;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FCurrentParty                               CurrentParty;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_NotificationHandler.WB_NotificationHandler_C.OnOutgoingPartyInviteAcceptedWs
struct UWB_NotificationHandler_C_OnOutgoingPartyInviteAcceptedWs_Params
{
	struct FString                                     PartyId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     UserId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Username;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_NotificationHandler.WB_NotificationHandler_C.ExecuteUbergraph_WB_NotificationHandler
struct UWB_NotificationHandler_C_ExecuteUbergraph_WB_NotificationHandler_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
