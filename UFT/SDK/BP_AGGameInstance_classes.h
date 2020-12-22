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

// BlueprintGeneratedClass BP_AGGameInstance.BP_AGGameInstance_C
// 0x0069 (FullSize[0x02B1] - InheritedSize[0x0248])
class UBP_AGGameInstance_C : public UAGGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWB_EndGame_C*                               EndGameRef;                                                // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_InGameMenu_C*                            InGameMenuRef;                                             // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_MainMenu_C*                              MainMenu;                                                  // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_LoadingScreen_C*                         LoadingScreenRef;                                          // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_SettingsMenu_C*                          SettingsMenuRef;                                           // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_Gameplay_C*                              GameplayWidgetRef;                                         // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_PlayerScores_C*                          PlayerScoresWidgetRef;                                     // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PlayerSessionId;                                           // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UAudioComponent*                             SoundComp;                                                 // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    InputBindingChanged;                                       // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bIsInCustomGame;                                           // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AGGameInstance.BP_AGGameInstance_C");
		return ptr;
	}


	void OnFailure_D7E6F33944FC88F0975CC29A0A147795();
	void OnSuccess_D7E6F33944FC88F0975CC29A0A147795();
	void ShowSettingsMenu(class UWB_MainMenu_C* MainMenuWidget);
	void HandleNetworkError(TEnumAsByte<ENetworkFailure> FailureType, bool bIsServer);
	void ShowLoadingScreen();
	void HandleTravelError(TEnumAsByte<ETravelFailure> FailureType);
	void DestroySessionCaller(class APlayerController* PlayerController);
	void ShowGameplayWidget();
	void ShowIngameMenu();
	void ShowMainMenu();
	void ShowEndGameMenu(bool RedTeamWon, int Position);
	void ShowPlayerScores();
	void ShowErrorMessageMenu(const struct FString& ErrorMessage);
	void HidePlayerScores();
	void CloseIngame_Menu();
	void SetVolume(float AudioVolume, class USoundClass* SoundClass);
	void BPRemoveSettingsMenu();
	void ShowLogin();
	void LeaveCustomGame();
	void JoinCustomGame();
	void ReceiveInit();
	void ExecuteUbergraph_BP_AGGameInstance(int EntryPoint);
	void InputBindingChanged__DelegateSignature(const struct FName& BindingName, const struct FKey& New_Key);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
