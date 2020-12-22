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

// Function WB_PartyInvite.WB_PartyInvite_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_PartyInvite_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyInvite.WB_PartyInvite_C.Construct");

	UWB_PartyInvite_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyInvite.WB_PartyInvite_C.BndEvt__AcceptPartyInvite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_PartyInvite_C::BndEvt__AcceptPartyInvite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyInvite.WB_PartyInvite_C.BndEvt__AcceptPartyInvite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWB_PartyInvite_C_BndEvt__AcceptPartyInvite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyInvite.WB_PartyInvite_C.OnAcceptPartyInvite
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPartyError             Error                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FCurrentParty           CurrentParty                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_PartyInvite_C::OnAcceptPartyInvite(bool Success, const struct FPartyError& Error, const struct FCurrentParty& CurrentParty)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyInvite.WB_PartyInvite_C.OnAcceptPartyInvite");

	UWB_PartyInvite_C_OnAcceptPartyInvite_Params params;
	params.Success = Success;
	params.Error = Error;
	params.CurrentParty = CurrentParty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyInvite.WB_PartyInvite_C.BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_PartyInvite_C::BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyInvite.WB_PartyInvite_C.BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWB_PartyInvite_C_BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyInvite.WB_PartyInvite_C.RemovePartyInvite
// (BlueprintCallable, BlueprintEvent)
void UWB_PartyInvite_C::RemovePartyInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyInvite.WB_PartyInvite_C.RemovePartyInvite");

	UWB_PartyInvite_C_RemovePartyInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyInvite.WB_PartyInvite_C.ExecuteUbergraph_WB_PartyInvite
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PartyInvite_C::ExecuteUbergraph_WB_PartyInvite(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyInvite.WB_PartyInvite_C.ExecuteUbergraph_WB_PartyInvite");

	UWB_PartyInvite_C_ExecuteUbergraph_WB_PartyInvite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
