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

// WidgetBlueprintGeneratedClass WB_PostMatchPlayers.WB_PostMatchPlayers_C
// 0x0038 (FullSize[0x0268] - InheritedSize[0x0230])
class UWB_PostMatchPlayers_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  SB_PlayersList;                                            // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FGameStatsPayload>                   EndGameStats;                                              // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPostMatchPlayerStats>               PostMatchPlayers;                                          // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                TimerUpdate_TimerHandle;                                   // 0x0260(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_PostMatchPlayers.WB_PostMatchPlayers_C");
		return ptr;
	}


	void FillPlayerArrayFromStats(TArray<struct FGameStatsPayload>* GameStats);
	void AreAllPlayerStatsLoaded(bool* Loaded);
	void Construct();
	void TimerUpdate();
	void CustomGameEndGame();
	void Retry_Load_Stats();
	void PreConstruct(bool IsDesignTime);
	void OnEndGameStatsReceived(TArray<struct FGameStatsPayload> EndGameStats, bool bIsCustomGame);
	void DisplayEndgameStats(bool bIsCustomGame, TArray<struct FGameStatsPayload> GameStats);
	void DisplayCustomEndGameStats();
	void ExecuteUbergraph_WB_PostMatchPlayers(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
