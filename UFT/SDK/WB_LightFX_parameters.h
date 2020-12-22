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

// Function WB_LightFX.WB_LightFX_C.CreateLightFX
struct UWB_LightFX_C_CreateLightFX_Params
{
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_LightFX.WB_LightFX_C.ResetTimer
struct UWB_LightFX_C_ResetTimer_Params
{
};

// Function WB_LightFX.WB_LightFX_C.UpdateLightMaterial
struct UWB_LightFX_C_UpdateLightMaterial_Params
{
};

// Function WB_LightFX.WB_LightFX_C.Tick
struct UWB_LightFX_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_LightFX.WB_LightFX_C.ExecuteUbergraph_WB_LightFX
struct UWB_LightFX_C_ExecuteUbergraph_WB_LightFX_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
