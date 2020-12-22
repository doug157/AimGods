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

// Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.SetShowMouse
struct UBP_InputDetect_Instance_C_SetShowMouse_Params
{
	bool                                               bShowMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.SetInputType
struct UBP_InputDetect_Instance_C_SetInputType_Params
{
	TEnumAsByte<EInputType>                            InputType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.UpdateInputType__DelegateSignature
struct UBP_InputDetect_Instance_C_UpdateInputType__DelegateSignature_Params
{
	TEnumAsByte<EInputType>                            InputType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
