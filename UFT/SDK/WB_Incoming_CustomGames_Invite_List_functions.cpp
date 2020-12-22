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

// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Incoming_CustomGames_Invite_List_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.Construct");

	UWB_Incoming_CustomGames_Invite_List_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.OnGetIncomingInvites
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FIncomingCustomGameInvite> CustomGameInvites              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWB_Incoming_CustomGames_Invite_List_C::OnGetIncomingInvites(TArray<struct FIncomingCustomGameInvite> CustomGameInvites)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.OnGetIncomingInvites");

	UWB_Incoming_CustomGames_Invite_List_C_OnGetIncomingInvites_Params params;
	params.CustomGameInvites = CustomGameInvites;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.OnCustomGameInviteReceivedWs
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIncomingCustomGameInvite CustomGameInvite               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_Incoming_CustomGames_Invite_List_C::OnCustomGameInviteReceivedWs(const struct FIncomingCustomGameInvite& CustomGameInvite)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.OnCustomGameInviteReceivedWs");

	UWB_Incoming_CustomGames_Invite_List_C_OnCustomGameInviteReceivedWs_Params params;
	params.CustomGameInvite = CustomGameInvite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.UpdateCustomGameNotifications
// (BlueprintCallable, BlueprintEvent)
void UWB_Incoming_CustomGames_Invite_List_C::UpdateCustomGameNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.UpdateCustomGameNotifications");

	UWB_Incoming_CustomGames_Invite_List_C_UpdateCustomGameNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.OnAcceptInvite
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGame             CurrentGame                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_Incoming_CustomGames_Invite_List_C::OnAcceptInvite(const struct FCustomGame& CurrentGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.OnAcceptInvite");

	UWB_Incoming_CustomGames_Invite_List_C_OnAcceptInvite_Params params;
	params.CurrentGame = CurrentGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.OnCustomGameInviteCancelledWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InviteId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_Incoming_CustomGames_Invite_List_C::OnCustomGameInviteCancelledWs(const struct FString& InviteId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.OnCustomGameInviteCancelledWs");

	UWB_Incoming_CustomGames_Invite_List_C_OnCustomGameInviteCancelledWs_Params params;
	params.InviteId = InviteId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.ClearOutInvites
// (BlueprintCallable, BlueprintEvent)
void UWB_Incoming_CustomGames_Invite_List_C::ClearOutInvites()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.ClearOutInvites");

	UWB_Incoming_CustomGames_Invite_List_C_ClearOutInvites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.ExecuteUbergraph_WB_Incoming_CustomGames_Invite_List
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Incoming_CustomGames_Invite_List_C::ExecuteUbergraph_WB_Incoming_CustomGames_Invite_List(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.ExecuteUbergraph_WB_Incoming_CustomGames_Invite_List");

	UWB_Incoming_CustomGames_Invite_List_C_ExecuteUbergraph_WB_Incoming_CustomGames_Invite_List_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.CustomGame_WeHaveSomething__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Incoming_CustomGames_Invite_List_C::CustomGame_WeHaveSomething__DelegateSignature(int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.CustomGame_WeHaveSomething__DelegateSignature");

	UWB_Incoming_CustomGames_Invite_List_C_CustomGame_WeHaveSomething__DelegateSignature_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
