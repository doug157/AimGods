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

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.SetTeamButtonsEnabledState
struct UWB_CustomGamesScreen_C_SetTeamButtonsEnabledState_Params
{
	bool                                               bIsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.SetRdyStartButton
struct UWB_CustomGamesScreen_C_SetRdyStartButton_Params
{
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.PopulateTeams
struct UWB_CustomGamesScreen_C_PopulateTeams_Params
{
	TArray<struct FCustomGamePlayer>                   Players;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.BndEvt__Btn_LeaveGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_CustomGamesScreen_C_BndEvt__Btn_LeaveGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.Construct
struct UWB_CustomGamesScreen_C_Construct_Params
{
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.CreateCustomGame
struct UWB_CustomGamesScreen_C_CreateCustomGame_Params
{
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCreateCustomGame
struct UWB_CustomGamesScreen_C_OnCreateCustomGame_Params
{
	struct FCustomGame                                 CurrentGame;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnSendInvite
struct UWB_CustomGamesScreen_C_OnSendInvite_Params
{
	struct FOutgoingCustomGameInvite                   Invite;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnAcceptInvite
struct UWB_CustomGamesScreen_C_OnAcceptInvite_Params
{
	struct FCustomGame                                 CurrentGame;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCustomGameDisbandedWs
struct UWB_CustomGamesScreen_C_OnCustomGameDisbandedWs_Params
{
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnPlayerJoinedCustomGameWs
struct UWB_CustomGamesScreen_C_OnPlayerJoinedCustomGameWs_Params
{
	struct FCustomGamePlayer                           Player;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.BndEvt__Btn_Rdy_StartGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWB_CustomGamesScreen_C_BndEvt__Btn_Rdy_StartGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnMatchmakingStatusChanged
struct UWB_CustomGamesScreen_C_OnMatchmakingStatusChanged_Params
{
	TEnumAsByte<EMatchmakingStatus>                    NewStatus;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnPlayerKickedWs
struct UWB_CustomGamesScreen_C_OnPlayerKickedWs_Params
{
	TEnumAsByte<EFCustomGameTeam>                      Team;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnPlayerReadyStateChangedWs
struct UWB_CustomGamesScreen_C_OnPlayerReadyStateChangedWs_Params
{
	struct FString                                     PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bIsReady;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.DescribeGameSession
struct UWB_CustomGamesScreen_C_DescribeGameSession_Params
{
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnDescribeGameSessionComplete
struct UWB_CustomGamesScreen_C_OnDescribeGameSessionComplete_Params
{
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCustomGamePlacementStarted
struct UWB_CustomGamesScreen_C_OnCustomGamePlacementStarted_Params
{
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCustomGamePlacementCancelled
struct UWB_CustomGamesScreen_C_OnCustomGamePlacementCancelled_Params
{
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCustomGamePlacementFulfilled
struct UWB_CustomGamesScreen_C_OnCustomGamePlacementFulfilled_Params
{
	struct FCustomGamePlayer                           Player;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FString                                     PlayerSessionId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Team;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FCustomGamePlacementInfo                    PlacementInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.BndEvt__WB_MainMenu_Custom_Play_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
struct UWB_CustomGamesScreen_C_BndEvt__WB_MainMenu_Custom_Play_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
{
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
struct UWB_CustomGamesScreen_C_BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params
{
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.LeaveCustomGame
struct UWB_CustomGamesScreen_C_LeaveCustomGame_Params
{
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.ExecuteUbergraph_WB_CustomGamesScreen
struct UWB_CustomGamesScreen_C_ExecuteUbergraph_WB_CustomGamesScreen_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.CustomGameLoadFriends__DelegateSignature
struct UWB_CustomGamesScreen_C_CustomGameLoadFriends__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
