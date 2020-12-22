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

// Function WB_Button_Base.WB_Button_Base_C.B03_GetSliderValueNormalized
struct UWB_Button_Base_C_B03_GetSliderValueNormalized_Params
{
	float                                              ValueNormalized;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_GetSliderValue
struct UWB_Button_Base_C_B03_GetSliderValue_Params
{
	float                                              Value;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_GetKeyEscapeKeys
struct UWB_Button_Base_C_B03_GetKeyEscapeKeys_Params
{
	TEnumAsByte<ESelectedKey>                          Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                EscapeKeys;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_GetAllowModifierKeys
struct UWB_Button_Base_C_B03_GetAllowModifierKeys_Params
{
	TEnumAsByte<ESelectedKey>                          Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAllowModifierKeys;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_GetAllowGamepadKeys
struct UWB_Button_Base_C_B03_GetAllowGamepadKeys_Params
{
	TEnumAsByte<ESelectedKey>                          Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAllowGamepadKeys;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_GetKeySelectionText
struct UWB_Button_Base_C_B03_GetKeySelectionText_Params
{
	TEnumAsByte<ESelectedKey>                          Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       KeySelectionText;                                          // (Parm, OutParm)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_GetSelectedKey
struct UWB_Button_Base_C_B03_GetSelectedKey_Params
{
	TEnumAsByte<ESelectedKey>                          Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                                 SelectedKey;                                               // (Parm, OutParm, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_GetKeyEnabled
struct UWB_Button_Base_C_B03_GetKeyEnabled_Params
{
	TEnumAsByte<ESelectedKey>                          Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_GetStateByIndex
struct UWB_Button_Base_C_B03_GetStateByIndex_Params
{
	int                                                State;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_GetStateByName
struct UWB_Button_Base_C_B03_GetStateByName_Params
{
	struct FName                                       State;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B04_GetScale_Clicked
struct UWB_Button_Base_C_B04_GetScale_Clicked_Params
{
	float                                              Scale;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B04_GetScale_Hovered
struct UWB_Button_Base_C_B04_GetScale_Hovered_Params
{
	float                                              Scale;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B04_GetImage
struct UWB_Button_Base_C_B04_GetImage_Params
{
	class UObject*                                     Image_Brush;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Image_Translation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.GetButtonJustification
struct UWB_Button_Base_C_GetButtonJustification_Params
{
	TEnumAsByte<EJustification>                        EJustification;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.GetUserFocus
struct UWB_Button_Base_C_GetUserFocus_Params
{
	class APlayerController*                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasFocus;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Clicked
struct UWB_Button_Base_C_GetButtonFontInfo_Clicked_Params
{
	class UFont*                                       Font;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Integer;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Disabled
struct UWB_Button_Base_C_GetButtonFontInfo_Disabled_Params
{
	class UFont*                                       Font;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Hovered
struct UWB_Button_Base_C_GetButtonFontInfo_Hovered_Params
{
	class UFont*                                       Font;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.GetButtonFontInfo_Normal
struct UWB_Button_Base_C_GetButtonFontInfo_Normal_Params
{
	class UFont*                                       Font;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.GetButtonText
struct UWB_Button_Base_C_GetButtonText_Params
{
	struct FText                                       ButtonText;                                                // (Parm, OutParm)
};

// Function WB_Button_Base.WB_Button_Base_C.GetButtonEnabled
struct UWB_Button_Base_C_GetButtonEnabled_Params
{
	bool                                               bIsEnabled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button_Base.WB_Button_Base_C.SetButtonText
struct UWB_Button_Base_C_SetButtonText_Params
{
	struct FText                                       ButtonText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Current
struct UWB_Button_Base_C_SetButtonFontInfo_Current_Params
{
	class UFont*                                       Font;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.SetButtonEnabled
struct UWB_Button_Base_C_SetButtonEnabled_Params
{
	bool                                               bIsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Normal
struct UWB_Button_Base_C_SetButtonFontInfo_Normal_Params
{
	class UFont*                                       Font;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Hovered
struct UWB_Button_Base_C_SetButtonFontInfo_Hovered_Params
{
	class UFont*                                       Font;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Clicked
struct UWB_Button_Base_C_SetButtonFontInfo_Clicked_Params
{
	class UFont*                                       Font;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.SetButtonFontInfo_Disabled
struct UWB_Button_Base_C_SetButtonFontInfo_Disabled_Params
{
	class UFont*                                       Font;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   Typeface;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.SetUser_Focus
struct UWB_Button_Base_C_SetUser_Focus_Params
{
	class APlayerController*                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.SetHintIcon
struct UWB_Button_Base_C_SetHintIcon_Params
{
	class UClass*                                      HintIcon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.SetButtonSound_OnClicked
struct UWB_Button_Base_C_SetButtonSound_OnClicked_Params
{
	class USoundBase*                                  ClickedSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.SetButtonSound_OnHovered
struct UWB_Button_Base_C_SetButtonSound_OnHovered_Params
{
	class USoundBase*                                  HoveredSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_HoveredFX_01
struct UWB_Button_Base_C_B01_SetColor_HoveredFX_01_Params
{
	struct FLinearColor                                Color_HoveredFX_01;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_HoveredFX_02
struct UWB_Button_Base_C_B01_SetColor_HoveredFX_02_Params
{
	struct FLinearColor                                Color_HoveredFX_02;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_ClickedFX
struct UWB_Button_Base_C_B01_SetColor_ClickedFX_Params
{
	struct FLinearColor                                Color_ClickedFX;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B01_SetColor_ClickedFX_Text
struct UWB_Button_Base_C_B01_SetColor_ClickedFX_Text_Params
{
	struct FLinearColor                                Color_ClickedFX_Text;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.SetButtonJustification
struct UWB_Button_Base_C_SetButtonJustification_Params
{
	TEnumAsByte<EJustification>                        EJustification;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Normal
struct UWB_Button_Base_C_B02_SetFrameColor_Normal_Params
{
	struct FLinearColor                                FrameColor_Normal;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Hovered
struct UWB_Button_Base_C_B02_SetFrameColor_Hovered_Params
{
	struct FLinearColor                                FrameColor_Hovered;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Clicked
struct UWB_Button_Base_C_B02_SetFrameColor_Clicked_Params
{
	struct FLinearColor                                FrameColor_Clicked;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Disabled
struct UWB_Button_Base_C_B02_SetFrameColor_Disabled_Params
{
	struct FLinearColor                                FrameColor_Disabled;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B02_SetFrameColor_Current
struct UWB_Button_Base_C_B02_SetFrameColor_Current_Params
{
	struct FLinearColor                                FrameColor_Current;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Normal
struct UWB_Button_Base_C_B02_SetFillColor_Normal_Params
{
	struct FLinearColor                                FillColor_Normal;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Hovered
struct UWB_Button_Base_C_B02_SetFillColor_Hovered_Params
{
	struct FLinearColor                                FillColor_Hovered;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Clicked
struct UWB_Button_Base_C_B02_SetFillColor_Clicked_Params
{
	struct FLinearColor                                FillColor_Clicked;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Disabled
struct UWB_Button_Base_C_B02_SetFillColor_Disabled_Params
{
	struct FLinearColor                                FillColor_Disabled;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B02_SetFillColor_Current
struct UWB_Button_Base_C_B02_SetFillColor_Current_Params
{
	struct FLinearColor                                FillColor_Current;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B02_SetUseDynamicShine
struct UWB_Button_Base_C_B02_SetUseDynamicShine_Params
{
	bool                                               bUseDynamicShine;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button_Base.WB_Button_Base_C.B02_SetDynamicShineColor
struct UWB_Button_Base_C_B02_SetDynamicShineColor_Params
{
	struct FLinearColor                                InColor;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B02_SetBlurShineColor_Hovered
struct UWB_Button_Base_C_B02_SetBlurShineColor_Hovered_Params
{
	struct FLinearColor                                InColor;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B02_SetBlurShineColor_Clicked
struct UWB_Button_Base_C_B02_SetBlurShineColor_Clicked_Params
{
	struct FLinearColor                                InColor;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B02_Create_ContentWidget
struct UWB_Button_Base_C_B02_Create_ContentWidget_Params
{
	class UClass*                                      ContentWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B02_RemoveContentWidget
struct UWB_Button_Base_C_B02_RemoveContentWidget_Params
{
};

// Function WB_Button_Base.WB_Button_Base_C.B03_SetStateByName
struct UWB_Button_Base_C_B03_SetStateByName_Params
{
	struct FName                                       State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_SetStateByIndex
struct UWB_Button_Base_C_B03_SetStateByIndex_Params
{
	int                                                State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIcon
struct UWB_Button_Base_C_B03_SetStateButtonIcon_Params
{
	class UObject*                                     Icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIconColor_Normal
struct UWB_Button_Base_C_B03_SetStateButtonIconColor_Normal_Params
{
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIconColor_Hovered
struct UWB_Button_Base_C_B03_SetStateButtonIconColor_Hovered_Params
{
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_SetStateButtonIconColor_Clicked
struct UWB_Button_Base_C_B03_SetStateButtonIconColor_Clicked_Params
{
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_SetSelectedKey
struct UWB_Button_Base_C_B03_SetSelectedKey_Params
{
	TEnumAsByte<ESelectedKey>                          Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                                 SelectedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_SetKeyEnabled
struct UWB_Button_Base_C_B03_SetKeyEnabled_Params
{
	TEnumAsByte<ESelectedKey>                          Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_SetKeySelectionText
struct UWB_Button_Base_C_B03_SetKeySelectionText_Params
{
	TEnumAsByte<ESelectedKey>                          Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       KeySelectionText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_SetAllowGamepadKeys
struct UWB_Button_Base_C_B03_SetAllowGamepadKeys_Params
{
	TEnumAsByte<ESelectedKey>                          Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAllowGamepadKeys;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_SetAllowModifierKeys
struct UWB_Button_Base_C_B03_SetAllowModifierKeys_Params
{
	TEnumAsByte<ESelectedKey>                          Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAllowModifierKeys;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_SetKeyEscapeKeys
struct UWB_Button_Base_C_B03_SetKeyEscapeKeys_Params
{
	TEnumAsByte<ESelectedKey>                          Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                EscapeKeys;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_CreateContentWidget
struct UWB_Button_Base_C_B03_CreateContentWidget_Params
{
	class UClass*                                      ContentWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_RemoveContentWidget
struct UWB_Button_Base_C_B03_RemoveContentWidget_Params
{
};

// Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Normal
struct UWB_Button_Base_C_B04_SetFrameColor_Normal_Params
{
	struct FLinearColor                                FrameColor1;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor2;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Shine;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Background;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Small;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Big;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Hovered
struct UWB_Button_Base_C_B04_SetFrameColor_Hovered_Params
{
	struct FLinearColor                                FrameColor1;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor2;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Shine;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Background;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Small;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Big;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Clicked
struct UWB_Button_Base_C_B04_SetFrameColor_Clicked_Params
{
	struct FLinearColor                                FrameColor1;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor2;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Shine;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Background;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Small;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Big;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Disabled
struct UWB_Button_Base_C_B04_SetFrameColor_Disabled_Params
{
	struct FLinearColor                                FrameColor1;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor2;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Shine;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B04_SetFrameColor_Current
struct UWB_Button_Base_C_B04_SetFrameColor_Current_Params
{
	struct FLinearColor                                FrameColor1;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor2;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Shine;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Background;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Small;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFxColor_Big;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B04_SetShineFxEnabled
struct UWB_Button_Base_C_B04_SetShineFxEnabled_Params
{
	bool                                               bIsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Button_Base.WB_Button_Base_C.B04_CreateContentWidget
struct UWB_Button_Base_C_B04_CreateContentWidget_Params
{
	class UClass*                                      ContentWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B04_RemoveContentWidget
struct UWB_Button_Base_C_B04_RemoveContentWidget_Params
{
};

// Function WB_Button_Base.WB_Button_Base_C.B04_SetImage
struct UWB_Button_Base_C_B04_SetImage_Params
{
	class UObject*                                     ImageBrush;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ImageTranslation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Normal
struct UWB_Button_Base_C_B04_SetImageColor_Normal_Params
{
	struct FLinearColor                                ImageColor_Normal;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Saturation_Normal;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Hovered
struct UWB_Button_Base_C_B04_SetImageColor_Hovered_Params
{
	struct FLinearColor                                ImageColor_Hovered;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Saturation_Hovered;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Clicked
struct UWB_Button_Base_C_B04_SetImageColor_Clicked_Params
{
	struct FLinearColor                                ImageColor_Clicked;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Saturation_Clicked;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B04_SetImageColor_Disabled
struct UWB_Button_Base_C_B04_SetImageColor_Disabled_Params
{
	struct FLinearColor                                ImageColor_Disabled;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Saturation_Disabled;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B04_SetVignetteColor
struct UWB_Button_Base_C_B04_SetVignetteColor_Params
{
	struct FLinearColor                                VignetteColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B04_SetScale
struct UWB_Button_Base_C_B04_SetScale_Params
{
	float                                              Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_SetSliderValue
struct UWB_Button_Base_C_B03_SetSliderValue_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.B03_SetSliderValueNormalized
struct UWB_Button_Base_C_B03_SetSliderValueNormalized_Params
{
	float                                              ValueNormalized;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Button_Base.WB_Button_Base_C.ExecuteUbergraph_WB_Button_Base
struct UWB_Button_Base_C_ExecuteUbergraph_WB_Button_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
