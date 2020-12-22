#pragma once

// Name: AimGods, Version: Beta 2


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WB_SettingsMenu.WB_SettingsMenu_C
// 0x0310 (FullSize[0x0540] - InheritedSize[0x0230])
class UWB_SettingsMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     ApplyResolutionSettingsButton;                             // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Border_3;                                                  // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             CrosshairSelectorBox;                                      // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     DontApplyResolutionSettings;                               // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_439;                                                 // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                InputActionsHB;                                            // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             OptionsWidgetSwitcher;                                     // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_92;                                                // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Border_A_C*                              WB_Border_A;                                               // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Btn_Generic_2_C*                         WB_Btn_Accept;                                             // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Btn_Generic_2_C*                         WB_Btn_Apply;                                              // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Btn_Generic_C*                           WB_Btn_Audio;                                              // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Btn_Generic_2_C*                         WB_Btn_Back;                                               // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Btn_Generic_C*                           WB_Btn_Crosshair;                                          // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Btn_Generic_C*                           WB_Btn_MnK;                                                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Btn_Generic_2_C*                         WB_Btn_Reset;                                              // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Btn_Generic_C*                           WB_Btn_Video;                                              // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_InputRemapping_C*                        WB_InputRemapping;                                         // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_InputRemapping_C*                        WB_InputRemapping_2;                                       // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_InputRemapping_C*                        WB_InputRemapping_3;                                       // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_InputRemapping_C*                        WB_InputRemapping_4;                                       // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_InputRemapping_C*                        WB_InputRemapping_5;                                       // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_InputRemapping_C*                        WB_InputRemapping_6;                                       // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_InputRemapping_C*                        WB_InputRemapping_7;                                       // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_InputRemapping_C*                        WB_InputRemapping_8;                                       // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_InputRemapping_C*                        WB_InputRemapping_9;                                       // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_InputRemapping_C*                        WB_InputRemapping_10;                                      // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_InputRemapping_C*                        WB_InputRemapping_11;                                      // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_Binary_DynamicRes;                              // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_Binary_HDR;                                     // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_Binary_HorizontalAxis;                          // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_Binary_ShowFPS;                                 // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_Binary_VerticalAxis;                            // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_Binary_Vsync;                                   // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_Divider_C*                       WB_Setting_Divider;                                        // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_Divider_C*                       WB_Setting_Divider_2;                                      // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_Divider_C*                       WB_Setting_Divider_3;                                      // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_Divider_C*                       WB_Setting_Divider_4;                                      // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_Divider_C*                       WB_Setting_Divider_5;                                      // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_Divider_C*                       WB_Setting_Divider_7;                                      // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_Divider_C*                       WB_Setting_Divider_157;                                    // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_Divider_C*                       WB_Setting_Divider_432;                                    // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_DropMenu_DisplayMode;                           // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_DropMenu_Resolution;                            // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_Selector_AntiAlias;                             // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_Selector_AudioQuality;                          // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_Selector_Effects;                               // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_Selector_Foliage;                               // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_Selector_FrameLimit;                            // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_Selector_Overall;                               // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_Selector_PostProcessing;                        // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_Selector_Shadow;                                // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_Selector_TextureQuality;                        // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_Selector_ViewDistance;                          // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_Slider_MasterVolume;                            // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_Slider_MouseSensitivity;                        // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Setting_C*                               WB_Setting_Slider_ResScale;                                // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAGSaveGame*                                 SaveGameRef;                                               // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FrameLimit;                                                // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShowResolutionWindow;                                     // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2FGV[0x3];                                     // 0x040D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MasterVolume;                                              // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MusicVolume;                                               // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CharactersVolume;                                          // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AmbientVolume;                                             // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeaponVolume;                                              // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFps;                                                      // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8IJX[0x3];                                     // 0x0425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UWB_KeyRemap_C*>                      InputArray;                                                // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               bHorizontalInverted;                                       // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bVerticalInverted;                                         // 0x0439(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DGZ4[0x2];                                     // 0x043A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                HoveredColor;                                              // 0x043C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                HoveredTextColor;                                          // 0x044C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ButtonColor;                                               // 0x045C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                TextColor;                                                 // 0x046C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MouseSensitivity;                                          // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     MenuMapName;                                               // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<struct FKey, class UWB_InputRemapping_C*>     InputMaps;                                                 // 0x0490(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	TMap<struct FString, struct FLinearColor>          CrosshairColors;                                           // 0x04E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                CrosshairColor;                                            // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_SettingsMenu.WB_SettingsMenu_C");
		return ptr;
	}


	bool Get_ResetDefaultsButton_bIsEnabled_1();
	struct FText GetViewDistance();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FText GetMouseSnsitivitySliderToolTipText();
	ESlateVisibility GetResolutionWindowVisibility();
	struct FText GetHDRHBToolTipText();
	bool GetHDRHBIsEnabled();
	bool GetLessOverallQualityIsEnabled();
	bool GetMoreOverallQualityIsEnabled();
	struct FText GetOverallQuality();
	void GenerateSuportedResolutionsComboBox();
	struct FText GetFullscreenMode();
	struct FText GetResolutionScaleSliderToolTipText();
	float GetResolutionScaleSliderValue();
	bool GetLessFrameLimitIsEnabled();
	bool GetMoreFrameLimitIsEnabled();
	struct FText GetFrameRateLimit();
	bool GetLessAudioQualityIsEnabled();
	bool GetMoreAudioQualityIsEnabled();
	struct FText GetAudioQuality();
	bool GetMoreVisualEffectsIsEnabled();
	bool GetLessVisualEffectsIsEnabled();
	struct FText GetVisualEffectsQuality();
	bool GetLessViewDistanceIsEnabled();
	bool GetMoreViewDistancebIsEnabled();
	struct FText GetFoliageQuality();
	bool GetLessFoliageIsEnabled();
	bool GetMoreFoliageIsEnabled();
	bool GetLessPostProcessingIsEnabled();
	bool GetMorePostProcessingIsEnabled();
	struct FText GetPostProcessingQuality();
	struct FText GetAntiAliasingQuality();
	bool GetLessAntiAliasingIsEnabled();
	bool GetMoreAntiAliasingIsEnabled();
	bool GetLessTextureQualityIsEnabled();
	bool GetMoreTextureQualityIsEnabled();
	struct FText GetTextureQuality();
	bool GetLessShadowQualityIsEnable();
	bool GetMoreShadowQualityIsEnable();
	void GetSettingLevelText(int SettingLevel, struct FText* SettingLevelText);
	struct FText GetShadowQuality();
	void SetButtonBackGround(class UButton* Button, bool bPressed);
	void BndEvt__ShowFpsCB_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void Construct();
	void InitialSetup();
	void BndEvt__ApplyResolutionSettingsButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature();
	void ApplyNoResolutionSettingsOnly();
	void ApplySettings();
	void BndEvt__DontApplyResolutionSettings_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature();
	void ReturnToGame();
	void LoadInputSettings();
	void LoadSettings();
	void SetVolumeSliders();
	void SetPlayerSettings();
	void BndEvt__AmbientVolumeSlider_K2Node_ComponentBoundEvent_48_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__CharacterVolumeSlider_K2Node_ComponentBoundEvent_49_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_50_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_52_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__WeaponVolumeSlider_K2Node_ComponentBoundEvent_53_OnMouseCaptureEndEvent__DelegateSignature();
	void OnKeyPressed(const struct FString& Key);
	void LoadSettingsWidget();
	void UpdateAxisMapping();
	void OnButtonHovered(class UButton* Button, class UTextBlock* Text);
	void OnButtonUnhovered(class UButton* Button, class UTextBlock* Text);
	void Update_Selected();
	void Destruct();
	void BndEvt__WB_Btn_Video_K2Node_ComponentBoundEvent_70_Clicked__DelegateSignature();
	void BndEvt__WB_Btn_MnK_K2Node_ComponentBoundEvent_71_Clicked__DelegateSignature();
	void BndEvt__WB_Btn_Audio_K2Node_ComponentBoundEvent_72_Clicked__DelegateSignature();
	void BndEvt__WB_Btn_Crosshair_K2Node_ComponentBoundEvent_73_Clicked__DelegateSignature();
	void BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_74_Clicked__DelegateSignature();
	void BndEvt__WB_Btn_Reset_K2Node_ComponentBoundEvent_75_Clicked__DelegateSignature();
	void BndEvt__WB_Btn_Apply_K2Node_ComponentBoundEvent_76_Clicked__DelegateSignature();
	void BndEvt__WB_Btn_Accept_K2Node_ComponentBoundEvent_77_Clicked__DelegateSignature();
	void BndEvt__WB_Setting_DropMenu_Resolution_K2Node_ComponentBoundEvent_1_DropBox_SelectionChange__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void BndEvt__WB_Setting_DropMenu_DisplayMode_K2Node_ComponentBoundEvent_3_DropBox_SelectionChange__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_7_Binary_On__DelegateSignature();
	void BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_9_Binary_Off__DelegateSignature();
	void BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_12_Binary_On__DelegateSignature();
	void BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_13_Binary_Off__DelegateSignature();
	void BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_14_Binary_On__DelegateSignature();
	void BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_27_Binary_Off__DelegateSignature();
	void BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_34_Selector_Left__DelegateSignature();
	void BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_35_Selector_Right__DelegateSignature();
	void BndEvt__WB_Setting_Slider_ResScale_K2Node_ComponentBoundEvent_56_Slider_OnValueChange__DelegateSignature(float Value);
	void BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_57_Selector_Left__DelegateSignature();
	void BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_58_Selector_Right__DelegateSignature();
	void BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_59_Selector_Left__DelegateSignature();
	void BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_60_Selector_Right__DelegateSignature();
	void RefreshWidgets();
	void BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_61_Selector_Left__DelegateSignature();
	void BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_62_Selector_Right__DelegateSignature();
	void BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_63_Selector_Left__DelegateSignature();
	void BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_64_Selector_Right__DelegateSignature();
	void BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_65_Selector_Left__DelegateSignature();
	void BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_66_Selector_Right__DelegateSignature();
	void BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_67_Selector_Right__DelegateSignature();
	void BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_68_Selector_Left__DelegateSignature();
	void BndEvt__WB_Setting_Binary_DynamicRes_1_K2Node_ComponentBoundEvent_69_Binary_On__DelegateSignature();
	void BndEvt__WB_Setting_Binary_HDR_K2Node_ComponentBoundEvent_78_Binary_Off__DelegateSignature();
	void BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_79_Selector_Right__DelegateSignature();
	void BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_80_Selector_Left__DelegateSignature();
	void BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_81_Selector_Right__DelegateSignature();
	void BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_82_Selector_Left__DelegateSignature();
	void BndEvt__WB_Setting_Slider_ResScale_1_K2Node_ComponentBoundEvent_83_Slider_CaptureEnd__DelegateSignature();
	void BndEvt__WB_Setting_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_84_Slider_OnValueChange__DelegateSignature(float Value);
	void BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_85_Binary_On__DelegateSignature();
	void BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_86_Binary_Off__DelegateSignature();
	void BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_87_Binary_On__DelegateSignature();
	void BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_88_Binary_Off__DelegateSignature();
	void SaveSoundSettings();
	void BndEvt__WB_Setting_Slider_MasterVolume_K2Node_ComponentBoundEvent_89_Slider_OnValueChange__DelegateSignature(float Value);
	void BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_94_Selector_Right__DelegateSignature();
	void BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_95_Selector_Left__DelegateSignature();
	void Initialize_Remappings();
	void Clear_Mapping_at_Key(const struct FKey& Key);
	void BndEvt__CrosshairSelectorBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void ExecuteUbergraph_WB_SettingsMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
