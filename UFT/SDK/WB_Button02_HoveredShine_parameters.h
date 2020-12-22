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

// Function WB_Button02_HoveredShine.WB_Button02_HoveredShine_C.OnAnimationFinished
struct UWB_Button02_HoveredShine_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_HoveredShine.WB_Button02_HoveredShine_C.OnHovered
struct UWB_Button02_HoveredShine_C_OnHovered_Params
{
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EJustification>                        Justification;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_HoveredShine.WB_Button02_HoveredShine_C.OnUnhovered
struct UWB_Button02_HoveredShine_C_OnUnhovered_Params
{
};

// Function WB_Button02_HoveredShine.WB_Button02_HoveredShine_C.ExecuteUbergraph_WB_Button02_HoveredShine
struct UWB_Button02_HoveredShine_C_ExecuteUbergraph_WB_Button02_HoveredShine_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
