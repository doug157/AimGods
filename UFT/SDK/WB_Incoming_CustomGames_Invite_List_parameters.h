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

// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.Construct
struct UWB_Incoming_CustomGames_Invite_List_C_Construct_Params
{
};

// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.OnGetIncomingInvites
struct UWB_Incoming_CustomGames_Invite_List_C_OnGetIncomingInvites_Params
{
	TArray<struct FIncomingCustomGameInvite>           CustomGameInvites;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.OnCustomGameInviteReceivedWs
struct UWB_Incoming_CustomGames_Invite_List_C_OnCustomGameInviteReceivedWs_Params
{
	struct FIncomingCustomGameInvite                   CustomGameInvite;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.UpdateCustomGameNotifications
struct UWB_Incoming_CustomGames_Invite_List_C_UpdateCustomGameNotifications_Params
{
};

// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.OnAcceptInvite
struct UWB_Incoming_CustomGames_Invite_List_C_OnAcceptInvite_Params
{
	struct FCustomGame                                 CurrentGame;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.OnCustomGameInviteCancelledWs
struct UWB_Incoming_CustomGames_Invite_List_C_OnCustomGameInviteCancelledWs_Params
{
	struct FString                                     InviteId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.ClearOutInvites
struct UWB_Incoming_CustomGames_Invite_List_C_ClearOutInvites_Params
{
};

// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.ExecuteUbergraph_WB_Incoming_CustomGames_Invite_List
struct UWB_Incoming_CustomGames_Invite_List_C_ExecuteUbergraph_WB_Incoming_CustomGames_Invite_List_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.CustomGame_WeHaveSomething__DelegateSignature
struct UWB_Incoming_CustomGames_Invite_List_C_CustomGame_WeHaveSomething__DelegateSignature_Params
{
	int                                                Quantity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
