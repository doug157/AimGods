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

// Function WB_Parties.WB_Parties_C.Check_Visibility
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Parties_C::Check_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Parties.WB_Parties_C.Check_Visibility");

	UWB_Parties_C_Check_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Parties.WB_Parties_C.OnLeaveCurrentParty
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPartyError             Error                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_Parties_C::OnLeaveCurrentParty(bool Success, const struct FString& Response, const struct FPartyError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Parties.WB_Parties_C.OnLeaveCurrentParty");

	UWB_Parties_C_OnLeaveCurrentParty_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Parties.WB_Parties_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Parties_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Parties.WB_Parties_C.Construct");

	UWB_Parties_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Parties.WB_Parties_C.OnAcceptPartyInvite
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPartyError             Error                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FCurrentParty           CurrentParty                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_Parties_C::OnAcceptPartyInvite(bool Success, const struct FPartyError& Error, const struct FCurrentParty& CurrentParty)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Parties.WB_Parties_C.OnAcceptPartyInvite");

	UWB_Parties_C_OnAcceptPartyInvite_Params params;
	params.Success = Success;
	params.Error = Error;
	params.CurrentParty = CurrentParty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Parties.WB_Parties_C.OnPartyInviteAcceptedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 UserId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Username                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_Parties_C::OnPartyInviteAcceptedWs(const struct FString& PartyId, const struct FString& UserId, const struct FString& Username)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Parties.WB_Parties_C.OnPartyInviteAcceptedWs");

	UWB_Parties_C_OnPartyInviteAcceptedWs_Params params;
	params.PartyId = PartyId;
	params.UserId = UserId;
	params.Username = Username;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Parties.WB_Parties_C.BndEvt__WB_MainMenu_LeaveParty_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_Parties_C::BndEvt__WB_MainMenu_LeaveParty_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Parties.WB_Parties_C.BndEvt__WB_MainMenu_LeaveParty_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	UWB_Parties_C_BndEvt__WB_MainMenu_LeaveParty_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Parties.WB_Parties_C.OnPartyDisbandedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_Parties_C::OnPartyDisbandedWs(const struct FString& PartyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Parties.WB_Parties_C.OnPartyDisbandedWs");

	UWB_Parties_C_OnPartyDisbandedWs_Params params;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Parties.WB_Parties_C.ExecuteUbergraph_WB_Parties
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Parties_C::ExecuteUbergraph_WB_Parties(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Parties.WB_Parties_C.ExecuteUbergraph_WB_Parties");

	UWB_Parties_C_ExecuteUbergraph_WB_Parties_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
