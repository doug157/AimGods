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

// Function WB_LoadoutSelection.WB_LoadoutSelection_C.WelcomeAnimation
// (BlueprintCallable, BlueprintEvent)
void UWB_LoadoutSelection_C::WelcomeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutSelection.WB_LoadoutSelection_C.WelcomeAnimation");

	UWB_LoadoutSelection_C_WelcomeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LoadoutSelection.WB_LoadoutSelection_C.BndEvt__Button_226_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_LoadoutSelection_C::BndEvt__Button_226_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutSelection.WB_LoadoutSelection_C.BndEvt__Button_226_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWB_LoadoutSelection_C_BndEvt__Button_226_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LoadoutSelection.WB_LoadoutSelection_C.ExecuteUbergraph_WB_LoadoutSelection
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_LoadoutSelection_C::ExecuteUbergraph_WB_LoadoutSelection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutSelection.WB_LoadoutSelection_C.ExecuteUbergraph_WB_LoadoutSelection");

	UWB_LoadoutSelection_C_ExecuteUbergraph_WB_LoadoutSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LoadoutSelection.WB_LoadoutSelection_C.CloseWindow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_LoadoutSelection_C::CloseWindow__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoadoutSelection.WB_LoadoutSelection_C.CloseWindow__DelegateSignature");

	UWB_LoadoutSelection_C_CloseWindow__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
