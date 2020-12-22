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

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.HandleResponsiveHovering
struct UBP_HQUI_Functions_C_HandleResponsiveHovering_Params
{
	bool                                               bResponsiveHovering;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWB_NativeButton_C*                          ButtonToFocus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           OwningPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.UnhoverAllNativeButtons
struct UBP_HQUI_Functions_C_UnhoverAllNativeButtons_Params
{
	class UWB_NativeButton_C*                          Exception;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetPC_InputDetect
struct UBP_HQUI_Functions_C_GetPC_InputDetect_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PC_InputDetect_C*                        AsPC_Input_Detect;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.SetRightInputType
struct UBP_HQUI_Functions_C_SetRightInputType_Params
{
	struct FKey                                        InputKey;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        LastPressed_Key;                                           // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.FindInputType
struct UBP_HQUI_Functions_C_FindInputType_Params
{
	struct FKey                                        InputKey;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        LastPressed_Key;                                           // (Parm, OutParm, HasGetValueTypeHash)
	TEnumAsByte<EInputType>                            InputType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetVRControllerKeys
struct UBP_HQUI_Functions_C_GetVRControllerKeys_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                Oculus_VR_Keys;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetMouseKeys
struct UBP_HQUI_Functions_C_GetMouseKeys_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                MouseKeys;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetKeyboardKeys
struct UBP_HQUI_Functions_C_GetKeyboardKeys_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                KeyboardKeys;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetGamepadKeys
struct UBP_HQUI_Functions_C_GetGamepadKeys_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                GamepadKeys;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetShowMouse
struct UBP_HQUI_Functions_C_GetShowMouse_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShowMouse;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.SetShowMouse
struct UBP_HQUI_Functions_C_SetShowMouse_Params
{
	bool                                               bShowMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.UnbindOnInputTypeSwitched
struct UBP_HQUI_Functions_C_UnbindOnInputTypeSwitched_Params
{
	struct FScriptDelegate                             Event;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.BindOnInputTypeSwitched
struct UBP_HQUI_Functions_C_BindOnInputTypeSwitched_Params
{
	struct FScriptDelegate                             Event;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.SetInputType
struct UBP_HQUI_Functions_C_SetInputType_Params
{
	TEnumAsByte<EInputType>                            InputType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetInputType
struct UBP_HQUI_Functions_C_GetInputType_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EInputType>                            InputType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HQUI_Functions.BP_HQUI_Functions_C.GetInputDetectGameInstance
struct UBP_HQUI_Functions_C_GetInputDetectGameInstance_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_InputDetect_Instance_C*                  AsInput_Detect_Instance;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
