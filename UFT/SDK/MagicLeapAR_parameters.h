#pragma once

// Name: AimGods, Version: Beta 2

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace
struct ULuminARFrameFunctionLibrary_LuminARLineTrace_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ScreenPosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FARTraceResult>                      OutHitResults;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState
struct ULuminARFrameFunctionLibrary_GetTrackingState_Params
{
	ELuminARTrackingState                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapAR.LuminARFrameFunctionLibrary.GetLightEstimation
struct ULuminARFrameFunctionLibrary_GetLightEstimation_Params
{
	struct FLuminARLightEstimate                       OutLightEstimate;                                          // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession
struct ULuminARSessionFunctionLibrary_StartLuminARSession_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class ULuminARSessionConfig*                       Configuration;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
