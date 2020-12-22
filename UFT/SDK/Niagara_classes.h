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

// Class Niagara.NiagaraSystem
// 0x0350 (FullSize[0x0380] - InheritedSize[0x0030])
class UNiagaraSystem : public UFXSystemAsset
{
public:
	unsigned char                                      UnknownData_D95N[0x1];                                     // 0x0030(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bDumpDebugSystemInfo;                                      // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDumpDebugEmitterInfo;                                     // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7CBJ[0x1];                                     // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bFixedBounds : 1;                                          // 0x0034(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2UXE[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	ENiagaraFastPathMode                               FastPathMode;                                              // 0x0038(0x0001) ELEMENT_SIZE_MISMATCH  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DZXU[0x3];                                     // 0x0039(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FNiagaraFastPath_Module_SystemScalability   SystemScalability;                                         // 0x003C(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraFastPath_Module_SystemLifeCycle     SystemLifeCycle;                                           // 0x004C(0x0001) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WGND[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNiagaraEmitterHandle>               EmitterHandles;                                            // 0x0050(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                              // 0x0060(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UNiagaraScript*                              SystemSpawnScript;                                         // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraScript*                              SystemUpdateScript;                                        // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_D44F[0x10];                                    // 0x0080(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraSystemCompiledData                  SystemCompiledData;                                        // 0x0090(0x01A8) (Protected, NativeAccessSpecifierProtected)
	struct FNiagaraUserRedirectionParameterStore       ExposedParameters;                                         // 0x0238(0x0108) (Protected, NativeAccessSpecifierProtected)
	struct FBox                                        FixedBounds;                                               // 0x0340(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bAutoDeactivate;                                           // 0x035C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_24WF[0x3];                                     // 0x035D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WarmupTime;                                                // 0x0360(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                WarmupTickCount;                                           // 0x0364(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WarmupTickDelta;                                           // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHasSystemScriptDIsWithPerInstanceData;                    // 0x036C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PI2B[0x3];                                     // 0x036D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               UserDINamesReadInSystemScripts;                            // 0x0370(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSystem");
		return ptr;
	}


};

// Class Niagara.NiagaraRendererProperties
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	int                                                SortOrderHint;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEnabled;                                                // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PI32[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraRendererProperties");
		return ptr;
	}


};

// Class Niagara.NiagaraSpriteRendererProperties
// 0x09D8 (FullSize[0x0A08] - InheritedSize[0x0030])
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                  // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraSpriteAlignment                            Alignment;                                                 // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraSpriteFacingMode                           FacingMode;                                                // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_81HA[0x2];                                     // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CustomFacingVectorMask;                                    // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   PivotInUVSpace;                                            // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraSortMode                                   SortMode;                                                  // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JSCT[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   SubImageSize;                                              // 0x0054(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSubImageBlend : 1;                                        // 0x005C(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRemoveHMDRollInVR : 1;                                    // 0x005C(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                              // 0x005C(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OD5G[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinFacingCameraBlendDistance;                              // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxFacingCameraBlendDistance;                              // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                           // 0x0068(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                              // 0x00F8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                           // 0x0188(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SpriteRotationBinding;                                     // 0x0218(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SpriteSizeBinding;                                         // 0x02A8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SpriteFacingBinding;                                       // 0x0338(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SpriteAlignmentBinding;                                    // 0x03C8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SubImageIndexBinding;                                      // 0x0458(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                    // 0x04E8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                   // 0x0578(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                   // 0x0608(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                   // 0x0698(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            CameraOffsetBinding;                                       // 0x0728(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            UVScaleBinding;                                            // 0x07B8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                     // 0x0848(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                      // 0x08D8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                      // 0x0968(0x0090) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K4YR[0x10];                                    // 0x09F8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSpriteRendererProperties");
		return ptr;
	}


};

// Class Niagara.NiagaraSettings
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UNiagaraSettings : public UDeveloperSettings
{
public:
	TArray<struct FSoftObjectPath>                     AdditionalParameterTypes;                                  // 0x0038(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                     AdditionalPayloadTypes;                                    // 0x0048(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                     AdditionalParameterEnums;                                  // 0x0058(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSettings");
		return ptr;
	}


};

// Class Niagara.NiagaraScriptSourceBase
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UNiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData_GCZ8[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScriptSourceBase");
		return ptr;
	}


};

// Class Niagara.NiagaraScript
// 0x0528 (FullSize[0x0550] - InheritedSize[0x0028])
class UNiagaraScript : public UObject
{
public:
	ENiagaraScriptUsage                                Usage;                                                     // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_58D1[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                UsageIndex;                                                // 0x002C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       UsageId;                                                   // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraParameterStore                      RapidIterationParameters;                                  // 0x0040(0x00B8) (NativeAccessSpecifierPublic)
	struct FNiagaraScriptExecutionParameterStore       ScriptExecutionParamStore;                                 // 0x00F8(0x00D8) (NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraBoundParameter>              ScriptExecutionBoundParameters;                            // 0x01D0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FNiagaraVMExecutableDataId                  CachedScriptVMId;                                          // 0x01E0(0x0050) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraVMExecutableDataId                  LastGeneratedVMId;                                         // 0x0230(0x0050) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4IKP[0x198];                                   // 0x0280(0x0198) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraVMExecutableData                    CachedScriptVM;                                            // 0x0418(0x0118) (NativeAccessSpecifierPrivate)
	TArray<class UNiagaraParameterCollection*>         CachedParameterCollectionReferences;                       // 0x0530(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraScriptDataInterfaceInfo>     CachedDefaultDataInterfaces;                               // 0x0540(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScript");
		return ptr;
	}


	void OnCompilationComplete();
};

// Class Niagara.NiagaraRibbonRendererProperties
// 0x0838 (FullSize[0x0868] - InheritedSize[0x0030])
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                  // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraRibbonFacingMode                           FacingMode;                                                // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9U0S[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UV0TilingDistance;                                         // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV0Scale;                                                  // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV0Offset;                                                 // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraRibbonAgeOffsetMode                        UV0AgeOffsetMode;                                          // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MH1O[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UV1TilingDistance;                                         // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV1Scale;                                                  // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV1Offset;                                                 // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraRibbonAgeOffsetMode                        UV1AgeOffsetMode;                                          // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraRibbonDrawDirection                        DrawDirection;                                             // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X2N8[0x2];                                     // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurveTension;                                              // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraRibbonTessellationMode                     TessellationMode;                                          // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JFTM[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TessellationFactor;                                        // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseConstantFactor;                                        // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K8OV[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TessellationAngle;                                         // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bScreenSpaceTessellation;                                  // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7UOX[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                           // 0x0088(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                              // 0x0118(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                           // 0x01A8(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                      // 0x0238(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonTwistBinding;                                        // 0x02C8(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonWidthBinding;                                        // 0x0358(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonFacingBinding;                                       // 0x03E8(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonIdBinding;                                           // 0x0478(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonLinkOrderBinding;                                    // 0x0508(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                     // 0x0598(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                    // 0x0628(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                   // 0x06B8(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                   // 0x0748(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                   // 0x07D8(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraRibbonRendererProperties");
		return ptr;
	}


};

// Class Niagara.NiagaraPreviewGrid
// 0x0050 (FullSize[0x0268] - InheritedSize[0x0218])
class ANiagaraPreviewGrid : public AActor
{
public:
	class UNiagaraSystem*                              System;                                                    // 0x0218(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraPreviewGridResetMode                       ResetMode;                                                 // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EMNK[0x7];                                     // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNiagaraPreviewAxis*                         PreviewAxisX;                                              // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraPreviewAxis*                         PreviewAxisY;                                              // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PreviewClass;                                              // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpacingX;                                                  // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpacingY;                                                  // 0x0244(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumX;                                                      // 0x0248(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                NumY;                                                      // 0x024C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UChildActorComponent*>                PreviewComponents;                                         // 0x0250(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4RS1[0x8];                                     // 0x0260(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewGrid");
		return ptr;
	}


	void DeactivatePreviews();
	void ActivatePreviews(bool bReset);
};

// Class Niagara.NiagaraPreviewAxis
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraPreviewAxis : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis");
		return ptr;
	}


	int Num();
	void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int PreviewIndex, bool bIsXAxis, struct FString* OutLabelText);
};

// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
public:
	struct FName                                       Param;                                                     // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Count;                                                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VLWF[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamBase");
		return ptr;
	}


};

// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FLinearColor                                Min;                                                       // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                Max;                                                       // 0x0048(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor");
		return ptr;
	}


};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	unsigned char                                      UnknownData_8Q6I[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector4                                    Min;                                                       // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector4                                    Max;                                                       // 0x0050(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector4");
		return ptr;
	}


};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector                                     Min;                                                       // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     Max;                                                       // 0x0044(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector");
		return ptr;
	}


};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector2D                                   Min;                                                       // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                                   Max;                                                       // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector2D");
		return ptr;
	}


};

// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	float                                              Min;                                                       // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              Max;                                                       // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamFloat");
		return ptr;
	}


};

// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	int                                                Min;                                                       // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Max;                                                       // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamInt32");
		return ptr;
	}


};

// Class Niagara.NiagaraPreviewBase
// 0x0000 (FullSize[0x0218] - InheritedSize[0x0218])
class ANiagaraPreviewBase : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewBase");
		return ptr;
	}


	void SetSystem(class UNiagaraSystem* InSystem);
	void SetLabelText(const struct FText& InXAxisText, const struct FText& InYAxisText);
};

// Class Niagara.NiagaraParameterCollection
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UNiagaraParameterCollection : public UObject
{
public:
	struct FName                                       Namespace;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNiagaraVariable>                    Parameters;                                                // 0x0030(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UNiagaraParameterCollectionInstance*         DefaultInstance;                                           // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                       CompileId;                                                 // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollection");
		return ptr;
	}


};

// Class Niagara.NiagaraParameterCollectionInstance
// 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
class UNiagaraParameterCollectionInstance : public UObject
{
public:
	class UNiagaraParameterCollection*                 Collection;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>                    OverridenParameters;                                       // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraParameterStore                      ParameterStorage;                                          // 0x0040(0x00B8) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollectionInstance");
		return ptr;
	}


	void SetVectorParameter(const struct FString& InVariableName, const struct FVector& InValue);
	void SetVector4Parameter(const struct FString& InVariableName, const struct FVector4& InValue);
	void SetVector2DParameter(const struct FString& InVariableName, const struct FVector2D& InValue);
	void SetQuatParameter(const struct FString& InVariableName, const struct FQuat& InValue);
	void SetIntParameter(const struct FString& InVariableName, int InValue);
	void SetFloatParameter(const struct FString& InVariableName, float InValue);
	void SetColorParameter(const struct FString& InVariableName, const struct FLinearColor& InValue);
	void SetBoolParameter(const struct FString& InVariableName, bool InValue);
	struct FVector GetVectorParameter(const struct FString& InVariableName);
	struct FVector4 GetVector4Parameter(const struct FString& InVariableName);
	struct FVector2D GetVector2DParameter(const struct FString& InVariableName);
	struct FQuat GetQuatParameter(const struct FString& InVariableName);
	int GetIntParameter(const struct FString& InVariableName);
	float GetFloatParameter(const struct FString& InVariableName);
	struct FLinearColor GetColorParameter(const struct FString& InVariableName);
	bool GetBoolParameter(const struct FString& InVariableName);
};

// Class Niagara.NiagaraMeshRendererProperties
// 0x06E8 (FullSize[0x0718] - InheritedSize[0x0030])
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
	class UStaticMesh*                                 ParticleMesh;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraSortMode                                   SortMode;                                                  // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D9BV[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bOverrideMaterials : 1;                                    // 0x003C(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                              // 0x003C(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AQRV[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNiagaraMeshMaterialOverride>        OverrideMaterials;                                         // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	ENiagaraMeshFacingMode                             FacingMode;                                                // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y285[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                           // 0x0058(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                              // 0x00E8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                           // 0x0178(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            MeshOrientationBinding;                                    // 0x0208(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ScaleBinding;                                              // 0x0298(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                    // 0x0328(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                   // 0x03B8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                   // 0x0448(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                   // 0x04D8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                     // 0x0568(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                      // 0x05F8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                      // 0x0688(0x0090) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraMeshRendererProperties");
		return ptr;
	}


};

// Class Niagara.NiagaraLightRendererProperties
// 0x0378 (FullSize[0x03A8] - InheritedSize[0x0030])
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:
	unsigned char                                      bUseInverseSquaredFalloff : 1;                             // 0x0030(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectsTranslucency : 1;                                  // 0x0030(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideRenderingEnabled : 1;                             // 0x0030(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KFRX[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RadiusScale;                                               // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ColorAdd;                                                  // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7S49[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraVariableAttributeBinding            LightRenderingEnabledBinding;                              // 0x0048(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            LightExponentBinding;                                      // 0x00D8(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                           // 0x0168(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                              // 0x01F8(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RadiusBinding;                                             // 0x0288(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            VolumetricScatteringBinding;                               // 0x0318(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraLightRendererProperties");
		return ptr;
	}


};

// Class Niagara.NiagaraFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraFunctionLibrary");
		return ptr;
	}


	class UNiagaraComponent* STATIC_SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod);
	class UNiagaraComponent* STATIC_SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod);
	void STATIC_OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent);
	void STATIC_OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMesh* StaticMesh);
	void STATIC_OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
	class UNiagaraParameterCollectionInstance* STATIC_GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
};

// Class Niagara.NiagaraEventReceiverEmitterAction
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction");
		return ptr;
	}


};

// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32_t                                           NumParticles;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NTMI[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
		return ptr;
	}


};

// Class Niagara.NiagaraEmitter
// 0x0280 (FullSize[0x02A8] - InheritedSize[0x0028])
class UNiagaraEmitter : public UObject
{
public:
	bool                                               bLocalSpace;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeterminism;                                              // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RCY1[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RandomSeed;                                                // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreAllocationCount;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UK43[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                         // 0x0038(0x0028) (NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties             SpawnScriptProps;                                          // 0x0060(0x0028) (NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties             EmitterSpawnScriptProps;                                   // 0x0088(0x0028) (NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties             EmitterUpdateScriptProps;                                  // 0x00B0(0x0028) (NativeAccessSpecifierPublic)
	ENiagaraSimTarget                                  SimTarget;                                                 // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_47HL[0x3];                                     // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBox                                        FixedBounds;                                               // 0x00DC(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                MinDetailLevel;                                            // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxDetailLevel;                                            // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraDetailsLevelScaleOverrides          GlobalSpawnCountScaleOverrides;                            // 0x0100(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bInterpolatedSpawning : 1;                                 // 0x0114(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFixedBounds : 1;                                          // 0x0114(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseMinDetailLevel : 1;                                    // 0x0114(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseMaxDetailLevel : 1;                                    // 0x0114(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideGlobalSpawnCountScale : 1;                        // 0x0114(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRequiresPersistentIDs : 1;                                // 0x0114(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RBTE[0x3];                                     // 0x0115(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxDeltaTimePerTick;                                       // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           MaxUpdateIterations;                                       // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SpawnStages[0x50];                                         // 0x0120(0x0050) UNKNOWN PROPERTY: SetProperty Niagara.NiagaraEmitter.SpawnStages
	unsigned char                                      bLimitDeltaTime : 1;                                       // 0x0170(0x0001) BIT_FIELD  (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZAH4[0x3];                                     // 0x0171(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraFastPath_Module_EmitterScalability  EmitterScalability;                                        // 0x0174(0x002C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraFastPath_Module_EmitterLifeCycle    EmitterLifeCycle;                                          // 0x01A0(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraFastPath_Module_SpawnRate>   SpawnRate;                                                 // 0x01B0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraFastPath_Module_SpawnPerUnit> SpawnPerUnit;                                              // 0x01C0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraFastPath_Module_SpawnBurstInstantaneous> SpawnBurstInstantaneous;                                   // 0x01D0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraFastPathAttributeNames              SpawnFastPathAttributeNames;                               // 0x01E0(0x0040) (NativeAccessSpecifierPublic)
	struct FNiagaraFastPathAttributeNames              UpdateFastPathAttributeNames;                              // 0x0220(0x0040) (NativeAccessSpecifierPublic)
	struct FString                                     UniqueEmitterName;                                         // 0x0260(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraRendererProperties*>          RendererProperties;                                        // 0x0270(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraEventScriptProperties>       EventHandlerScriptProps;                                   // 0x0280(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class UNiagaraScript*                              GPUComputeScript;                                          // 0x0290(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               SharedEventGeneratorIds;                                   // 0x0298(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEmitter");
		return ptr;
	}


};

// Class Niagara.NiagaraEditorDataBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraEditorDataBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEditorDataBase");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterface
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:
	unsigned char                                      UnknownData_CHQW[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterface");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterfaceVectorField
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
public:
	class UVectorField*                                Field;                                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTileX;                                                    // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTileY;                                                    // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTileZ;                                                    // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EMDG[0x5];                                     // 0x0043(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorField");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterfaceCurveBase
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
	TArray<float>                                      ShaderLUT;                                                 // 0x0038(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                              LUTMinTime;                                                // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LUTMaxTime;                                                // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LUTInvTimeRange;                                           // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bUseLUT : 1;                                               // 0x0054(0x0001) BIT_FIELD  (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_29DO[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurveBase");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterfaceVectorCurve
// 0x0180 (FullSize[0x01D8] - InheritedSize[0x0058])
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                    // 0x0058(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  YCurve;                                                    // 0x00D8(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  ZCurve;                                                    // 0x0158(0x0080) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorCurve");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterfaceVector4Curve
// 0x0200 (FullSize[0x0258] - InheritedSize[0x0058])
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                    // 0x0058(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  YCurve;                                                    // 0x00D8(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  ZCurve;                                                    // 0x0158(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  WCurve;                                                    // 0x01D8(0x0080) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector4Curve");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterfaceVector2DCurve
// 0x0100 (FullSize[0x0158] - InheritedSize[0x0058])
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                    // 0x0058(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  YCurve;                                                    // 0x00D8(0x0080) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector2DCurve");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterfaceTexture
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                                    Texture;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceTexture");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterfaceStaticMesh
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	class UStaticMesh*                                 DefaultMesh;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                    // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        SourceComponent;                                           // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNDIStaticMeshSectionFilter                 SectionFilter;                                             // 0x0050(0x0010) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X4FW[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceStaticMesh");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterfaceSpline
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class AActor*                                      Source;                                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSpline");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// 0x0088 (FullSize[0x00C0] - InheritedSize[0x0038])
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
	class AActor*                                      Source;                                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding                MeshUserParameter;                                         // 0x0040(0x0030) (Edit, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      SourceComponent;                                           // 0x0070(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENDISkeletalMesh_SkinningMode                      SkinningMode;                                              // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WOFM[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               SamplingRegions;                                           // 0x0080(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                WholeMeshLOD;                                              // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X0XV[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               SpecificBones;                                             // 0x0098(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SpecificSockets;                                           // 0x00A8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U3TW[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSkeletalMesh");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterfaceSimpleCounter
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSimpleCounter");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterfaceParticleRead
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterface
{
public:
	struct FString                                     EmitterName;                                               // 0x0038(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceParticleRead");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterfaceRWBase
// 0x00A8 (FullSize[0x00E0] - InheritedSize[0x0038])
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
public:
	unsigned char                                      OutputShaderStages[0x50];                                  // 0x0038(0x0050) UNKNOWN PROPERTY: SetProperty Niagara.NiagaraDataInterfaceRWBase.OutputShaderStages
	unsigned char                                      IterationShaderStages[0x50];                               // 0x0088(0x0050) UNKNOWN PROPERTY: SetProperty Niagara.NiagaraDataInterfaceRWBase.IterationShaderStages
	unsigned char                                      UnknownData_U3GZ[0x8];                                     // 0x00D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceRWBase");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterfaceGrid3D
// 0x0030 (FullSize[0x0110] - InheritedSize[0x00E0])
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                                  NumVoxels;                                                 // 0x00E0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VoxelSize;                                                 // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SetGridFromVoxelSize;                                      // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ABX0[0x3];                                     // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     WorldBBoxMin;                                              // 0x00F4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldBBoxSize;                                             // 0x0100(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SK9J[0x4];                                     // 0x010C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid3D");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// 0x0008 (FullSize[0x0118] - InheritedSize[0x0110])
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:
	uint32_t                                           MaxNeighborsPerVoxel;                                      // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EEKC[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceNeighborGrid3D");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterfaceGrid2D
// 0x0028 (FullSize[0x0108] - InheritedSize[0x00E0])
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
public:
	int                                                NumCellsX;                                                 // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumCellsY;                                                 // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CellSize;                                                  // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumAttributes;                                             // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SetGridFromCellSize;                                       // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6Q47[0x3];                                     // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     WorldBBoxMin;                                              // 0x00F4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   WorldBBoxSize;                                             // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2D");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2DCollection");
		return ptr;
	}


	void FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* dest, int AttributeIndex);
};

// Class Niagara.NiagaraDataInterfaceExport
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding                CallbackHandlerParameter;                                  // 0x0038(0x0030) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceExport");
		return ptr;
	}


};

// Class Niagara.NiagaraParticleCallbackHandler
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraParticleCallbackHandler : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraParticleCallbackHandler");
		return ptr;
	}


	void ReceiveParticleData(TArray<struct FBasicParticleData> Data, class UNiagaraSystem* NiagaraSystem);
};

// Class Niagara.NiagaraDataInterfaceCurve
// 0x0080 (FullSize[0x00D8] - InheritedSize[0x0058])
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  Curve;                                                     // 0x0058(0x0080) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurve");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterfaceCurlNoise
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
	uint32_t                                           Seed;                                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UV2C[0xC];                                     // 0x003C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurlNoise");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterfaceColorCurve
// 0x0200 (FullSize[0x0258] - InheritedSize[0x0058])
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  RedCurve;                                                  // 0x0058(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  GreenCurve;                                                // 0x00D8(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  BlueCurve;                                                 // 0x0158(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  AlphaCurve;                                                // 0x01D8(0x0080) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceColorCurve");
		return ptr;
	}


};

// Class Niagara.NiagaraDataInterfaceCollisionQuery
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData_LXIW[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCollisionQuery");
		return ptr;
	}


};

// Class Niagara.NiagaraComponentPool
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UNiagaraComponentPool : public UObject
{
public:
	TMap<class UNiagaraSystem*, struct FNCPool>        WorldParticleSystemPools;                                  // 0x0028(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FFK7[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraComponentPool");
		return ptr;
	}


};

// Class Niagara.NiagaraComponent
// 0x01B8 (FullSize[0x0590] - InheritedSize[0x03D8])
class UNiagaraComponent : public UFXSystemComponent
{
public:
	class UNiagaraSystem*                              Asset;                                                     // 0x03D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ENiagaraTickBehavior                               TickBehavior;                                              // 0x03E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MDGR[0x7];                                     // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraUserRedirectionParameterStore       OverrideParameters;                                        // 0x03E8(0x0108) (Edit, NativeAccessSpecifierPrivate)
	unsigned char                                      bForceSolo : 1;                                            // 0x04F0(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TQNG[0x27];                                    // 0x04F1(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAutoDestroy : 1;                                          // 0x0518(0x0001) BIT_FIELD  (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bRenderingEnabled : 1;                                     // 0x0518(0x0001) BIT_FIELD  (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bAutoManageAttachment : 1;                                 // 0x0518(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WTZY[0x3];                                     // 0x0519(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxTimeBeforeForceUpdateTransform;                         // 0x051C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WX29[0x8];                                     // 0x0520(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSystemFinished;                                          // 0x0528(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>              AutoAttachParent;                                          // 0x0538(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AutoAttachSocketName;                                      // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAttachmentRule                                    AutoAttachLocationRule;                                    // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAttachmentRule                                    AutoAttachRotationRule;                                    // 0x0549(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAttachmentRule                                    AutoAttachScaleRule;                                       // 0x054A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8ZF4[0x1];                                     // 0x054B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PreviewDetailLevel;                                        // 0x054C(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreviewLODDistance;                                        // 0x0550(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnablePreviewDetailLevel : 1;                             // 0x0554(0x0001) BIT_FIELD  (Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnablePreviewLODDistance : 1;                             // 0x0554(0x0001) BIT_FIELD  (Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NRZE[0x3B];                                    // 0x0555(0x003B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraComponent");
		return ptr;
	}


	void SetVariableVec4(const struct FName& InVariableName, const struct FVector4& InValue);
	void SetVariableVec3(const struct FName& InVariableName, const struct FVector& InValue);
	void SetVariableVec2(const struct FName& InVariableName, const struct FVector2D& InValue);
	void SetVariableQuat(const struct FName& InVariableName, const struct FQuat& InValue);
	void SetVariableObject(const struct FName& InVariableName, class UObject* Object);
	void SetVariableMaterial(const struct FName& InVariableName, class UMaterialInterface* Object);
	void SetVariableLinearColor(const struct FName& InVariableName, const struct FLinearColor& InValue);
	void SetVariableInt(const struct FName& InVariableName, int InValue);
	void SetVariableFloat(const struct FName& InVariableName, float InValue);
	void SetVariableBool(const struct FName& InVariableName, bool InValue);
	void SetVariableActor(const struct FName& InVariableName, class AActor* Actor);
	void SetSeekDelta(float InSeekDelta);
	void SetRenderingEnabled(bool bInRenderingEnabled);
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
	void SetPreviewDetailLevel(bool bEnablePreviewDetailLevel, int PreviewDetailLevel);
	void SetPaused(bool bInPaused);
	void SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue);
	void SetNiagaraVariableVec3(const struct FString& InVariableName, const struct FVector& InValue);
	void SetNiagaraVariableVec2(const struct FString& InVariableName, const struct FVector2D& InValue);
	void SetNiagaraVariableQuat(const struct FString& InVariableName, const struct FQuat& InValue);
	void SetNiagaraVariableObject(const struct FString& InVariableName, class UObject* Object);
	void SetNiagaraVariableLinearColor(const struct FString& InVariableName, const struct FLinearColor& InValue);
	void SetNiagaraVariableInt(const struct FString& InVariableName, int InValue);
	void SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue);
	void SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue);
	void SetNiagaraVariableActor(const struct FString& InVariableName, class AActor* Actor);
	void SetMaxSimTime(float InMaxTime);
	void SetForceSolo(bool bInForceSolo);
	void SetDesiredAge(float InDesiredAge);
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
	void SetAutoDestroy(bool bInAutoDestroy);
	void SetAsset(class UNiagaraSystem* InAsset);
	void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);
	void SeekToDesiredAge(float InDesiredAge);
	void ResetSystem();
	void ReinitializeSystem();
	bool IsPaused();
	float GetSeekDelta();
	TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName);
	TArray<float> GetNiagaraParticleValues_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName);
	TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(const struct FString& InEmitterName);
	float GetMaxSimTime();
	bool GetForceSolo();
	float GetDesiredAge();
	class UNiagaraDataInterface* GetDataInterface(const struct FString& Name);
	class UNiagaraSystem* GetAsset();
	ENiagaraAgeUpdateMode GetAgeUpdateMode();
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
	void AdvanceSimulation(int TickCount, float TickDeltaSeconds);
};

// Class Niagara.NiagaraActor
// 0x0008 (FullSize[0x0220] - InheritedSize[0x0218])
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                           NiagaraComponent;                                          // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraActor");
		return ptr;
	}


};

// Class Niagara.MovieSceneNiagaraTrack
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraTrack");
		return ptr;
	}


};

// Class Niagara.MovieSceneNiagaraParameterTrack
// 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	struct FNiagaraVariable                            Parameter;                                                 // 0x0068(0x0030) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraParameterTrack");
		return ptr;
	}


};

// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	int                                                ChannelsUsed;                                              // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_N5JR[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraVectorParameterTrack");
		return ptr;
	}


};

// Class Niagara.MovieSceneNiagaraSystemTrack
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemTrack");
		return ptr;
	}


};

// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemSpawnSection");
		return ptr;
	}


};

// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraIntegerParameterTrack");
		return ptr;
	}


};

// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraFloatParameterTrack");
		return ptr;
	}


};

// Class Niagara.MovieSceneNiagaraColorParameterTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraColorParameterTrack");
		return ptr;
	}


};

// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraBoolParameterTrack");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
