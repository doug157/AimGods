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

// Function WB_SettingsMenu.WB_SettingsMenu_C.Get_ResetDefaultsButton_bIsEnabled_1
struct UWB_SettingsMenu_C_Get_ResetDefaultsButton_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetViewDistance
struct UWB_SettingsMenu_C_GetViewDistance_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.OnKeyDown
struct UWB_SettingsMenu_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMouseSnsitivitySliderToolTipText
struct UWB_SettingsMenu_C_GetMouseSnsitivitySliderToolTipText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetResolutionWindowVisibility
struct UWB_SettingsMenu_C_GetResolutionWindowVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetHDRHBToolTipText
struct UWB_SettingsMenu_C_GetHDRHBToolTipText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetHDRHBIsEnabled
struct UWB_SettingsMenu_C_GetHDRHBIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessOverallQualityIsEnabled
struct UWB_SettingsMenu_C_GetLessOverallQualityIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreOverallQualityIsEnabled
struct UWB_SettingsMenu_C_GetMoreOverallQualityIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetOverallQuality
struct UWB_SettingsMenu_C_GetOverallQuality_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GenerateSuportedResolutionsComboBox
struct UWB_SettingsMenu_C_GenerateSuportedResolutionsComboBox_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetFullscreenMode
struct UWB_SettingsMenu_C_GetFullscreenMode_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetResolutionScaleSliderToolTipText
struct UWB_SettingsMenu_C_GetResolutionScaleSliderToolTipText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetResolutionScaleSliderValue
struct UWB_SettingsMenu_C_GetResolutionScaleSliderValue_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessFrameLimitIsEnabled
struct UWB_SettingsMenu_C_GetLessFrameLimitIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreFrameLimitIsEnabled
struct UWB_SettingsMenu_C_GetMoreFrameLimitIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetFrameRateLimit
struct UWB_SettingsMenu_C_GetFrameRateLimit_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessAudioQualityIsEnabled
struct UWB_SettingsMenu_C_GetLessAudioQualityIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreAudioQualityIsEnabled
struct UWB_SettingsMenu_C_GetMoreAudioQualityIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetAudioQuality
struct UWB_SettingsMenu_C_GetAudioQuality_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreVisualEffectsIsEnabled
struct UWB_SettingsMenu_C_GetMoreVisualEffectsIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessVisualEffectsIsEnabled
struct UWB_SettingsMenu_C_GetLessVisualEffectsIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetVisualEffectsQuality
struct UWB_SettingsMenu_C_GetVisualEffectsQuality_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessViewDistanceIsEnabled
struct UWB_SettingsMenu_C_GetLessViewDistanceIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreViewDistancebIsEnabled
struct UWB_SettingsMenu_C_GetMoreViewDistancebIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetFoliageQuality
struct UWB_SettingsMenu_C_GetFoliageQuality_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessFoliageIsEnabled
struct UWB_SettingsMenu_C_GetLessFoliageIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreFoliageIsEnabled
struct UWB_SettingsMenu_C_GetMoreFoliageIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessPostProcessingIsEnabled
struct UWB_SettingsMenu_C_GetLessPostProcessingIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMorePostProcessingIsEnabled
struct UWB_SettingsMenu_C_GetMorePostProcessingIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetPostProcessingQuality
struct UWB_SettingsMenu_C_GetPostProcessingQuality_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetAntiAliasingQuality
struct UWB_SettingsMenu_C_GetAntiAliasingQuality_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessAntiAliasingIsEnabled
struct UWB_SettingsMenu_C_GetLessAntiAliasingIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreAntiAliasingIsEnabled
struct UWB_SettingsMenu_C_GetMoreAntiAliasingIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessTextureQualityIsEnabled
struct UWB_SettingsMenu_C_GetLessTextureQualityIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreTextureQualityIsEnabled
struct UWB_SettingsMenu_C_GetMoreTextureQualityIsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetTextureQuality
struct UWB_SettingsMenu_C_GetTextureQuality_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessShadowQualityIsEnable
struct UWB_SettingsMenu_C_GetLessShadowQualityIsEnable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreShadowQualityIsEnable
struct UWB_SettingsMenu_C_GetMoreShadowQualityIsEnable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetSettingLevelText
struct UWB_SettingsMenu_C_GetSettingLevelText_Params
{
	int                                                SettingLevel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       SettingLevelText;                                          // (Parm, OutParm)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.GetShadowQuality
struct UWB_SettingsMenu_C_GetShadowQuality_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.SetButtonBackGround
struct UWB_SettingsMenu_C_SetButtonBackGround_Params
{
	class UButton*                                     Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bPressed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__ShowFpsCB_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__ShowFpsCB_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.Construct
struct UWB_SettingsMenu_C_Construct_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.InitialSetup
struct UWB_SettingsMenu_C_InitialSetup_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__ApplyResolutionSettingsButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__ApplyResolutionSettingsButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.ApplyNoResolutionSettingsOnly
struct UWB_SettingsMenu_C_ApplyNoResolutionSettingsOnly_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.ApplySettings
struct UWB_SettingsMenu_C_ApplySettings_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__DontApplyResolutionSettings_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__DontApplyResolutionSettings_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.ReturnToGame
struct UWB_SettingsMenu_C_ReturnToGame_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.LoadInputSettings
struct UWB_SettingsMenu_C_LoadInputSettings_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.LoadSettings
struct UWB_SettingsMenu_C_LoadSettings_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.SetVolumeSliders
struct UWB_SettingsMenu_C_SetVolumeSliders_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.SetPlayerSettings
struct UWB_SettingsMenu_C_SetPlayerSettings_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__AmbientVolumeSlider_K2Node_ComponentBoundEvent_48_OnMouseCaptureEndEvent__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__AmbientVolumeSlider_K2Node_ComponentBoundEvent_48_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__CharacterVolumeSlider_K2Node_ComponentBoundEvent_49_OnMouseCaptureEndEvent__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__CharacterVolumeSlider_K2Node_ComponentBoundEvent_49_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_50_OnMouseCaptureEndEvent__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_50_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_52_OnMouseCaptureEndEvent__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_52_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WeaponVolumeSlider_K2Node_ComponentBoundEvent_53_OnMouseCaptureEndEvent__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WeaponVolumeSlider_K2Node_ComponentBoundEvent_53_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.OnKeyPressed
struct UWB_SettingsMenu_C_OnKeyPressed_Params
{
	struct FString                                     Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.LoadSettingsWidget
struct UWB_SettingsMenu_C_LoadSettingsWidget_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.UpdateAxisMapping
struct UWB_SettingsMenu_C_UpdateAxisMapping_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.OnButtonHovered
struct UWB_SettingsMenu_C_OnButtonHovered_Params
{
	class UButton*                                     Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.OnButtonUnhovered
struct UWB_SettingsMenu_C_OnButtonUnhovered_Params
{
	class UButton*                                     Button;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.Update Selected
struct UWB_SettingsMenu_C_Update_Selected_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.Destruct
struct UWB_SettingsMenu_C_Destruct_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Video_K2Node_ComponentBoundEvent_70_Clicked__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Btn_Video_K2Node_ComponentBoundEvent_70_Clicked__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_MnK_K2Node_ComponentBoundEvent_71_Clicked__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Btn_MnK_K2Node_ComponentBoundEvent_71_Clicked__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Audio_K2Node_ComponentBoundEvent_72_Clicked__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Btn_Audio_K2Node_ComponentBoundEvent_72_Clicked__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Crosshair_K2Node_ComponentBoundEvent_73_Clicked__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Btn_Crosshair_K2Node_ComponentBoundEvent_73_Clicked__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_74_Clicked__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_74_Clicked__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Reset_K2Node_ComponentBoundEvent_75_Clicked__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Btn_Reset_K2Node_ComponentBoundEvent_75_Clicked__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Apply_K2Node_ComponentBoundEvent_76_Clicked__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Btn_Apply_K2Node_ComponentBoundEvent_76_Clicked__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Accept_K2Node_ComponentBoundEvent_77_Clicked__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Btn_Accept_K2Node_ComponentBoundEvent_77_Clicked__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_DropMenu_Resolution_K2Node_ComponentBoundEvent_1_DropBox_SelectionChange__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_DropMenu_Resolution_K2Node_ComponentBoundEvent_1_DropBox_SelectionChange__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_DropMenu_DisplayMode_K2Node_ComponentBoundEvent_3_DropBox_SelectionChange__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_DropMenu_DisplayMode_K2Node_ComponentBoundEvent_3_DropBox_SelectionChange__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_7_Binary_On__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_7_Binary_On__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_9_Binary_Off__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_9_Binary_Off__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_12_Binary_On__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_12_Binary_On__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_13_Binary_Off__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_13_Binary_Off__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_14_Binary_On__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_14_Binary_On__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_27_Binary_Off__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_27_Binary_Off__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_34_Selector_Left__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_34_Selector_Left__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_35_Selector_Right__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_35_Selector_Right__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Slider_ResScale_K2Node_ComponentBoundEvent_56_Slider_OnValueChange__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Slider_ResScale_K2Node_ComponentBoundEvent_56_Slider_OnValueChange__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_57_Selector_Left__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_57_Selector_Left__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_58_Selector_Right__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_58_Selector_Right__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_59_Selector_Left__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_59_Selector_Left__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_60_Selector_Right__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_60_Selector_Right__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.RefreshWidgets
struct UWB_SettingsMenu_C_RefreshWidgets_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_61_Selector_Left__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_61_Selector_Left__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_62_Selector_Right__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_62_Selector_Right__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_63_Selector_Left__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_63_Selector_Left__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_64_Selector_Right__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_64_Selector_Right__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_65_Selector_Left__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_65_Selector_Left__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_66_Selector_Right__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_66_Selector_Right__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_67_Selector_Right__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_67_Selector_Right__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_68_Selector_Left__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_68_Selector_Left__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_DynamicRes_1_K2Node_ComponentBoundEvent_69_Binary_On__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_DynamicRes_1_K2Node_ComponentBoundEvent_69_Binary_On__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_HDR_K2Node_ComponentBoundEvent_78_Binary_Off__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_HDR_K2Node_ComponentBoundEvent_78_Binary_Off__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_79_Selector_Right__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_79_Selector_Right__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_80_Selector_Left__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_80_Selector_Left__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_81_Selector_Right__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_81_Selector_Right__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_82_Selector_Left__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_82_Selector_Left__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Slider_ResScale_1_K2Node_ComponentBoundEvent_83_Slider_CaptureEnd__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Slider_ResScale_1_K2Node_ComponentBoundEvent_83_Slider_CaptureEnd__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_84_Slider_OnValueChange__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_84_Slider_OnValueChange__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_85_Binary_On__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_85_Binary_On__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_86_Binary_Off__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_86_Binary_Off__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_87_Binary_On__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_87_Binary_On__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_88_Binary_Off__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_88_Binary_Off__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.SaveSoundSettings
struct UWB_SettingsMenu_C_SaveSoundSettings_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Slider_MasterVolume_K2Node_ComponentBoundEvent_89_Slider_OnValueChange__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Slider_MasterVolume_K2Node_ComponentBoundEvent_89_Slider_OnValueChange__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_94_Selector_Right__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_94_Selector_Right__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_95_Selector_Left__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_95_Selector_Left__DelegateSignature_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.Initialize Remappings
struct UWB_SettingsMenu_C_Initialize_Remappings_Params
{
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.Clear Mapping at Key
struct UWB_SettingsMenu_C_Clear_Mapping_at_Key_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__CrosshairSelectorBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
struct UWB_SettingsMenu_C_BndEvt__CrosshairSelectorBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_SettingsMenu.WB_SettingsMenu_C.ExecuteUbergraph_WB_SettingsMenu
struct UWB_SettingsMenu_C_ExecuteUbergraph_WB_SettingsMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
