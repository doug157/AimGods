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

// Enum MagicLeapAR.ELuminARTrackingState
enum class ELuminARTrackingState : uint8_t
{
	Tracking                       = 0,
	NotTracking                    = 1,
	StoppedTracking                = 2,
	MAX                            = 3,

};

// Enum MagicLeapAR.ELuminARFunctionStatus
enum class ELuminARFunctionStatus : uint8_t
{
	Success                        = 0,
	Fatal                          = 1,
	SessionPaused                  = 2,
	NotTracking                    = 3,
	ResourceExhausted              = 4,
	NotAvailable                   = 5,
	InvalidType                    = 6,
	Unknown                        = 7,
	MAX                            = 8,

};

// Enum MagicLeapAR.ELuminARAvailability
enum class ELuminARAvailability : uint8_t
{
	UnknownError                   = 0,
	SupportedInstalled             = 1,
	MAX                            = 2,

};

// Enum MagicLeapAR.ELuminARLineTraceChannel
enum class ELuminARLineTraceChannel : uint8_t
{
	None                           = 0,
	FeaturePoint                   = 1,
	InfinitePlane                  = 2,
	PlaneUsingExtent               = 3,
	PlaneUsingBoundaryPolygon      = 4,
	FeaturePointWithSurfaceNormal  = 5,
	MAX                            = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapAR.LuminARLightEstimate
// 0x0014
struct FLuminARLightEstimate
{
	bool                                               bIsValid;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UH1Y[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PixelIntensity;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RGBScaleFactor;                                            // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
