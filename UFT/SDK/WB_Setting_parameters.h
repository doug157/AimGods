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

// Function WB_Setting.WB_Setting_C.Set_Deactivated
struct UWB_Setting_C_Set_Deactivated_Params
{
	bool                                               Disable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Setting.WB_Setting_C.Update_Slider_Visual_Value
struct UWB_Setting_C_Update_Slider_Visual_Value_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Setting.WB_Setting_C.Force_Set_Slider_Values
struct UWB_Setting_C_Force_Set_Slider_Values_Params
{
	float                                              MinValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Setting.WB_Setting_C.Force_Check_Selector_Text
struct UWB_Setting_C_Force_Check_Selector_Text_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Setting.WB_Setting_C.Force_Check_Binary
struct UWB_Setting_C_Force_Check_Binary_Params
{
	bool                                               OnOff;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Setting.WB_Setting_C.Check_BinaryActiveOption
struct UWB_Setting_C_Check_BinaryActiveOption_Params
{
};

// Function WB_Setting.WB_Setting_C.Force_DropList_Selected_Option
struct UWB_Setting_C_Force_DropList_Selected_Option_Params
{
	struct FString                                     Option;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_Setting.WB_Setting_C.Check_If_Odd_Or_Even
struct UWB_Setting_C_Check_If_Odd_Or_Even_Params
{
};

// Function WB_Setting.WB_Setting_C.Initialize
struct UWB_Setting_C_Initialize_Params
{
};

// Function WB_Setting.WB_Setting_C.Force_DropList_Generate
struct UWB_Setting_C_Force_DropList_Generate_Params
{
	TArray<struct FString>                             Options;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     SelectedOption;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_Setting.WB_Setting_C.Generate_DropList
struct UWB_Setting_C_Generate_DropList_Params
{
};

// Function WB_Setting.WB_Setting_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWB_Setting_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_Setting.WB_Setting_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWB_Setting_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_Setting.WB_Setting_C.BndEvt__Button_On_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UWB_Setting_C_BndEvt__Button_On_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_Setting.WB_Setting_C.BndEvt__Button_Off_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UWB_Setting_C_BndEvt__Button_Off_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_Setting.WB_Setting_C.BndEvt__ResolutionCombo_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct UWB_Setting_C_BndEvt__ResolutionCombo_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Setting.WB_Setting_C.Construct
struct UWB_Setting_C_Construct_Params
{
};

// Function WB_Setting.WB_Setting_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UWB_Setting_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_Setting.WB_Setting_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UWB_Setting_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_Setting.WB_Setting_C.PreConstruct
struct UWB_Setting_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Setting.WB_Setting_C.BndEvt__SliderBar_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature
struct UWB_Setting_C_BndEvt__SliderBar_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Setting.WB_Setting_C.BndEvt__SliderBar_K2Node_ComponentBoundEvent_8_OnMouseCaptureEndEvent__DelegateSignature
struct UWB_Setting_C_BndEvt__SliderBar_K2Node_ComponentBoundEvent_8_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function WB_Setting.WB_Setting_C.ExecuteUbergraph_WB_Setting
struct UWB_Setting_C_ExecuteUbergraph_WB_Setting_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Setting.WB_Setting_C.Slider_CaptureEnd__DelegateSignature
struct UWB_Setting_C_Slider_CaptureEnd__DelegateSignature_Params
{
};

// Function WB_Setting.WB_Setting_C.Slider_OnValueChange__DelegateSignature
struct UWB_Setting_C_Slider_OnValueChange__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Setting.WB_Setting_C.Selector_Right__DelegateSignature
struct UWB_Setting_C_Selector_Right__DelegateSignature_Params
{
};

// Function WB_Setting.WB_Setting_C.Selector_Left__DelegateSignature
struct UWB_Setting_C_Selector_Left__DelegateSignature_Params
{
};

// Function WB_Setting.WB_Setting_C.Binary_Off__DelegateSignature
struct UWB_Setting_C_Binary_Off__DelegateSignature_Params
{
};

// Function WB_Setting.WB_Setting_C.Binary_On__DelegateSignature
struct UWB_Setting_C_Binary_On__DelegateSignature_Params
{
};

// Function WB_Setting.WB_Setting_C.DropBox_SelectionChange__DelegateSignature
struct UWB_Setting_C_DropBox_SelectionChange__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
