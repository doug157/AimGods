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

// Function WB_Parties.WB_Parties_C.Check_Visibility
struct UWB_Parties_C_Check_Visibility_Params
{
};

// Function WB_Parties.WB_Parties_C.OnLeaveCurrentParty
struct UWB_Parties_C_OnLeaveCurrentParty_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPartyError                                 Error;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_Parties.WB_Parties_C.Construct
struct UWB_Parties_C_Construct_Params
{
};

// Function WB_Parties.WB_Parties_C.OnAcceptPartyInvite
struct UWB_Parties_C_OnAcceptPartyInvite_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPartyError                                 Error;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FCurrentParty                               CurrentParty;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_Parties.WB_Parties_C.OnPartyInviteAcceptedWs
struct UWB_Parties_C_OnPartyInviteAcceptedWs_Params
{
	struct FString                                     PartyId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     UserId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Username;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_Parties.WB_Parties_C.BndEvt__WB_MainMenu_LeaveParty_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UWB_Parties_C_BndEvt__WB_MainMenu_LeaveParty_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
};

// Function WB_Parties.WB_Parties_C.OnPartyDisbandedWs
struct UWB_Parties_C_OnPartyDisbandedWs_Params
{
	struct FString                                     PartyId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_Parties.WB_Parties_C.ExecuteUbergraph_WB_Parties
struct UWB_Parties_C_ExecuteUbergraph_WB_Parties_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
