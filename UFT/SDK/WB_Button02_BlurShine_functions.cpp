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

// Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.SetBlurredFrameColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_BlurShine_C::SetBlurredFrameColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.SetBlurredFrameColor");

	UWB_Button02_BlurShine_C_SetBlurredFrameColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.IsRightAligned
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Button02_BlurShine_C::IsRightAligned()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.IsRightAligned");

	UWB_Button02_BlurShine_C_IsRightAligned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.IsCenterAligned
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_Button02_BlurShine_C::IsCenterAligned()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.IsCenterAligned");

	UWB_Button02_BlurShine_C_IsCenterAligned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
void UWB_Button02_BlurShine_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.OnHovered");

	UWB_Button02_BlurShine_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.OnUnhovered
// (BlueprintCallable, BlueprintEvent)
void UWB_Button02_BlurShine_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.OnUnhovered");

	UWB_Button02_BlurShine_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
void UWB_Button02_BlurShine_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.OnClicked");

	UWB_Button02_BlurShine_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.UpdateJustification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJustification>    EJustification                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_BlurShine_C::UpdateJustification(TEnumAsByte<EJustification> EJustification)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.UpdateJustification");

	UWB_Button02_BlurShine_C_UpdateJustification_Params params;
	params.EJustification = EJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.ShowBaselinePreview
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            PreviewColor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PreviewTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_BlurShine_C::ShowBaselinePreview(const struct FLinearColor& PreviewColor, float PreviewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.ShowBaselinePreview");

	UWB_Button02_BlurShine_C_ShowBaselinePreview_Params params;
	params.PreviewColor = PreviewColor;
	params.PreviewTime = PreviewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.ExecuteUbergraph_WB_Button02_BlurShine
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_BlurShine_C::ExecuteUbergraph_WB_Button02_BlurShine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_BlurShine.WB_Button02_BlurShine_C.ExecuteUbergraph_WB_Button02_BlurShine");

	UWB_Button02_BlurShine_C_ExecuteUbergraph_WB_Button02_BlurShine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
