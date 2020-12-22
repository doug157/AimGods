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

// Class MagicLeap.MagicLeapRaycastFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMagicLeapRaycastFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeap.MagicLeapRaycastFunctionLibrary");
		return ptr;
	}


	struct FMagicLeapRaycastQueryParams STATIC_MakeRaycastQueryParams(const struct FVector& Position, const struct FVector& Direction, const struct FVector& UpVector, int Width, int Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int UserData);
};

// Class MagicLeap.MagicLeapRaycastComponent
// 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])
class UMagicLeapRaycastComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_O0KQ[0x68];                                    // 0x00B0(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeap.MagicLeapRaycastComponent");
		return ptr;
	}


	bool RequestRaycast(const struct FMagicLeapRaycastQueryParams& RequestParams, const struct FScriptDelegate& ResultDelegate);
	void RaycastResultDelegate__DelegateSignature(const struct FMagicLeapRaycastHitResult& HitResult);
};

// Class MagicLeap.MeshTrackerComponent
// 0x0090 (FullSize[0x0280] - InheritedSize[0x01F0])
class UMeshTrackerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_S98H[0x8];                                     // 0x01F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMeshTrackerUpdated;                                      // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               ScanWorld;                                                 // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapMeshType                                 MeshType;                                                  // 0x0209(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6DN6[0x6];                                     // 0x020A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBoxComponent*                               BoundingVolume;                                            // 0x0210(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapMeshLOD                                  LevelOfDetail;                                             // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YH8P[0x3];                                     // 0x0219(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PerimeterOfGapsToFill;                                     // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Planarize;                                                 // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RQV4[0x3];                                     // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DisconnectedSectionArea;                                   // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RequestNormals;                                            // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RequestVertexConfidence;                                   // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapMeshVertexColorMode                      VertexColorMode;                                           // 0x022A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_29QM[0x5];                                     // 0x022B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FColor>                              BlockVertexColors;                                         // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                VertexColorFromConfidenceZero;                             // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                VertexColorFromConfidenceOne;                              // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RemoveOverlappingTriangles;                                // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WPIA[0x7];                                     // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMRMeshComponent*                            MRMesh;                                                    // 0x0268(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BricksPerFrame;                                            // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6QZV[0xC];                                     // 0x0274(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeap.MeshTrackerComponent");
		return ptr;
	}


	void SelectMeshBlocks(const struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh);
	void OnMeshTrackerUpdated__DelegateSignature(const struct FGuid& ID, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence);
	int GetNumQueuedBlockUpdates();
	void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void DisconnectBlockSelector();
	void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void ConnectBlockSelector(const TScriptInterface<class UMagicLeapMeshBlockSelectorInterface>& Selector);
};

// Class MagicLeap.MagicLeapMeshBlockSelectorInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMagicLeapMeshBlockSelectorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeap.MagicLeapMeshBlockSelectorInterface");
		return ptr;
	}


	void SelectMeshBlocks(const struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh);
};

// Class MagicLeap.MagicLeapSettings
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UMagicLeapSettings : public UObject
{
public:
	bool                                               bEnableZI;                                                 // 0x0028(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseVulkanForZI;                                           // 0x0029(0x0001) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseMLAudioForZI;                                          // 0x002A(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_THJ2[0x5];                                     // 0x002B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeap.MagicLeapSettings");
		return ptr;
	}


};

// Class MagicLeap.MagicLeapHMDFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMagicLeapHMDFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeap.MagicLeapHMDFunctionLibrary");
		return ptr;
	}


	void STATIC_SetStabilizationDepthActor(class AActor* InStabilizationDepthActor, bool bSetFocusActor);
	void STATIC_SetFocusActor(class AActor* InFocusActor, bool bSetStabilizationActor);
	void STATIC_SetBaseRotation(const struct FRotator& InBaseRotation);
	void STATIC_SetBasePosition(const struct FVector& InBasePosition);
	void STATIC_SetBaseOrientation(const struct FQuat& InBaseOrientation);
	bool STATIC_SetAppReady();
	bool STATIC_IsRunningOnMagicLeapHMD();
	int STATIC_GetMLSDKVersionRevision();
	int STATIC_GetMLSDKVersionMinor();
	int STATIC_GetMLSDKVersionMajor();
	struct FString STATIC_GetMLSDKVersion();
	bool STATIC_GetHeadTrackingState(struct FMagicLeapHeadTrackingState* State);
	bool STATIC_GetHeadTrackingMapEvents();
};

// Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent
// 0x0090 (FullSize[0x01D0] - InheritedSize[0x0140])
class UMagicLeapHeadTrackingNotificationsComponent : public UVRNotificationsComponent
{
public:
	struct FScriptMulticastDelegate                    OnHeadTrackingLost;                                        // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnHeadTrackingRecovered;                                   // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnHeadTrackingRecoveryFailed;                              // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnHeadTrackingNewSessionStarted;                           // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KV2U[0x50];                                    // 0x0180(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent");
		return ptr;
	}


};

// Class MagicLeap.LuminApplicationLifecycleComponent
// 0x0030 (FullSize[0x0170] - InheritedSize[0x0140])
class ULuminApplicationLifecycleComponent : public UApplicationLifecycleComponent
{
public:
	struct FScriptMulticastDelegate                    DeviceHasReactivatedDelegate;                              // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    DeviceWillEnterRealityModeDelegate;                        // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    DeviceWillGoInStandbyDelegate;                             // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeap.LuminApplicationLifecycleComponent");
		return ptr;
	}


};

// Class MagicLeap.InAppPurchaseComponent
// 0x0078 (FullSize[0x0128] - InheritedSize[0x00B0])
class UInAppPurchaseComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    InAppPurchaseLogMessage;                                   // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GetItemsDetailsSuccess;                                    // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GetItemsDetailsFailure;                                    // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    PurchaseConfirmationSuccess;                               // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    PurchaseConfirmationFailure;                               // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GetPurchaseHistorySuccess;                                 // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GetPurchaseHistoryFailure;                                 // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UDIC[0x8];                                     // 0x0120(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeap.InAppPurchaseComponent");
		return ptr;
	}


	bool TryPurchaseItemAsync(const struct FPurchaseItemDetails& ItemDetails);
	bool TryGetPurchaseHistoryAsync(int InNumPages);
	bool TryGetItemsDetailsAsync(TArray<struct FString> ItemIDs);
	void PurchaseConfirmationSuccess__DelegateSignature(const struct FPurchaseConfirmation& PurchaseConfirmations);
	void PurchaseConfirmationFailure__DelegateSignature();
	void InAppPurchaseLogMessage__DelegateSignature(const struct FString& LogMessage);
	void GetPurchaseHistorySuccess__DelegateSignature(TArray<struct FPurchaseConfirmation> PurchaseHistory);
	void GetPurchaseHistoryFailure__DelegateSignature();
	void GetItemsDetailsSuccess__DelegateSignature(TArray<struct FPurchaseItemDetails> ItemsDetails);
	void GetItemsDetailsFailure__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
