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

// Function WB_CharacterRotationArea.WB_CharacterRotationArea_C.OnMouseMove
struct UWB_CharacterRotationArea_C_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_CharacterRotationArea.WB_CharacterRotationArea_C.Construct
struct UWB_CharacterRotationArea_C_Construct_Params
{
};

// Function WB_CharacterRotationArea.WB_CharacterRotationArea_C.ExecuteUbergraph_WB_CharacterRotationArea
struct UWB_CharacterRotationArea_C_ExecuteUbergraph_WB_CharacterRotationArea_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
