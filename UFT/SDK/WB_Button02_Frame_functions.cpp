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

// Function WB_Button02_Frame.WB_Button02_Frame_C.Set_UseShine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseShine                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Button02_Frame_C::Set_UseShine(bool bUseShine)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.Set_UseShine");

	UWB_Button02_Frame_C_Set_UseShine_Params params;
	params.bUseShine = bUseShine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_Frame.WB_Button02_Frame_C.Set_FrameColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FrameColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Frame_C::Set_FrameColor(const struct FLinearColor& FrameColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.Set_FrameColor");

	UWB_Button02_Frame_C_Set_FrameColor_Params params;
	params.FrameColor = FrameColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_Frame.WB_Button02_Frame_C.Set_FrameShineColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FrameShineColor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Frame_C::Set_FrameShineColor(const struct FLinearColor& FrameShineColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.Set_FrameShineColor");

	UWB_Button02_Frame_C_Set_FrameShineColor_Params params;
	params.FrameShineColor = FrameShineColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_Frame.WB_Button02_Frame_C.GetImageDynamicMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* DynamicMaterial                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                  Image                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Frame_C::GetImageDynamicMaterial(class UMaterialInstanceDynamic** DynamicMaterial, class UImage** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.GetImageDynamicMaterial");

	UWB_Button02_Frame_C_GetImageDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DynamicMaterial != nullptr)
		*DynamicMaterial = params.DynamicMaterial;
	if (Image != nullptr)
		*Image = params.Image;

}


// Function WB_Button02_Frame.WB_Button02_Frame_C.CreateShine
// (BlueprintCallable, BlueprintEvent)
void UWB_Button02_Frame_C::CreateShine()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.CreateShine");

	UWB_Button02_Frame_C_CreateShine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_Frame.WB_Button02_Frame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Button02_Frame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.Construct");

	UWB_Button02_Frame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_Frame.WB_Button02_Frame_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
void UWB_Button02_Frame_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.OnHovered");

	UWB_Button02_Frame_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_Frame.WB_Button02_Frame_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
void UWB_Button02_Frame_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.OnClicked");

	UWB_Button02_Frame_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_Frame.WB_Button02_Frame_C.OnUnhovered
// (BlueprintCallable, BlueprintEvent)
void UWB_Button02_Frame_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.OnUnhovered");

	UWB_Button02_Frame_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_Frame.WB_Button02_Frame_C.OnDisabled
// (BlueprintCallable, BlueprintEvent)
void UWB_Button02_Frame_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.OnDisabled");

	UWB_Button02_Frame_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_Frame.WB_Button02_Frame_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Frame_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.Tick");

	UWB_Button02_Frame_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_Frame.WB_Button02_Frame_C.UpdateDynamicShine
// (BlueprintCallable, BlueprintEvent)
void UWB_Button02_Frame_C::UpdateDynamicShine()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.UpdateDynamicShine");

	UWB_Button02_Frame_C_UpdateDynamicShine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_Frame.WB_Button02_Frame_C.ResetTimer
// (BlueprintCallable, BlueprintEvent)
void UWB_Button02_Frame_C::ResetTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.ResetTimer");

	UWB_Button02_Frame_C_ResetTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_Frame.WB_Button02_Frame_C.ExecuteUbergraph_WB_Button02_Frame
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_Frame_C::ExecuteUbergraph_WB_Button02_Frame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_Frame.WB_Button02_Frame_C.ExecuteUbergraph_WB_Button02_Frame");

	UWB_Button02_Frame_C_ExecuteUbergraph_WB_Button02_Frame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
