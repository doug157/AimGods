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

// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetSliderValueNormalized
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ValueNormalized                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B03_GetSliderValueNormalized(float* ValueNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetSliderValueNormalized");

	UBPi_ButtonManager_C_B03_GetSliderValueNormalized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ValueNormalized != nullptr)
		*ValueNormalized = params.ValueNormalized;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetSliderValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B03_GetSliderValue(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetSliderValue");

	UBPi_ButtonManager_C_B03_GetSliderValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetSliderValueNormalized
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ValueNormalized                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B03_SetSliderValueNormalized(float ValueNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetSliderValueNormalized");

	UBPi_ButtonManager_C_B03_SetSliderValueNormalized_Params params;
	params.ValueNormalized = ValueNormalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B03_SetSliderValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetSliderValue");

	UBPi_ButtonManager_C_B03_SetSliderValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B04_SetScale(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetScale");

	UBPi_ButtonManager_C_B04_SetScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_GetScale_Clicked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B04_GetScale_Clicked(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B04_GetScale_Clicked");

	UBPi_ButtonManager_C_B04_GetScale_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_GetScale_Hovered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B04_GetScale_Hovered(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B04_GetScale_Hovered");

	UBPi_ButtonManager_C_B04_GetScale_Hovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_GetImage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Image_Brush                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               Image_Translation              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B04_GetImage(class UObject** Image_Brush, struct FVector2D* Image_Translation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B04_GetImage");

	UBPi_ButtonManager_C_B04_GetImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Image_Brush != nullptr)
		*Image_Brush = params.Image_Brush;
	if (Image_Translation != nullptr)
		*Image_Translation = params.Image_Translation;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetVignetteColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            VignetteColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B04_SetVignetteColor(const struct FLinearColor& VignetteColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetVignetteColor");

	UBPi_ButtonManager_C_B04_SetVignetteColor_Params params;
	params.VignetteColor = VignetteColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Disabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            ImageColor_Disabled            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Saturation_Disabled            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B04_SetImageColor_Disabled(const struct FLinearColor& ImageColor_Disabled, float Saturation_Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Disabled");

	UBPi_ButtonManager_C_B04_SetImageColor_Disabled_Params params;
	params.ImageColor_Disabled = ImageColor_Disabled;
	params.Saturation_Disabled = Saturation_Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            ImageColor_Clicked             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Saturation_Clicked             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B04_SetImageColor_Clicked(const struct FLinearColor& ImageColor_Clicked, float Saturation_Clicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Clicked");

	UBPi_ButtonManager_C_B04_SetImageColor_Clicked_Params params;
	params.ImageColor_Clicked = ImageColor_Clicked;
	params.Saturation_Clicked = Saturation_Clicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            ImageColor_Hovered             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Saturation_Hovered             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B04_SetImageColor_Hovered(const struct FLinearColor& ImageColor_Hovered, float Saturation_Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Hovered");

	UBPi_ButtonManager_C_B04_SetImageColor_Hovered_Params params;
	params.ImageColor_Hovered = ImageColor_Hovered;
	params.Saturation_Hovered = Saturation_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            ImageColor_Normal              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Saturation_Normal              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B04_SetImageColor_Normal(const struct FLinearColor& ImageColor_Normal, float Saturation_Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImageColor_Normal");

	UBPi_ButtonManager_C_B04_SetImageColor_Normal_Params params;
	params.ImageColor_Normal = ImageColor_Normal;
	params.Saturation_Normal = Saturation_Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ImageBrush                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               ImageTranslation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B04_SetImage(class UObject* ImageBrush, const struct FVector2D& ImageTranslation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetImage");

	UBPi_ButtonManager_C_B04_SetImage_Params params;
	params.ImageBrush = ImageBrush;
	params.ImageTranslation = ImageTranslation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_RemoveContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
void UBPi_ButtonManager_C::B04_RemoveContentWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B04_RemoveContentWidget");

	UBPi_ButtonManager_C_B04_RemoveContentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_CreateContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ContentWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B04_CreateContentWidget(class UClass* ContentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B04_CreateContentWidget");

	UBPi_ButtonManager_C_B04_CreateContentWidget_Params params;
	params.ContentWidget = ContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetShineFxEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsEnabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPi_ButtonManager_C::B04_SetShineFxEnabled(bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetShineFxEnabled");

	UBPi_ButtonManager_C_B04_SetShineFxEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Current
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FrameColor1                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            FrameColor2                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            FrameColor_Shine               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ShineFxColor_Background        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ShineFxColor_Small             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ShineFxColor_Big               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B04_SetFrameColor_Current(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Current");

	UBPi_ButtonManager_C_B04_SetFrameColor_Current_Params params;
	params.FrameColor1 = FrameColor1;
	params.FrameColor2 = FrameColor2;
	params.FrameColor_Shine = FrameColor_Shine;
	params.ShineFxColor_Background = ShineFxColor_Background;
	params.ShineFxColor_Small = ShineFxColor_Small;
	params.ShineFxColor_Big = ShineFxColor_Big;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Disabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FrameColor1                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            FrameColor2                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            FrameColor_Shine               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B04_SetFrameColor_Disabled(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Disabled");

	UBPi_ButtonManager_C_B04_SetFrameColor_Disabled_Params params;
	params.FrameColor1 = FrameColor1;
	params.FrameColor2 = FrameColor2;
	params.FrameColor_Shine = FrameColor_Shine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FrameColor1                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            FrameColor2                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            FrameColor_Shine               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ShineFxColor_Background        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ShineFxColor_Small             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ShineFxColor_Big               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B04_SetFrameColor_Clicked(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Clicked");

	UBPi_ButtonManager_C_B04_SetFrameColor_Clicked_Params params;
	params.FrameColor1 = FrameColor1;
	params.FrameColor2 = FrameColor2;
	params.FrameColor_Shine = FrameColor_Shine;
	params.ShineFxColor_Background = ShineFxColor_Background;
	params.ShineFxColor_Small = ShineFxColor_Small;
	params.ShineFxColor_Big = ShineFxColor_Big;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FrameColor1                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            FrameColor2                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            FrameColor_Shine               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ShineFxColor_Background        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ShineFxColor_Small             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ShineFxColor_Big               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B04_SetFrameColor_Hovered(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Hovered");

	UBPi_ButtonManager_C_B04_SetFrameColor_Hovered_Params params;
	params.FrameColor1 = FrameColor1;
	params.FrameColor2 = FrameColor2;
	params.FrameColor_Shine = FrameColor_Shine;
	params.ShineFxColor_Background = ShineFxColor_Background;
	params.ShineFxColor_Small = ShineFxColor_Small;
	params.ShineFxColor_Big = ShineFxColor_Big;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FrameColor1                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            FrameColor2                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            FrameColor_Shine               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ShineFxColor_Background        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ShineFxColor_Small             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ShineFxColor_Big               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B04_SetFrameColor_Normal(const struct FLinearColor& FrameColor1, const struct FLinearColor& FrameColor2, const struct FLinearColor& FrameColor_Shine, const struct FLinearColor& ShineFxColor_Background, const struct FLinearColor& ShineFxColor_Small, const struct FLinearColor& ShineFxColor_Big)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B04_SetFrameColor_Normal");

	UBPi_ButtonManager_C_B04_SetFrameColor_Normal_Params params;
	params.FrameColor1 = FrameColor1;
	params.FrameColor2 = FrameColor2;
	params.FrameColor_Shine = FrameColor_Shine;
	params.ShineFxColor_Background = ShineFxColor_Background;
	params.ShineFxColor_Small = ShineFxColor_Small;
	params.ShineFxColor_Big = ShineFxColor_Big;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_RemoveContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
void UBPi_ButtonManager_C::B03_RemoveContentWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_RemoveContentWidget");

	UBPi_ButtonManager_C_B03_RemoveContentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_CreateContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ContentWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B03_CreateContentWidget(class UClass* ContentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_CreateContentWidget");

	UBPi_ButtonManager_C_B03_CreateContentWidget_Params params;
	params.ContentWidget = ContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetKeyEscapeKeys
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESelectedKey>      Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>            EscapeKeys                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UBPi_ButtonManager_C::B03_SetKeyEscapeKeys(TEnumAsByte<ESelectedKey> Key, TArray<struct FKey> EscapeKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetKeyEscapeKeys");

	UBPi_ButtonManager_C_B03_SetKeyEscapeKeys_Params params;
	params.Key = Key;
	params.EscapeKeys = EscapeKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetKeyEscapeKeys
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESelectedKey>      Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>            EscapeKeys                     (Parm, OutParm, ZeroConstructor)
void UBPi_ButtonManager_C::B03_GetKeyEscapeKeys(TEnumAsByte<ESelectedKey> Key, TArray<struct FKey>* EscapeKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetKeyEscapeKeys");

	UBPi_ButtonManager_C_B03_GetKeyEscapeKeys_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EscapeKeys != nullptr)
		*EscapeKeys = params.EscapeKeys;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetAllowModifierKeys
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESelectedKey>      Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bAllowModifierKeys             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPi_ButtonManager_C::B03_GetAllowModifierKeys(TEnumAsByte<ESelectedKey> Key, bool* bAllowModifierKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetAllowModifierKeys");

	UBPi_ButtonManager_C_B03_GetAllowModifierKeys_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAllowModifierKeys != nullptr)
		*bAllowModifierKeys = params.bAllowModifierKeys;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetAllowModifierKeys
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESelectedKey>      Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bAllowModifierKeys             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPi_ButtonManager_C::B03_SetAllowModifierKeys(TEnumAsByte<ESelectedKey> Key, bool bAllowModifierKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetAllowModifierKeys");

	UBPi_ButtonManager_C_B03_SetAllowModifierKeys_Params params;
	params.Key = Key;
	params.bAllowModifierKeys = bAllowModifierKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetAllowGamepadKeys
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESelectedKey>      Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bAllowGamepadKeys              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPi_ButtonManager_C::B03_GetAllowGamepadKeys(TEnumAsByte<ESelectedKey> Key, bool* bAllowGamepadKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetAllowGamepadKeys");

	UBPi_ButtonManager_C_B03_GetAllowGamepadKeys_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bAllowGamepadKeys != nullptr)
		*bAllowGamepadKeys = params.bAllowGamepadKeys;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetAllowGamepadKeys
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESelectedKey>      Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bAllowGamepadKeys              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPi_ButtonManager_C::B03_SetAllowGamepadKeys(TEnumAsByte<ESelectedKey> Key, bool bAllowGamepadKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetAllowGamepadKeys");

	UBPi_ButtonManager_C_B03_SetAllowGamepadKeys_Params params;
	params.Key = Key;
	params.bAllowGamepadKeys = bAllowGamepadKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetKeySelectionText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESelectedKey>      Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   KeySelectionText               (Parm, OutParm)
void UBPi_ButtonManager_C::B03_GetKeySelectionText(TEnumAsByte<ESelectedKey> Key, struct FText* KeySelectionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetKeySelectionText");

	UBPi_ButtonManager_C_B03_GetKeySelectionText_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (KeySelectionText != nullptr)
		*KeySelectionText = params.KeySelectionText;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetKeySelectionText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESelectedKey>      Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   KeySelectionText               (BlueprintVisible, BlueprintReadOnly, Parm)
void UBPi_ButtonManager_C::B03_SetKeySelectionText(TEnumAsByte<ESelectedKey> Key, const struct FText& KeySelectionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetKeySelectionText");

	UBPi_ButtonManager_C_B03_SetKeySelectionText_Params params;
	params.Key = Key;
	params.KeySelectionText = KeySelectionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetSelectedKey
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESelectedKey>      Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord             SelectedKey                    (Parm, OutParm, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B03_GetSelectedKey(TEnumAsByte<ESelectedKey> Key, struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetSelectedKey");

	UBPi_ButtonManager_C_B03_GetSelectedKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SelectedKey != nullptr)
		*SelectedKey = params.SelectedKey;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetKeyEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESelectedKey>      Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bEnabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPi_ButtonManager_C::B03_GetKeyEnabled(TEnumAsByte<ESelectedKey> Key, bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetKeyEnabled");

	UBPi_ButtonManager_C_B03_GetKeyEnabled_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bEnabled != nullptr)
		*bEnabled = params.bEnabled;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetKeyEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESelectedKey>      Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPi_ButtonManager_C::B03_SetKeyEnabled(TEnumAsByte<ESelectedKey> Key, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetKeyEnabled");

	UBPi_ButtonManager_C_B03_SetKeyEnabled_Params params;
	params.Key = Key;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetSelectedKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESelectedKey>      Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord             SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B03_SetSelectedKey(TEnumAsByte<ESelectedKey> Key, const struct FInputChord& SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetSelectedKey");

	UBPi_ButtonManager_C_B03_SetSelectedKey_Params params;
	params.Key = Key;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIconColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B03_SetStateButtonIconColor_Clicked(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIconColor_Clicked");

	UBPi_ButtonManager_C_B03_SetStateButtonIconColor_Clicked_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIconColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B03_SetStateButtonIconColor_Hovered(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIconColor_Hovered");

	UBPi_ButtonManager_C_B03_SetStateButtonIconColor_Hovered_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIconColor_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B03_SetStateButtonIconColor_Normal(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIconColor_Normal");

	UBPi_ButtonManager_C_B03_SetStateButtonIconColor_Normal_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B03_SetStateButtonIcon(class UObject* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateButtonIcon");

	UBPi_ButtonManager_C_B03_SetStateButtonIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetStateByIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B03_GetStateByIndex(int* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetStateByIndex");

	UBPi_ButtonManager_C_B03_GetStateByIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetStateByName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B03_GetStateByName(struct FName* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_GetStateByName");

	UBPi_ButtonManager_C_B03_GetStateByName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B03_SetStateByIndex(int State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateByIndex");

	UBPi_ButtonManager_C_B03_SetStateByIndex_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateByName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B03_SetStateByName(const struct FName& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B03_SetStateByName");

	UBPi_ButtonManager_C_B03_SetStateByName_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_RemoveContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
void UBPi_ButtonManager_C::B02_RemoveContentWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B02_RemoveContentWidget");

	UBPi_ButtonManager_C_B02_RemoveContentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_Create_ContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ContentWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B02_Create_ContentWidget(class UClass* ContentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B02_Create_ContentWidget");

	UBPi_ButtonManager_C_B02_Create_ContentWidget_Params params;
	params.ContentWidget = ContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetBlurShineColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B02_SetBlurShineColor_Clicked(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetBlurShineColor_Clicked");

	UBPi_ButtonManager_C_B02_SetBlurShineColor_Clicked_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetBlurShineColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B02_SetBlurShineColor_Hovered(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetBlurShineColor_Hovered");

	UBPi_ButtonManager_C_B02_SetBlurShineColor_Hovered_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetDynamicShineColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B02_SetDynamicShineColor(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetDynamicShineColor");

	UBPi_ButtonManager_C_B02_SetDynamicShineColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetUseDynamicShine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseDynamicShine               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPi_ButtonManager_C::B02_SetUseDynamicShine(bool bUseDynamicShine)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetUseDynamicShine");

	UBPi_ButtonManager_C_B02_SetUseDynamicShine_Params params;
	params.bUseDynamicShine = bUseDynamicShine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Current
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FillColor_Current              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B02_SetFillColor_Current(const struct FLinearColor& FillColor_Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Current");

	UBPi_ButtonManager_C_B02_SetFillColor_Current_Params params;
	params.FillColor_Current = FillColor_Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Disabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FillColor_Disabled             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B02_SetFillColor_Disabled(const struct FLinearColor& FillColor_Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Disabled");

	UBPi_ButtonManager_C_B02_SetFillColor_Disabled_Params params;
	params.FillColor_Disabled = FillColor_Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FillColor_Clicked              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B02_SetFillColor_Clicked(const struct FLinearColor& FillColor_Clicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Clicked");

	UBPi_ButtonManager_C_B02_SetFillColor_Clicked_Params params;
	params.FillColor_Clicked = FillColor_Clicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FillColor_Hovered              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B02_SetFillColor_Hovered(const struct FLinearColor& FillColor_Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Hovered");

	UBPi_ButtonManager_C_B02_SetFillColor_Hovered_Params params;
	params.FillColor_Hovered = FillColor_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FillColor_Normal               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B02_SetFillColor_Normal(const struct FLinearColor& FillColor_Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFillColor_Normal");

	UBPi_ButtonManager_C_B02_SetFillColor_Normal_Params params;
	params.FillColor_Normal = FillColor_Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Current
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FrameColor_Current             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B02_SetFrameColor_Current(const struct FLinearColor& FrameColor_Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Current");

	UBPi_ButtonManager_C_B02_SetFrameColor_Current_Params params;
	params.FrameColor_Current = FrameColor_Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Disabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FrameColor_Disabled            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B02_SetFrameColor_Disabled(const struct FLinearColor& FrameColor_Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Disabled");

	UBPi_ButtonManager_C_B02_SetFrameColor_Disabled_Params params;
	params.FrameColor_Disabled = FrameColor_Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FrameColor_Clicked             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B02_SetFrameColor_Clicked(const struct FLinearColor& FrameColor_Clicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Clicked");

	UBPi_ButtonManager_C_B02_SetFrameColor_Clicked_Params params;
	params.FrameColor_Clicked = FrameColor_Clicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FrameColor_Hovered             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B02_SetFrameColor_Hovered(const struct FLinearColor& FrameColor_Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Hovered");

	UBPi_ButtonManager_C_B02_SetFrameColor_Hovered_Params params;
	params.FrameColor_Hovered = FrameColor_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FrameColor_Normal              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B02_SetFrameColor_Normal(const struct FLinearColor& FrameColor_Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B02_SetFrameColor_Normal");

	UBPi_ButtonManager_C_B02_SetFrameColor_Normal_Params params;
	params.FrameColor_Normal = FrameColor_Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonJustification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJustification>    EJustification                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::SetButtonJustification(TEnumAsByte<EJustification> EJustification)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonJustification");

	UBPi_ButtonManager_C_SetButtonJustification_Params params;
	params.EJustification = EJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonJustification
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJustification>    EJustification                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::GetButtonJustification(TEnumAsByte<EJustification>* EJustification)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonJustification");

	UBPi_ButtonManager_C_GetButtonJustification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EJustification != nullptr)
		*EJustification = params.EJustification;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_ClickedFX_Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color_ClickedFX_Text           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B01_SetColor_ClickedFX_Text(const struct FLinearColor& Color_ClickedFX_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_ClickedFX_Text");

	UBPi_ButtonManager_C_B01_SetColor_ClickedFX_Text_Params params;
	params.Color_ClickedFX_Text = Color_ClickedFX_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_ClickedFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color_ClickedFX                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B01_SetColor_ClickedFX(const struct FLinearColor& Color_ClickedFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_ClickedFX");

	UBPi_ButtonManager_C_B01_SetColor_ClickedFX_Params params;
	params.Color_ClickedFX = Color_ClickedFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_HoveredFX_02
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color_HoveredFX_02             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B01_SetColor_HoveredFX_02(const struct FLinearColor& Color_HoveredFX_02)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_HoveredFX_02");

	UBPi_ButtonManager_C_B01_SetColor_HoveredFX_02_Params params;
	params.Color_HoveredFX_02 = Color_HoveredFX_02;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_HoveredFX_01
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color_HoveredFX_01             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::B01_SetColor_HoveredFX_01(const struct FLinearColor& Color_HoveredFX_01)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.B01_SetColor_HoveredFX_01");

	UBPi_ButtonManager_C_B01_SetColor_HoveredFX_01_Params params;
	params.Color_HoveredFX_01 = Color_HoveredFX_01;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonSound_OnHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              HoveredSound                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::SetButtonSound_OnHovered(class USoundBase* HoveredSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonSound_OnHovered");

	UBPi_ButtonManager_C_SetButtonSound_OnHovered_Params params;
	params.HoveredSound = HoveredSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonSound_OnClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              ClickedSound                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::SetButtonSound_OnClicked(class USoundBase* ClickedSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonSound_OnClicked");

	UBPi_ButtonManager_C_SetButtonSound_OnClicked_Params params;
	params.ClickedSound = ClickedSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetHintIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  HintIcon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::SetHintIcon(class UClass* HintIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.SetHintIcon");

	UBPi_ButtonManager_C_SetHintIcon_Params params;
	params.HintIcon = HintIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetUser_Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::SetUser_Focus(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.SetUser_Focus");

	UBPi_ButtonManager_C_SetUser_Focus_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.GetUserFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HasFocus                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPi_ButtonManager_C::GetUserFocus(class APlayerController* Player, bool* HasFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.GetUserFocus");

	UBPi_ButtonManager_C_GetUserFocus_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasFocus != nullptr)
		*HasFocus = params.HasFocus;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Disabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                   Font                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*               Typeface                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::SetButtonFontInfo_Disabled(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Disabled");

	UBPi_ButtonManager_C_SetButtonFontInfo_Disabled_Params params;
	params.Font = Font;
	params.Typeface = Typeface;
	params.FontSize = FontSize;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                   Font                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*               Typeface                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::SetButtonFontInfo_Clicked(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Clicked");

	UBPi_ButtonManager_C_SetButtonFontInfo_Clicked_Params params;
	params.Font = Font;
	params.Typeface = Typeface;
	params.FontSize = FontSize;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                   Font                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*               Typeface                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::SetButtonFontInfo_Hovered(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Hovered");

	UBPi_ButtonManager_C_SetButtonFontInfo_Hovered_Params params;
	params.Font = Font;
	params.Typeface = Typeface;
	params.FontSize = FontSize;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                   Font                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*               Typeface                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::SetButtonFontInfo_Normal(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Normal");

	UBPi_ButtonManager_C_SetButtonFontInfo_Normal_Params params;
	params.Font = Font;
	params.Typeface = Typeface;
	params.FontSize = FontSize;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Disabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                   Font                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*               Typeface                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FontSize                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::GetButtonFontInfo_Disabled(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Disabled");

	UBPi_ButtonManager_C_GetButtonFontInfo_Disabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Font != nullptr)
		*Font = params.Font;
	if (Typeface != nullptr)
		*Typeface = params.Typeface;
	if (FontSize != nullptr)
		*FontSize = params.FontSize;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Clicked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                   Font                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*               Typeface                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Integer                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::GetButtonFontInfo_Clicked(class UFont** Font, class UFontFace** Typeface, int* Integer, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Clicked");

	UBPi_ButtonManager_C_GetButtonFontInfo_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Font != nullptr)
		*Font = params.Font;
	if (Typeface != nullptr)
		*Typeface = params.Typeface;
	if (Integer != nullptr)
		*Integer = params.Integer;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Hovered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                   Font                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*               Typeface                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FontSize                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::GetButtonFontInfo_Hovered(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Hovered");

	UBPi_ButtonManager_C_GetButtonFontInfo_Hovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Font != nullptr)
		*Font = params.Font;
	if (Typeface != nullptr)
		*Typeface = params.Typeface;
	if (FontSize != nullptr)
		*FontSize = params.FontSize;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Normal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                   Font                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*               Typeface                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FontSize                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::GetButtonFontInfo_Normal(class UFont** Font, class UFontFace** Typeface, int* FontSize, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonFontInfo_Normal");

	UBPi_ButtonManager_C_GetButtonFontInfo_Normal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Font != nullptr)
		*Font = params.Font;
	if (Typeface != nullptr)
		*Typeface = params.Typeface;
	if (FontSize != nullptr)
		*FontSize = params.FontSize;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (Parm, OutParm)
void UBPi_ButtonManager_C::GetButtonText(struct FText* ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonText");

	UBPi_ButtonManager_C_GetButtonText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ButtonText != nullptr)
		*ButtonText = params.ButtonText;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsEnabled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPi_ButtonManager_C::GetButtonEnabled(bool* bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.GetButtonEnabled");

	UBPi_ButtonManager_C_GetButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsEnabled != nullptr)
		*bIsEnabled = params.bIsEnabled;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsEnabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPi_ButtonManager_C::SetButtonEnabled(bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonEnabled");

	UBPi_ButtonManager_C_SetButtonEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Current
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                   Font                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*               Typeface                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPi_ButtonManager_C::SetButtonFontInfo_Current(class UFont* Font, class UFontFace* Typeface, int FontSize, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonFontInfo_Current");

	UBPi_ButtonManager_C_SetButtonFontInfo_Current_Params params;
	params.Font = Font;
	params.Typeface = Typeface;
	params.FontSize = FontSize;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UBPi_ButtonManager_C::SetButtonText(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ButtonManager.BPi_ButtonManager_C.SetButtonText");

	UBPi_ButtonManager_C_SetButtonText_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
