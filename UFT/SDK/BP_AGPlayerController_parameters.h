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

// Function BP_AGPlayerController.BP_AGPlayerController_C.LoadSettings
struct ABP_AGPlayerController_C_LoadSettings_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.InpActEvt_SettingMenu_K2Node_InputActionEvent_5
struct ABP_AGPlayerController_C_InpActEvt_SettingMenu_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.InpActEvt_ShowPlayersState_K2Node_InputActionEvent_4
struct ABP_AGPlayerController_C_InpActEvt_ShowPlayersState_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.InpActEvt_ShowPlayersState_K2Node_InputActionEvent_3
struct ABP_AGPlayerController_C_InpActEvt_ShowPlayersState_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.InpActEvt_u_K2Node_InputKeyEvent_4
struct ABP_AGPlayerController_C_InpActEvt_u_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.InpActEvt_ö_K2Node_InputKeyEvent_3
struct ABP_AGPlayerController_C_InpActEvt_o_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.InpActEvt_ä_K2Node_InputKeyEvent_2
struct ABP_AGPlayerController_C_InpActEvt_a_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.InpActEvt_F10_K2Node_InputKeyEvent_1
struct ABP_AGPlayerController_C_InpActEvt_F10_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.InpActEvt_CheatOpenShop_K2Node_InputActionEvent_2
struct ABP_AGPlayerController_C_InpActEvt_CheatOpenShop_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.InpActEvt_CheatGold_K2Node_InputActionEvent_1
struct ABP_AGPlayerController_C_InpActEvt_CheatGold_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.ReceiveEndPlay
struct ABP_AGPlayerController_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.ShowGameplayWidget
struct ABP_AGPlayerController_C_ShowGameplayWidget_Params
{
	class ABP_AGCharacter_C*                           PlayerPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.ShowEndGameScreen
struct ABP_AGPlayerController_C_ShowEndGameScreen_Params
{
	bool                                               bRedTeamWon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Position;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.CloseWidgets
struct ABP_AGPlayerController_C_CloseWidgets_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.GetKillFeedText
struct ABP_AGPlayerController_C_GetKillFeedText_Params
{
	struct FText                                       Killer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       DeathPlayer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bKillerIsRedTeam;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bVictimIsRedTeam;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.UpdateKillFeed
struct ABP_AGPlayerController_C_UpdateKillFeed_Params
{
	struct FText                                       Killer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Victim;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bKillerIsRedTeam;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bVictimIsRedTeam;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.ClearWidgets
struct ABP_AGPlayerController_C_ClearWidgets_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.PauseGame
struct ABP_AGPlayerController_C_PauseGame_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.ShowKillingSpreeMessage
struct ABP_AGPlayerController_C_ShowKillingSpreeMessage_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.CloseScores
struct ABP_AGPlayerController_C_CloseScores_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.RemoveAllWidgets
struct ABP_AGPlayerController_C_RemoveAllWidgets_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.BPKicked
struct ABP_AGPlayerController_C_BPKicked_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.BPCloseCharacterSelection
struct ABP_AGPlayerController_C_BPCloseCharacterSelection_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.CloseCharacterSelection
struct ABP_AGPlayerController_C_CloseCharacterSelection_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.Kicked
struct ABP_AGPlayerController_C_Kicked_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.ReceiveBeginPlay
struct ABP_AGPlayerController_C_ReceiveBeginPlay_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.Show Hit Indicator
struct ABP_AGPlayerController_C_Show_Hit_Indicator_Params
{
	struct FVector                                     Damager_Loc;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.BPCloseWidgets
struct ABP_AGPlayerController_C_BPCloseWidgets_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.ShowRespawnScreen_2
struct ABP_AGPlayerController_C_ShowRespawnScreen_2_Params
{
	float                                              RespawnTimer;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.ShowRespawnScreen
struct ABP_AGPlayerController_C_ShowRespawnScreen_Params
{
	float                                              RespawnTimer;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.Client Remove Widgets
struct ABP_AGPlayerController_C_Client_Remove_Widgets_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.OnPostMatchBegin
struct ABP_AGPlayerController_C_OnPostMatchBegin_Params
{
	bool                                               bRedTeamWon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.Open Shop UI
struct ABP_AGPlayerController_C_Open_Shop_UI_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.Close Shop UI
struct ABP_AGPlayerController_C_Close_Shop_UI_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.On Begin Recall
struct ABP_AGPlayerController_C_On_Begin_Recall_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.On End Recall
struct ABP_AGPlayerController_C_On_End_Recall_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.OnDowntimeNotification
struct ABP_AGPlayerController_C_OnDowntimeNotification_Params
{
	struct FString                                     Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.AddCheatManagerWidget
struct ABP_AGPlayerController_C_AddCheatManagerWidget_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.OnPreMatchBegin
struct ABP_AGPlayerController_C_OnPreMatchBegin_Params
{
	float                                              PrematchTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.OnEndGameStatsRecieved
struct ABP_AGPlayerController_C_OnEndGameStatsRecieved_Params
{
	TArray<struct FGameStatsPayload>                   EndGameStats;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bIsCustomGame;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.ShowTextChat
struct ABP_AGPlayerController_C_ShowTextChat_Params
{
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.UpdateChat
struct ABP_AGPlayerController_C_UpdateChat_Params
{
	struct FText                                       Sender;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bTeamChat;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.ServerSendChatMessage
struct ABP_AGPlayerController_C_ServerSendChatMessage_Params
{
	struct FText                                       TextToSend;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bTeamChat;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                           SenderPC;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.ExecuteUbergraph_BP_AGPlayerController
struct ABP_AGPlayerController_C_ExecuteUbergraph_BP_AGPlayerController_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGPlayerController.BP_AGPlayerController_C.OnInputBindingChanged__DelegateSignature
struct ABP_AGPlayerController_C_OnInputBindingChanged__DelegateSignature_Params
{
	struct FName                                       BindingName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        NewKey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
