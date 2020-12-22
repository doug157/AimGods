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

// Function WB_InputRemapping.WB_InputRemapping_C.Check_IfOddOrEven
struct UWB_InputRemapping_C_Check_IfOddOrEven_Params
{
};

// Function WB_InputRemapping.WB_InputRemapping_C.OnPreviewKeyDown
struct UWB_InputRemapping_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_InputRemapping.WB_InputRemapping_C.OnMouseButtonUp
struct UWB_InputRemapping_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_InputRemapping.WB_InputRemapping_C.Construct
struct UWB_InputRemapping_C_Construct_Params
{
};

// Function WB_InputRemapping.WB_InputRemapping_C.OnMouseLeave
struct UWB_InputRemapping_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_InputRemapping.WB_InputRemapping_C.Remap Action
struct UWB_InputRemapping_C_Remap_Action_Params
{
	struct FKey                                        New_Key;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_InputRemapping.WB_InputRemapping_C.Unbind Action
struct UWB_InputRemapping_C_Unbind_Action_Params
{
};

// Function WB_InputRemapping.WB_InputRemapping_C.PreConstruct
struct UWB_InputRemapping_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_InputRemapping.WB_InputRemapping_C.OnMouseEnter
struct UWB_InputRemapping_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_InputRemapping.WB_InputRemapping_C.ExecuteUbergraph_WB_InputRemapping
struct UWB_InputRemapping_C_ExecuteUbergraph_WB_InputRemapping_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
