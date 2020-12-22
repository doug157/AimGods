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

// Class MagicLeapController.MagicLeapTouchpadGesturesComponent
// 0x0090 (FullSize[0x0140] - InheritedSize[0x00B0])
class UMagicLeapTouchpadGesturesComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_ECBH[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTouchpadGestureStart;                                    // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTouchpadGestureContinue;                                 // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTouchpadGestureEnd;                                      // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V9EP[0x58];                                    // 0x00E8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapController.MagicLeapTouchpadGesturesComponent");
		return ptr;
	}


};

// Class MagicLeapController.MagicLeapControllerFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMagicLeapControllerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapController.MagicLeapControllerFunctionLibrary");
		return ptr;
	}


	bool STATIC_SetMotionSourceForHand(EControllerHand Hand, const struct FName& MotionSource);
	bool STATIC_SetControllerTrackingMode(EMagicLeapControllerTrackingMode TrackingMode);
	bool STATIC_PlayLEDPattern(const struct FName& MotionSource, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool STATIC_PlayLEDEffect(const struct FName& MotionSource, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool STATIC_PlayHapticPattern(const struct FName& MotionSource, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity);
	bool STATIC_PlayControllerLEDEffect(EControllerHand Hand, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool STATIC_PlayControllerLED(EControllerHand Hand, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool STATIC_PlayControllerHapticFeedback(EControllerHand Hand, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity);
	int STATIC_MaxSupportedMagicLeapControllers();
	bool STATIC_IsMLControllerConnected(const struct FName& MotionSource);
	void STATIC_InvertControllerMapping();
	struct FName STATIC_GetMotionSourceForHand(EControllerHand Hand);
	EMagicLeapControllerType STATIC_GetMLControllerType(EControllerHand Hand);
	EControllerHand STATIC_GetHandForMotionSource(const struct FName& MotionSource);
	EMagicLeapControllerType STATIC_GetControllerType(const struct FName& MotionSource);
	EMagicLeapControllerTrackingMode STATIC_GetControllerTrackingMode();
	bool STATIC_GetControllerMapping(int ControllerIndex, EControllerHand* Hand);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
