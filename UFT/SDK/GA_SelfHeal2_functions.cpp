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

// Function GA_SelfHeal2.GA_SelfHeal2_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_SelfHeal2_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SelfHeal2.GA_SelfHeal2_C.K2_ActivateAbility");

	UGA_SelfHeal2_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_SelfHeal2.GA_SelfHeal2_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_SelfHeal2_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SelfHeal2.GA_SelfHeal2_C.K2_OnEndAbility");

	UGA_SelfHeal2_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_SelfHeal2.GA_SelfHeal2_C.ExecuteUbergraph_GA_SelfHeal2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_SelfHeal2_C::ExecuteUbergraph_GA_SelfHeal2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SelfHeal2.GA_SelfHeal2_C.ExecuteUbergraph_GA_SelfHeal2");

	UGA_SelfHeal2_C_ExecuteUbergraph_GA_SelfHeal2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
