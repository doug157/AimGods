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

// Function WB_MainMenu.WB_MainMenu_C.UpdatePreviousSeasonInfo
struct UWB_MainMenu_C_UpdatePreviousSeasonInfo_Params
{
	struct FPreviousSeasonInfo                         Previous_Season_Info;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bError;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_MainMenu.WB_MainMenu_C.UpdateEloInfo
struct UWB_MainMenu_C_UpdateEloInfo_Params
{
	struct FGameStatsPayload                           Stats;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_MainMenu.WB_MainMenu_C.UpdateMainScreen
struct UWB_MainMenu_C_UpdateMainScreen_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.UpdateButtons
struct UWB_MainMenu_C_UpdateButtons_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.PreConstruct
struct UWB_MainMenu_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_MainMenu.WB_MainMenu_C.PlaySoundEffect
struct UWB_MainMenu_C_PlaySoundEffect_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.OnAcceptPartyInvite
struct UWB_MainMenu_C_OnAcceptPartyInvite_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPartyError                                 Error;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FCurrentParty                               CurrentParty;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_MainMenu.WB_MainMenu_C.OnPartyDisbandedWs
struct UWB_MainMenu_C_OnPartyDisbandedWs_Params
{
	struct FString                                     PartyId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_MainMenu.WB_MainMenu_C.OnLeaveCurrentParty
struct UWB_MainMenu_C_OnLeaveCurrentParty_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPartyError                                 Error;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_MainMenu.WB_MainMenu_C.OnOutgoingPartyInviteAcceptedWs
struct UWB_MainMenu_C_OnOutgoingPartyInviteAcceptedWs_Params
{
	struct FString                                     PartyId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     UserId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Username;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_MainMenu.WB_MainMenu_C.OnMatchmakingStatusChanged
struct UWB_MainMenu_C_OnMatchmakingStatusChanged_Params
{
	TEnumAsByte<EMatchmakingStatus>                    NewStatus;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_MainMenu.WB_MainMenu_C.OnGetPlayerStatsFromServer
struct UWB_MainMenu_C_OnGetPlayerStatsFromServer_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FStatsError                                 StatError;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameStatsPayload                           Stats;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_MainMenu.WB_MainMenu_C.OnWebSocketError
struct UWB_MainMenu_C_OnWebSocketError_Params
{
	struct FString                                     Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_MainMenu.WB_MainMenu_C.OnGetSeasonInfo
struct UWB_MainMenu_C_OnGetSeasonInfo_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FStatsError                                 StatError;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSeasonInfo                                 SeasonInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_MainMenu.WB_MainMenu_C.MainMenuEloUpdate
struct UWB_MainMenu_C_MainMenuEloUpdate_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.UpdateScreenData
struct UWB_MainMenu_C_UpdateScreenData_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.Construct
struct UWB_MainMenu_C_Construct_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.LeaveCustomGame
struct UWB_MainMenu_C_LeaveCustomGame_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.JoinCustomGame
struct UWB_MainMenu_C_JoinCustomGame_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_LoadoutActionBar_K2Node_ComponentBoundEvent_7_ClickedAnySlot__DelegateSignature
struct UWB_MainMenu_C_BndEvt__WB_LoadoutActionBar_K2Node_ComponentBoundEvent_7_ClickedAnySlot__DelegateSignature_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.BndEvt__SettingsBtn_K2Node_ComponentBoundEvent_8_ClickedBtn__DelegateSignature
struct UWB_MainMenu_C_BndEvt__SettingsBtn_K2Node_ComponentBoundEvent_8_ClickedBtn__DelegateSignature_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.BndEvt__QuitBtn_K2Node_ComponentBoundEvent_9_ClickedBtn__DelegateSignature
struct UWB_MainMenu_C_BndEvt__QuitBtn_K2Node_ComponentBoundEvent_9_ClickedBtn__DelegateSignature_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_MainMenu_PlayButton_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature
struct UWB_MainMenu_C_BndEvt__WB_MainMenu_PlayButton_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
struct UWB_MainMenu_C_BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_LoadoutSelection_K2Node_ComponentBoundEvent_1_CloseWindow__DelegateSignature
struct UWB_MainMenu_C_BndEvt__WB_LoadoutSelection_K2Node_ComponentBoundEvent_1_CloseWindow__DelegateSignature_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.UpdateSeasonCounter
struct UWB_MainMenu_C_UpdateSeasonCounter_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.OnUpdateSeasonCounter
struct UWB_MainMenu_C_OnUpdateSeasonCounter_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_Notification_Icon_Section_K2Node_ComponentBoundEvent_0_UpdateFriendsList__DelegateSignature
struct UWB_MainMenu_C_BndEvt__WB_Notification_Icon_Section_K2Node_ComponentBoundEvent_0_UpdateFriendsList__DelegateSignature_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.CustomGameLoadFriends
struct UWB_MainMenu_C_CustomGameLoadFriends_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.BadQueueHandler
struct UWB_MainMenu_C_BadQueueHandler_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.BndEvt__WB_Btn_Keys_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
struct UWB_MainMenu_C_BndEvt__WB_Btn_Keys_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.BndEvt__RedeemKeyBtn_K2Node_ComponentBoundEvent_4_ClickedBtn__DelegateSignature
struct UWB_MainMenu_C_BndEvt__RedeemKeyBtn_K2Node_ComponentBoundEvent_4_ClickedBtn__DelegateSignature_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.BndEvt__AccountBtn_K2Node_ComponentBoundEvent_5_ClickedBtn__DelegateSignature
struct UWB_MainMenu_C_BndEvt__AccountBtn_K2Node_ComponentBoundEvent_5_ClickedBtn__DelegateSignature_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.ClearOutCustomGameMenu
struct UWB_MainMenu_C_ClearOutCustomGameMenu_Params
{
};

// Function WB_MainMenu.WB_MainMenu_C.OnGetPreviousSeasonInfo
struct UWB_MainMenu_C_OnGetPreviousSeasonInfo_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FStatsError                                 StatError;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPreviousSeasonInfo                         SeasonInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_MainMenu.WB_MainMenu_C.ExecuteUbergraph_WB_MainMenu
struct UWB_MainMenu_C_ExecuteUbergraph_WB_MainMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
