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

// Function WB_LightFX.WB_LightFX_C.CreateLightFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_LightFX_C::CreateLightFX(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LightFX.WB_LightFX_C.CreateLightFX");

	UWB_LightFX_C_CreateLightFX_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LightFX.WB_LightFX_C.ResetTimer
// (BlueprintCallable, BlueprintEvent)
void UWB_LightFX_C::ResetTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LightFX.WB_LightFX_C.ResetTimer");

	UWB_LightFX_C_ResetTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LightFX.WB_LightFX_C.UpdateLightMaterial
// (BlueprintCallable, BlueprintEvent)
void UWB_LightFX_C::UpdateLightMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LightFX.WB_LightFX_C.UpdateLightMaterial");

	UWB_LightFX_C_UpdateLightMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LightFX.WB_LightFX_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_LightFX_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LightFX.WB_LightFX_C.Tick");

	UWB_LightFX_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LightFX.WB_LightFX_C.ExecuteUbergraph_WB_LightFX
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_LightFX_C::ExecuteUbergraph_WB_LightFX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LightFX.WB_LightFX_C.ExecuteUbergraph_WB_LightFX");

	UWB_LightFX_C_ExecuteUbergraph_WB_LightFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
