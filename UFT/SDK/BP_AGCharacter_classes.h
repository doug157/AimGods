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

// BlueprintGeneratedClass BP_AGCharacter.BP_AGCharacter_C
// 0x011C (FullSize[0x099C] - InheritedSize[0x0880])
class ABP_AGCharacter_C : public AAGCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SheepMesh;                                                 // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SheepSpringArm;                                            // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            SheepCamera;                                               // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            PlayerInfoWidget;                                          // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     CurrentInteractable;                                       // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_AGGameInstance_C*                        GameInstance;                                              // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                CrouchHandle;                                              // 0x08B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_ShopSphere_C*                            ShopActor;                                                 // 0x08C0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               IsShopOpen_;                                               // 0x08C8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_7GHF[0x7];                                     // 0x08C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAsyncTaskOwnedTagChanged*                   ListenForMoveToGATag;                                      // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RandomZAxisValue;                                          // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T95Y[0x4];                                     // 0x08DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAbilitySystemComponent*                     ASC;                                                       // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AGCharacter_C*                           Teammate;                                                  // 0x08E8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FearDamageThreshold;                                       // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayChargingAnim;                                          // 0x08F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PXYG[0x3];                                     // 0x08F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FearWalkDuration;                                          // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W7M5[0x4];                                     // 0x08FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAsyncTaskWalkInDirection*                   WalkInDirectionAndWaitAsyncTask;                           // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxAccelerationDelta;                                      // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsVanishedd;                                               // 0x090C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YHV0[0x3];                                     // 0x090D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                GameplayCueCount;                                          // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CameraDefaultLoc;                                          // 0x0914(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>                  Cached3PMeshMaterials;                                     // 0x0920(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  Cached1PMeshMaterials;                                     // 0x0930(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  CachedWeapon1PMeshMaterials;                               // 0x0940(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  CachedWeapon3PMeshMaterials;                               // 0x0950(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMesh*                               CharacterMesh;                                             // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      CharacterAnimClass;                                        // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayerInfoWidgetHeightDelta;                               // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MPT4[0x4];                                     // 0x0974(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCharacterMeshVisibilityChanged;                          // 0x0978(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              BladeStormRange;                                           // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasBladeStormActive;                                       // 0x098C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KG41[0x3];                                     // 0x098D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BladeStormTickRate;                                        // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bDoesFearWalk;                                             // 0x0994(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WSDC[0x3];                                     // 0x0995(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FearTagCount;                                              // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AGCharacter.BP_AGCharacter_C");
		return ptr;
	}


	void CheckAndSetupBladeStormCachables();
	void TransformCharacter(bool ToSheep_);
	void CheckThornsGE(class UAGAbilitySystemComponent* SourceASC);
	void CheckFearGE(float MitigatedDamage);
	void Check_Double_Strikes(float MitigatedDamage, class UAGAbilitySystemComponent* SourceASC, const struct FGameplayTagContainer& GEAssetTags);
	void Check_Voodoo_GE(float MitigatedDamage, class UAGAbilitySystemComponent* SourceASC, const struct FGameplayTagContainer& GEAssetTags);
	void OnRep_IsShopOpen_();
	void OnRep_ShopActor();
	void CheckTarget();
	void UserConstructionScript();
	void OnWalkDurationEnded_838EB2624758B39CE502B0902B84DDA5();
	void InpActEvt_Chat_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_GlobalChat_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_TeamChat_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_OpenShop_K2Node_InputActionEvent_1(const struct FKey& Key);
	void OnOwnedTagChanged_5045B434458AD3342FE0E28A8E50A74A(const struct FGameplayTag& OwningTag, int Amount);
	void OnWalkDurationEnded_5B25C4B5425B83A7551F9B8154A928F7();
	void OnNotifyEnd_FCB6966347A9D5B8B4E78184124B6512(const struct FName& NotifyName);
	void OnNotifyBegin_FCB6966347A9D5B8B4E78184124B6512(const struct FName& NotifyName);
	void OnInterrupted_FCB6966347A9D5B8B4E78184124B6512(const struct FName& NotifyName);
	void OnBlendOut_FCB6966347A9D5B8B4E78184124B6512(const struct FName& NotifyName);
	void OnCompleted_FCB6966347A9D5B8B4E78184124B6512(const struct FName& NotifyName);
	void OnIceBlockTagChanged(int Amount);
	void ToggleFreezePlayer(bool ShouldFreeze);
	void OnStunTagChanged(int Amount);
	void OnFearTagChanged(int Amount);
	void OnRootTagChanged(int Amount);
	void Client_WalkDiagonal();
	void Client_StopDiagonalWalk();
	void Multicast_OnSheepTagChanged(int Amount);
	void OnBladeStormTagChanged(int Amount);
	void ReceiveBeginPlay();
	void BPSendInfoToKillFeed(class AController* KillerPC, class AAGCharacter* DeadActor);
	void ShowGameplayUI(class APlayerController* Controller);
	void ReceivePossessed(class AController* NewController);
	void BPShowHitIndicator(const struct FVector& DamagerLocation);
	void Server_Open_Shop();
	void Close_Shop();
	void Server_Close_Shop();
	void CheatOpenShop();
	void Server_CheatGold(int Gold);
	void CheatGold(int Gold);
	void SimulatedProxies_SetVanishVisibility(bool IsVisible);
	void SetVisibility(bool IsVisible);
	void Multicast_SetVisibility(bool IsVisible);
	void Server_RemoveGameplayCueDelay(float Time, const struct FGameplayTag& GameplayCueTag);
	void BPOnDeath(class AAGPlayerState* Killer);
	void OnAbilitySystemComponentInitialized(class UAbilitySystemComponent* AbilitySystemComponent);
	void ReceivedDamage(class UAGAbilitySystemComponent* SourceASC, float MitigatedDamage, const struct FGameplayTagContainer& GEAssetTags);
	void Client_ChargeWalkToDestination(float Duration, const struct FVector& WorldDirection, float MaxAcceleration);
	void Server_SetMaxAcceleration(float MaxAcceleration);
	void OnLanded(const struct FHitResult& Hit);
	void OnJumped();
	void SetupPlayerCard();
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void ExecuteUbergraph_BP_AGCharacter(int EntryPoint);
	void OnCharacterMeshVisibilityChanged__DelegateSignature(bool IsVisible);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
