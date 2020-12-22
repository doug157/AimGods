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

// Function GA_IntimidatingRoar_new.GA_IntimidatingRoar_new_C.CheckAndSetupCachables
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_IntimidatingRoar_new_C::CheckAndSetupCachables()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_IntimidatingRoar_new.GA_IntimidatingRoar_new_C.CheckAndSetupCachables");

	UGA_IntimidatingRoar_new_C_CheckAndSetupCachables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_IntimidatingRoar_new.GA_IntimidatingRoar_new_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_IntimidatingRoar_new_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_IntimidatingRoar_new.GA_IntimidatingRoar_new_C.K2_ActivateAbility");

	UGA_IntimidatingRoar_new_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_IntimidatingRoar_new.GA_IntimidatingRoar_new_C.ExecuteUbergraph_GA_IntimidatingRoar_new
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_IntimidatingRoar_new_C::ExecuteUbergraph_GA_IntimidatingRoar_new(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_IntimidatingRoar_new.GA_IntimidatingRoar_new_C.ExecuteUbergraph_GA_IntimidatingRoar_new");

	UGA_IntimidatingRoar_new_C_ExecuteUbergraph_GA_IntimidatingRoar_new_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
