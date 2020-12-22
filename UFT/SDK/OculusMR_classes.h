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

// Class OculusMR.OculusMRFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UOculusMRFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMRFunctionLibrary");
		return ptr;
	}


	void STATIC_SetTrackingReferenceComponent(class USceneComponent* Component);
	bool STATIC_IsMrcEnabled();
	bool STATIC_IsMrcActive();
	class USceneComponent* STATIC_GetTrackingReferenceComponent();
	class UOculusMR_Settings* STATIC_GetOculusMRSettings();
};

// Class OculusMR.OculusMR_State
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UOculusMR_State : public UObject
{
public:
	struct FTrackedCamera                              TrackedCamera;                                             // 0x0028(0x0070) (NativeAccessSpecifierPublic)
	class USceneComponent*                             TrackingReferenceComponent;                                // 0x0098(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0XSA[0x4];                                     // 0x00A0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               ChangeCameraStateRequested;                                // 0x00A4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BindToTrackedCameraIndexRequested;                         // 0x00A5(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KS82[0x2];                                     // 0x00A6(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMR_State");
		return ptr;
	}


};

// Class OculusMR.OculusMR_Settings
// 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
class UOculusMR_Settings : public UObject
{
public:
	EOculusMR_ClippingReference                        ClippingReference;                                         // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseTrackedCameraResolution;                               // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YE9H[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                WidthPerView;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HeightPerView;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CastingLatency;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      BackdropColor;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HandPoseStateLatency;                                      // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      ChromaKeyColor;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChromaKeySimilarity;                                       // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChromaKeySmoothRange;                                      // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChromaKeySpillRange;                                       // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOculusMR_VirtualGreenScreenType                   VirtualGreenScreenType;                                    // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1J98[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DynamicLightingDepthSmoothFactor;                          // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DynamicLightingDepthVariationClampingValue;                // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOculusMR_PostProcessEffects                       ExternalCompositionPostProcessEffects;                     // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsCasting;                                                // 0x005D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EOculusMR_CompositionMethod                        CompositionMethod;                                         // 0x005E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EOculusMR_CameraDeviceEnum                         CapturingCamera;                                           // 0x005F(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bUseDynamicLighting;                                       // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EOculusMR_DepthQuality                             DepthQuality;                                              // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9BVZ[0x66];                                    // 0x0062(0x0066) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMR_Settings");
		return ptr;
	}


	void SetUseDynamicLighting(bool Val);
	void SetIsCasting(bool Val);
	void SetDepthQuality(EOculusMR_DepthQuality Val);
	void SetCompositionMethod(EOculusMR_CompositionMethod Val);
	void SetCapturingCamera(EOculusMR_CameraDeviceEnum Val);
	void SaveToIni();
	void LoadFromIni();
	bool GetUseDynamicLighting();
	bool GetIsCasting();
	EOculusMR_DepthQuality GetDepthQuality();
	EOculusMR_CompositionMethod GetCompositionMethod();
	EOculusMR_CameraDeviceEnum GetCapturingCamera();
	int GetBindToTrackedCameraIndex();
	void BindToTrackedCameraIndexIfAvailable(int InTrackedCameraIndex);
};

// Class OculusMR.OculusMR_PlaneMeshComponent
// 0x0020 (FullSize[0x0420] - InheritedSize[0x0400])
class UOculusMR_PlaneMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_B4HY[0x20];                                    // 0x0400(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMR_PlaneMeshComponent");
		return ptr;
	}


	bool SetCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles);
	void ClearCustomMeshTriangles();
	void AddCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles);
};

// Class OculusMR.OculusMR_CastingCameraActor
// 0x0100 (FullSize[0x0330] - InheritedSize[0x0230])
class AOculusMR_CastingCameraActor : public ASceneCapture2D
{
public:
	class UVRNotificationsComponent*                   VRNotificationComponent;                                   // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  CameraColorTexture;                                        // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  CameraDepthTexture;                                        // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOculusMR_PlaneMeshComponent*                PlaneMeshComponent;                                        // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   ChromaKeyMaterial;                                         // 0x0250(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   ChromaKeyLitMaterial;                                      // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   OpaqueColoredMaterial;                                     // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    ChromaKeyMaterialInstance;                                 // 0x0268(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    ChromaKeyLitMaterialInstance;                              // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    CameraFrameMaterialInstance;                               // 0x0278(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    BackdropMaterialInstance;                                  // 0x0280(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AOculusMR_BoundaryActor*                     BoundaryActor;                                             // 0x0288(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASceneCapture2D*                             BoundarySceneCaptureActor;                                 // 0x0290(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  DefaultTexture_White;                                      // 0x0298(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RSJK[0x58];                                    // 0x02A0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTextureRenderTarget2D*>              BackgroundRenderTargets;                                   // 0x02F8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class ASceneCapture2D*                             ForegroundCaptureActor;                                    // 0x0308(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UTextureRenderTarget2D*>              ForegroundRenderTargets;                                   // 0x0310(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class UOculusMR_Settings*                          MRSettings;                                                // 0x0320(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOculusMR_State*                             MRState;                                                   // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMR_CastingCameraActor");
		return ptr;
	}


};

// Class OculusMR.OculusMR_BoundaryMeshComponent
// 0x0030 (FullSize[0x0430] - InheritedSize[0x0400])
class UOculusMR_BoundaryMeshComponent : public UMeshComponent
{
public:
	EOculusMR_BoundaryType                             BoundaryType;                                              // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GVT1[0x3];                                     // 0x0401(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BottomZ;                                                   // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TopZ;                                                      // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SZZ2[0x4];                                     // 0x040C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   WhiteMaterial;                                             // 0x0410(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AOculusMR_CastingCameraActor*                CastingCameraActor;                                        // 0x0418(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ASRK[0x10];                                    // 0x0420(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMR_BoundaryMeshComponent");
		return ptr;
	}


};

// Class OculusMR.OculusMR_BoundaryActor
// 0x0008 (FullSize[0x0220] - InheritedSize[0x0218])
class AOculusMR_BoundaryActor : public AActor
{
public:
	class UOculusMR_BoundaryMeshComponent*             BoundaryMeshComponent;                                     // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMR_BoundaryActor");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
