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

// Function WB_Spectating.WB_Spectating_C.UpdateTimer
struct UWB_Spectating_C_UpdateTimer_Params
{
};

// Function WB_Spectating.WB_Spectating_C.GetInfoText
struct UWB_Spectating_C_GetInfoText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_Spectating.WB_Spectating_C.Construct
struct UWB_Spectating_C_Construct_Params
{
};

// Function WB_Spectating.WB_Spectating_C.ExecuteUbergraph_WB_Spectating
struct UWB_Spectating_C_ExecuteUbergraph_WB_Spectating_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
