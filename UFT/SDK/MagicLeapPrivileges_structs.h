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

// Enum MagicLeapPrivileges.EMagicLeapPrivilege
enum class EMagicLeapPrivilege : uint8_t
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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
