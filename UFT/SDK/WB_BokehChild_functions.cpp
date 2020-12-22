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

// Function WB_BokehChild.WB_BokehChild_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_BokehChild_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BokehChild.WB_BokehChild_C.OnAnimationFinished");

	UWB_BokehChild_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_BokehChild.WB_BokehChild_C.CreateRandomMovement
// (BlueprintCallable, BlueprintEvent)
void UWB_BokehChild_C::CreateRandomMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BokehChild.WB_BokehChild_C.CreateRandomMovement");

	UWB_BokehChild_C_CreateRandomMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_BokehChild.WB_BokehChild_C.ExecuteUbergraph_WB_BokehChild
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_BokehChild_C::ExecuteUbergraph_WB_BokehChild(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BokehChild.WB_BokehChild_C.ExecuteUbergraph_WB_BokehChild");

	UWB_BokehChild_C_ExecuteUbergraph_WB_BokehChild_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
