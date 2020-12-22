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

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.SetTeamButtonsEnabledState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsEnabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_CustomGamesScreen_C::SetTeamButtonsEnabledState(bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.SetTeamButtonsEnabledState");

	UWB_CustomGamesScreen_C_SetTeamButtonsEnabledState_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.SetRdyStartButton
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_CustomGamesScreen_C::SetRdyStartButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.SetRdyStartButton");

	UWB_CustomGamesScreen_C_SetRdyStartButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.PopulateTeams
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCustomGamePlayer> Players                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWB_CustomGamesScreen_C::PopulateTeams(TArray<struct FCustomGamePlayer>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.PopulateTeams");

	UWB_CustomGamesScreen_C_PopulateTeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.BndEvt__Btn_LeaveGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_CustomGamesScreen_C::BndEvt__Btn_LeaveGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.BndEvt__Btn_LeaveGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWB_CustomGamesScreen_C_BndEvt__Btn_LeaveGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_CustomGamesScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.Construct");

	UWB_CustomGamesScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.CreateCustomGame
// (BlueprintCallable, BlueprintEvent)
void UWB_CustomGamesScreen_C::CreateCustomGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.CreateCustomGame");

	UWB_CustomGamesScreen_C_CreateCustomGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCreateCustomGame
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGame             CurrentGame                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_CustomGamesScreen_C::OnCreateCustomGame(const struct FCustomGame& CurrentGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCreateCustomGame");

	UWB_CustomGamesScreen_C_OnCreateCustomGame_Params params;
	params.CurrentGame = CurrentGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnSendInvite
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOutgoingCustomGameInvite Invite                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_CustomGamesScreen_C::OnSendInvite(const struct FOutgoingCustomGameInvite& Invite)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnSendInvite");

	UWB_CustomGamesScreen_C_OnSendInvite_Params params;
	params.Invite = Invite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnAcceptInvite
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGame             CurrentGame                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_CustomGamesScreen_C::OnAcceptInvite(const struct FCustomGame& CurrentGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnAcceptInvite");

	UWB_CustomGamesScreen_C_OnAcceptInvite_Params params;
	params.CurrentGame = CurrentGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCustomGameDisbandedWs
// (BlueprintCallable, BlueprintEvent)
void UWB_CustomGamesScreen_C::OnCustomGameDisbandedWs()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCustomGameDisbandedWs");

	UWB_CustomGamesScreen_C_OnCustomGameDisbandedWs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnPlayerJoinedCustomGameWs
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGamePlayer       Player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_CustomGamesScreen_C::OnPlayerJoinedCustomGameWs(const struct FCustomGamePlayer& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnPlayerJoinedCustomGameWs");

	UWB_CustomGamesScreen_C_OnPlayerJoinedCustomGameWs_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.BndEvt__Btn_Rdy_StartGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_CustomGamesScreen_C::BndEvt__Btn_Rdy_StartGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.BndEvt__Btn_Rdy_StartGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWB_CustomGamesScreen_C_BndEvt__Btn_Rdy_StartGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnMatchmakingStatusChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMatchmakingStatus> NewStatus                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_CustomGamesScreen_C::OnMatchmakingStatusChanged(TEnumAsByte<EMatchmakingStatus> NewStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnMatchmakingStatusChanged");

	UWB_CustomGamesScreen_C_OnMatchmakingStatusChanged_Params params;
	params.NewStatus = NewStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnPlayerKickedWs
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFCustomGameTeam>  Team                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_CustomGamesScreen_C::OnPlayerKickedWs(TEnumAsByte<EFCustomGameTeam> Team, const struct FString& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnPlayerKickedWs");

	UWB_CustomGamesScreen_C_OnPlayerKickedWs_Params params;
	params.Team = Team;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnPlayerReadyStateChangedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           bIsReady                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_CustomGamesScreen_C::OnPlayerReadyStateChangedWs(const struct FString& PlayerId, bool bIsReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnPlayerReadyStateChangedWs");

	UWB_CustomGamesScreen_C_OnPlayerReadyStateChangedWs_Params params;
	params.PlayerId = PlayerId;
	params.bIsReady = bIsReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.DescribeGameSession
// (BlueprintCallable, BlueprintEvent)
void UWB_CustomGamesScreen_C::DescribeGameSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.DescribeGameSession");

	UWB_CustomGamesScreen_C_DescribeGameSession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnDescribeGameSessionComplete
// (BlueprintCallable, BlueprintEvent)
void UWB_CustomGamesScreen_C::OnDescribeGameSessionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnDescribeGameSessionComplete");

	UWB_CustomGamesScreen_C_OnDescribeGameSessionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCustomGamePlacementStarted
// (BlueprintCallable, BlueprintEvent)
void UWB_CustomGamesScreen_C::OnCustomGamePlacementStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCustomGamePlacementStarted");

	UWB_CustomGamesScreen_C_OnCustomGamePlacementStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCustomGamePlacementCancelled
// (BlueprintCallable, BlueprintEvent)
void UWB_CustomGamesScreen_C::OnCustomGamePlacementCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCustomGamePlacementCancelled");

	UWB_CustomGamesScreen_C_OnCustomGamePlacementCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCustomGamePlacementFulfilled
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGamePlayer       Player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FString                 PlayerSessionId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FCustomGamePlacementInfo PlacementInfo                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_CustomGamesScreen_C::OnCustomGamePlacementFulfilled(const struct FCustomGamePlayer& Player, const struct FString& PlayerSessionId, const struct FString& Team, const struct FCustomGamePlacementInfo& PlacementInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCustomGamePlacementFulfilled");

	UWB_CustomGamesScreen_C_OnCustomGamePlacementFulfilled_Params params;
	params.Player = Player;
	params.PlayerSessionId = PlayerSessionId;
	params.Team = Team;
	params.PlacementInfo = PlacementInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.BndEvt__WB_MainMenu_Custom_Play_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_CustomGamesScreen_C::BndEvt__WB_MainMenu_Custom_Play_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.BndEvt__WB_MainMenu_Custom_Play_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	UWB_CustomGamesScreen_C_BndEvt__WB_MainMenu_Custom_Play_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_CustomGamesScreen_C::BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	UWB_CustomGamesScreen_C_BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.LeaveCustomGame
// (BlueprintCallable, BlueprintEvent)
void UWB_CustomGamesScreen_C::LeaveCustomGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.LeaveCustomGame");

	UWB_CustomGamesScreen_C_LeaveCustomGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.ExecuteUbergraph_WB_CustomGamesScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_CustomGamesScreen_C::ExecuteUbergraph_WB_CustomGamesScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.ExecuteUbergraph_WB_CustomGamesScreen");

	UWB_CustomGamesScreen_C_ExecuteUbergraph_WB_CustomGamesScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.CustomGameLoadFriends__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_CustomGamesScreen_C::CustomGameLoadFriends__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.CustomGameLoadFriends__DelegateSignature");

	UWB_CustomGamesScreen_C_CustomGameLoadFriends__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
