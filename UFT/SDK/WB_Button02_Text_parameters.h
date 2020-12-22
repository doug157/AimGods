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

// Function WB_Button02_Text.WB_Button02_Text_C.GetHB_Text_Size
struct UWB_Button02_Text_C_GetHB_Text_Size_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Text.WB_Button02_Text_C.UpdateFontInfo
struct UWB_Button02_Text_C_UpdateFontInfo_Params
{
	class UFont*                                       Font;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFace;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Text.WB_Button02_Text_C.AddHintIcon
struct UWB_Button02_Text_C_AddHintIcon_Params
{
	class UClass*                                      Widget20x20;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Text.WB_Button02_Text_C.UpdateText
struct UWB_Button02_Text_C_UpdateText_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Button02_Text.WB_Button02_Text_C.UpdateJustification
struct UWB_Button02_Text_C_UpdateJustification_Params
{
	TEnumAsByte<EJustification>                        Justification;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button02_Text.WB_Button02_Text_C.ExecuteUbergraph_WB_Button02_Text
struct UWB_Button02_Text_C_ExecuteUbergraph_WB_Button02_Text_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
