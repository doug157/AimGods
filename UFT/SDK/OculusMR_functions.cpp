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
// Functions
//---------------------------------------------------------------------------

// Function OculusMR.OculusMRFunctionLibrary.SetTrackingReferenceComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusMRFunctionLibrary::STATIC_SetTrackingReferenceComponent(class USceneComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMRFunctionLibrary.SetTrackingReferenceComponent");

	UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusMR.OculusMRFunctionLibrary.IsMrcEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOculusMRFunctionLibrary::STATIC_IsMrcEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMRFunctionLibrary.IsMrcEnabled");

	UOculusMRFunctionLibrary_IsMrcEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusMR.OculusMRFunctionLibrary.IsMrcActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOculusMRFunctionLibrary::STATIC_IsMrcActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMRFunctionLibrary.IsMrcActive");

	UOculusMRFunctionLibrary_IsMrcActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusMR.OculusMRFunctionLibrary.GetTrackingReferenceComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USceneComponent* UOculusMRFunctionLibrary::STATIC_GetTrackingReferenceComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMRFunctionLibrary.GetTrackingReferenceComponent");

	UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusMR.OculusMRFunctionLibrary.GetOculusMRSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOculusMR_Settings*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOculusMR_Settings* UOculusMRFunctionLibrary::STATIC_GetOculusMRSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMRFunctionLibrary.GetOculusMRSettings");

	UOculusMRFunctionLibrary_GetOculusMRSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusMR.OculusMR_Settings.SetUseDynamicLighting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Val                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusMR_Settings::SetUseDynamicLighting(bool Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetUseDynamicLighting");

	UOculusMR_Settings_SetUseDynamicLighting_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusMR.OculusMR_Settings.SetIsCasting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Val                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusMR_Settings::SetIsCasting(bool Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetIsCasting");

	UOculusMR_Settings_SetIsCasting_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusMR.OculusMR_Settings.SetDepthQuality
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EOculusMR_DepthQuality         Val                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusMR_Settings::SetDepthQuality(EOculusMR_DepthQuality Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetDepthQuality");

	UOculusMR_Settings_SetDepthQuality_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusMR.OculusMR_Settings.SetCompositionMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EOculusMR_CompositionMethod    Val                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusMR_Settings::SetCompositionMethod(EOculusMR_CompositionMethod Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetCompositionMethod");

	UOculusMR_Settings_SetCompositionMethod_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusMR.OculusMR_Settings.SetCapturingCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EOculusMR_CameraDeviceEnum     Val                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusMR_Settings::SetCapturingCamera(EOculusMR_CameraDeviceEnum Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetCapturingCamera");

	UOculusMR_Settings_SetCapturingCamera_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusMR.OculusMR_Settings.SaveToIni
// (Final, Native, Public, BlueprintCallable, Const)
void UOculusMR_Settings::SaveToIni()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SaveToIni");

	UOculusMR_Settings_SaveToIni_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusMR.OculusMR_Settings.LoadFromIni
// (Final, Native, Public, BlueprintCallable)
void UOculusMR_Settings::LoadFromIni()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.LoadFromIni");

	UOculusMR_Settings_LoadFromIni_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusMR.OculusMR_Settings.GetUseDynamicLighting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOculusMR_Settings::GetUseDynamicLighting()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetUseDynamicLighting");

	UOculusMR_Settings_GetUseDynamicLighting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusMR.OculusMR_Settings.GetIsCasting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOculusMR_Settings::GetIsCasting()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetIsCasting");

	UOculusMR_Settings_GetIsCasting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusMR.OculusMR_Settings.GetDepthQuality
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EOculusMR_DepthQuality         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
EOculusMR_DepthQuality UOculusMR_Settings::GetDepthQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetDepthQuality");

	UOculusMR_Settings_GetDepthQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusMR.OculusMR_Settings.GetCompositionMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EOculusMR_CompositionMethod    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
EOculusMR_CompositionMethod UOculusMR_Settings::GetCompositionMethod()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetCompositionMethod");

	UOculusMR_Settings_GetCompositionMethod_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusMR.OculusMR_Settings.GetCapturingCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EOculusMR_CameraDeviceEnum     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
EOculusMR_CameraDeviceEnum UOculusMR_Settings::GetCapturingCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetCapturingCamera");

	UOculusMR_Settings_GetCapturingCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UOculusMR_Settings::GetBindToTrackedCameraIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex");

	UOculusMR_Settings_GetBindToTrackedCameraIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InTrackedCameraIndex           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusMR_Settings::BindToTrackedCameraIndexIfAvailable(int InTrackedCameraIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable");

	UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Params params;
	params.InTrackedCameraIndex = InTrackedCameraIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FOculusMR_PlaneMeshTriangle> Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOculusMR_PlaneMeshComponent::SetCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles");

	UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Params params;
	params.Triangles = Triangles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles
// (Final, Native, Public, BlueprintCallable)
void UOculusMR_PlaneMeshComponent::ClearCustomMeshTriangles()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles");

	UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FOculusMR_PlaneMeshTriangle> Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UOculusMR_PlaneMeshComponent::AddCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles");

	UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Params params;
	params.Triangles = Triangles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
