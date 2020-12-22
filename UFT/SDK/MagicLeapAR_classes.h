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

// Class MagicLeapAR.LuminARSessionConfig
// 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
class ULuminARSessionConfig : public UARSessionConfig
{
public:
	int                                                MaxPlaneQueryResults;                                      // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinPlaneArea;                                              // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bArbitraryOrientationPlaneDetection;                       // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HOSA[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     PlaneSearchExtents;                                        // 0x00B4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<EMagicLeapPlaneQueryFlags>                  PlaneQueryFlags;                                           // 0x00C0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bDiscardZeroExtentPlanes;                                  // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VSWI[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapAR.LuminARSessionConfig");
		return ptr;
	}


};

// Class MagicLeapAR.LuminARFrameFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapAR.LuminARFrameFunctionLibrary");
		return ptr;
	}


	bool STATIC_LuminARLineTrace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, TArray<struct FARTraceResult>* OutHitResults);
	ELuminARTrackingState STATIC_GetTrackingState();
	void STATIC_GetLightEstimation(struct FLuminARLightEstimate* OutLightEstimate);
};

// Class MagicLeapAR.LuminARSessionFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapAR.LuminARSessionFunctionLibrary");
		return ptr;
	}


	void STATIC_StartLuminARSession(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ULuminARSessionConfig* Configuration);
};

// Class MagicLeapAR.LuminARUObjectManager
// 0x0100 (FullSize[0x0128] - InheritedSize[0x0028])
class ULuminARUObjectManager : public UObject
{
public:
	TArray<class UARPin*>                              AllAnchors;                                                // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D8HS[0xF0];                                    // 0x0038(0x00F0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapAR.LuminARUObjectManager");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
