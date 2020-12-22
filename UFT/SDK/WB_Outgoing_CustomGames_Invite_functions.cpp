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

// Function WB_Outgoing_CustomGames_Invite.WB_Outgoing_CustomGames_Invite_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Outgoing_CustomGames_Invite_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Outgoing_CustomGames_Invite.WB_Outgoing_CustomGames_Invite_C.Construct");

	UWB_Outgoing_CustomGames_Invite_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Outgoing_CustomGames_Invite.WB_Outgoing_CustomGames_Invite_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_Outgoing_CustomGames_Invite_C::BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Outgoing_CustomGames_Invite.WB_Outgoing_CustomGames_Invite_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWB_Outgoing_CustomGames_Invite_C_BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Outgoing_CustomGames_Invite.WB_Outgoing_CustomGames_Invite_C.OnCustomGameInviteCancelledWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InviteId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_Outgoing_CustomGames_Invite_C::OnCustomGameInviteCancelledWs(const struct FString& InviteId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Outgoing_CustomGames_Invite.WB_Outgoing_CustomGames_Invite_C.OnCustomGameInviteCancelledWs");

	UWB_Outgoing_CustomGames_Invite_C_OnCustomGameInviteCancelledWs_Params params;
	params.InviteId = InviteId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Outgoing_CustomGames_Invite.WB_Outgoing_CustomGames_Invite_C.RemoveInvite
// (BlueprintCallable, BlueprintEvent)
void UWB_Outgoing_CustomGames_Invite_C::RemoveInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Outgoing_CustomGames_Invite.WB_Outgoing_CustomGames_Invite_C.RemoveInvite");

	UWB_Outgoing_CustomGames_Invite_C_RemoveInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Outgoing_CustomGames_Invite.WB_Outgoing_CustomGames_Invite_C.ExecuteUbergraph_WB_Outgoing_CustomGames_Invite
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Outgoing_CustomGames_Invite_C::ExecuteUbergraph_WB_Outgoing_CustomGames_Invite(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Outgoing_CustomGames_Invite.WB_Outgoing_CustomGames_Invite_C.ExecuteUbergraph_WB_Outgoing_CustomGames_Invite");

	UWB_Outgoing_CustomGames_Invite_C_ExecuteUbergraph_WB_Outgoing_CustomGames_Invite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
