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

// Function WB_Button02_FillColor.WB_Button02_FillColor_C.SetFillColor
struct UWB_Button02_FillColor_C_SetFillColor_Params
{
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_FillColor.WB_Button02_FillColor_C.AddColorV_Value
struct UWB_Button02_FillColor_C_AddColorV_Value_Params
{
	struct FLinearColor                                InColor;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExtraV;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                OutColor;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_FillColor.WB_Button02_FillColor_C.OnUnhovered
struct UWB_Button02_FillColor_C_OnUnhovered_Params
{
};

// Function WB_Button02_FillColor.WB_Button02_FillColor_C.OnClicked
struct UWB_Button02_FillColor_C_OnClicked_Params
{
};

// Function WB_Button02_FillColor.WB_Button02_FillColor_C.OnHovered
struct UWB_Button02_FillColor_C_OnHovered_Params
{
};

// Function WB_Button02_FillColor.WB_Button02_FillColor_C.OnDisabled
struct UWB_Button02_FillColor_C_OnDisabled_Params
{
};

// Function WB_Button02_FillColor.WB_Button02_FillColor_C.Construct
struct UWB_Button02_FillColor_C_Construct_Params
{
};

// Function WB_Button02_FillColor.WB_Button02_FillColor_C.PreConstruct
struct UWB_Button02_FillColor_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button02_FillColor.WB_Button02_FillColor_C.ExecuteUbergraph_WB_Button02_FillColor
struct UWB_Button02_FillColor_C_ExecuteUbergraph_WB_Button02_FillColor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
