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

// Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.SetBlurredFrameColor
struct UWB_Button02_BlurShine_C_SetBlurredFrameColor_Params
{
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.IsRightAligned
struct UWB_Button02_BlurShine_C_IsRightAligned_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.IsCenterAligned
struct UWB_Button02_BlurShine_C_IsCenterAligned_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.OnHovered
struct UWB_Button02_BlurShine_C_OnHovered_Params
{
};

// Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.OnUnhovered
struct UWB_Button02_BlurShine_C_OnUnhovered_Params
{
};

// Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.OnClicked
struct UWB_Button02_BlurShine_C_OnClicked_Params
{
};

// Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.UpdateJustification
struct UWB_Button02_BlurShine_C_UpdateJustification_Params
{
	TEnumAsByte<EJustification>                        EJustification;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.ShowBaselinePreview
struct UWB_Button02_BlurShine_C_ShowBaselinePreview_Params
{
	struct FLinearColor                                PreviewColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreviewTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.ExecuteUbergraph_WB_Button02_BlurShine
struct UWB_Button02_BlurShine_C_ExecuteUbergraph_WB_Button02_BlurShine_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
