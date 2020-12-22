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

// Function WB_DirectionalDamageIndicator.WB_DirectionalDamageIndicator_C.RotateWidget
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_DirectionalDamageIndicator_C::RotateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_DirectionalDamageIndicator.WB_DirectionalDamageIndicator_C.RotateWidget");

	UWB_DirectionalDamageIndicator_C_RotateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_DirectionalDamageIndicator.WB_DirectionalDamageIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_DirectionalDamageIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_DirectionalDamageIndicator.WB_DirectionalDamageIndicator_C.Construct");

	UWB_DirectionalDamageIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_DirectionalDamageIndicator.WB_DirectionalDamageIndicator_C.ExecuteUbergraph_WB_DirectionalDamageIndicator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_DirectionalDamageIndicator_C::ExecuteUbergraph_WB_DirectionalDamageIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_DirectionalDamageIndicator.WB_DirectionalDamageIndicator_C.ExecuteUbergraph_WB_DirectionalDamageIndicator");

	UWB_DirectionalDamageIndicator_C_ExecuteUbergraph_WB_DirectionalDamageIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
