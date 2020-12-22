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

// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.GetLoadoutSlotTooltip
struct UWB_LoadoutActionBarSlot_C_GetLoadoutSlotTooltip_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnDrop
struct UWB_LoadoutActionBarSlot_C_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnDragDetected
struct UWB_LoadoutActionBarSlot_C_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnMouseButtonDown
struct UWB_LoadoutActionBarSlot_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.Construct
struct UWB_LoadoutActionBarSlot_C_Construct_Params
{
};

// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.Display Ability
struct UWB_LoadoutActionBarSlot_C_Display_Ability_Params
{
	class UClass*                                      Ability;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnDragEnter
struct UWB_LoadoutActionBarSlot_C_OnDragEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnDragLeave
struct UWB_LoadoutActionBarSlot_C_OnDragLeave_Params
{
	struct FPointerEvent                               PointerEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.PreConstruct
struct UWB_LoadoutActionBarSlot_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.BndEvt__Button_183_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWB_LoadoutActionBarSlot_C_BndEvt__Button_183_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.BndEvt__ClickableButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWB_LoadoutActionBarSlot_C_BndEvt__ClickableButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.BndEvt__ClickableButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWB_LoadoutActionBarSlot_C_BndEvt__ClickableButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnMouseEnter
struct UWB_LoadoutActionBarSlot_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.OnMouseLeave
struct UWB_LoadoutActionBarSlot_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.On Input Binding Changed
struct UWB_LoadoutActionBarSlot_C_On_Input_Binding_Changed_Params
{
	struct FName                                       BindingName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        NewKey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.ExecuteUbergraph_WB_LoadoutActionBarSlot
struct UWB_LoadoutActionBarSlot_C_ExecuteUbergraph_WB_LoadoutActionBarSlot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_LoadoutActionBarSlot.WB_LoadoutActionBarSlot_C.Clicked__DelegateSignature
struct UWB_LoadoutActionBarSlot_C_Clicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
