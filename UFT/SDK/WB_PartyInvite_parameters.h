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

// Function WB_PartyInvite.WB_PartyInvite_C.Construct
struct UWB_PartyInvite_C_Construct_Params
{
};

// Function WB_PartyInvite.WB_PartyInvite_C.BndEvt__AcceptPartyInvite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWB_PartyInvite_C_BndEvt__AcceptPartyInvite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_PartyInvite.WB_PartyInvite_C.OnAcceptPartyInvite
struct UWB_PartyInvite_C_OnAcceptPartyInvite_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPartyError                                 Error;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FCurrentParty                               CurrentParty;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_PartyInvite.WB_PartyInvite_C.BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWB_PartyInvite_C_BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_PartyInvite.WB_PartyInvite_C.RemovePartyInvite
struct UWB_PartyInvite_C_RemovePartyInvite_Params
{
};

// Function WB_PartyInvite.WB_PartyInvite_C.ExecuteUbergraph_WB_PartyInvite
struct UWB_PartyInvite_C_ExecuteUbergraph_WB_PartyInvite_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
