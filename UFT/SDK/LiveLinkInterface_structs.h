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
// Enums
//---------------------------------------------------------------------------

// Enum LiveLinkInterface.ELiveLinkCameraProjectionMode
enum class ELiveLinkCameraProjectionMode : uint8_t
{
	Perspective                    = 0,
	Orthographic                   = 1,
	MAX                            = 2,

};

// Enum LiveLinkInterface.ELiveLinkSourceMode
enum class ELiveLinkSourceMode : uint8_t
{
	Latest                         = 0,
	EngineTime                     = 1,
	Timecode                       = 2,
	MAX                            = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveLinkInterface.SubjectMetadata
// 0x0070
struct FSubjectMetadata
{
	TMap<struct FName, struct FString>                 StringMetadata;                                            // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTimecode                                   SceneTimecode;                                             // 0x0050(0x0014) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                                  SceneFramerate;                                            // 0x0064(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JML3[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct LiveLinkInterface.CachedSubjectFrame
// 0x0140
struct FCachedSubjectFrame
{
	unsigned char                                      UnknownData_CGRU[0x140];                                   // 0x0000(0x0140) MISSED OFFSET (PADDING)

};
// ScriptStruct LiveLinkInterface.LiveLinkTransform
// 0x0020
struct FLiveLinkTransform
{
	unsigned char                                      UnknownData_NOBD[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};
// ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
// 0x0008
struct FLiveLinkBaseBlueprintData
{
	unsigned char                                      UnknownData_87TH[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};
// ScriptStruct LiveLinkInterface.SubjectFrameHandle
// 0x0010 (0x0018 - 0x0008)
struct FSubjectFrameHandle : public FLiveLinkBaseBlueprintData
{
	unsigned char                                      UnknownData_6VS9[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};
// ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
// 0x0018
struct FLiveLinkSourceHandle
{
	unsigned char                                      UnknownData_QEPT[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};
// ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
// 0x0030
struct FLiveLinkSourceBufferManagementSettings
{
	float                                              ValidEngineTime;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EngineTimeOffset;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                                  TimecodeFrameRate;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGenerateSubFrame;                                         // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EJ16[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFrameRate                                  SourceTimecodeFrameRate;                                   // 0x0014(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ValidTimecodeFrame;                                        // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimecodeFrameOffset;                                       // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LatestOffset;                                              // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxNumberOfFrameToBuffered;                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKeepAtLeastOneFrame;                                      // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PKZA[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
// 0x0010
struct FLiveLinkWorldTime
{
	double                                             Time;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                             Offset;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};
// ScriptStruct LiveLinkInterface.LiveLinkMetaData
// 0x0060
struct FLiveLinkMetaData
{
	TMap<struct FName, struct FString>                 StringMetadata;                                            // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                         SceneTime;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkFrameData
// 0x0090
struct FLiveLinkFrameData
{
	TArray<struct FTransform>                          Transforms;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLiveLinkCurveElement>               CurveElements;                                             // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLiveLinkWorldTime                          WorldTime;                                                 // 0x0020(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	struct FLiveLinkMetaData                           MetaData;                                                  // 0x0030(0x0060) (NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
// 0x0010
struct FLiveLinkBaseStaticData
{
	TArray<struct FName>                               PropertyNames;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
// 0x0000 (0x0010 - 0x0010)
struct FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
{

};
// ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
// 0x0080
struct FLiveLinkBaseFrameData
{
	struct FLiveLinkWorldTime                          WorldTime;                                                 // 0x0000(0x0010) (Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FLiveLinkMetaData                           MetaData;                                                  // 0x0010(0x0060) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<float>                                      PropertyValues;                                            // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
// 0x0030 (0x00B0 - 0x0080)
struct FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData
{
	struct FTransform                                  Transform;                                                 // 0x0080(0x0030) (Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
// 0x00C8 (0x00D0 - 0x0008)
struct FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData
{
	struct FLiveLinkTransformStaticData                StaticData;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3A1Q[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLiveLinkTransformFrameData                 FrameData;                                                 // 0x0020(0x00B0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
// 0x0008
struct FLiveLinkSubjectName
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
// 0x0010
struct FLiveLinkSourceDebugInfo
{
	struct FLiveLinkSubjectName                        SubjectName;                                               // 0x0000(0x0008) (Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SnapshotIndex;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberOfBufferAtSnapshot;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
// 0x000C
struct FLiveLinkTimeSynchronizationSettings
{
	struct FFrameRate                                  FrameRate;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                FrameOffset;                                               // 0x0008(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
// 0x0008
struct FLiveLinkInterpolationSettings
{
	bool                                               bUseInterpolation;                                         // 0x0000(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UBMA[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InterpolationOffset;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkTime
// 0x0018
struct FLiveLinkTime
{
	double                                             WorldTime;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                         SceneTime;                                                 // 0x0008(0x0010) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkFrameRate
// 0x0000 (0x0008 - 0x0008)
struct FLiveLinkFrameRate : public FFrameRate
{

};
// ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
// 0x0010
struct FLiveLinkTimeCode_Base_DEPRECATED
{
	int                                                Seconds;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Frames;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveLinkFrameRate                          FrameRate;                                                 // 0x0008(0x0008) (NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkTimeCode
// 0x0000 (0x0010 - 0x0010)
struct FLiveLinkTimeCode : public FLiveLinkTimeCode_Base_DEPRECATED
{

};
// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
// 0x000C
struct FLiveLinkCurveElement
{
	struct FName                                       CurveName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurveValue;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
// 0x0010 (0x0020 - 0x0010)
struct FLiveLinkLightStaticData : public FLiveLinkTransformStaticData
{
	bool                                               bIsTemperatureSupported;                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsIntensitySupported;                                     // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLightColorSupported;                                    // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsInnerConeAngleSupported;                                // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOuterConeAngleSupported;                                // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAttenuationRadiusSupported;                             // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsSourceLenghtSupported;                                  // 0x0016(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsSourceRadiusSupported;                                  // 0x0017(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsSoftSourceRadiusSupported;                              // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6LTL[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
// 0x0030 (0x00E0 - 0x00B0)
struct FLiveLinkLightFrameData : public FLiveLinkTransformFrameData
{
	float                                              Temperature;                                               // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Intensity;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      LightColor;                                                // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InnerConeAngle;                                            // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OuterConeAngle;                                            // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttenuationRadius;                                         // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SourceRadius;                                              // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SoftSourceRadius;                                          // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SourceLength;                                              // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KXPV[0xC];                                     // 0x00D4(0x000C) MISSED OFFSET (PADDING)

};
// ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
// 0x0108 (0x0110 - 0x0008)
struct FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData
{
	struct FLiveLinkLightStaticData                    StaticData;                                                // 0x0008(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PAFN[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLiveLinkLightFrameData                     FrameData;                                                 // 0x0030(0x00E0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
// 0x0050
struct FLiveLinkCurveConversionSettings
{
	TMap<struct FString, struct FSoftObjectPath>       CurveConversionAssetMap;                                   // 0x0000(0x0050) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
// 0x0010
struct FLiveLinkSubjectRepresentation
{
	struct FLiveLinkSubjectName                        Subject;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Role;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
// 0x0020
struct FLiveLinkRefSkeleton
{
	TArray<struct FName>                               BoneNames;                                                 // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        BoneParents;                                               // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
// 0x0018
struct FLiveLinkSourcePreset
{
	struct FGuid                                       Guid;                                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkSourceSettings*                     Settings;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
// 0x0018
struct FLiveLinkSubjectKey
{
	struct FGuid                                       Source;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveLinkSubjectName                        SubjectName;                                               // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
// 0x0038
struct FLiveLinkSubjectPreset
{
	struct FLiveLinkSubjectKey                         Key;                                                       // 0x0000(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      Role;                                                      // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkSubjectSettings*                    Settings;                                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkVirtualSubject*                     VirtualSubject;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SXVC[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
// 0x0010 (0x0020 - 0x0010)
struct FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData
{
	bool                                               bIsFieldOfViewSupported;                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAspectRatioSupported;                                   // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsFocalLengthSupported;                                   // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsProjectionModeSupported;                                // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmBackWidth;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmBackHeight;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsApertureSupported;                                      // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsFocusDistanceSupported;                                 // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MVYG[0x2];                                     // 0x001E(0x0002) MISSED OFFSET (PADDING)

};
// ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
// 0x0020 (0x00D0 - 0x00B0)
struct FLiveLinkCameraFrameData : public FLiveLinkTransformFrameData
{
	float                                              FieldOfView;                                               // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AspectRatio;                                               // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FocalLength;                                               // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Aperture;                                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FocusDistance;                                             // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELiveLinkCameraProjectionMode                      ProjectionMode;                                            // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_418W[0xB];                                     // 0x00C5(0x000B) MISSED OFFSET (PADDING)

};
// ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
// 0x00F8 (0x0100 - 0x0008)
struct FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData
{
	struct FLiveLinkCameraStaticData                   StaticData;                                                // 0x0008(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VTDQ[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLiveLinkCameraFrameData                    FrameData;                                                 // 0x0030(0x00D0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
// 0x0090 (0x0098 - 0x0008)
struct FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData
{
	struct FLiveLinkBaseStaticData                     StaticData;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLiveLinkBaseFrameData                      FrameData;                                                 // 0x0018(0x0080) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
// 0x0020 (0x0030 - 0x0010)
struct FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData
{
	TArray<struct FName>                               BoneNames;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        BoneParents;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
// 0x0010 (0x0090 - 0x0080)
struct FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData
{
	TArray<struct FTransform>                          Transforms;                                                // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
