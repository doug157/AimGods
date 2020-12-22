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

// Function WB_PostMatch.WB_PostMatch_C.Construct
struct UWB_PostMatch_C_Construct_Params
{
};

// Function WB_PostMatch.WB_PostMatch_C.Tick
struct UWB_PostMatch_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PostMatch.WB_PostMatch_C.BndEvt__WB_Btn_Generic_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UWB_PostMatch_C_BndEvt__WB_Btn_Generic_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
};

// Function WB_PostMatch.WB_PostMatch_C.ExecuteUbergraph_WB_PostMatch
struct UWB_PostMatch_C_ExecuteUbergraph_WB_PostMatch_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
