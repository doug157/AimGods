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

// Enum LuminRuntimeSettings.ELuminPrivilege
enum class ELuminPrivilege : uint8_t
{
	Invalid                        = 0,
	BatteryInfo                    = 1,
	CameraCapture                  = 2,
	WorldReconstruction            = 3,
	InAppPurchase                  = 4,
	AudioCaptureMic                = 5,
	DrmCertificates                = 6,
	Occlusion                      = 7,
	LowLatencyLightwear            = 8,
	Internet                       = 9,
	IdentityRead                   = 10,
	BackgroundDownload             = 11,
	BackgroundUpload               = 12,
	MediaDrm                       = 13,
	Media                          = 14,
	MediaMetadata                  = 15,
	PowerInfo                      = 16,
	LocalAreaNetwork               = 17,
	VoiceInput                     = 18,
	Documents                      = 19,
	ConnectBackgroundMusicService  = 20,
	RegisterBackgroundMusicService = 21,
	PwFoundObjRead                 = 22,
	NormalNotificationsUsage       = 23,
	MusicService                   = 24,
	ControllerPose                 = 25,
	ScreensProvider                = 26,
	GesturesSubscribe              = 27,
	GesturesConfig                 = 28,
	AddressBookRead                = 29,
	AddressBookWrite               = 30,
	CoarseLocation                 = 31,
	HandMesh                       = 32,
	WifiStatusRead                 = 33,
	MAX                            = 34,

};

// Enum LuminRuntimeSettings.ELuminFrameTimingHint
enum class ELuminFrameTimingHint : uint8_t
{
	Unspecified                    = 0,
	Maximum                        = 1,
	FPS                            = 2,
	FPS01                          = 3,
	MAX                            = 4,

};

// Enum LuminRuntimeSettings.ELuminComponentType
enum class ELuminComponentType : uint8_t
{
	Universe                       = 0,
	Fullscreen                     = 1,
	SearchProvider                 = 2,
	MusicService                   = 3,
	Screens                        = 4,
	ScreensImmersive               = 5,
	Console                        = 6,
	SystemUI                       = 7,
	MAX                            = 8,

};

// Enum LuminRuntimeSettings.ELuminComponentSubElementType
enum class ELuminComponentSubElementType : uint8_t
{
	FileExtension                  = 0,
	MimeType                       = 1,
	Mode                           = 2,
	MusicAttribute                 = 3,
	Schema                         = 4,
	MAX                            = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LuminRuntimeSettings.LuminComponentElement
// 0x0048
struct FLuminComponentElement
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VisibleName;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExecutableName;                                            // 0x0020(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELuminComponentType                                ComponentType;                                             // 0x0030(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YPOV[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FLuminComponentSubElement>           ExtraComponentSubElements;                                 // 0x0038(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)

};
// ScriptStruct LuminRuntimeSettings.LuminComponentSubElement
// 0x0018
struct FLuminComponentSubElement
{
	ELuminComponentSubElementType                      ElementType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HAIL[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Value;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
