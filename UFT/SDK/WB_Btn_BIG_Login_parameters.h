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

// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.Btn_Change_Status
struct UWB_Btn_BIG_Login_C_Btn_Change_Status_Params
{
	bool                                               Leader;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsReady_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AllPlayersReady_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<EMatchmakingStatus>                    CurrentStatus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWB_Btn_BIG_Login_C_BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWB_Btn_BIG_Login_C_BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWB_Btn_BIG_Login_C_BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.ChangeOfStatus
struct UWB_Btn_BIG_Login_C_ChangeOfStatus_Params
{
	TEnumAsByte<EMatchmakingStatus>                    Status;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.ExecuteUbergraph_WB_Btn_BIG_Login
struct UWB_Btn_BIG_Login_C_ExecuteUbergraph_WB_Btn_BIG_Login_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.LeaveParty__DelegateSignature
struct UWB_Btn_BIG_Login_C_LeaveParty__DelegateSignature_Params
{
};

// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.Clicked__DelegateSignature
struct UWB_Btn_BIG_Login_C_Clicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
