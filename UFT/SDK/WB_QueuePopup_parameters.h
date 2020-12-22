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

// Function WB_QueuePopup.WB_QueuePopup_C.GetTimerPercent
struct UWB_QueuePopup_C_GetTimerPercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_QueuePopup.WB_QueuePopup_C.Tick
struct UWB_QueuePopup_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_QueuePopup.WB_QueuePopup_C.OnMatchmakingStatusChanged
struct UWB_QueuePopup_C_OnMatchmakingStatusChanged_Params
{
	TEnumAsByte<EMatchmakingStatus>                    NewStatus;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_QueuePopup.WB_QueuePopup_C.Construct
struct UWB_QueuePopup_C_Construct_Params
{
};

// Function WB_QueuePopup.WB_QueuePopup_C.BndEvt__WB_Btn_Special_A_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UWB_QueuePopup_C_BndEvt__WB_Btn_Special_A_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
};

// Function WB_QueuePopup.WB_QueuePopup_C.BndEvt__WB_Btn_Accept_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
struct UWB_QueuePopup_C_BndEvt__WB_Btn_Accept_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params
{
};

// Function WB_QueuePopup.WB_QueuePopup_C.ExecuteUbergraph_WB_QueuePopup
struct UWB_QueuePopup_C_ExecuteUbergraph_WB_QueuePopup_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
