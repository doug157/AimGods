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

// Function WB_Button02_HoveredShine.WB_Button02_HoveredShine_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_HoveredShine_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_HoveredShine.WB_Button02_HoveredShine_C.OnAnimationFinished");

	UWB_Button02_HoveredShine_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_HoveredShine.WB_Button02_HoveredShine_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<EJustification>    Justification                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_HoveredShine_C::OnHovered(const struct FLinearColor& Color, TEnumAsByte<EJustification> Justification)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_HoveredShine.WB_Button02_HoveredShine_C.OnHovered");

	UWB_Button02_HoveredShine_C_OnHovered_Params params;
	params.Color = Color;
	params.Justification = Justification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_HoveredShine.WB_Button02_HoveredShine_C.OnUnhovered
// (BlueprintCallable, BlueprintEvent)
void UWB_Button02_HoveredShine_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_HoveredShine.WB_Button02_HoveredShine_C.OnUnhovered");

	UWB_Button02_HoveredShine_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Button02_HoveredShine.WB_Button02_HoveredShine_C.ExecuteUbergraph_WB_Button02_HoveredShine
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Button02_HoveredShine_C::ExecuteUbergraph_WB_Button02_HoveredShine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Button02_HoveredShine.WB_Button02_HoveredShine_C.ExecuteUbergraph_WB_Button02_HoveredShine");

	UWB_Button02_HoveredShine_C_ExecuteUbergraph_WB_Button02_HoveredShine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
