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

// Function WB_MainMenu.WB_MainMenu_C.UpdatePreviousSeasonInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPreviousSeasonInfo     Previous_Season_Info           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bError                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_MainMenu_C::UpdatePreviousSeasonInfo(const struct FPreviousSeasonInfo& Previous_Season_Info, bool bError)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.UpdatePreviousSeasonInfo");

	UWB_MainMenu_C_UpdatePreviousSeasonInfo_Params params;
	params.Previous_Season_Info = Previous_Season_Info;
	params.bError = bError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.UpdateEloInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameStatsPayload       Stats                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_MainMenu_C::UpdateEloInfo(const struct FGameStatsPayload& Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.UpdateEloInfo");

	UWB_MainMenu_C_UpdateEloInfo_Params params;
	params.Stats = Stats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.UpdateMainScreen
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_MainMenu_C::UpdateMainScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.UpdateMainScreen");

	UWB_MainMenu_C_UpdateMainScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.UpdateButtons
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_MainMenu_C::UpdateButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.UpdateButtons");

	UWB_MainMenu_C_UpdateButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_MainMenu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.PreConstruct");

	UWB_MainMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.PlaySoundEffect
// (BlueprintCallable, BlueprintEvent)
void UWB_MainMenu_C::PlaySoundEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.PlaySoundEffect");

	UWB_MainMenu_C_PlaySoundEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.OnAcceptPartyInvite
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPartyError             Error                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FCurrentParty           CurrentParty                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_MainMenu_C::OnAcceptPartyInvite(bool Success, const struct FPartyError& Error, const struct FCurrentParty& CurrentParty)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.OnAcceptPartyInvite");

	UWB_MainMenu_C_OnAcceptPartyInvite_Params params;
	params.Success = Success;
	params.Error = Error;
	params.CurrentParty = CurrentParty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.OnPartyDisbandedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_MainMenu_C::OnPartyDisbandedWs(const struct FString& PartyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.OnPartyDisbandedWs");

	UWB_MainMenu_C_OnPartyDisbandedWs_Params params;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.OnLeaveCurrentParty
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Response                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPartyError             Error                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_MainMenu_C::OnLeaveCurrentParty(bool Success, const struct FString& Response, const struct FPartyError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.OnLeaveCurrentParty");

	UWB_MainMenu_C_OnLeaveCurrentParty_Params params;
	params.Success = Success;
	params.Response = Response;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.OnOutgoingPartyInviteAcceptedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 UserId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Username                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_MainMenu_C::OnOutgoingPartyInviteAcceptedWs(const struct FString& PartyId, const struct FString& UserId, const struct FString& Username)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.OnOutgoingPartyInviteAcceptedWs");

	UWB_MainMenu_C_OnOutgoingPartyInviteAcceptedWs_Params params;
	params.PartyId = PartyId;
	params.UserId = UserId;
	params.Username = Username;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.OnMatchmakingStatusChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMatchmakingStatus> NewStatus                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_MainMenu_C::OnMatchmakingStatusChanged(TEnumAsByte<EMatchmakingStatus> NewStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.OnMatchmakingStatusChanged");

	UWB_MainMenu_C_OnMatchmakingStatusChanged_Params params;
	params.NewStatus = NewStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.OnGetPlayerStatsFromServer
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatsError             StatError                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameStatsPayload       Stats                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_MainMenu_C::OnGetPlayerStatsFromServer(bool Success, const struct FStatsError& StatError, const struct FGameStatsPayload& Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.OnGetPlayerStatsFromServer");

	UWB_MainMenu_C_OnGetPlayerStatsFromServer_Params params;
	params.Success = Success;
	params.StatError = StatError;
	params.Stats = Stats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.OnWebSocketError
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_MainMenu_C::OnWebSocketError(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.OnWebSocketError");

	UWB_MainMenu_C_OnWebSocketError_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.OnGetSeasonInfo
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatsError             StatError                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSeasonInfo             SeasonInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_MainMenu_C::OnGetSeasonInfo(bool Success, const struct FStatsError& StatError, const struct FSeasonInfo& SeasonInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.OnGetSeasonInfo");

	UWB_MainMenu_C_OnGetSeasonInfo_Params params;
	params.Success = Success;
	params.StatError = StatError;
	params.SeasonInfo = SeasonInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.MainMenuEloUpdate
// (BlueprintCallable, BlueprintEvent)
void UWB_MainMenu_C::MainMenuEloUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.MainMenuEloUpdate");

	UWB_MainMenu_C_MainMenuEloUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.UpdateScreenData
// (BlueprintCallable, BlueprintEvent)
void UWB_MainMenu_C::UpdateScreenData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.UpdateScreenData");

	UWB_MainMenu_C_UpdateScreenData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_MainMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.Construct");

	UWB_MainMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.LeaveCustomGame
// (BlueprintCallable, BlueprintEvent)
void UWB_MainMenu_C::LeaveCustomGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.LeaveCustomGame");

	UWB_MainMenu_C_LeaveCustomGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.JoinCustomGame
// (BlueprintCallable, BlueprintEvent)
void UWB_MainMenu_C::JoinCustomGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.JoinCustomGame");

	UWB_MainMenu_C_JoinCustomGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_LoadoutActionBar_K2Node_ComponentBoundEvent_7_ClickedAnySlot__DelegateSignature
// (BlueprintEvent)
void UWB_MainMenu_C::BndEvt__WB_LoadoutActionBar_K2Node_ComponentBoundEvent_7_ClickedAnySlot__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_LoadoutActionBar_K2Node_ComponentBoundEvent_7_ClickedAnySlot__DelegateSignature");

	UWB_MainMenu_C_BndEvt__WB_LoadoutActionBar_K2Node_ComponentBoundEvent_7_ClickedAnySlot__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__SettingsBtn_K2Node_ComponentBoundEvent_8_ClickedBtn__DelegateSignature
// (BlueprintEvent)
void UWB_MainMenu_C::BndEvt__SettingsBtn_K2Node_ComponentBoundEvent_8_ClickedBtn__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.BndEvt__SettingsBtn_K2Node_ComponentBoundEvent_8_ClickedBtn__DelegateSignature");

	UWB_MainMenu_C_BndEvt__SettingsBtn_K2Node_ComponentBoundEvent_8_ClickedBtn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__QuitBtn_K2Node_ComponentBoundEvent_9_ClickedBtn__DelegateSignature
// (BlueprintEvent)
void UWB_MainMenu_C::BndEvt__QuitBtn_K2Node_ComponentBoundEvent_9_ClickedBtn__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.BndEvt__QuitBtn_K2Node_ComponentBoundEvent_9_ClickedBtn__DelegateSignature");

	UWB_MainMenu_C_BndEvt__QuitBtn_K2Node_ComponentBoundEvent_9_ClickedBtn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_MainMenu_PlayButton_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_MainMenu_C::BndEvt__WB_MainMenu_PlayButton_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_MainMenu_PlayButton_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature");

	UWB_MainMenu_C_BndEvt__WB_MainMenu_PlayButton_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_MainMenu_C::BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	UWB_MainMenu_C_BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_LoadoutSelection_K2Node_ComponentBoundEvent_1_CloseWindow__DelegateSignature
// (BlueprintEvent)
void UWB_MainMenu_C::BndEvt__WB_LoadoutSelection_K2Node_ComponentBoundEvent_1_CloseWindow__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_LoadoutSelection_K2Node_ComponentBoundEvent_1_CloseWindow__DelegateSignature");

	UWB_MainMenu_C_BndEvt__WB_LoadoutSelection_K2Node_ComponentBoundEvent_1_CloseWindow__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.UpdateSeasonCounter
// (BlueprintCallable, BlueprintEvent)
void UWB_MainMenu_C::UpdateSeasonCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.UpdateSeasonCounter");

	UWB_MainMenu_C_UpdateSeasonCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.OnUpdateSeasonCounter
// (BlueprintCallable, BlueprintEvent)
void UWB_MainMenu_C::OnUpdateSeasonCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.OnUpdateSeasonCounter");

	UWB_MainMenu_C_OnUpdateSeasonCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_Notification_Icon_Section_K2Node_ComponentBoundEvent_0_UpdateFriendsList__DelegateSignature
// (BlueprintEvent)
void UWB_MainMenu_C::BndEvt__WB_Notification_Icon_Section_K2Node_ComponentBoundEvent_0_UpdateFriendsList__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_Notification_Icon_Section_K2Node_ComponentBoundEvent_0_UpdateFriendsList__DelegateSignature");

	UWB_MainMenu_C_BndEvt__WB_Notification_Icon_Section_K2Node_ComponentBoundEvent_0_UpdateFriendsList__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.CustomGameLoadFriends
// (BlueprintCallable, BlueprintEvent)
void UWB_MainMenu_C::CustomGameLoadFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.CustomGameLoadFriends");

	UWB_MainMenu_C_CustomGameLoadFriends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.BadQueueHandler
// (BlueprintCallable, BlueprintEvent)
void UWB_MainMenu_C::BadQueueHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.BadQueueHandler");

	UWB_MainMenu_C_BadQueueHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_Btn_Keys_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_MainMenu_C::BndEvt__WB_Btn_Keys_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_Btn_Keys_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	UWB_MainMenu_C_BndEvt__WB_Btn_Keys_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__RedeemKeyBtn_K2Node_ComponentBoundEvent_4_ClickedBtn__DelegateSignature
// (BlueprintEvent)
void UWB_MainMenu_C::BndEvt__RedeemKeyBtn_K2Node_ComponentBoundEvent_4_ClickedBtn__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.BndEvt__RedeemKeyBtn_K2Node_ComponentBoundEvent_4_ClickedBtn__DelegateSignature");

	UWB_MainMenu_C_BndEvt__RedeemKeyBtn_K2Node_ComponentBoundEvent_4_ClickedBtn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.BndEvt__AccountBtn_K2Node_ComponentBoundEvent_5_ClickedBtn__DelegateSignature
// (BlueprintEvent)
void UWB_MainMenu_C::BndEvt__AccountBtn_K2Node_ComponentBoundEvent_5_ClickedBtn__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.BndEvt__AccountBtn_K2Node_ComponentBoundEvent_5_ClickedBtn__DelegateSignature");

	UWB_MainMenu_C_BndEvt__AccountBtn_K2Node_ComponentBoundEvent_5_ClickedBtn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.ClearOutCustomGameMenu
// (BlueprintCallable, BlueprintEvent)
void UWB_MainMenu_C::ClearOutCustomGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.ClearOutCustomGameMenu");

	UWB_MainMenu_C_ClearOutCustomGameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.OnGetPreviousSeasonInfo
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatsError             StatError                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPreviousSeasonInfo     SeasonInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_MainMenu_C::OnGetPreviousSeasonInfo(bool Success, const struct FStatsError& StatError, const struct FPreviousSeasonInfo& SeasonInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.OnGetPreviousSeasonInfo");

	UWB_MainMenu_C_OnGetPreviousSeasonInfo_Params params;
	params.Success = Success;
	params.StatError = StatError;
	params.SeasonInfo = SeasonInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu.WB_MainMenu_C.ExecuteUbergraph_WB_MainMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_MainMenu_C::ExecuteUbergraph_WB_MainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu.WB_MainMenu_C.ExecuteUbergraph_WB_MainMenu");

	UWB_MainMenu_C_ExecuteUbergraph_WB_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
