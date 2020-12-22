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

// Function WB_InGameMenu.WB_InGameMenu_C.OnKeyDown
struct UWB_InGameMenu_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_InGameMenu.WB_InGameMenu_C.ReturnToGame
struct UWB_InGameMenu_C_ReturnToGame_Params
{
};

// Function WB_InGameMenu.WB_InGameMenu_C.OnKeyPressed
struct UWB_InGameMenu_C_OnKeyPressed_Params
{
	struct FString                                     Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_InGameMenu.WB_InGameMenu_C.Construct
struct UWB_InGameMenu_C_Construct_Params
{
};

// Function WB_InGameMenu.WB_InGameMenu_C.OnButtonHovered
struct UWB_InGameMenu_C_OnButtonHovered_Params
{
	class UButton*                                     Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_InGameMenu.WB_InGameMenu_C.OnButtonUnhovered
struct UWB_InGameMenu_C_OnButtonUnhovered_Params
{
	class UButton*                                     Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_Return_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature
struct UWB_InGameMenu_C_BndEvt__WB_Btn_Return_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature_Params
{
};

// Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_Report_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature
struct UWB_InGameMenu_C_BndEvt__WB_Btn_Report_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature_Params
{
};

// Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_MainMenu_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature
struct UWB_InGameMenu_C_BndEvt__WB_Btn_MainMenu_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature_Params
{
};

// Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_Quit_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature
struct UWB_InGameMenu_C_BndEvt__WB_Btn_Quit_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature_Params
{
};

// Function WB_InGameMenu.WB_InGameMenu_C.BndEvt__WB_Btn_Settings_K2Node_ComponentBoundEvent_19_Clicked__DelegateSignature
struct UWB_InGameMenu_C_BndEvt__WB_Btn_Settings_K2Node_ComponentBoundEvent_19_Clicked__DelegateSignature_Params
{
};

// Function WB_InGameMenu.WB_InGameMenu_C.ExecuteUbergraph_WB_InGameMenu
struct UWB_InGameMenu_C_ExecuteUbergraph_WB_InGameMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
