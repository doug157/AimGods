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

// WidgetBlueprintGeneratedClass WB_CustomGamesScreen.WB_CustomGamesScreen_C
// 0x00D8 (FullSize[0x0308] - InheritedSize[0x0230])
class UWB_CustomGamesScreen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWB_CustomGames_TeamPlayer_C*                BluePlayer1;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CustomGames_TeamPlayer_C*                BluePlayer2;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button02_Framed_C*                       Btn_LeaveGame;                                             // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button02_Framed_C*                       Btn_Rdy_StartGame;                                         // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                   // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_142;                                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CustomGames_TeamPlayer_C*                RedPlayer1;                                                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CustomGames_TeamPlayer_C*                RedPlayer2;                                                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CustomGames_TeamPlayer_C*                Spectator1;                                                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CustomGames_TeamPlayer_C*                Spectator2;                                                // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CustomGames_TeamPlayer_C*                Spectator3;                                                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CustomGames_TeamPlayer_C*                Spectator4;                                                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VB_BlueTeam;                                               // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                                    VB_Invites;                                                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VB_RedTeam;                                                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              VB_Spectators;                                             // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Border_A_C*                              WB_Border_A;                                               // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MainMenu_Custom_Play_C*                  WB_MainMenu_Custom_Play;                                   // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MainMenu_CustomMatch_C*                  WB_MainMenu_CustomMatch;                                   // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FCustomGamePlayer>                   CustomGamePlayers;                                         // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxRedPlayers;                                             // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                MaxBluePlayers;                                            // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                MaxSpectators;                                             // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<EMatchmakingStatus>                    MatchmakingStatus;                                         // 0x02EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6C3P[0x3];                                     // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                DescribeGameSessionTimerHandle;                            // 0x02F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    CustomGameLoadFriends;                                     // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_CustomGamesScreen.WB_CustomGamesScreen_C");
		return ptr;
	}


	void SetTeamButtonsEnabledState(bool bIsEnabled);
	void SetRdyStartButton();
	void PopulateTeams(TArray<struct FCustomGamePlayer>* Players);
	void BndEvt__Btn_LeaveGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void Construct();
	void CreateCustomGame();
	void OnCreateCustomGame(const struct FCustomGame& CurrentGame);
	void OnSendInvite(const struct FOutgoingCustomGameInvite& Invite);
	void OnAcceptInvite(const struct FCustomGame& CurrentGame);
	void OnCustomGameDisbandedWs();
	void OnPlayerJoinedCustomGameWs(const struct FCustomGamePlayer& Player);
	void BndEvt__Btn_Rdy_StartGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void OnMatchmakingStatusChanged(TEnumAsByte<EMatchmakingStatus> NewStatus);
	void OnPlayerKickedWs(TEnumAsByte<EFCustomGameTeam> Team, const struct FString& PlayerId);
	void OnPlayerReadyStateChangedWs(const struct FString& PlayerId, bool bIsReady);
	void DescribeGameSession();
	void OnDescribeGameSessionComplete();
	void OnCustomGamePlacementStarted();
	void OnCustomGamePlacementCancelled();
	void OnCustomGamePlacementFulfilled(const struct FCustomGamePlayer& Player, const struct FString& PlayerSessionId, const struct FString& Team, const struct FCustomGamePlacementInfo& PlacementInfo);
	void BndEvt__WB_MainMenu_Custom_Play_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
	void LeaveCustomGame();
	void ExecuteUbergraph_WB_CustomGamesScreen(int EntryPoint);
	void CustomGameLoadFriends__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
