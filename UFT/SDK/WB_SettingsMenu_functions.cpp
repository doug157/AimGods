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
// Functions
//---------------------------------------------------------------------------

// Function WB_SettingsMenu.WB_SettingsMenu_C.Get_ResetDefaultsButton_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::Get_ResetDefaultsButton_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.Get_ResetDefaultsButton_bIsEnabled_1");

	UWB_SettingsMenu_C_Get_ResetDefaultsButton_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetViewDistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_SettingsMenu_C::GetViewDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetViewDistance");

	UWB_SettingsMenu_C_GetViewDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWB_SettingsMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.OnKeyDown");

	UWB_SettingsMenu_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMouseSnsitivitySliderToolTipText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_SettingsMenu_C::GetMouseSnsitivitySliderToolTipText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetMouseSnsitivitySliderToolTipText");

	UWB_SettingsMenu_C_GetMouseSnsitivitySliderToolTipText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetResolutionWindowVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWB_SettingsMenu_C::GetResolutionWindowVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetResolutionWindowVisibility");

	UWB_SettingsMenu_C_GetResolutionWindowVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetHDRHBToolTipText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_SettingsMenu_C::GetHDRHBToolTipText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetHDRHBToolTipText");

	UWB_SettingsMenu_C_GetHDRHBToolTipText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetHDRHBIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetHDRHBIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetHDRHBIsEnabled");

	UWB_SettingsMenu_C_GetHDRHBIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessOverallQualityIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetLessOverallQualityIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessOverallQualityIsEnabled");

	UWB_SettingsMenu_C_GetLessOverallQualityIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreOverallQualityIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetMoreOverallQualityIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreOverallQualityIsEnabled");

	UWB_SettingsMenu_C_GetMoreOverallQualityIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetOverallQuality
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_SettingsMenu_C::GetOverallQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetOverallQuality");

	UWB_SettingsMenu_C_GetOverallQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GenerateSuportedResolutionsComboBox
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_SettingsMenu_C::GenerateSuportedResolutionsComboBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GenerateSuportedResolutionsComboBox");

	UWB_SettingsMenu_C_GenerateSuportedResolutionsComboBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetFullscreenMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_SettingsMenu_C::GetFullscreenMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetFullscreenMode");

	UWB_SettingsMenu_C_GetFullscreenMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetResolutionScaleSliderToolTipText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_SettingsMenu_C::GetResolutionScaleSliderToolTipText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetResolutionScaleSliderToolTipText");

	UWB_SettingsMenu_C_GetResolutionScaleSliderToolTipText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetResolutionScaleSliderValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWB_SettingsMenu_C::GetResolutionScaleSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetResolutionScaleSliderValue");

	UWB_SettingsMenu_C_GetResolutionScaleSliderValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessFrameLimitIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetLessFrameLimitIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessFrameLimitIsEnabled");

	UWB_SettingsMenu_C_GetLessFrameLimitIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreFrameLimitIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetMoreFrameLimitIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreFrameLimitIsEnabled");

	UWB_SettingsMenu_C_GetMoreFrameLimitIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetFrameRateLimit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_SettingsMenu_C::GetFrameRateLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetFrameRateLimit");

	UWB_SettingsMenu_C_GetFrameRateLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessAudioQualityIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetLessAudioQualityIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessAudioQualityIsEnabled");

	UWB_SettingsMenu_C_GetLessAudioQualityIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreAudioQualityIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetMoreAudioQualityIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreAudioQualityIsEnabled");

	UWB_SettingsMenu_C_GetMoreAudioQualityIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetAudioQuality
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_SettingsMenu_C::GetAudioQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetAudioQuality");

	UWB_SettingsMenu_C_GetAudioQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreVisualEffectsIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetMoreVisualEffectsIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreVisualEffectsIsEnabled");

	UWB_SettingsMenu_C_GetMoreVisualEffectsIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessVisualEffectsIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetLessVisualEffectsIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessVisualEffectsIsEnabled");

	UWB_SettingsMenu_C_GetLessVisualEffectsIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetVisualEffectsQuality
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_SettingsMenu_C::GetVisualEffectsQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetVisualEffectsQuality");

	UWB_SettingsMenu_C_GetVisualEffectsQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessViewDistanceIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetLessViewDistanceIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessViewDistanceIsEnabled");

	UWB_SettingsMenu_C_GetLessViewDistanceIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreViewDistancebIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetMoreViewDistancebIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreViewDistancebIsEnabled");

	UWB_SettingsMenu_C_GetMoreViewDistancebIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetFoliageQuality
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_SettingsMenu_C::GetFoliageQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetFoliageQuality");

	UWB_SettingsMenu_C_GetFoliageQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessFoliageIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetLessFoliageIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessFoliageIsEnabled");

	UWB_SettingsMenu_C_GetLessFoliageIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreFoliageIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetMoreFoliageIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreFoliageIsEnabled");

	UWB_SettingsMenu_C_GetMoreFoliageIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessPostProcessingIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetLessPostProcessingIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessPostProcessingIsEnabled");

	UWB_SettingsMenu_C_GetLessPostProcessingIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMorePostProcessingIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetMorePostProcessingIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetMorePostProcessingIsEnabled");

	UWB_SettingsMenu_C_GetMorePostProcessingIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetPostProcessingQuality
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_SettingsMenu_C::GetPostProcessingQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetPostProcessingQuality");

	UWB_SettingsMenu_C_GetPostProcessingQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetAntiAliasingQuality
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_SettingsMenu_C::GetAntiAliasingQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetAntiAliasingQuality");

	UWB_SettingsMenu_C_GetAntiAliasingQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessAntiAliasingIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetLessAntiAliasingIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessAntiAliasingIsEnabled");

	UWB_SettingsMenu_C_GetLessAntiAliasingIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreAntiAliasingIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetMoreAntiAliasingIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreAntiAliasingIsEnabled");

	UWB_SettingsMenu_C_GetMoreAntiAliasingIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessTextureQualityIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetLessTextureQualityIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessTextureQualityIsEnabled");

	UWB_SettingsMenu_C_GetLessTextureQualityIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreTextureQualityIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetMoreTextureQualityIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreTextureQualityIsEnabled");

	UWB_SettingsMenu_C_GetMoreTextureQualityIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetTextureQuality
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_SettingsMenu_C::GetTextureQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetTextureQuality");

	UWB_SettingsMenu_C_GetTextureQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessShadowQualityIsEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetLessShadowQualityIsEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetLessShadowQualityIsEnable");

	UWB_SettingsMenu_C_GetLessShadowQualityIsEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreShadowQualityIsEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_SettingsMenu_C::GetMoreShadowQualityIsEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetMoreShadowQualityIsEnable");

	UWB_SettingsMenu_C_GetMoreShadowQualityIsEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetSettingLevelText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SettingLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   SettingLevelText               (Parm, OutParm)
void UWB_SettingsMenu_C::GetSettingLevelText(int SettingLevel, struct FText* SettingLevelText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetSettingLevelText");

	UWB_SettingsMenu_C_GetSettingLevelText_Params params;
	params.SettingLevel = SettingLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SettingLevelText != nullptr)
		*SettingLevelText = params.SettingLevelText;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.GetShadowQuality
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_SettingsMenu_C::GetShadowQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.GetShadowQuality");

	UWB_SettingsMenu_C_GetShadowQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_SettingsMenu.WB_SettingsMenu_C.SetButtonBackGround
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bPressed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_SettingsMenu_C::SetButtonBackGround(class UButton* Button, bool bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.SetButtonBackGround");

	UWB_SettingsMenu_C_SetButtonBackGround_Params params;
	params.Button = Button;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__ShowFpsCB_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_SettingsMenu_C::BndEvt__ShowFpsCB_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__ShowFpsCB_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__ShowFpsCB_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_SettingsMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.Construct");

	UWB_SettingsMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.InitialSetup
// (BlueprintCallable, BlueprintEvent)
void UWB_SettingsMenu_C::InitialSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.InitialSetup");

	UWB_SettingsMenu_C_InitialSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__ApplyResolutionSettingsButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__ApplyResolutionSettingsButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__ApplyResolutionSettingsButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__ApplyResolutionSettingsButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.ApplyNoResolutionSettingsOnly
// (BlueprintCallable, BlueprintEvent)
void UWB_SettingsMenu_C::ApplyNoResolutionSettingsOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.ApplyNoResolutionSettingsOnly");

	UWB_SettingsMenu_C_ApplyNoResolutionSettingsOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.ApplySettings
// (BlueprintCallable, BlueprintEvent)
void UWB_SettingsMenu_C::ApplySettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.ApplySettings");

	UWB_SettingsMenu_C_ApplySettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__DontApplyResolutionSettings_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__DontApplyResolutionSettings_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__DontApplyResolutionSettings_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__DontApplyResolutionSettings_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.ReturnToGame
// (BlueprintCallable, BlueprintEvent)
void UWB_SettingsMenu_C::ReturnToGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.ReturnToGame");

	UWB_SettingsMenu_C_ReturnToGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.LoadInputSettings
// (BlueprintCallable, BlueprintEvent)
void UWB_SettingsMenu_C::LoadInputSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.LoadInputSettings");

	UWB_SettingsMenu_C_LoadInputSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.LoadSettings
// (BlueprintCallable, BlueprintEvent)
void UWB_SettingsMenu_C::LoadSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.LoadSettings");

	UWB_SettingsMenu_C_LoadSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.SetVolumeSliders
// (BlueprintCallable, BlueprintEvent)
void UWB_SettingsMenu_C::SetVolumeSliders()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.SetVolumeSliders");

	UWB_SettingsMenu_C_SetVolumeSliders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.SetPlayerSettings
// (BlueprintCallable, BlueprintEvent)
void UWB_SettingsMenu_C::SetPlayerSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.SetPlayerSettings");

	UWB_SettingsMenu_C_SetPlayerSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__AmbientVolumeSlider_K2Node_ComponentBoundEvent_48_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__AmbientVolumeSlider_K2Node_ComponentBoundEvent_48_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__AmbientVolumeSlider_K2Node_ComponentBoundEvent_48_OnMouseCaptureEndEvent__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__AmbientVolumeSlider_K2Node_ComponentBoundEvent_48_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__CharacterVolumeSlider_K2Node_ComponentBoundEvent_49_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__CharacterVolumeSlider_K2Node_ComponentBoundEvent_49_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__CharacterVolumeSlider_K2Node_ComponentBoundEvent_49_OnMouseCaptureEndEvent__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__CharacterVolumeSlider_K2Node_ComponentBoundEvent_49_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_50_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_50_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_50_OnMouseCaptureEndEvent__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_50_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_52_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_52_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_52_OnMouseCaptureEndEvent__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_52_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WeaponVolumeSlider_K2Node_ComponentBoundEvent_53_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WeaponVolumeSlider_K2Node_ComponentBoundEvent_53_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WeaponVolumeSlider_K2Node_ComponentBoundEvent_53_OnMouseCaptureEndEvent__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WeaponVolumeSlider_K2Node_ComponentBoundEvent_53_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.OnKeyPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_SettingsMenu_C::OnKeyPressed(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.OnKeyPressed");

	UWB_SettingsMenu_C_OnKeyPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.LoadSettingsWidget
// (BlueprintCallable, BlueprintEvent)
void UWB_SettingsMenu_C::LoadSettingsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.LoadSettingsWidget");

	UWB_SettingsMenu_C_LoadSettingsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.UpdateAxisMapping
// (BlueprintCallable, BlueprintEvent)
void UWB_SettingsMenu_C::UpdateAxisMapping()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.UpdateAxisMapping");

	UWB_SettingsMenu_C_UpdateAxisMapping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.OnButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_SettingsMenu_C::OnButtonHovered(class UButton* Button, class UTextBlock* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.OnButtonHovered");

	UWB_SettingsMenu_C_OnButtonHovered_Params params;
	params.Button = Button;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.OnButtonUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_SettingsMenu_C::OnButtonUnhovered(class UButton* Button, class UTextBlock* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.OnButtonUnhovered");

	UWB_SettingsMenu_C_OnButtonUnhovered_Params params;
	params.Button = Button;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.Update Selected
// (BlueprintCallable, BlueprintEvent)
void UWB_SettingsMenu_C::Update_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.Update Selected");

	UWB_SettingsMenu_C_Update_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_SettingsMenu_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.Destruct");

	UWB_SettingsMenu_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Video_K2Node_ComponentBoundEvent_70_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Btn_Video_K2Node_ComponentBoundEvent_70_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Video_K2Node_ComponentBoundEvent_70_Clicked__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Btn_Video_K2Node_ComponentBoundEvent_70_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_MnK_K2Node_ComponentBoundEvent_71_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Btn_MnK_K2Node_ComponentBoundEvent_71_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_MnK_K2Node_ComponentBoundEvent_71_Clicked__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Btn_MnK_K2Node_ComponentBoundEvent_71_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Audio_K2Node_ComponentBoundEvent_72_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Btn_Audio_K2Node_ComponentBoundEvent_72_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Audio_K2Node_ComponentBoundEvent_72_Clicked__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Btn_Audio_K2Node_ComponentBoundEvent_72_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Crosshair_K2Node_ComponentBoundEvent_73_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Btn_Crosshair_K2Node_ComponentBoundEvent_73_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Crosshair_K2Node_ComponentBoundEvent_73_Clicked__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Btn_Crosshair_K2Node_ComponentBoundEvent_73_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_74_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_74_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_74_Clicked__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_74_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Reset_K2Node_ComponentBoundEvent_75_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Btn_Reset_K2Node_ComponentBoundEvent_75_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Reset_K2Node_ComponentBoundEvent_75_Clicked__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Btn_Reset_K2Node_ComponentBoundEvent_75_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Apply_K2Node_ComponentBoundEvent_76_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Btn_Apply_K2Node_ComponentBoundEvent_76_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Apply_K2Node_ComponentBoundEvent_76_Clicked__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Btn_Apply_K2Node_ComponentBoundEvent_76_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Accept_K2Node_ComponentBoundEvent_77_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Btn_Accept_K2Node_ComponentBoundEvent_77_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Btn_Accept_K2Node_ComponentBoundEvent_77_Clicked__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Btn_Accept_K2Node_ComponentBoundEvent_77_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_DropMenu_Resolution_K2Node_ComponentBoundEvent_1_DropBox_SelectionChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_DropMenu_Resolution_K2Node_ComponentBoundEvent_1_DropBox_SelectionChange__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_DropMenu_Resolution_K2Node_ComponentBoundEvent_1_DropBox_SelectionChange__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_DropMenu_Resolution_K2Node_ComponentBoundEvent_1_DropBox_SelectionChange__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_DropMenu_DisplayMode_K2Node_ComponentBoundEvent_3_DropBox_SelectionChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_DropMenu_DisplayMode_K2Node_ComponentBoundEvent_3_DropBox_SelectionChange__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_DropMenu_DisplayMode_K2Node_ComponentBoundEvent_3_DropBox_SelectionChange__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_DropMenu_DisplayMode_K2Node_ComponentBoundEvent_3_DropBox_SelectionChange__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_7_Binary_On__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_7_Binary_On__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_7_Binary_On__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_7_Binary_On__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_9_Binary_Off__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_9_Binary_Off__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_9_Binary_Off__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_Vsync_K2Node_ComponentBoundEvent_9_Binary_Off__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_12_Binary_On__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_12_Binary_On__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_12_Binary_On__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_12_Binary_On__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_13_Binary_Off__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_13_Binary_Off__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_13_Binary_Off__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_ShowFPS_K2Node_ComponentBoundEvent_13_Binary_Off__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_14_Binary_On__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_14_Binary_On__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_14_Binary_On__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_14_Binary_On__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_27_Binary_Off__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_27_Binary_Off__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_27_Binary_Off__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_DynamicRes_K2Node_ComponentBoundEvent_27_Binary_Off__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_34_Selector_Left__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_34_Selector_Left__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_34_Selector_Left__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_34_Selector_Left__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_35_Selector_Right__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_35_Selector_Right__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_35_Selector_Right__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_FrameLimit_K2Node_ComponentBoundEvent_35_Selector_Right__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Slider_ResScale_K2Node_ComponentBoundEvent_56_Slider_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Slider_ResScale_K2Node_ComponentBoundEvent_56_Slider_OnValueChange__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Slider_ResScale_K2Node_ComponentBoundEvent_56_Slider_OnValueChange__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Slider_ResScale_K2Node_ComponentBoundEvent_56_Slider_OnValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_57_Selector_Left__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_57_Selector_Left__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_57_Selector_Left__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_57_Selector_Left__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_58_Selector_Right__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_58_Selector_Right__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_58_Selector_Right__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_Overall_K2Node_ComponentBoundEvent_58_Selector_Right__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_59_Selector_Left__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_59_Selector_Left__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_59_Selector_Left__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_59_Selector_Left__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_60_Selector_Right__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_60_Selector_Right__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_60_Selector_Right__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_FrameLimit_1_K2Node_ComponentBoundEvent_60_Selector_Right__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.RefreshWidgets
// (BlueprintCallable, BlueprintEvent)
void UWB_SettingsMenu_C::RefreshWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.RefreshWidgets");

	UWB_SettingsMenu_C_RefreshWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_61_Selector_Left__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_61_Selector_Left__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_61_Selector_Left__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_61_Selector_Left__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_62_Selector_Right__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_62_Selector_Right__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_62_Selector_Right__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_Effects_K2Node_ComponentBoundEvent_62_Selector_Right__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_63_Selector_Left__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_63_Selector_Left__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_63_Selector_Left__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_63_Selector_Left__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_64_Selector_Right__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_64_Selector_Right__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_64_Selector_Right__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_AntiAlias_K2Node_ComponentBoundEvent_64_Selector_Right__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_65_Selector_Left__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_65_Selector_Left__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_65_Selector_Left__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_65_Selector_Left__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_66_Selector_Right__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_66_Selector_Right__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_66_Selector_Right__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_PostProcessing_K2Node_ComponentBoundEvent_66_Selector_Right__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_67_Selector_Right__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_67_Selector_Right__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_67_Selector_Right__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_67_Selector_Right__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_68_Selector_Left__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_68_Selector_Left__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_68_Selector_Left__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_Shadow_K2Node_ComponentBoundEvent_68_Selector_Left__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_DynamicRes_1_K2Node_ComponentBoundEvent_69_Binary_On__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_DynamicRes_1_K2Node_ComponentBoundEvent_69_Binary_On__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_DynamicRes_1_K2Node_ComponentBoundEvent_69_Binary_On__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_DynamicRes_1_K2Node_ComponentBoundEvent_69_Binary_On__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_HDR_K2Node_ComponentBoundEvent_78_Binary_Off__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_HDR_K2Node_ComponentBoundEvent_78_Binary_Off__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_HDR_K2Node_ComponentBoundEvent_78_Binary_Off__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_HDR_K2Node_ComponentBoundEvent_78_Binary_Off__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_79_Selector_Right__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_79_Selector_Right__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_79_Selector_Right__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_79_Selector_Right__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_80_Selector_Left__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_80_Selector_Left__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_80_Selector_Left__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_Foliage_K2Node_ComponentBoundEvent_80_Selector_Left__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_81_Selector_Right__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_81_Selector_Right__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_81_Selector_Right__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_81_Selector_Right__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_82_Selector_Left__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_82_Selector_Left__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_82_Selector_Left__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_ViewDistance_K2Node_ComponentBoundEvent_82_Selector_Left__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Slider_ResScale_1_K2Node_ComponentBoundEvent_83_Slider_CaptureEnd__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Slider_ResScale_1_K2Node_ComponentBoundEvent_83_Slider_CaptureEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Slider_ResScale_1_K2Node_ComponentBoundEvent_83_Slider_CaptureEnd__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Slider_ResScale_1_K2Node_ComponentBoundEvent_83_Slider_CaptureEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_84_Slider_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_84_Slider_OnValueChange__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_84_Slider_OnValueChange__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_84_Slider_OnValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_85_Binary_On__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_85_Binary_On__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_85_Binary_On__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_85_Binary_On__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_86_Binary_Off__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_86_Binary_Off__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_86_Binary_Off__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_Vsync_1_K2Node_ComponentBoundEvent_86_Binary_Off__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_87_Binary_On__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_87_Binary_On__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_87_Binary_On__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_87_Binary_On__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_88_Binary_Off__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_88_Binary_Off__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_88_Binary_Off__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Binary_VerticalAxis_1_K2Node_ComponentBoundEvent_88_Binary_Off__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.SaveSoundSettings
// (BlueprintCallable, BlueprintEvent)
void UWB_SettingsMenu_C::SaveSoundSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.SaveSoundSettings");

	UWB_SettingsMenu_C_SaveSoundSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Slider_MasterVolume_K2Node_ComponentBoundEvent_89_Slider_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Slider_MasterVolume_K2Node_ComponentBoundEvent_89_Slider_OnValueChange__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Slider_MasterVolume_K2Node_ComponentBoundEvent_89_Slider_OnValueChange__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Slider_MasterVolume_K2Node_ComponentBoundEvent_89_Slider_OnValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_94_Selector_Right__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_94_Selector_Right__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_94_Selector_Right__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_94_Selector_Right__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_95_Selector_Left__DelegateSignature
// (BlueprintEvent)
void UWB_SettingsMenu_C::BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_95_Selector_Left__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_95_Selector_Left__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__WB_Setting_Selector_AudioQuality_K2Node_ComponentBoundEvent_95_Selector_Left__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.Initialize Remappings
// (BlueprintCallable, BlueprintEvent)
void UWB_SettingsMenu_C::Initialize_Remappings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.Initialize Remappings");

	UWB_SettingsMenu_C_Initialize_Remappings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.Clear Mapping at Key
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_SettingsMenu_C::Clear_Mapping_at_Key(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.Clear Mapping at Key");

	UWB_SettingsMenu_C_Clear_Mapping_at_Key_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__CrosshairSelectorBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_SettingsMenu_C::BndEvt__CrosshairSelectorBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.BndEvt__CrosshairSelectorBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");

	UWB_SettingsMenu_C_BndEvt__CrosshairSelectorBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SettingsMenu.WB_SettingsMenu_C.ExecuteUbergraph_WB_SettingsMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_SettingsMenu_C::ExecuteUbergraph_WB_SettingsMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SettingsMenu.WB_SettingsMenu_C.ExecuteUbergraph_WB_SettingsMenu");

	UWB_SettingsMenu_C_ExecuteUbergraph_WB_SettingsMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
