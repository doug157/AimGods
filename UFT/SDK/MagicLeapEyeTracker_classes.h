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

// Class MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMagicLeapEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary");
		return ptr;
	}


	bool STATIC_GetFixationComfort(struct FMagicLeapFixationComfort* FixationComfort);
	bool STATIC_GetEyeBlinkState(struct FMagicLeapEyeBlinkState* BlinkState);
	EMagicLeapEyeTrackingCalibrationStatus STATIC_GetCalibrationStatus();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
