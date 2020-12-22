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

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags
struct UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Params
{
	TArray<EMagicLeapPlaneQueryFlags>                  InPriority;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<EMagicLeapPlaneQueryFlags>                  InFlagsToReorder;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<EMagicLeapPlaneQueryFlags>                  OutReorderedFlags;                                         // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery
struct UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Params
{
	TArray<EMagicLeapPlaneQueryFlags>                  InQueryFlags;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<EMagicLeapPlaneQueryFlags>                  InResultFlags;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<EMagicLeapPlaneQueryFlags>                  OutFlags;                                                  // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync
struct UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Params
{
	struct FMagicLeapPlanesQuery                       Query;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ResultDelegate;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid
struct UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale
struct UMagicLeapPlanesFunctionLibrary_GetContentScale_Params
{
	class AActor*                                      ContentActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapPlaneResult                       PlaneResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker
struct UMagicLeapPlanesFunctionLibrary_DestroyTracker_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker
struct UMagicLeapPlanesFunctionLibrary_CreateTracker_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
struct UMagicLeapPlanesComponent_RequestPlanesAsync_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
