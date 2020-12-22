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

// Function WB_Login.WB_Login_C.DisableOnLoggingIn
struct UWB_Login_C_DisableOnLoggingIn_Params
{
	bool                                               bIsLoggingIn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Login.WB_Login_C.Finished_29AFE36048D8C87FEF83DBBB11D802BB
struct UWB_Login_C_Finished_29AFE36048D8C87FEF83DBBB11D802BB_Params
{
};

// Function WB_Login.WB_Login_C.BndEvt__Txt_Password_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UWB_Login_C_BndEvt__Txt_Password_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Login.WB_Login_C.BndEvt__Txt_Username_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWB_Login_C_BndEvt__Txt_Username_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_Login.WB_Login_C.BndEvt__Txt_Password_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWB_Login_C_BndEvt__Txt_Password_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_Login.WB_Login_C.BndEvt__WB_Btn_BIG_Login_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
struct UWB_Login_C_BndEvt__WB_Btn_BIG_Login_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature_Params
{
};

// Function WB_Login.WB_Login_C.BndEvt__WB_Btn_Generic_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature
struct UWB_Login_C_BndEvt__WB_Btn_Generic_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature_Params
{
};

// Function WB_Login.WB_Login_C.BndEvt__WB_Btn_Generic_253_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
struct UWB_Login_C_BndEvt__WB_Btn_Generic_253_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature_Params
{
};

// Function WB_Login.WB_Login_C.OnPlayerAlreadyLoggedIn
struct UWB_Login_C_OnPlayerAlreadyLoggedIn_Params
{
};

// Function WB_Login.WB_Login_C.Construct
struct UWB_Login_C_Construct_Params
{
};

// Function WB_Login.WB_Login_C.OnLogin_Event
struct UWB_Login_C_OnLogin_Event_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FAuthError                                  AuthError;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAuthData                                   AuthData;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_Login.WB_Login_C.ExecuteUbergraph_WB_Login
struct UWB_Login_C_ExecuteUbergraph_WB_Login_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
