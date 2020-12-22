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

// Function OculusMR.OculusMRFunctionLibrary.SetTrackingReferenceComponent
struct UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Params
{
	class USceneComponent*                             Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMRFunctionLibrary.IsMrcEnabled
struct UOculusMRFunctionLibrary_IsMrcEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMRFunctionLibrary.IsMrcActive
struct UOculusMRFunctionLibrary_IsMrcActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMRFunctionLibrary.GetTrackingReferenceComponent
struct UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMRFunctionLibrary.GetOculusMRSettings
struct UOculusMRFunctionLibrary_GetOculusMRSettings_Params
{
	class UOculusMR_Settings*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.SetUseDynamicLighting
struct UOculusMR_Settings_SetUseDynamicLighting_Params
{
	bool                                               Val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.SetIsCasting
struct UOculusMR_Settings_SetIsCasting_Params
{
	bool                                               Val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.SetDepthQuality
struct UOculusMR_Settings_SetDepthQuality_Params
{
	EOculusMR_DepthQuality                             Val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.SetCompositionMethod
struct UOculusMR_Settings_SetCompositionMethod_Params
{
	EOculusMR_CompositionMethod                        Val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.SetCapturingCamera
struct UOculusMR_Settings_SetCapturingCamera_Params
{
	EOculusMR_CameraDeviceEnum                         Val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.SaveToIni
struct UOculusMR_Settings_SaveToIni_Params
{
};

// Function OculusMR.OculusMR_Settings.LoadFromIni
struct UOculusMR_Settings_LoadFromIni_Params
{
};

// Function OculusMR.OculusMR_Settings.GetUseDynamicLighting
struct UOculusMR_Settings_GetUseDynamicLighting_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.GetIsCasting
struct UOculusMR_Settings_GetIsCasting_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.GetDepthQuality
struct UOculusMR_Settings_GetDepthQuality_Params
{
	EOculusMR_DepthQuality                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.GetCompositionMethod
struct UOculusMR_Settings_GetCompositionMethod_Params
{
	EOculusMR_CompositionMethod                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.GetCapturingCamera
struct UOculusMR_Settings_GetCapturingCamera_Params
{
	EOculusMR_CameraDeviceEnum                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex
struct UOculusMR_Settings_GetBindToTrackedCameraIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable
struct UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Params
{
	int                                                InTrackedCameraIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles
struct UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Params
{
	TArray<struct FOculusMR_PlaneMeshTriangle>         Triangles;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles
struct UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Params
{
};

// Function OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles
struct UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Params
{
	TArray<struct FOculusMR_PlaneMeshTriangle>         Triangles;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
