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

// Function WB_PartyInvite_List.WB_PartyInvite_List_C.Load Requests
struct UWB_PartyInvite_List_C_Load_Requests_Params
{
};

// Function WB_PartyInvite_List.WB_PartyInvite_List_C.Construct
struct UWB_PartyInvite_List_C_Construct_Params
{
};

// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnGetPartyInvites
struct UWB_PartyInvite_List_C_OnGetPartyInvites_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPartyError                                 Error;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPartyInvites                               Invites;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnPartyInviteReceivedWs_Event
struct UWB_PartyInvite_List_C_OnPartyInviteReceivedWs_Event_Params
{
	struct FString                                     PartyInviteId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Username;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int64_t                                            InviteExpiresAt;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnIncomingPartyInviteCancelledWs
struct UWB_PartyInvite_List_C_OnIncomingPartyInviteCancelledWs_Params
{
	struct FString                                     PartyInviteId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnOutgoingPartyInviteAccepted
struct UWB_PartyInvite_List_C_OnOutgoingPartyInviteAccepted_Params
{
	struct FString                                     PartyInviteId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     UserId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Username;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_PartyInvite_List.WB_PartyInvite_List_C.UpdatePartyNotification
struct UWB_PartyInvite_List_C_UpdatePartyNotification_Params
{
};

// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnSendPartyInvite
struct UWB_PartyInvite_List_C_OnSendPartyInvite_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPartyError                                 Error;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOutgoingPartyInvite                        OutgoingInvite;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnCancelPartyInvite
struct UWB_PartyInvite_List_C_OnCancelPartyInvite_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPartyError                                 Error;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnAcceptPartyInvite
struct UWB_PartyInvite_List_C_OnAcceptPartyInvite_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPartyError                                 Error;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FCurrentParty                               CurrentParty;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_PartyInvite_List.WB_PartyInvite_List_C.ClearOutPartyInvites
struct UWB_PartyInvite_List_C_ClearOutPartyInvites_Params
{
};

// Function WB_PartyInvite_List.WB_PartyInvite_List_C.ExecuteUbergraph_WB_PartyInvite_List
struct UWB_PartyInvite_List_C_ExecuteUbergraph_WB_PartyInvite_List_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PartyInvite_List.WB_PartyInvite_List_C.Party_WeHaveSomething__DelegateSignature
struct UWB_PartyInvite_List_C_Party_WeHaveSomething__DelegateSignature_Params
{
	int                                                Quantity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
