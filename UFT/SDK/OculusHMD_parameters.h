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

// Function OculusHMD.OculusFunctionLibrary.ShowLoadingSplashScreen
struct UOculusFunctionLibrary_ShowLoadingSplashScreen_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.ShowLoadingIcon
struct UOculusFunctionLibrary_ShowLoadingIcon_Params
{
	class UTexture2D*                                  Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter
struct UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Params
{
	bool                                               recenterMode;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D
struct UOculusFunctionLibrary_SetPositionScale3D_Params
{
	struct FVector                                     PosScale3D;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.SetLoadingSplashParams
struct UOculusFunctionLibrary_SetLoadingSplashParams_Params
{
	struct FString                                     TexturePath;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DistanceInMeters;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   SizeInMeters;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RotationAxis;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotationDeltaInDeg;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility
struct UOculusFunctionLibrary_SetGuardianVisibility_Params
{
	bool                                               GuardianVisible;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.SetFixedFoveatedRenderingLevel
struct UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Params
{
	EFixedFoveatedRenderingLevel                       Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency
struct UOculusFunctionLibrary_SetDisplayFrequency_Params
{
	float                                              RequestedFrequency;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels
struct UOculusFunctionLibrary_SetCPUAndGPULevels_Params
{
	int                                                CPULevel;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GPULevel;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.SetColorScaleAndOffset
struct UOculusFunctionLibrary_SetColorScaleAndOffset_Params
{
	struct FLinearColor                                ColorScale;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyToAllLayers;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset
struct UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Params
{
	struct FRotator                                    BaseRot;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     PosOffset;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EOrientPositionSelector>               Options;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters
struct UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Params
{
	struct FRotator                                    Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     BaseOffsetInMeters;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EOrientPositionSelector>               Options;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.IsLoadingIconEnabled
struct UOculusFunctionLibrary_IsLoadingIconEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed
struct UOculusFunctionLibrary_IsGuardianDisplayed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.IsGuardianConfigured
struct UOculusFunctionLibrary_IsGuardianConfigured_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked
struct UOculusFunctionLibrary_IsDeviceTracked_Params
{
	ETrackedDeviceType                                 DeviceType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.IsAutoLoadingSplashScreenEnabled
struct UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.HideLoadingSplashScreen
struct UOculusFunctionLibrary_HideLoadingSplashScreen_Params
{
	bool                                               bClear;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.HideLoadingIcon
struct UOculusFunctionLibrary_HideLoadingIcon_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent
struct UOculusFunctionLibrary_HasSystemOverlayPresent_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.HasInputFocus
struct UOculusFunctionLibrary_HasInputFocus_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.GetUserProfile
struct UOculusFunctionLibrary_GetUserProfile_Params
{
	struct FHmdUserProfile                             Profile;                                                   // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.GetRawSensorData
struct UOculusFunctionLibrary_GetRawSensorData_Params
{
	struct FVector                                     AngularAcceleration;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LinearAcceleration;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AngularVelocity;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LinearVelocity;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeInSeconds;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETrackedDeviceType                                 DeviceType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.GetPose
struct UOculusFunctionLibrary_GetPose_Params
{
	struct FRotator                                    DeviceRotation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     DevicePosition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NeckPosition;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseOrienationForPlayerCamera;                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsePositionForPlayerCamera;                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PositionScale;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection
struct UOculusFunctionLibrary_GetPointGuardianIntersection_Params
{
	struct FVector                                     Point;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBoundaryType                                      BoundaryType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuardianTestResult                         ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform
struct UOculusFunctionLibrary_GetPlayAreaTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection
struct UOculusFunctionLibrary_GetNodeGuardianIntersection_Params
{
	ETrackedDeviceType                                 DeviceType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBoundaryType                                      BoundaryType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuardianTestResult                         ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.GetLoadingSplashParams
struct UOculusFunctionLibrary_GetLoadingSplashParams_Params
{
	struct FString                                     TexturePath;                                               // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DistanceInMeters;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   SizeInMeters;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RotationAxis;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotationDeltaInDeg;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints
struct UOculusFunctionLibrary_GetGuardianPoints_Params
{
	EBoundaryType                                      BoundaryType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UsePawnSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions
struct UOculusFunctionLibrary_GetGuardianDimensions_Params
{
	EBoundaryType                                      BoundaryType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization
struct UOculusFunctionLibrary_GetGPUUtilization_Params
{
	bool                                               IsGPUAvailable;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GPUUtilization;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime
struct UOculusFunctionLibrary_GetGPUFrameTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.GetFixedFoveatedRenderingLevel
struct UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Params
{
	EFixedFoveatedRenderingLevel                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.GetDeviceName
struct UOculusFunctionLibrary_GetDeviceName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency
struct UOculusFunctionLibrary_GetCurrentDisplayFrequency_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
struct UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params
{
	struct FRotator                                    OutRot;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     OutPosOffset;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
struct UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params
{
	struct FRotator                                    OutRotation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     OutBaseOffsetInMeters;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies
struct UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Params
{
	TArray<float>                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking
struct UOculusFunctionLibrary_EnablePositionTracking_Params
{
	bool                                               bPositionTracking;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking
struct UOculusFunctionLibrary_EnableOrientationTracking_Params
{
	bool                                               bOrientationTracking;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.EnableAutoLoadingSplashScreen
struct UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Params
{
	bool                                               bAutoShowEnabled;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens
struct UOculusFunctionLibrary_ClearLoadingSplashScreens_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen
struct UOculusFunctionLibrary_AddLoadingSplashScreen_Params
{
	class UTexture2D*                                  Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TranslationInMeters;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   SizeInMeters;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    DeltaRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bClearBeforeAdd;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
