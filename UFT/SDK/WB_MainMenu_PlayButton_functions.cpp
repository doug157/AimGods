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

// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.PartnerIsOutOfGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPartnerIsOutOfGame            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_MainMenu_PlayButton_C::PartnerIsOutOfGame(bool* bPartnerIsOutOfGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.PartnerIsOutOfGame");

	UWB_MainMenu_PlayButton_C_PartnerIsOutOfGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bPartnerIsOutOfGame != nullptr)
		*bPartnerIsOutOfGame = params.bPartnerIsOutOfGame;

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.Btn_Change_Status
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMatchmakingStatus> CurrentStatus                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsInParty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bIsPartyLeader                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_MainMenu_PlayButton_C::Btn_Change_Status(TEnumAsByte<EMatchmakingStatus> CurrentStatus, bool bIsInParty, bool bIsPartyLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.Btn_Change_Status");

	UWB_MainMenu_PlayButton_C_Btn_Change_Status_Params params;
	params.CurrentStatus = CurrentStatus;
	params.bIsInParty = bIsInParty;
	params.bIsPartyLeader = bIsPartyLeader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_MainMenu_PlayButton_C::BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWB_MainMenu_PlayButton_C_BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_MainMenu_PlayButton_C::BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWB_MainMenu_PlayButton_C_BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_MainMenu_PlayButton_C::BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWB_MainMenu_PlayButton_C_BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.ChangeOfStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMatchmakingStatus> Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_MainMenu_PlayButton_C::ChangeOfStatus(TEnumAsByte<EMatchmakingStatus> Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.ChangeOfStatus");

	UWB_MainMenu_PlayButton_C_ChangeOfStatus_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_MainMenu_PlayButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.Construct");

	UWB_MainMenu_PlayButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.OnPartyMemberInMatchStatusChangedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           bIsInGame                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_MainMenu_PlayButton_C::OnPartyMemberInMatchStatusChangedWs(const struct FString& UserId, bool bIsInGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.OnPartyMemberInMatchStatusChangedWs");

	UWB_MainMenu_PlayButton_C_OnPartyMemberInMatchStatusChangedWs_Params params;
	params.UserId = UserId;
	params.bIsInGame = bIsInGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.ExecuteUbergraph_WB_MainMenu_PlayButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_MainMenu_PlayButton_C::ExecuteUbergraph_WB_MainMenu_PlayButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.ExecuteUbergraph_WB_MainMenu_PlayButton");

	UWB_MainMenu_PlayButton_C_ExecuteUbergraph_WB_MainMenu_PlayButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.LeaveParty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_MainMenu_PlayButton_C::LeaveParty__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.LeaveParty__DelegateSignature");

	UWB_MainMenu_PlayButton_C_LeaveParty__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_MainMenu_PlayButton_C::Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.Clicked__DelegateSignature");

	UWB_MainMenu_PlayButton_C_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
