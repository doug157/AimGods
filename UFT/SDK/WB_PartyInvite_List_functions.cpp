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

// Function WB_PartyInvite_List.WB_PartyInvite_List_C.Load Requests
// (BlueprintCallable, BlueprintEvent)
void UWB_PartyInvite_List_C::Load_Requests()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyInvite_List.WB_PartyInvite_List_C.Load Requests");

	UWB_PartyInvite_List_C_Load_Requests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_PartyInvite_List_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyInvite_List.WB_PartyInvite_List_C.Construct");

	UWB_PartyInvite_List_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnGetPartyInvites
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPartyError             Error                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPartyInvites           Invites                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_PartyInvite_List_C::OnGetPartyInvites(bool Success, const struct FString& Response, const struct FPartyError& Error, const struct FPartyInvites& Invites)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnGetPartyInvites");

	UWB_PartyInvite_List_C_OnGetPartyInvites_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;
	params.Invites = Invites;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnPartyInviteReceivedWs_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PartyInviteId                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Username                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int64_t                        InviteExpiresAt                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PartyInvite_List_C::OnPartyInviteReceivedWs_Event(const struct FString& PartyInviteId, const struct FString& Username, int64_t InviteExpiresAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnPartyInviteReceivedWs_Event");

	UWB_PartyInvite_List_C_OnPartyInviteReceivedWs_Event_Params params;
	params.PartyInviteId = PartyInviteId;
	params.Username = Username;
	params.InviteExpiresAt = InviteExpiresAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnIncomingPartyInviteCancelledWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PartyInviteId                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_PartyInvite_List_C::OnIncomingPartyInviteCancelledWs(const struct FString& PartyInviteId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnIncomingPartyInviteCancelledWs");

	UWB_PartyInvite_List_C_OnIncomingPartyInviteCancelledWs_Params params;
	params.PartyInviteId = PartyInviteId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnOutgoingPartyInviteAccepted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PartyInviteId                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 UserId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Username                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_PartyInvite_List_C::OnOutgoingPartyInviteAccepted(const struct FString& PartyInviteId, const struct FString& UserId, const struct FString& Username)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnOutgoingPartyInviteAccepted");

	UWB_PartyInvite_List_C_OnOutgoingPartyInviteAccepted_Params params;
	params.PartyInviteId = PartyInviteId;
	params.UserId = UserId;
	params.Username = Username;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.UpdatePartyNotification
// (BlueprintCallable, BlueprintEvent)
void UWB_PartyInvite_List_C::UpdatePartyNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyInvite_List.WB_PartyInvite_List_C.UpdatePartyNotification");

	UWB_PartyInvite_List_C_UpdatePartyNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnSendPartyInvite
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPartyError             Error                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOutgoingPartyInvite    OutgoingInvite                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_PartyInvite_List_C::OnSendPartyInvite(bool Success, const struct FString& Response, const struct FPartyError& Error, const struct FOutgoingPartyInvite& OutgoingInvite)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnSendPartyInvite");

	UWB_PartyInvite_List_C_OnSendPartyInvite_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;
	params.OutgoingInvite = OutgoingInvite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnCancelPartyInvite
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPartyError             Error                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_PartyInvite_List_C::OnCancelPartyInvite(bool Success, const struct FString& Response, const struct FPartyError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnCancelPartyInvite");

	UWB_PartyInvite_List_C_OnCancelPartyInvite_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnAcceptPartyInvite
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPartyError             Error                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FCurrentParty           CurrentParty                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_PartyInvite_List_C::OnAcceptPartyInvite(bool Success, const struct FPartyError& Error, const struct FCurrentParty& CurrentParty)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyInvite_List.WB_PartyInvite_List_C.OnAcceptPartyInvite");

	UWB_PartyInvite_List_C_OnAcceptPartyInvite_Params params;
	params.Success = Success;
	params.Error = Error;
	params.CurrentParty = CurrentParty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.ClearOutPartyInvites
// (BlueprintCallable, BlueprintEvent)
void UWB_PartyInvite_List_C::ClearOutPartyInvites()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyInvite_List.WB_PartyInvite_List_C.ClearOutPartyInvites");

	UWB_PartyInvite_List_C_ClearOutPartyInvites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.ExecuteUbergraph_WB_PartyInvite_List
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PartyInvite_List_C::ExecuteUbergraph_WB_PartyInvite_List(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyInvite_List.WB_PartyInvite_List_C.ExecuteUbergraph_WB_PartyInvite_List");

	UWB_PartyInvite_List_C_ExecuteUbergraph_WB_PartyInvite_List_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyInvite_List.WB_PartyInvite_List_C.Party_WeHaveSomething__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PartyInvite_List_C::Party_WeHaveSomething__DelegateSignature(int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyInvite_List.WB_PartyInvite_List_C.Party_WeHaveSomething__DelegateSignature");

	UWB_PartyInvite_List_C_Party_WeHaveSomething__DelegateSignature_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
