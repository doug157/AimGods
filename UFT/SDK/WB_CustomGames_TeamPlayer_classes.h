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

// WidgetBlueprintGeneratedClass WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C
// 0x0076 (FullSize[0x02A6] - InheritedSize[0x0230])
class UWB_CustomGames_TeamPlayer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      BG;                                                        // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Btn_Kick;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Btn_Row;                                                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ReadySign;                                                 // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Txt_JoinLabel;                                             // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Txt_ReadyState;                                            // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Txt_Username;                                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WS_HasPlayer;                                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FCustomGamePlayer                           Player;                                                    // 0x0278(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Position;                                                  // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsOccupied;                                               // 0x02A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<EFCustomGameTeam>                      Team;                                                      // 0x02A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C");
		return ptr;
	}


	void Initialize();
	void SetKickBtnVisibility();
	void RemovePlayer(const struct FCustomGamePlayer& Player);
	void SetPlayerIfMatches(struct FCustomGamePlayer* Player);
	void Construct();
	void BndEvt__Btn_Row_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnPlayerChangedTeamWs(const struct FCustomGamePlayer& Player);
	void RefreshVisuals();
	void TrySetPlayer(const struct FCustomGamePlayer& Player);
	void OnPlayerJoinedCustomGameWs(const struct FCustomGamePlayer& Player);
	void OnPlayerLeftCustomGameWs(const struct FCustomGamePlayer& Player);
	void OnPlayerReadyStateChangedWs(const struct FString& PlayerId, bool bIsReady);
	void BndEvt__Btn_Kick_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnPlayerKickedWs(TEnumAsByte<EFCustomGameTeam> Team, const struct FString& PlayerId);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WB_CustomGames_TeamPlayer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
