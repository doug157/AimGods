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

// Function GA_SelfRegen2.GA_SelfRegen2_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_SelfRegen2_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SelfRegen2.GA_SelfRegen2_C.K2_ActivateAbility");

	UGA_SelfRegen2_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_SelfRegen2.GA_SelfRegen2_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_SelfRegen2_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SelfRegen2.GA_SelfRegen2_C.K2_OnEndAbility");

	UGA_SelfRegen2_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_SelfRegen2.GA_SelfRegen2_C.ExecuteUbergraph_GA_SelfRegen2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_SelfRegen2_C::ExecuteUbergraph_GA_SelfRegen2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SelfRegen2.GA_SelfRegen2_C.ExecuteUbergraph_GA_SelfRegen2");

	UGA_SelfRegen2_C_ExecuteUbergraph_GA_SelfRegen2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
