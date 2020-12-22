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

// Class AimGods.WebSocketManager
// 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
class UWebSocketManager : public UGameInstanceSubsystem
{
public:
	class UAGGameInstance*                             MyGameInstance;                                            // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFriendsLibrary*                             FriendsLibrary;                                            // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGPartySubsystem*                           PartySubsystem;                                            // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGCustomGameSubsystem*                      CustomGameSubsystem;                                       // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGAuthSubsystem*                            AuthSubsystem;                                             // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAwsHttpRequestLibrary*                      AwsHttpRequestLibrary;                                     // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KO0J[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     WebSocketBaseUrl;                                          // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M86N[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAGGameliftSubsystem*                        GameliftSubsystem;                                         // 0x0088(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGChatSubsystem*                            ChatSubsystem;                                             // 0x0090(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGNewsFeedSubsystem*                        NewsFeedSubsystem;                                         // 0x0098(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsInGame;                                                 // 0x00A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C4GT[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnWebSocketError;                                          // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDowntimeMessage;                                         // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZBGW[0xC];                                     // 0x00C8(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsReconnecting;                                           // 0x00D4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3OZ5[0x13];                                    // 0x00D5(0x0013) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.WebSocketManager");
		return ptr;
	}


	void UpdateInMatchStatus(bool bIsInMatch);
	void SendMessageToWebSocketApi(const struct FString& Message);
	void SendLatencyUpdate(TArray<struct FRegionLatency> RegionLatencies);
	void SendHeartbeat();
	void SendChatMessage(const struct FString& ToUserId, const struct FString& MessageText);
	void Reconnect();
	void OpenConnection();
	void OnWebSocketConnectionClosed(int StatusCode, const struct FString& Reason, bool bWasClean);
	void OnReceivedWebSocketApiMessage(const struct FString& Message);
	void OnConnectToWebSocketApiError(const struct FString& Error);
	void OnConnectToWebSocketApi();
	void CloseWebSocketConnection();
};

// Class AimGods.ShopVolume
// 0x0000 (FullSize[0x0218] - InheritedSize[0x0218])
class AShopVolume : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.ShopVolume");
		return ptr;
	}


};

// Class AimGods.GameLiftClientUtils
// 0x01D8 (FullSize[0x0200] - InheritedSize[0x0028])
class UGameLiftClientUtils : public UObject
{
public:
	class UAGGameInstance*                             GameInstance;                                              // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTicket                                     Ticket;                                                    // 0x0030(0x0070) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FPlacement                                  Placement;                                                 // 0x00A0(0x0050) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               SearchingForGame;                                          // 0x00F0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SinglePlayer;                                              // 0x00F1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CallingStartMatchmakingApi;                                // 0x00F2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CallingStopMatchmakingApi;                                 // 0x00F3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CallingStartGameSessionPlacementApi;                       // 0x00F4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CallingDescribeGameSessionPlacementApi;                    // 0x00F5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CallingPollMatchmakingApi;                                 // 0x00F6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CallingAcceptMatchApi;                                     // 0x00F7(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            LastMatchmakingSearchingTime;                              // 0x00F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            LastPotentialMatchCreatedTime;                             // 0x0100(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J2CU[0xF8];                                    // 0x0108(0x00F8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.GameLiftClientUtils");
		return ptr;
	}


	void StopMatchmaking();
	void StartMatchmaking();
	void StartGameSessionPlacement();
	void SetLastPotentialMatchCreatedTime(const struct FString& Time);
	void SetLastMatchmakingSearchingTime(const struct FString& Time);
	void ResetTicket();
	void ResetPlacement();
	void PollMatchmaking();
	bool NewLastPotentialMatchCreatedTimeIsGreater(const struct FString& Time);
	bool NewLastMatchmakingSearchingTimeIsGreater(const struct FString& Time);
	void GetResponseTime(const struct FString& Region);
	void DescribeGameSessionPlacement();
	void AcceptMatch(const struct FString& AcceptanceType);
};

// Class AimGods.FriendsLibrary
// 0x0158 (FullSize[0x0188] - InheritedSize[0x0030])
class UFriendsLibrary : public UGameInstanceSubsystem
{
public:
	class UAwsHttpRequestLibrary*                      HttpRequestLibrary;                                        // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    FriendErrorDelegate;                                       // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGetFriendsList;                                          // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGetBlockedPlayers;                                       // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBlockPlayer;                                             // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUnblockPlayer;                                           // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSendFriendRequest;                                       // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGetPendingOutgoingFriendRequests;                        // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGetPendingIncomingFriendsRequets;                        // 0x00A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAcceptFriendRequest;                                     // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCancelOutgoingFriendshipRequest;                         // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRemoveFriend;                                            // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HKXB[0x50];                                    // 0x00E8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnOutgoingFriendRequestAcceptedWs;                         // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnIncomingFriendRequestCancelledWs;                        // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFriendRequestReceivedWs;                                 // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFriendOnlineStatusChangedWs;                             // 0x0168(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUnfriendedByPlayerWs;                                    // 0x0178(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.FriendsLibrary");
		return ptr;
	}


	void UnblockPlayer(const struct FString& UsernameToUnblock);
	void SendFriendRequest(const struct FString& Username);
	void RemoveFriend(const struct FString& FriendId);
	void GetPendingOutgoingFriendRequests();
	void GetPendingIncomingFriendRequests();
	void GetFriendsList();
	struct FString GetFriendNameByPlayerId(const struct FString& PlayerId);
	void GetBlockedPlayers();
	void CancelOutgoingFriendshipRequest(const struct FString& RequestId);
	void BlockPlayer(const struct FString& Username);
	void AcceptFriendRequest(const struct FString& Username);
};

// Class AimGods.EacSubsystem
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UEacSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_LBSN[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAwsHttpRequestLibrary*                      AwsHttpRequestLibrary;                                     // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSendPlayerReportComplete;                                // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.EacSubsystem");
		return ptr;
	}


	void SendPlayerReport(const struct FString& ReportedPlayerGUID, const struct FString& ReportingPlayerGUID, TEnumAsByte<EFPlayerReportCategory> ReportCategoryID, const struct FString& ReportDescription);
};

// Class AimGods.AwsHttpRequestLibrary
// 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
class UAwsHttpRequestLibrary : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_R8HZ[0xB0];                                    // 0x0030(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AccessToken;                                               // 0x00E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AwsHttpRequestLibrary");
		return ptr;
	}


	void SetAuthDetails(const struct FString& ID, const struct FString& Access, const struct FString& Refresh, int RefreshExpiresIn);
	bool IsLoggedIn();
};

// Class AimGods.AsyncTaskWalkInDirection
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UAsyncTaskWalkInDirection : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnWalkDurationEnded;                                       // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BIKT[0x28];                                    // 0x0040(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AsyncTaskWalkInDirection");
		return ptr;
	}


	class UAsyncTaskWalkInDirection* STATIC_WalkInDirectionAndWait(class APawn* PawnToMove, float Duration, const struct FVector& WorldDirection, float ScaleValue, bool bForce);
	void EndTask();
};

// Class AimGods.AsyncTaskOwnedTagChanged
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UAsyncTaskOwnedTagChanged : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnOwnedTagChanged;                                         // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*                     ASC;                                                       // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E1CN[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AsyncTaskOwnedTagChanged");
		return ptr;
	}


	class UAsyncTaskOwnedTagChanged* STATIC_ListenForOwnedTagChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTagContainer& OwnedTags);
	void EndTask();
};

// Class AimGods.AsyncTaskEffectStackChanged
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UAsyncTaskEffectStackChanged : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnGameplayEffectStackChange;                               // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	class UAbilitySystemComponent*                     ASC;                                                       // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_81WR[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AsyncTaskEffectStackChanged");
		return ptr;
	}


	class UAsyncTaskEffectStackChanged* STATIC_ListenForGameplayEffectStackChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTag& EffectGameplayTag);
	void EndTask();
};

// Class AimGods.AsyncTaskCooldownChanged
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UAsyncTaskCooldownChanged : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnCooldownBegin;                                           // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCooldownEnd;                                             // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*                     ASC;                                                       // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BR4E[0x28];                                    // 0x0058(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AsyncTaskCooldownChanged");
		return ptr;
	}


	class UAsyncTaskCooldownChanged* STATIC_ListenForCooldownChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTagContainer& CooldownTags, bool UseServerCooldown);
	void EndTask();
};

// Class AimGods.AsyncTaskAttributeChanged
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UAsyncTaskAttributeChanged : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnAttributeChanged;                                        // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*                     ASC;                                                       // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_17OR[0x30];                                    // 0x0048(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AsyncTaskAttributeChanged");
		return ptr;
	}


	class UAsyncTaskAttributeChanged* STATIC_ListenForAttributesChange(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FGameplayAttribute> Attributes);
	class UAsyncTaskAttributeChanged* STATIC_ListenForAttributeChange(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute);
	void EndTask();
};

// Class AimGods.AnimNotify_PlayLocalSound
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UAnimNotify_PlayLocalSound : public UAnimNotify_PlaySound
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AnimNotify_PlayLocalSound");
		return ptr;
	}


};

// Class AimGods.AGWeapon
// 0x0120 (FullSize[0x0338] - InheritedSize[0x0218])
class AAGWeapon : public AActor
{
public:
	class USkeletalMeshComponent*                      WeaponMesh1P;                                              // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                      WeaponMesh3P;                                              // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      WeaponDamageEffect;                                        // 0x0228(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      DamageType;                                                // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                             MuzzleEffect;                                              // 0x0238(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstance*                           ImpactDecal;                                               // 0x0240(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     ImpactDecalSize;                                           // 0x0248(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KAAK[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             DefaultImpactEffect;                                       // 0x0258(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                             BrickImpactEffect;                                         // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                             WoodImpactEffect;                                          // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                             FleshImpactEffect;                                         // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                                   DefaultImpactSound;                                        // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                                   BrickImpactSound;                                          // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                                   WoodImpactSound;                                           // 0x0288(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundCue*                                   FleshImpactSound;                                          // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      TracerActor;                                               // 0x0298(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       MuzzleSocketName;                                          // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       MuzzleSocketName1P;                                        // 0x02A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       TracerTargetName;                                          // 0x02B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       WeaponAttachSocketName1P;                                  // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       WeaponAttachSocketName3P;                                  // 0x02C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      FireCamShake;                                              // 0x02C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BaseDamage;                                                // 0x02D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HeadshotDamageModifier;                                    // 0x02D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ClientSideHitLeeway;                                       // 0x02D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T2IU[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                WeaponFireMontage;                                         // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                                WeaponReloadMontage1P;                                     // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                                WeaponReloadMontage3P;                                     // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  WeaponFireSound;                                           // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0G6P[0x10];                                    // 0x0300(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WeaponRange;                                               // 0x0310(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                AmmoInClip;                                                // 0x0314(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_56Q4[0x8];                                     // 0x0318(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AmmoRegenInterval;                                         // 0x0320(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                AmmoRegenAmount;                                           // 0x0324(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                AmmoPerClip;                                               // 0x0328(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     HitNotify;                                                 // 0x032C(0x000C) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGWeapon");
		return ptr;
	}


	void ServerNotifyMiss(const struct FHitResult& Impact, const struct FVector& Origin);
	void ServerNotifyHit(const struct FHitResult& Impact, const struct FVector_NetQuantizeNormal& ShootDir);
	void RegenAmmo();
	void OnRep_HitNotify();
};

// Class AimGods.AGTowerTarget
// 0x0050 (FullSize[0x0268] - InheritedSize[0x0218])
class AAGTowerTarget : public AActor
{
public:
	class USphereComponent*                            TargetCollision;                                           // 0x0218(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        TargetMesh;                                                // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGTeamComponent*                            TeamComponent;                                             // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGHealthComponent*                          HealthComponent;                                           // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    BallMaterial;                                              // 0x0238(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                HealthyColor;                                              // 0x0240(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                DeadColor;                                                 // 0x0250(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SNN8[0x8];                                     // 0x0260(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGTowerTarget");
		return ptr;
	}


	void OnHealthModified(float NewHealth, float OldHealth);
};

// Class AimGods.AGProjectile
// 0x0028 (FullSize[0x0240] - InheritedSize[0x0218])
class AAGProjectile : public AActor
{
public:
	class UStaticMeshComponent*                        ProjectileMesh;                                            // 0x0218(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProjectileMovementComponent*                ProjectileMovement;                                        // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // 0x0228(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x0230(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G56A[0x4];                                     // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ProjectileDamageEffect;                                    // 0x0238(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGProjectile");
		return ptr;
	}


};

// Class AimGods.AGTowerBase
// 0x01C0 (FullSize[0x03D8] - InheritedSize[0x0218])
class AAGTowerBase : public AActor
{
public:
	unsigned char                                      UnknownData_J7V3[0x8];                                     // 0x0218(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMeshComponent*                        TowerBaseMesh;                                             // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             TowerShootLocation;                                        // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        TowerShieldMesh;                                           // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             TowerAttackVisual;                                         // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGTeamComponent*                            TeamComponent;                                             // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGHealthComponent*                          HealthComponent;                                           // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGAggroSphereComponent*                     AggroSphere;                                               // 0x0250(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             DamageTextSpawn;                                           // 0x0258(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGAttributes*                               Attributes;                                                // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DefaultAttributeEffect;                                    // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGAbilitySystemComponent*                   AbilitySystemComp;                                         // 0x0270(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      WeaponDamageEffect;                                        // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TowerTargetClass;                                          // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TowerProjectileClass;                                      // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KillGoldAward;                                             // 0x0290(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TowerSequenceNumber;                                       // 0x0294(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseDamage;                                                // 0x0298(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageMultiplier;                                          // 0x029C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageMultiplierCap;                                       // 0x02A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayBetweenShots;                                         // 0x02A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RN05[0x8];                                     // 0x02A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Targets[0x50];                                             // 0x02B0(0x0050) UNKNOWN PROPERTY: SetProperty AimGods.AGTowerBase.Targets
	unsigned char                                      UnknownData_ZV67[0x8];                                     // 0x0300(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AAGCharacterBase*                            Target;                                                    // 0x0308(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsDestroyed;                                              // 0x0310(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bShieldEnabled;                                            // 0x0311(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8_t                                             TargetsToSpawn;                                            // 0x0312(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SB8E[0x1];                                     // 0x0313(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TowerInteriorHalfHeight;                                   // 0x0314(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TowerInteriorRadius;                                       // 0x0318(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_H65R[0x4];                                     // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    ShieldMaterial;                                            // 0x0320(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    TowerBaseMaterial;                                         // 0x0328(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                ShieldEnabledColor;                                        // 0x0330(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                ShieldDisabledColor;                                       // 0x0340(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                ShieldKilledColor;                                         // 0x0350(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class AAGCharacter*, int>                     ConsecutiveShotMap;                                        // 0x0360(0x0050) (Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      DamageNumberClass;                                         // 0x03B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                RewardedMoneyToKiller;                                     // 0x03B8(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EIH6[0x1C];                                    // 0x03BC(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGTowerBase");
		return ptr;
	}


	void SpawnTarget();
	void ShootPlayer(class AAGCharacterBase* Character);
	void ShootBestTarget();
	void SetTowerGlow(bool bNewEnabled);
	void RespawnMissingTargets();
	void OnRep_bShieldEnabled();
	void OnRep_bIsDestroyed();
	void OnDeath(class AActor* KilledActor, class AController* Killer);
	void EnemyLeftAggroRadius(class AActor* EnemyActor);
	void EnemyEnteredAggroRadius(class AActor* EnemyActor);
	void BPPlayTowerDestroyedEffects();
};

// Class AimGods.AGTeamComponent
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class UAGTeamComponent : public UActorComponent
{
public:
	bool                                               bIsRedTeam;                                                // 0x00B0(0x0001) (Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7GEJ[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGTeamComponent");
		return ptr;
	}


};

// Class AimGods.AGStatsSubsystem
// 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
class UAGStatsSubsystem : public UGameInstanceSubsystem
{
public:
	struct FString                                     StatsBaseUrl;                                              // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAwsHttpRequestLibrary*                      AwsHttpRequestLibrary;                                     // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGetPlayerStatsFromServer;                                // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSaveEndGameStats;                                        // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0EIM[0x10];                                    // 0x0068(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnGetSeasonInfo;                                           // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGetPreviousSeasonInfoRequestComplete;                    // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HEIX[0x30];                                    // 0x0098(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGStatsSubsystem");
		return ptr;
	}


	struct FString GetTimeLeftInCurrentSeason(const struct FDateTime& CurrentSeasonEndDateTime);
	void GetSeasonInfo();
	void GetPreviousPlayerStatsFromServer();
	void GetPlayerStatsFromServer();
};

// Class AimGods.AGStatics
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAGStatics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGStatics");
		return ptr;
	}


	struct FText STATIC_ReplaceTableReferenceStringsWithCorrespondingValue(class UCurveTable* CurveTable, const struct FText& Text);
	struct FString STATIC_RemoveAllLowercase(const struct FString& inString);
	bool STATIC_IsSameTeam(class AActor* ActorA, class AActor* ActorB);
	bool STATIC_IsRedTeam(class AActor* TestActor);
	bool STATIC_IsEffectSpecHandleValid(const struct FGameplayEffectSpecHandle& EffectSpecHandle);
	bool STATIC_IsChargeEffect(class UGameplayEffect* GameplayEffect);
	struct FGameplayAbilitySpecHandle STATIC_GetHandleFromAbilitySpec(const struct FGameplayAbilitySpec& AbilitySpec);
	struct FString STATIC_GetGameDefaultMapName();
	float STATIC_GetEffectSpecDuration(const struct FGameplayEffectSpec& EffectSpec);
	class AAGTowerBase* STATIC_GetCurrentTowerForTeam(class UWorld* World, bool bIsRedTeam);
	struct FGameplayTagContainer STATIC_GetAbilityActivationBlockedTags(const struct FGameplayAbilitySpec& AbilitySpec);
	void STATIC_DrawDebugSphereShippingIncluded(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int Segments, const struct FLinearColor& LineColor, float Duration, float Thickness);
};

// Class AimGods.AGSheep
// 0x0028 (FullSize[0x0650] - InheritedSize[0x0628])
class AAGSheep : public ACharacter
{
public:
	unsigned char                                      UnknownData_49WW[0x8];                                     // 0x0628(0x0008) Fix Super Size
	float                                              BaseTurnRightRate;                                         // 0x0630(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseLookUpRate;                                            // 0x0634(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BW57[0x18];                                    // 0x0638(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGSheep");
		return ptr;
	}


};

// Class AimGods.AGSaveGame
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UAGSaveGame : public USaveGame
{
public:
	float                                              MasterVolume;                                              // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MusicVolume;                                               // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CharacterVolume;                                           // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientVolume;                                             // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeaponVolume;                                              // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MouseSensitivity;                                          // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowFps;                                                  // 0x0040(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVerticalAxisInverted;                                     // 0x0041(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHorizontalAxisInverted;                                   // 0x0042(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GYKT[0x5];                                     // 0x0043(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FLoadoutAbility>                     SavedLoadoutAbilities;                                     // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                CrosshairColor;                                            // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGSaveGame");
		return ptr;
	}


};

// Class AimGods.AGPlayerState
// 0x0158 (FullSize[0x0498] - InheritedSize[0x0340])
class AAGPlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData_5P4Q[0x8];                                     // 0x0340(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAGTeamComponent*                            TeamComponent;                                             // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGAbilitySystemComponent*                   AbilitySystemComp;                                         // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<EAGAbilityInputID, class UClass*>             PurchasedAbilities;                                        // 0x0358(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FLoadoutAbility>                     ReplicatedPurchasedAbilities;                              // 0x03A8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NTZP[0x10];                                    // 0x03B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              KillingSpreeResetTime;                                     // 0x03C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NU03[0x4];                                     // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnGoldChanged;                                             // 0x03D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     ConnectedFleetId;                                          // 0x03E0(0x0010) (Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ConnectedGameSessionId;                                    // 0x03F0(0x0010) (Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Gold;                                                      // 0x0400(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Kills;                                                     // 0x0404(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Deaths;                                                    // 0x0408(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_29SM[0x3];                                     // 0x0409(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                KillStreak;                                                // 0x040C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayerScore;                                               // 0x0410(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageDone;                                                // 0x0414(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageTaken;                                               // 0x0418(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HealingReceived;                                           // 0x041C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KillingSpree;                                              // 0x0420(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentRank;                                               // 0x0424(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewRank;                                                   // 0x0428(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentElo;                                                // 0x042C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewElo;                                                    // 0x0430(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EloChangeAmount;                                           // 0x0434(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TopPercentage;                                             // 0x0438(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalGamesPlayed;                                          // 0x043C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   LastDatePlayed;                                            // 0x0440(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameStatsPayload>                   EndGameStatsForAllPlayers;                                 // 0x0448(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                MyTeamCurrentElo;                                          // 0x0458(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EnemyTeamCurrentElo;                                       // 0x045C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEndGameStatsLoaded;                                       // 0x0460(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCustomGameEndStatsLoaded;                                 // 0x0461(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UOY7[0x16];                                    // 0x0462(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAGStatsSubsystem*                           StatsSubSystem;                                            // 0x0478(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  JustNowAppliedDebuffGETexture;                             // 0x0480(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FLNH[0x8];                                     // 0x0488(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAGAttributes*                               Attributes;                                                // 0x0490(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGPlayerState");
		return ptr;
	}


	bool TrySwapAbilities(EAGAbilityInputID AbilityA, EAGAbilityInputID AbilityB);
	bool TryBuyAbility(class UClass* AbilityToBuy);
	void Suicide();
	void ServerTrySwapAbilities(EAGAbilityInputID AbilityA, EAGAbilityInputID AbilityB);
	void ServerTryBuyAbility(class UClass* AbilityToBuy);
	void ResetScore();
	void OnRep_ReplicatedPurchasedAbilities();
	void OnRep_Gold(int OldGold);
	void OnRep_ConnectedGameSessionId(const struct FString& OldGameSessionId);
	void OnRep_ConnectedFleetId(const struct FString& OldFleetId);
	void OnMainMenuStatsReceived(bool Success, const struct FStatsError& StatError, const struct FGameStatsPayload& ReceivedGameStats);
	void OnEndGameStatsReceived(bool Success, const struct FStatsError& StatError, TArray<struct FGameStatsPayload> ReceivedGameStats);
	void OnCustomGameEndReceieved();
	struct FString GetUniqueIdAsString();
	struct FGameStatsPayload GetEndGameStatsByPlayerId(const struct FString& InPlayerId);
	void ClientShowScore(float Points, const struct FText& Text);
	void BPShowScore(float Points, const struct FText& Text);
	void BPShowDebuffIcon(class UAGGameplayEffect* AppliedEffect);
	void AwardGold(int Amount);
	void AddScorePoints(float Points, const struct FText& Reason);
	void AddHealing(float Amount);
	void AddDeath();
	void AddDamageTaken(float Amount);
	void AddDamage(float Amount);
};

// Class AimGods.AGPlayerSpawn
// 0x0010 (FullSize[0x0258] - InheritedSize[0x0248])
class AAGPlayerSpawn : public APlayerStart
{
public:
	class UAGTeamComponent*                            TeamComponent;                                             // 0x0248(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanBeUsed;                                                // 0x0250(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNearEnemy;                                                // 0x0251(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestingSpawn;                                             // 0x0252(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HQAX[0x5];                                     // 0x0253(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGPlayerSpawn");
		return ptr;
	}


};

// Class AimGods.AGPlayerController
// 0x0040 (FullSize[0x05A8] - InheritedSize[0x0568])
class AAGPlayerController : public APlayerController
{
public:
	class UAGTeamComponent*                            TeamComponent;                                             // 0x0568(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReadyToSpawn;                                             // 0x0570(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPlaying;                                                // 0x0571(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V0F7[0x2];                                     // 0x0572(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MasterVolume;                                              // 0x0574(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MusicVolume;                                               // 0x0578(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CharacterVolume;                                           // 0x057C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientVolume;                                             // 0x0580(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeaponVolume;                                              // 0x0584(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MouseSensitivity;                                          // 0x0588(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowFps;                                                  // 0x058C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVerticalAxisInverted;                                     // 0x058D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHorizontalAxisInverted;                                   // 0x058E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9DTA[0x1];                                     // 0x058F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeTillRespawn;                                           // 0x0590(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                CrosshairColor;                                            // 0x0594(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FZUS[0x4];                                     // 0x05A4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGPlayerController");
		return ptr;
	}


	void SuicidePoints();
	void ShowRespawnScreen(float RespawnTimer);
	void ShowDamageNumber(class AAGCharacterBase* Avatar, const struct FAGDamageNumber& DamageNumber);
	void ServerSetIsPlaying(bool bCond);
	void ServerAddToReadyToSpawnList(class APlayerController* ReadyPC);
	void ReportPlayer(const struct FString& PlayerToReport, const struct FString& ReportCategory);
	void OnGameOver(class AActor* InstigatorPawn, bool bWonGame);
	void LoadSoundSettings();
	void LoadInputSettings();
	void KillPawn();
	void GetTimeLeft();
	void GetTime();
	struct FText GetPlayerName();
	void ClientUpdateJoinInProgressTime(float Time);
	void ClientShowRespawnScreen(float RespawnTimer);
	void BPUpdateHealth();
	void BPShowDamageText(float DamageToDo, bool bWasHeadshot, bool bWasImmune);
	void BPKicked();
	void BPCloseWidgets();
	void BPCloseCharacterSelection();
	void AddDamageNumber(float DamageAmount, class AActor* TargetCharacter, EDamageTextType DamageTextType, TArray<class UTexture2D*> EffectIcons);
};

// Class AimGods.AGPartySubsystem
// 0x0138 (FullSize[0x0168] - InheritedSize[0x0030])
class UAGPartySubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_YA8B[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCurrentParty                               CurrentParty;                                              // 0x0038(0x0040) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSendPartyInvite;                                         // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGetPartyInvites;                                         // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGetCurrentParty;                                         // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLeaveCurrentParty;                                       // 0x00A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCancelPartyInvite;                                       // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAcceptPartyInvite;                                       // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K7XV[0x40];                                    // 0x00D8(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPartyInviteReceivedWs;                                   // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnIncomingPartyInviteCancelledWs;                          // 0x0128(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyDisbandedWs;                                        // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnOutgoingPartyInviteAcceptedWs;                           // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyMemberInMatchStatusChangedWs;                       // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGPartySubsystem");
		return ptr;
	}


	void SendPartyInvite(const struct FString& PlayerId);
	void LeaveCurrentParty();
	bool IsPartyLeader();
	bool IsInParty();
	void GetPartyInvites();
	void GetCurrentParty();
	void CancelPartyInvite(const struct FString& PartyInviteId);
	void AcceptPartyInvite(const struct FString& PartyInviteId);
};

// Class AimGods.AGNewsFeedSubsystem
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UAGNewsFeedSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_6F8U[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnNewsFeedForCurrentPlayer;                                // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGNewsFeedSubsystem");
		return ptr;
	}


	void GetNewsFeedForCurrentPlayer();
	void CreateNewsFeedTest();
};

// Class AimGods.AGMMC_AbilityCooldown
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UAGMMC_AbilityCooldown : public UGameplayModMagnitudeCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGMMC_AbilityCooldown");
		return ptr;
	}


};

// Class AimGods.AGMinionTarget
// 0x0018 (FullSize[0x0230] - InheritedSize[0x0218])
class AAGMinionTarget : public AActor
{
public:
	class USphereComponent*                            TargetCollision;                                           // 0x0218(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        TargetMesh;                                                // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGTeamComponent*                            TeamComponent;                                             // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGMinionTarget");
		return ptr;
	}


};

// Class AimGods.AGMinionPlayerStart
// 0x0010 (FullSize[0x0258] - InheritedSize[0x0248])
class AAGMinionPlayerStart : public APlayerStart
{
public:
	class UAGTeamComponent*                            TeamComponent;                                             // 0x0248(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestingSpawn;                                             // 0x0250(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L1ZL[0x7];                                     // 0x0251(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGMinionPlayerStart");
		return ptr;
	}


};

// Class AimGods.AGHealthComponent
// 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
class UAGHealthComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnDeath;                                                   // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHealthModified;                                          // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class USceneComponent*                             AttackVisualComponent;                                     // 0x00D0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HP;                                                        // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxHP;                                                     // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      LastDamageCauser;                                          // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AController*                                 LastInstigator;                                            // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGHealthComponent");
		return ptr;
	}


	void OnRep_HP(float OldHP);
};

// Class AimGods.AGGhost
// 0x0028 (FullSize[0x0650] - InheritedSize[0x0628])
class AAGGhost : public ACharacter
{
public:
	unsigned char                                      UnknownData_02KJ[0x8];                                     // 0x0628(0x0008) Fix Super Size
	class USpringArmComponent*                         SpringArmComp;                                             // 0x0630(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCameraComponent*                            CameraComp;                                                // 0x0638(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAGCharacter*                                Teammate;                                                  // 0x0640(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JDR9[0x8];                                     // 0x0648(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGGhost");
		return ptr;
	}


	void Server_SendGhostPCToTeammate();
	void Server_RemoveGhostPCFromTeammate();
	void BPOnSpectateModeChanged(bool bFreeMode);
};

// Class AimGods.AGGameViewportClient
// 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
class UAGGameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData_3US1[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGGameViewportClient");
		return ptr;
	}


};

// Class AimGods.AGGameState
// 0x00D0 (FullSize[0x0348] - InheritedSize[0x0278])
class AAGGameState : public AGameState
{
public:
	TArray<class APlayerController*>                   PlayersReadyToSpawn;                                       // 0x0278(0x0010) (Net, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                RedTeamPoints;                                             // 0x0288(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BlueTeamPoints;                                            // 0x028C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PointsToWin;                                               // 0x0290(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameLengthInSeconds;                                       // 0x0294(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                                TimeToSpawnHandle;                                         // 0x0298(0x0008) (Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                                TimeLimitHandle;                                           // 0x02A0(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                                TimerHandle_IncrementMatchTimer;                           // 0x02A8(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MatchTimeSeconds;                                          // 0x02B0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PrematchTimeRemaining;                                     // 0x02B4(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeToSpawn;                                               // 0x02B8(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPostMatch;                                              // 0x02BC(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRedTeamWon;                                               // 0x02BD(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MJDM[0x2];                                     // 0x02BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AAGPlayerController*>                 CurrentlyConnectedPlayers;                                 // 0x02C0(0x0010) (BlueprintVisible, Net, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMatchPlayer>                        AllMatchPlayers;                                           // 0x02D0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEndGameStatsReceived_Delegate;                           // 0x02E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPreMatchBegin;                                           // 0x02F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPostMatchBegin;                                          // 0x0300(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTowerDestroyed;                                          // 0x0310(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class AAGTowerBase*>                        Towers;                                                    // 0x0320(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bIsInCustomGame;                                           // 0x0330(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A1U2[0x7];                                     // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AAGBaseLocation*                             RedBaseLocation;                                           // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAGBaseLocation*                             BlueBaseLocation;                                          // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGGameState");
		return ptr;
	}


	void OnRep_PrematchTimeRemaining();
	void OnRep_MatchTimeSeconds();
	void OnRep_bIsPostMatch();
	void OnEndGameStatsReceived(bool Success, const struct FStatsError& StatError, TArray<struct FGameStatsPayload> EndGameStats);
	void OnCustomGameEnded();
	void IncrementMatchTimer();
	TArray<class AAGPlayerController*> GetTeam(bool bRedTeam);
	struct FVector GetBaseLocation(bool bIsRedTeam);
	void EndGame();
	void CheckElapsedTime();
	void AddTeamPoints(bool bOnBlueTeam);
	void AddPlayerToReadyList(class APlayerController* ReadyPC);
};

// Class AimGods.AGGameplayEffect
// 0x0018 (FullSize[0x0788] - InheritedSize[0x0770])
class UAGGameplayEffect : public UGameplayEffect
{
public:
	class UClass*                                      ParentAbility;                                             // 0x0770(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EEffectType                                        EffectType;                                                // 0x0778(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NCIQ[0x7];                                     // 0x0779(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  EffectIcon;                                                // 0x0780(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGGameplayEffect");
		return ptr;
	}


};

// Class AimGods.AGGameplayCueNotify_Actor
// 0x0030 (FullSize[0x02B8] - InheritedSize[0x0288])
class AAGGameplayCueNotify_Actor : public AGameplayCueNotify_Actor
{
public:
	TArray<struct FParticleAttachInfo>                 ParticleSystemsToAttach;                                   // 0x0288(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F35I[0x20];                                    // 0x0298(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGGameplayCueNotify_Actor");
		return ptr;
	}


	int GetNumberOfSameActiveGameplayCues();
};

// Class AimGods.AGGameplayAbility
// 0x00B0 (FullSize[0x04B0] - InheritedSize[0x0400])
class UAGGameplayAbility : public UGameplayAbility
{
public:
	EAGAbilityInputID                                  AbilityInputID;                                            // 0x0400(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YFHK[0x3];                                     // 0x0401(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                GoldCost;                                                  // 0x0404(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       AbilityDisplayName;                                        // 0x0408(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       AbilityDescription;                                        // 0x0420(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UTexture2D*                                  AbilityIcon;                                               // 0x0438(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PassiveEffect;                                             // 0x0440(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ActivateAbilityOnGranted;                                  // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y6UH[0x7];                                     // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScalableFloat                              CooldownDuration;                                          // 0x0450(0x0020) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       CooldownTags;                                              // 0x0470(0x0020) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       TempCooldownTags;                                          // 0x0490(0x0020) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGGameplayAbility");
		return ptr;
	}


	struct FGameplayTagContainer GetActivationBlockedTags();
};

// Class AimGods.AGGameModeTest
// 0x0028 (FullSize[0x02E0] - InheritedSize[0x02B8])
class AAGGameModeTest : public AGameModeBase
{
public:
	class UClass*                                      SpectatingViewpointClass;                                  // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4STE[0x8];                                     // 0x02C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnActorKilled;                                             // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T9NR[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGGameModeTest");
		return ptr;
	}


	void RespondToOnActorKilled(class AActor* VictimActor, class AActor* KillerActor, class AController* KillerController);
	void OnGameOver(class AActor* InstigatorPawn, bool bWonGame);
};

// Class AimGods.AGGameliftSubsystem
// 0x01A8 (FullSize[0x01D8] - InheritedSize[0x0030])
class UAGGameliftSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_DJXH[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAwsHttpRequestLibrary*                      AwsHttpRequestLibrary;                                     // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFlexmatchTicket                            FmTicket;                                                  // 0x0058(0x0030) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TEnumAsByte<EMatchmakingStatus>                    MatchmakingStatus;                                         // 0x0088(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WXEF[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AcceptanceTimeout;                                         // 0x008C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CTT2[0x30];                                    // 0x0090(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameliftMatch                              CurrentMatch;                                              // 0x00C0(0x0080) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAcceptMatch;                                             // 0x0140(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCancelMatchmaking;                                       // 0x0150(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGetMatchmakingTicket;                                    // 0x0160(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStartMatchmaking;                                        // 0x0170(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMatchmakingStatusChanged;                                // 0x0180(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IU90[0x10];                                    // 0x0190(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             SupportedRegions;                                          // 0x01A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FRegionLatency>                      RegionLatencies;                                           // 0x01B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              TimeBetweenLatencyChecks;                                  // 0x01C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WZ35[0x4];                                     // 0x01C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnLatencyCheckComplete;                                    // 0x01C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGGameliftSubsystem");
		return ptr;
	}


	void UpdatePlayersInMatchStatus(const struct FString& PlayerId, bool bPlayerIsInMatch);
	void StartMatchmaking();
	void StartCustomGame();
	void ResetMatchmaking();
	void JoinMatch();
	void GetMatchmakingTicket();
	void CancelMatchmaking();
	void AcceptMatch(bool bDidAccept);
};

// Class AimGods.AGGameInstance
// 0x00E0 (FullSize[0x0248] - InheritedSize[0x0168])
class UAGGameInstance : public UGameInstance
{
public:
	TEnumAsByte<EGameEnvironment>                      CurrentEnvironment;                                        // 0x0168(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R2BS[0x7];                                     // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWebSocketManager*                           Socket;                                                    // 0x0170(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFriendsLibrary*                             Friends;                                                   // 0x0178(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAwsHttpRequestLibrary*                      AwsHttpRequestLibrary;                                     // 0x0180(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGPartySubsystem*                           PartySubsystem;                                            // 0x0188(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGAuthSubsystem*                            AuthSubsystem;                                             // 0x0190(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGStatsSubsystem*                           StatsSubSystem;                                            // 0x0198(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGGameliftSubsystem*                        GameliftSubsystem;                                         // 0x01A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGChatSubsystem*                            ChatSubsystem;                                             // 0x01A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGCustomGameSubsystem*                      CustomGameSubsystem;                                       // 0x01B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGNewsFeedSubsystem*                        CustomNewsFeedSubsystem;                                   // 0x01B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGSaveGame*                                 SaveGameInstance;                                          // 0x01C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Username;                                                  // 0x01C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UserId;                                                    // 0x01D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDowntimeNotification;                                    // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bForceExit;                                                // 0x01F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DSQM[0x3];                                     // 0x01F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCrosshairParams                            CrosshairParams;                                           // 0x01FC(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FLoadoutAbility>                     LoadoutAbilities;                                          // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UDataTable*                                  AbilityTable;                                              // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoadoutAbilityChanged;                                   // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGGameInstance");
		return ptr;
	}


	bool SwapAbilities(EAGAbilityInputID SlotA, EAGAbilityInputID SlotB, bool bSaveToDisk);
	void SetUserInfo(const struct FString& InUsername, const struct FString& InUserId);
	bool SetAbility(EAGAbilityInputID Slot, class UClass* Ability, bool bSaveToDisk);
	void SaveGame();
	void LoadGame();
	void HandleDowntimeNotification(const struct FString& Message, bool bHasStarted);
	void ExitGame();
	void BPRemoveSettingsMenu();
};

// Class AimGods.AGDTTower
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UAGDTTower : public UDamageType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGDTTower");
		return ptr;
	}


};

// Class AimGods.AGDTDefault
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UAGDTDefault : public UDamageType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGDTDefault");
		return ptr;
	}


};

// Class AimGods.AGDamageTextWidgetComponent
// 0x0000 (FullSize[0x0520] - InheritedSize[0x0520])
class UAGDamageTextWidgetComponent : public UWidgetComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGDamageTextWidgetComponent");
		return ptr;
	}


	void SetDamageText(float Damage, EDamageTextType DamageTextType, int GoldAmount, class UTexture2D* DebuffIcon);
	void AddDebuffIcon(class UImage* DebuffImage);
};

// Class AimGods.AGDamageTextInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAGDamageTextInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGDamageTextInterface");
		return ptr;
	}


};

// Class AimGods.AGDamageExecutionCalc
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UAGDamageExecutionCalc : public UGameplayEffectExecutionCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGDamageExecutionCalc");
		return ptr;
	}


};

// Class AimGods.AGCustomGameSubsystem
// 0x01D8 (FullSize[0x0208] - InheritedSize[0x0030])
class UAGCustomGameSubsystem : public UGameInstanceSubsystem
{
public:
	class UAwsHttpRequestLibrary*                      HttpRequestLibrary;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2FIY[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCustomGame                                 CurrentCustomGame;                                         // 0x0040(0x0058) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FIncomingCustomGameInvite>           IncomingCustomGameInvites;                                 // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     CustomGameApiBaseUrl;                                      // 0x00A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FlexMatchApiBaseUrl;                                       // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCustomGameError;                                         // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGetCurrentGame;                                          // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCreateCustomGame;                                        // 0x00E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStartCustomLobbyGameSessionPlacement;                    // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDescribeGameSessionPlacement;                            // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLeave;                                                   // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSendInvite;                                              // 0x0128(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAcceptInvite;                                            // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGetIncomingInvites;                                      // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCustomGameInviteReceivedWs;                              // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCustomGameDisbandedWs;                                   // 0x0168(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCustomGameInviteCancelledWs;                             // 0x0178(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerLeftCustomGameWs;                                  // 0x0188(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerReadyStateChangedWs;                               // 0x0198(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerKickedWs;                                          // 0x01A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerJoinedCustomGameWs;                                // 0x01B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerChangedTeamWs;                                     // 0x01C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCustomGamePlacementStartedWs;                            // 0x01D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCustomGamePlacementCanceledWs;                           // 0x01E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCustomGamePlacementFulfilledWs;                          // 0x01F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGCustomGameSubsystem");
		return ptr;
	}


	void StartCustomLobbyGameSessionPlacement();
	void SetPlayerIsReady(bool bIsReady);
	void SendCustomGameInvite(const struct FString& PlayerId);
	void LeaveCurrentGame();
	void KickPlayer(const struct FString& PlayerId);
	bool GetIsReady();
	bool GetIsLeader();
	void GetIncomingInvites();
	void GetCurrentGame();
	void DescribeGameSessionPlacement();
	void CreateCustomGame();
	void ChangeTeam(TEnumAsByte<EFCustomGameTeam> NewTeam);
	void CancelOutgoingInvite(const struct FString& InviteId);
	void CancelInvite(const struct FString& InviteId);
	void CancelIncomingInvite(const struct FString& InviteId);
	bool AllPlayersReady();
	void AcceptInvite(const struct FString& InviteId);
};

// Class AimGods.AGGameMode
// 0x0240 (FullSize[0x0540] - InheritedSize[0x0300])
class AAGGameMode : public AGameMode
{
public:
	EGameModeType                                      GameModeType;                                              // 0x0300(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameModeName                                      GameModeName;                                              // 0x0301(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2K1H[0x6];                                     // 0x0302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AAGPlayerSpawn*>                      PossibleSpawnsRed;                                         // 0x0308(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class AAGPlayerSpawn*>                      PossibleSpawnsBlue;                                        // 0x0318(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class AAGPlayerSpawn*>                      RedPlayerSpawns;                                           // 0x0328(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class AAGPlayerSpawn*>                      BluePlayerSpawns;                                          // 0x0338(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class AAGMinionPlayerStart*>                RedMinionSpawns;                                           // 0x0348(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class AAGMinionPlayerStart*>                BlueMinionSpawns;                                          // 0x0358(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                              MinSpawnEnemyDistance;                                     // 0x0368(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6JIH[0x4];                                     // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      RedTeamCharacterClass;                                     // 0x0370(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      BlueTeamCharacterClass;                                    // 0x0378(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      PlayerSpawnClass;                                          // 0x0380(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     GameSessionId;                                             // 0x0388(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                KillerGoldReward;                                          // 0x0398(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NonKillerGoldReward;                                       // 0x039C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_N2DH[0x8];                                     // 0x03A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPlayerRageQuit;                                          // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	bool                                               bGameOver;                                                 // 0x03B8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CTOR[0x1F];                                    // 0x03B9(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStartGameSessionState                      StartGameSessionState;                                     // 0x03D8(0x0088) (NativeAccessSpecifierPrivate)
	struct FProcessTerminateState                      ProcessTerminateState;                                     // 0x0460(0x0018) (NativeAccessSpecifierPrivate)
	struct FHealthCheckState                           HealthCheckState;                                          // 0x0478(0x0018) (NativeAccessSpecifierPrivate)
	struct FString                                     ServerPassword;                                            // 0x0490(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              CheckIfGameSessionActivatedInterval;                       // 0x04A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              CheckIfPlayersJoinedInterval;                              // 0x04A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               PlayerSessionsReserved;                                    // 0x04A8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WB9X[0x1F];                                    // 0x04A9(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeGameSessionActivated;                                  // 0x04C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                NumPlayersRequested;                                       // 0x04CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              TimeGameStarted;                                           // 0x04D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VK1D[0xC];                                     // 0x04D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PrematchTime;                                              // 0x04E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AG6F[0x4];                                     // 0x04E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GhostClass;                                                // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RespawnMultiplierInterval;                                 // 0x04F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BaseRespawnTime;                                           // 0x04F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MQJW[0x4];                                     // 0x04F8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RespawnTimeMultiplierCap;                                  // 0x04FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FRespawnTimerMultiplier>             RespawnMultipliers;                                        // 0x0500(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CRJO[0x8];                                     // 0x0510(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BlueTeamMinionClass;                                       // 0x0518(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      RedTeamMinionClass;                                        // 0x0520(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSpawnDebugWave;                                           // 0x0528(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAutoWin;                                                  // 0x0529(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7C4L[0x2];                                     // 0x052A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AutoWinTime;                                               // 0x052C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MinionsPerWave;                                            // 0x0530(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinionWaveInterval;                                        // 0x0534(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7QJR[0x8];                                     // 0x0538(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGGameMode");
		return ptr;
	}


	void TerminateGame();
	void SpawnMinions();
	void ResetSpawns();
	void QuitIfNotInEditor();
	void QueueEndGame(bool bGameEndedEarly, bool bServerShutdownEarly);
	void OnServerToBeTerminated();
	void OnServerHealthCheck();
	void Logout(class AController* Exiting);
	void KickAllPlayers();
	void InitPlayerSpawns();
	void HandleRageQuit(class AController* Exiting);
	TArray<class AAGMinionPlayerStart*> GetMinionPlayerStarts(bool bIsRedTeam);
	void EndGameQueueExpired();
	void EndGame(bool bRedTeamWon);
	void CheckIfPlayersJoined();
	void CheckIfGameSessionActivated();
	void AutoWin();
	void ApplyRespawnMultipliers();
	void AddToDamageTaken(class AActor* DamagedActor, float DamageDone);
	void AddToDamageDone(class AAGPlayerState* InPlayerState, float DamageDone);
};

// Class AimGods.AGCustomGameMode
// 0x0000 (FullSize[0x0540] - InheritedSize[0x0540])
class AAGCustomGameMode : public AAGGameMode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGCustomGameMode");
		return ptr;
	}


};

// Class AimGods.AGCheatManager
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UAGCheatManager : public UCheatManager
{
public:
	class APlayerController*                           PlayerController;                                          // 0x0078(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGCheatManager");
		return ptr;
	}


	void Cheat_OpenShop();
	void Cheat_Gold(int Gold);
};

// Class AimGods.AGChatSubsystem
// 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
class UAGChatSubsystem : public UGameInstanceSubsystem
{
public:
	class UAwsHttpRequestLibrary*                      HttpRequestLibrary;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAGGameInstance*                             MyGameInstance;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     ChatApiBaseUrl;                                            // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldFilterProfanity;                                    // 0x0050(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R6L4[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FChatConversation>                   AllChatConversations;                                      // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChatError;                                               // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSendChatMessage;                                         // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnReceiveChatMessage;                                      // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnShowChatBox;                                             // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGChatSubsystem");
		return ptr;
	}


	void ShowChatBox(const struct FString& OtherPlayerId, const struct FString& OtherPlayerUsername);
	void SendChatMessage(const struct FString& ToUserId, const struct FString& MessageText);
	void GetChatConversationsFromServer();
	struct FChatConversation GetChatConversationById(const struct FString& ChatConversationId);
	struct FChatMessage CreateChatMessage(const struct FString& FromUserId, const struct FString& FromUsername, int64_t MessageTimeStamp, const struct FString& MessageText);
};

// Class AimGods.AGCharacterMovementComponent
// 0x0050 (FullSize[0x0720] - InheritedSize[0x06D0])
class UAGCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	float                                              SlowWalkSpeedMultiplier;                                   // 0x06D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bWantsToSlowWalk;                                          // 0x06D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YNVL[0x3];                                     // 0x06D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CrouchSpeedMultiplier;                                     // 0x06D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZFGD[0x44];                                    // 0x06DC(0x0044) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGCharacterMovementComponent");
		return ptr;
	}


	void SetSlowWalking(bool bSlowWalk);
};

// Class AimGods.AGCharacterBase
// 0x00E8 (FullSize[0x0710] - InheritedSize[0x0628])
class AAGCharacterBase : public ACharacter
{
public:
	unsigned char                                      UnknownData_12X8[0x8];                                     // 0x0628(0x0008) Fix Super Size
	unsigned char                                      UnknownData_JO7G[0x10];                                    // 0x0630(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAGTeamComponent*                            TeamComponent;                                             // 0x0640(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAGHealthComponent*                          HealthComp;                                                // 0x0648(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAGAttributes*                               Attributes;                                                // 0x0650(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAGAbilitySystemComponent*                   AbilitySystemComponent;                                    // 0x0658(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ML0I[0x40];                                    // 0x0660(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DamageNumberClass;                                         // 0x06A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LM8H[0x18];                                    // 0x06A8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RewardedMoneyToKiller;                                     // 0x06C0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCanMove;                                                  // 0x06C4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TCSL[0x13];                                    // 0x06C5(0x0013) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AAGTowerBase*                                CurrentTower;                                              // 0x06D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DefaultAttributeEffect;                                    // 0x06E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              DefaultCharacterAbilities;                                 // 0x06E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class UAGAggroSphereComponent*                     CurrentAggroSphere;                                        // 0x06F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             DamageTextSpawn;                                           // 0x0700(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSheeped;                                                  // 0x0708(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2WZY[0x7];                                     // 0x0709(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGCharacterBase");
		return ptr;
	}


	void SetCanMove(bool CanMove);
	void Server_ShowDamageNumberOnSpectators(class AAGCharacterBase* DamagedCharacter, const struct FAGDamageNumber& DamageNumber);
	bool IsDead();
	bool IsAlive();
	float GetMoveSpeed();
};

// Class AimGods.AGCharacter
// 0x0170 (FullSize[0x0880] - InheritedSize[0x0710])
class AAGCharacter : public AAGCharacterBase
{
public:
	unsigned char                                      UnknownData_B9VZ[0x10];                                    // 0x0710(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAGAttributeSetPlayer*                       PlayerAttributeSet;                                        // 0x0720(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K08N[0x8];                                     // 0x0728(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnASCInitialized;                                          // 0x0730(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class USpringArmComponent*                         SpringArmComponent;                                        // 0x0740(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCameraComponent*                            CameraComponent;                                           // 0x0748(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                      Mesh1PComponent;                                           // 0x0750(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                      WeaponMesh1P;                                              // 0x0758(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                      WeaponMesh3P;                                              // 0x0760(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HighAccuracyRemoteViewPitch;                               // 0x0768(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DefaultFOV;                                                // 0x076C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAGWeapon*                                   CurrentWeapon;                                             // 0x0770(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      FireCameraShake;                                           // 0x0778(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAnimMontage*>                        FireMontages1P;                                            // 0x0780(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UAnimMontage*                                FireMontage1POverride;                                     // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                                FireMontage1P;                                             // 0x0798(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                                FireMontage3P;                                             // 0x07A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      StarterWeaponClass;                                        // 0x07A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_60EG[0x4];                                     // 0x07B0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bReloading;                                                // 0x07B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsWalking;                                                // 0x07B5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsTeamChat;                                               // 0x07B6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsChatOpen;                                               // 0x07B7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bWasSheep;                                                 // 0x07B8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OFF6[0xF];                                     // 0x07B9(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WalkSpeedModifier;                                         // 0x07C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DefaultMoveSpeed;                                          // 0x07CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RagdollImpulseStrength;                                    // 0x07D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCrouching;                                                // 0x07D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OF77[0x3];                                     // 0x07D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeBetweenShots;                                          // 0x07D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L0JQ[0x14];                                    // 0x07DC(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                ReloadMontage1P;                                           // 0x07F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ReloadMontage3P;                                           // 0x07F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_THOI[0x8];                                     // 0x0800(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ReloadTime;                                                // 0x0808(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5OPO[0xC];                                     // 0x080C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ShowHitOverlayTime;                                        // 0x0818(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RegenRate;                                                 // 0x081C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZTXJ[0x8];                                     // 0x0820(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDeathInfo                                  DeathInfo;                                                 // 0x0828(0x0018) (Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VT9Q[0x10];                                    // 0x0840(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              SpawnedTraps;                                              // 0x0850(0x0010) (BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                                     ImpactPoint;                                               // 0x0860(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShotPlayerWhilstInAggroSphere;                            // 0x086C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VJ2B[0x3];                                     // 0x086D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TowerDamageMultipler;                                      // 0x0870(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsVanished;                                               // 0x0874(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7NE0[0xB];                                     // 0x0875(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGCharacter");
		return ptr;
	}


	void StunTagChanged(const struct FGameplayTag& CallbackTag, int NewCount);
	void SpawnWeapon();
	void ShowHitIndicator(const struct FVector& DamagerLocation);
	void SetupPlayerCard();
	void SetLastImpact(const struct FVector& Point);
	void ServerReload();
	void ServerGrantLoadoutAbilities(TArray<struct FLoadoutAbility> LoadoutAbilities);
	void ServerEndWalk();
	void ServerBeginWalk();
	void Play3PReloadEffects();
	void OnRep_DeathInfo();
	void OnRep_bIsDead();
	void OnDeath(class AActor* KilledActor, class AController* KillerController);
	void HandleLocalDeath();
	void Fire();
	void EndCrouch();
	void CheatOpenShop();
	void CheatGold(int Gold);
	void BPUpdateKillFeed(class AAGPlayerState* KillerPC, class AAGCharacter* DeadActor);
	void BPShowHitIndicator(const struct FVector& DamagerLocation);
	void BPShowGameplayUI(class AAGPlayerController* NewController);
	void BPShowDamageDirection(class AActor* DamageCauser);
	void BPSendInfoToKillFeed(class AController* KillerPC, class AAGCharacter* DeadActor);
	void BPOnDeath(class AAGPlayerState* Killer);
};

// Class AimGods.AGBaseLocation
// 0x0008 (FullSize[0x0220] - InheritedSize[0x0218])
class AAGBaseLocation : public ATargetPoint
{
public:
	class UAGTeamComponent*                            TeamComp;                                                  // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGBaseLocation");
		return ptr;
	}


};

// Class AimGods.AGAuthSubsystem
// 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
class UAGAuthSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_G44O[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnLogin;                                                   // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGetUserInfo;                                             // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerAlreadyLoggedIn;                                   // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EXQE[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AutoTokenRefreshTime;                                      // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R8PA[0x34];                                    // 0x0084(0x0034) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGAuthSubsystem");
		return ptr;
	}


	void Login(const struct FString& Username, const struct FString& Password);
	void GetUserInfo();
	void ForceLogin(const struct FString& Username, const struct FString& Password);
	void AutoRefreshToken();
};

// Class AimGods.AGAttributeSetPlayer
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UAGAttributeSetPlayer : public UAttributeSet
{
public:
	struct FGameplayAttributeData                      Gold;                                                      // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      TimeBetweenShots;                                          // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      HeadshotDamageMultiplier;                                  // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGAttributeSetPlayer");
		return ptr;
	}


	void OnRep_TimeBetweenShots(const struct FGameplayAttributeData& OldTimeBetweenShots);
	void OnRep_HeadshotDamageMultiplier(const struct FGameplayAttributeData& OldHeadshotDamageMultiplier);
	void OnRep_Gold(const struct FGameplayAttributeData& OldGold);
};

// Class AimGods.AGAttributeSetBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAGAttributeSetBase : public UAttributeSet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGAttributeSetBase");
		return ptr;
	}


};

// Class AimGods.AGAttributes
// 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
class UAGAttributes : public UAttributeSet
{
public:
	struct FGameplayAttributeData                      DelayBetweenShots;                                         // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      LifeSteal;                                                 // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      MoveSpeed;                                                 // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      AttackPower;                                               // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      HeadshotDamageMultiplier;                                  // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      Health;                                                    // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      MaxHealth;                                                 // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      HealthRegeneration;                                        // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      Defense;                                                   // 0x00B0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      HeadshotDefense;                                           // 0x00C0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      IncomingHealMultiplier;                                    // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAttributeData                      Damage;                                                    // 0x00E0(0x0010) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGAttributes");
		return ptr;
	}


	void OnRep_MoveSpeed(const struct FGameplayAttributeData& OldMoveSpeed);
	void OnRep_MaxHealth(const struct FGameplayAttributeData& OldMaxHealth);
	void OnRep_Lifesteal(const struct FGameplayAttributeData& OldLifesteal);
	void OnRep_IncomingHealMultiplier(const struct FGameplayAttributeData& OldIncomingHealMultiplier);
	void OnRep_HealthRegeneration(const struct FGameplayAttributeData& OldHealthRegeneration);
	void OnRep_Health(const struct FGameplayAttributeData& OldHealth);
	void OnRep_HeadshotDefense(const struct FGameplayAttributeData& OldHeadshotDefense);
	void OnRep_HeadshotDamageMultiplier(const struct FGameplayAttributeData& OldHeadshotDamageMultiplier);
	void OnRep_DelayBetweenShots(const struct FGameplayAttributeData& OldDelayBetweenShots);
	void OnRep_Defense(const struct FGameplayAttributeData& OldDefense);
	void OnRep_AttackPower(const struct FGameplayAttributeData& OldAttackPower);
};

// Class AimGods.AGAT_WaitTargetDataUsingActor
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UAGAT_WaitTargetDataUsingActor : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGAT_WaitTargetDataUsingActor");
		return ptr;
	}


};

// Class AimGods.AGAnimNotify_PlayLocalSound
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UAGAnimNotify_PlayLocalSound : public UAnimNotify_PlaySound
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGAnimNotify_PlayLocalSound");
		return ptr;
	}


};

// Class AimGods.AGAIController
// 0x0038 (FullSize[0x0358] - InheritedSize[0x0320])
class AAGAIController : public AAIController
{
public:
	class UAGTeamComponent*                            TeamComponent;                                             // 0x0320(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBehaviorTree*                               BehaviorTree;                                              // 0x0328(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       BlackboardKey_TargetActor;                                 // 0x0330(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       BlackboardKey_DestinationActor;                            // 0x0338(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       BlackboardKey_BeginAttackLocation;                         // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       BlackboardKey_IsOddBounce;                                 // 0x0348(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAGAICharacter*                              AICharacter;                                               // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGAIController");
		return ptr;
	}


	class AAGTowerBase* GetTowerToAttack();
	void FindTarget();
	void EnemyLeftAggroRadius(class AActor* EnemyActor);
	void EnemyEnteredAggroRadius(class AActor* EnemADetourCrowdAIControlleryActor);
};

// Class AimGods.AGAICharacter
// 0x00C0 (FullSize[0x07D0] - InheritedSize[0x0710])
class AAGAICharacter : public AAGCharacterBase
{
public:
	class UStaticMeshComponent*                        BallMesh;                                                  // 0x0710(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAGAggroSphereComponent*                     AggroSphere;                                               // 0x0718(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawnSensingComponent*                       PawnSensingComp;                                           // 0x0720(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        TargetShieldMesh;                                          // 0x0728(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BouncesPerSecond;                                          // 0x0730(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeBetweenShots;                                          // 0x0734(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProjectileDamage;                                          // 0x0738(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NavMoveSpeed;                                              // 0x073C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackingMoveSpeed;                                        // 0x0740(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8_t                                             TargetsToSpawn;                                            // 0x0744(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C7IZ[0x3];                                     // 0x0745(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TargetShieldRadius;                                        // 0x0748(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_45F0[0x4];                                     // 0x074C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      TargetClass;                                               // 0x0750(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ProjectileClass;                                           // 0x0758(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      WeaponDamageEffect;                                        // 0x0760(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Targets[0x50];                                             // 0x0768(0x0050) UNKNOWN PROPERTY: SetProperty AimGods.AGAICharacter.Targets
	class AActor*                                      Killer;                                                    // 0x07B8(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WCS5[0x10];                                    // 0x07C0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGAICharacter");
		return ptr;
	}


	void ShootTarget(class AActor* Target);
	void OnRep_Killer();
	void EnemyLeftAggroRadius(class AActor* EnemyActor);
	void EnemyEnteredAggroRadius(class AActor* EnemyActor);
	void BPHandleDeath(class AActor* KillerActor);
	void ActivateShieldFX(bool bEnableFX);
};

// Class AimGods.AGAggroSphereComponent
// 0x0048 (FullSize[0x0440] - InheritedSize[0x03F8])
class UAGAggroSphereComponent : public USphereComponent
{
public:
	struct FScriptMulticastDelegate                    OnEnemyEnterAggroSphere;                                   // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEnemyLeftAggroSphere;                                    // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              AggroActors;                                               // 0x0418(0x0010) (Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              AggroFilter;                                               // 0x0428(0x0010) (ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class AActor*                                      BestTarget;                                                // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGAggroSphereComponent");
		return ptr;
	}


	TArray<class AActor*> GetAggroActors();
	void ActorLeftAggroRadius(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ActorEnteredAggroRadius(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ActorDiedInAggroRadius(class AActor* KilledActor, class AController* Killer);
};

// Class AimGods.AGAbilitySystemComponent
// 0x0058 (FullSize[0x1340] - InheritedSize[0x12E8])
class UAGAbilitySystemComponent : public UAbilitySystemComponent
{
public:
	struct FScriptMulticastDelegate                    OnAGGameplayEffectAdded;                                   // 0x12E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAGGameplayEffectRemoved;                                 // 0x12F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAGGameplayAbilityAdded;                                  // 0x1308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLocalAbilityInputPressed;                                // 0x1318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_STP9[0x8];                                     // 0x1328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ReceivedDamage;                                            // 0x1330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AimGods.AGAbilitySystemComponent");
		return ptr;
	}


	void RemoveActiveEffectsByAssetTags(const struct FGameplayTagContainer& GameplayCueTag);
	void OnActiveGameplayEffectRemoved(const struct FActiveGameplayEffect& RemovedEffect);
	void OnActiveGameplayEffectAddedToSelf(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayEffectSpec& EffectSpec, const struct FActiveGameplayEffectHandle& EffectHandle);
	struct FString GetActionNamePairedWithAbilityTag(const struct FGameplayTag& AbilityTag);
	void CancelAbility(const struct FGameplayTag& AbilityTag);
	void BP_RemoveLooseGameplayTag(const struct FGameplayTag& GameplayCueTag, int Amount);
	void BP_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag);
	void BP_RemoveAllGameplayCues();
	float BP_GetGameplayEffectRemainingDuration(const struct FActiveGameplayEffectHandle& Handle);
	struct FGameplayTagContainer BP_GetBlockedAbilityTags();
	struct FGameplayAbilitySpec BP_FindAbilitySpecFromClass(class UClass* InAbilityClass);
	void BP_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& EffectParameters);
	void BP_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& EffectParameters);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
