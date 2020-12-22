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

// Function BP_PC_InputDetect.BP_PC_InputDetect_C.FindRightInputType
struct ABP_PC_InputDetect_C_FindRightInputType_Params
{
	struct FKey                                        InputKey;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FKey                                        LastPressedKey;                                            // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_PC_InputDetect.BP_PC_InputDetect_C.GetIsMouseMoving
struct ABP_PC_InputDetect_C_GetIsMouseMoving_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_PC_InputDetect.BP_PC_InputDetect_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1
struct ABP_PC_InputDetect_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PC_InputDetect.BP_PC_InputDetect_C.UpdateMouseCursor
struct ABP_PC_InputDetect_C_UpdateMouseCursor_Params
{
};

// Function BP_PC_InputDetect.BP_PC_InputDetect_C.ExecuteUbergraph_BP_PC_InputDetect
struct ABP_PC_InputDetect_C_ExecuteUbergraph_BP_PC_InputDetect_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
