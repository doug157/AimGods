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

// Function OculusHMD.OculusFunctionLibrary.ShowLoadingSplashScreen
// (Final, Native, Static, Public, BlueprintCallable)
void UOculusFunctionLibrary::STATIC_ShowLoadingSplashScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.ShowLoadingSplashScreen");

	UOculusFunctionLibrary_ShowLoadingSplashScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusHMD.OculusFunctionLibrary.ShowLoadingIcon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_ShowLoadingIcon(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.ShowLoadingIcon");

	UOculusFunctionLibrary_ShowLoadingIcon_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           recenterMode                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_SetReorientHMDOnControllerRecenter(bool recenterMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter");

	UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Params params;
	params.recenterMode = recenterMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 PosScale3D                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_SetPositionScale3D(const struct FVector& PosScale3D)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D");

	UOculusFunctionLibrary_SetPositionScale3D_Params params;
	params.PosScale3D = PosScale3D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusHMD.OculusFunctionLibrary.SetLoadingSplashParams
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 TexturePath                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 DistanceInMeters               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               SizeInMeters                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 RotationAxis                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RotationDeltaInDeg             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_SetLoadingSplashParams(const struct FString& TexturePath, const struct FVector& DistanceInMeters, const struct FVector2D& SizeInMeters, const struct FVector& RotationAxis, float RotationDeltaInDeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetLoadingSplashParams");

	UOculusFunctionLibrary_SetLoadingSplashParams_Params params;
	params.TexturePath = TexturePath;
	params.DistanceInMeters = DistanceInMeters;
	params.SizeInMeters = SizeInMeters;
	params.RotationAxis = RotationAxis;
	params.RotationDeltaInDeg = RotationDeltaInDeg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           GuardianVisible                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_SetGuardianVisibility(bool GuardianVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility");

	UOculusFunctionLibrary_SetGuardianVisibility_Params params;
	params.GuardianVisible = GuardianVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusHMD.OculusFunctionLibrary.SetFixedFoveatedRenderingLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EFixedFoveatedRenderingLevel   Level                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_SetFixedFoveatedRenderingLevel(EFixedFoveatedRenderingLevel Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetFixedFoveatedRenderingLevel");

	UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          RequestedFrequency             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_SetDisplayFrequency(float RequestedFrequency)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency");

	UOculusFunctionLibrary_SetDisplayFrequency_Params params;
	params.RequestedFrequency = RequestedFrequency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            CPULevel                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GPULevel                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_SetCPUAndGPULevels(int CPULevel, int GPULevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels");

	UOculusFunctionLibrary_SetCPUAndGPULevels_Params params;
	params.CPULevel = CPULevel;
	params.GPULevel = GPULevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusHMD.OculusFunctionLibrary.SetColorScaleAndOffset
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            ColorScale                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ColorOffset                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bApplyToAllLayers              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_SetColorScaleAndOffset(const struct FLinearColor& ColorScale, const struct FLinearColor& ColorOffset, bool bApplyToAllLayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetColorScaleAndOffset");

	UOculusFunctionLibrary_SetColorScaleAndOffset_Params params;
	params.ColorScale = ColorScale;
	params.ColorOffset = ColorOffset;
	params.bApplyToAllLayers = bApplyToAllLayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                BaseRot                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 PosOffset                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EOrientPositionSelector> Options                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_SetBaseRotationAndPositionOffset(const struct FRotator& BaseRot, const struct FVector& PosOffset, TEnumAsByte<EOrientPositionSelector> Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset");

	UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Params params;
	params.BaseRot = BaseRot;
	params.PosOffset = PosOffset;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 BaseOffsetInMeters             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EOrientPositionSelector> Options                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_SetBaseRotationAndBaseOffsetInMeters(const struct FRotator& Rotation, const struct FVector& BaseOffsetInMeters, TEnumAsByte<EOrientPositionSelector> Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters");

	UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Params params;
	params.Rotation = Rotation;
	params.BaseOffsetInMeters = BaseOffsetInMeters;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusHMD.OculusFunctionLibrary.IsLoadingIconEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOculusFunctionLibrary::STATIC_IsLoadingIconEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsLoadingIconEnabled");

	UOculusFunctionLibrary_IsLoadingIconEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOculusFunctionLibrary::STATIC_IsGuardianDisplayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed");

	UOculusFunctionLibrary_IsGuardianDisplayed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.IsGuardianConfigured
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOculusFunctionLibrary::STATIC_IsGuardianConfigured()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsGuardianConfigured");

	UOculusFunctionLibrary_IsGuardianConfigured_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ETrackedDeviceType             DeviceType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOculusFunctionLibrary::STATIC_IsDeviceTracked(ETrackedDeviceType DeviceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked");

	UOculusFunctionLibrary_IsDeviceTracked_Params params;
	params.DeviceType = DeviceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.IsAutoLoadingSplashScreenEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOculusFunctionLibrary::STATIC_IsAutoLoadingSplashScreenEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsAutoLoadingSplashScreenEnabled");

	UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.HideLoadingSplashScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bClear                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_HideLoadingSplashScreen(bool bClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.HideLoadingSplashScreen");

	UOculusFunctionLibrary_HideLoadingSplashScreen_Params params;
	params.bClear = bClear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusHMD.OculusFunctionLibrary.HideLoadingIcon
// (Final, Native, Static, Public, BlueprintCallable)
void UOculusFunctionLibrary::STATIC_HideLoadingIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.HideLoadingIcon");

	UOculusFunctionLibrary_HideLoadingIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOculusFunctionLibrary::STATIC_HasSystemOverlayPresent()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent");

	UOculusFunctionLibrary_HasSystemOverlayPresent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.HasInputFocus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOculusFunctionLibrary::STATIC_HasInputFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.HasInputFocus");

	UOculusFunctionLibrary_HasInputFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetUserProfile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHmdUserProfile         Profile                        (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOculusFunctionLibrary::STATIC_GetUserProfile(struct FHmdUserProfile* Profile)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetUserProfile");

	UOculusFunctionLibrary_GetUserProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Profile != nullptr)
		*Profile = params.Profile;


	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetRawSensorData
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 AngularAcceleration            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 LinearAcceleration             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 AngularVelocity                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 LinearVelocity                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TimeInSeconds                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ETrackedDeviceType             DeviceType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_GetRawSensorData(struct FVector* AngularAcceleration, struct FVector* LinearAcceleration, struct FVector* AngularVelocity, struct FVector* LinearVelocity, float* TimeInSeconds, ETrackedDeviceType DeviceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetRawSensorData");

	UOculusFunctionLibrary_GetRawSensorData_Params params;
	params.DeviceType = DeviceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AngularAcceleration != nullptr)
		*AngularAcceleration = params.AngularAcceleration;
	if (LinearAcceleration != nullptr)
		*LinearAcceleration = params.LinearAcceleration;
	if (AngularVelocity != nullptr)
		*AngularVelocity = params.AngularVelocity;
	if (LinearVelocity != nullptr)
		*LinearVelocity = params.LinearVelocity;
	if (TimeInSeconds != nullptr)
		*TimeInSeconds = params.TimeInSeconds;

}


// Function OculusHMD.OculusFunctionLibrary.GetPose
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                DeviceRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 DevicePosition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 NeckPosition                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseOrienationForPlayerCamera  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsePositionForPlayerCamera    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 PositionScale                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_GetPose(struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetPose");

	UOculusFunctionLibrary_GetPose_Params params;
	params.bUseOrienationForPlayerCamera = bUseOrienationForPlayerCamera;
	params.bUsePositionForPlayerCamera = bUsePositionForPlayerCamera;
	params.PositionScale = PositionScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DeviceRotation != nullptr)
		*DeviceRotation = params.DeviceRotation;
	if (DevicePosition != nullptr)
		*DevicePosition = params.DevicePosition;
	if (NeckPosition != nullptr)
		*NeckPosition = params.NeckPosition;

}


// Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EBoundaryType                  BoundaryType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuardianTestResult     ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FGuardianTestResult UOculusFunctionLibrary::STATIC_GetPointGuardianIntersection(const struct FVector& Point, EBoundaryType BoundaryType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection");

	UOculusFunctionLibrary_GetPointGuardianIntersection_Params params;
	params.Point = Point;
	params.BoundaryType = BoundaryType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UOculusFunctionLibrary::STATIC_GetPlayAreaTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform");

	UOculusFunctionLibrary_GetPlayAreaTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ETrackedDeviceType             DeviceType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EBoundaryType                  BoundaryType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuardianTestResult     ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FGuardianTestResult UOculusFunctionLibrary::STATIC_GetNodeGuardianIntersection(ETrackedDeviceType DeviceType, EBoundaryType BoundaryType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection");

	UOculusFunctionLibrary_GetNodeGuardianIntersection_Params params;
	params.DeviceType = DeviceType;
	params.BoundaryType = BoundaryType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetLoadingSplashParams
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 TexturePath                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 DistanceInMeters               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               SizeInMeters                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 RotationAxis                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RotationDeltaInDeg             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_GetLoadingSplashParams(struct FString* TexturePath, struct FVector* DistanceInMeters, struct FVector2D* SizeInMeters, struct FVector* RotationAxis, float* RotationDeltaInDeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetLoadingSplashParams");

	UOculusFunctionLibrary_GetLoadingSplashParams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TexturePath != nullptr)
		*TexturePath = params.TexturePath;
	if (DistanceInMeters != nullptr)
		*DistanceInMeters = params.DistanceInMeters;
	if (SizeInMeters != nullptr)
		*SizeInMeters = params.SizeInMeters;
	if (RotationAxis != nullptr)
		*RotationAxis = params.RotationAxis;
	if (RotationDeltaInDeg != nullptr)
		*RotationDeltaInDeg = params.RotationDeltaInDeg;

}


// Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EBoundaryType                  BoundaryType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UsePawnSpace                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector> UOculusFunctionLibrary::STATIC_GetGuardianPoints(EBoundaryType BoundaryType, bool UsePawnSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints");

	UOculusFunctionLibrary_GetGuardianPoints_Params params;
	params.BoundaryType = BoundaryType;
	params.UsePawnSpace = UsePawnSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// EBoundaryType                  BoundaryType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UOculusFunctionLibrary::STATIC_GetGuardianDimensions(EBoundaryType BoundaryType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions");

	UOculusFunctionLibrary_GetGuardianDimensions_Params params;
	params.BoundaryType = BoundaryType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           IsGPUAvailable                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          GPUUtilization                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_GetGPUUtilization(bool* IsGPUAvailable, float* GPUUtilization)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization");

	UOculusFunctionLibrary_GetGPUUtilization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsGPUAvailable != nullptr)
		*IsGPUAvailable = params.IsGPUAvailable;
	if (GPUUtilization != nullptr)
		*GPUUtilization = params.GPUUtilization;

}


// Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UOculusFunctionLibrary::STATIC_GetGPUFrameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime");

	UOculusFunctionLibrary_GetGPUFrameTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetFixedFoveatedRenderingLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EFixedFoveatedRenderingLevel   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
EFixedFoveatedRenderingLevel UOculusFunctionLibrary::STATIC_GetFixedFoveatedRenderingLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetFixedFoveatedRenderingLevel");

	UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetDeviceName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UOculusFunctionLibrary::STATIC_GetDeviceName()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetDeviceName");

	UOculusFunctionLibrary_GetDeviceName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UOculusFunctionLibrary::STATIC_GetCurrentDisplayFrequency()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency");

	UOculusFunctionLibrary_GetCurrentDisplayFrequency_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                OutRot                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 OutPosOffset                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset");

	UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutRot != nullptr)
		*OutRot = params.OutRot;
	if (OutPosOffset != nullptr)
		*OutPosOffset = params.OutPosOffset;

}


// Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                OutRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 OutBaseOffsetInMeters          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters");

	UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
	if (OutBaseOffsetInMeters != nullptr)
		*OutBaseOffsetInMeters = params.OutBaseOffsetInMeters;

}


// Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<float> UOculusFunctionLibrary::STATIC_GetAvailableDisplayFrequencies()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies");

	UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bPositionTracking              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_EnablePositionTracking(bool bPositionTracking)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking");

	UOculusFunctionLibrary_EnablePositionTracking_Params params;
	params.bPositionTracking = bPositionTracking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bOrientationTracking           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_EnableOrientationTracking(bool bOrientationTracking)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking");

	UOculusFunctionLibrary_EnableOrientationTracking_Params params;
	params.bOrientationTracking = bOrientationTracking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusHMD.OculusFunctionLibrary.EnableAutoLoadingSplashScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bAutoShowEnabled               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_EnableAutoLoadingSplashScreen(bool bAutoShowEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.EnableAutoLoadingSplashScreen");

	UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Params params;
	params.bAutoShowEnabled = bAutoShowEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens
// (Final, Native, Static, Public, BlueprintCallable)
void UOculusFunctionLibrary::STATIC_ClearLoadingSplashScreens()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens");

	UOculusFunctionLibrary_ClearLoadingSplashScreens_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 TranslationInMeters            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               SizeInMeters                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                DeltaRotation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bClearBeforeAdd                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOculusFunctionLibrary::STATIC_AddLoadingSplashScreen(class UTexture2D* Texture, const struct FVector& TranslationInMeters, const struct FRotator& Rotation, const struct FVector2D& SizeInMeters, const struct FRotator& DeltaRotation, bool bClearBeforeAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen");

	UOculusFunctionLibrary_AddLoadingSplashScreen_Params params;
	params.Texture = Texture;
	params.TranslationInMeters = TranslationInMeters;
	params.Rotation = Rotation;
	params.SizeInMeters = SizeInMeters;
	params.DeltaRotation = DeltaRotation;
	params.bClearBeforeAdd = bClearBeforeAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
