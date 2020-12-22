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

// Function WB_Button02_Frame.WB_Button02_Frame_C.Set_UseShine
struct UWB_Button02_Frame_C_Set_UseShine_Params
{
	bool                                               bUseShine;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.Set_FrameColor
struct UWB_Button02_Frame_C_Set_FrameColor_Params
{
	struct FLinearColor                                FrameColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.Set_FrameShineColor
struct UWB_Button02_Frame_C_Set_FrameShineColor_Params
{
	struct FLinearColor                                FrameShineColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.GetImageDynamicMaterial
struct UWB_Button02_Frame_C_GetImageDynamicMaterial_Params
{
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Image;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.CreateShine
struct UWB_Button02_Frame_C_CreateShine_Params
{
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.Construct
struct UWB_Button02_Frame_C_Construct_Params
{
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.OnHovered
struct UWB_Button02_Frame_C_OnHovered_Params
{
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.OnClicked
struct UWB_Button02_Frame_C_OnClicked_Params
{
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.OnUnhovered
struct UWB_Button02_Frame_C_OnUnhovered_Params
{
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.OnDisabled
struct UWB_Button02_Frame_C_OnDisabled_Params
{
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.Tick
struct UWB_Button02_Frame_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.UpdateDynamicShine
struct UWB_Button02_Frame_C_UpdateDynamicShine_Params
{
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.ResetTimer
struct UWB_Button02_Frame_C_ResetTimer_Params
{
};

// Function WB_Button02_Frame.WB_Button02_Frame_C.ExecuteUbergraph_WB_Button02_Frame
struct UWB_Button02_Frame_C_ExecuteUbergraph_WB_Button02_Frame_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
