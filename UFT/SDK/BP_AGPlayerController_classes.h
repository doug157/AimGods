#pragma once

// Name: AimGods, Version: Beta 2


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AGPlayerController.BP_AGPlayerController_C
// 0x00C8 (FullSize[0x0670] - InheritedSize[0x05A8])
class ABP_AGPlayerController_C : public AAGPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWB_Gameplay_C*                              GameplayWB;                                                // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_CharacterSelection_C*                    CharacterSelectionRef;                                     // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       KillerName;                                                // 0x05C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       DeathPlayerName;                                           // 0x05D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SenderText;                                                // 0x05F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SenderName;                                                // 0x0608(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_AGGameInstance_C*                        GameInstance;                                              // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PlayerSessionId;                                           // 0x0628(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UWB_RespawnScreen_C*                         RespawnScreenWidget;                                       // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_PostMatch_C*                             PostMatchScreen;                                           // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_Shop_C*                                  ShopWB;                                                    // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsDebugDetailsVisible;                                     // 0x0650(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IQ17[0x7];                                     // 0x0651(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWB_CheatManager_C*                          CheatManagerWidget;                                        // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnInputBindingChanged;                                     // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AGPlayerController.BP_AGPlayerController_C");
		return ptr;
	}


	void LoadSettings();
	void InpActEvt_SettingMenu_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_ShowPlayersState_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_ShowPlayersState_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_u_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_o_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_a_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_F10_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_CheatOpenShop_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_CheatGold_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ShowGameplayWidget(class ABP_AGCharacter_C* PlayerPawn);
	void ShowEndGameScreen(bool bRedTeamWon, int Position);
	void CloseWidgets();
	void GetKillFeedText(const struct FText& Killer, const struct FText& DeathPlayer, bool bKillerIsRedTeam, bool bVictimIsRedTeam);
	void UpdateKillFeed(const struct FText& Killer, const struct FText& Victim, bool bKillerIsRedTeam, bool bVictimIsRedTeam);
	void ClearWidgets();
	void PauseGame();
	void ShowKillingSpreeMessage();
	void CloseScores();
	void RemoveAllWidgets();
	void BPKicked();
	void BPCloseCharacterSelection();
	void CloseCharacterSelection();
	void Kicked();
	void ReceiveBeginPlay();
	void Show_Hit_Indicator(const struct FVector& Damager_Loc);
	void BPCloseWidgets();
	void ShowRespawnScreen_2(float RespawnTimer);
	void ShowRespawnScreen(float RespawnTimer);
	void Client_Remove_Widgets();
	void OnPostMatchBegin(bool bRedTeamWon);
	void Open_Shop_UI();
	void Close_Shop_UI();
	void On_Begin_Recall();
	void On_End_Recall();
	void OnDowntimeNotification(const struct FString& Message);
	void AddCheatManagerWidget();
	void OnPreMatchBegin(float PrematchTime);
	void OnEndGameStatsRecieved(TArray<struct FGameStatsPayload> EndGameStats, bool bIsCustomGame);
	void ShowTextChat();
	void UpdateChat(const struct FText& Sender, const struct FText& Text, bool bTeamChat);
	void ServerSendChatMessage(const struct FText& TextToSend, bool bTeamChat, class APlayerController* SenderPC);
	void ExecuteUbergraph_BP_AGPlayerController(int EntryPoint);
	void OnInputBindingChanged__DelegateSignature(const struct FName& BindingName, const struct FKey& NewKey);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
