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

// Function GA_Thorns2_new.GA_Thorns2_new_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Thorns2_new_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Thorns2_new.GA_Thorns2_new_C.K2_ActivateAbility");

	UGA_Thorns2_new_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Thorns2_new.GA_Thorns2_new_C.ExecuteUbergraph_GA_Thorns2_new
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Thorns2_new_C::ExecuteUbergraph_GA_Thorns2_new(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Thorns2_new.GA_Thorns2_new_C.ExecuteUbergraph_GA_Thorns2_new");

	UGA_Thorns2_new_C_ExecuteUbergraph_GA_Thorns2_new_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
