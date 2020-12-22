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

// Function GA_SacrificeRage_new.GA_SacrificeRage_new_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGA_SacrificeRage_new_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SacrificeRage_new.GA_SacrificeRage_new_C.K2_CanActivateAbility");

	UGA_SacrificeRage_new_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;


	return params.ReturnValue;
}


// Function GA_SacrificeRage_new.GA_SacrificeRage_new_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_SacrificeRage_new_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SacrificeRage_new.GA_SacrificeRage_new_C.K2_ActivateAbility");

	UGA_SacrificeRage_new_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_SacrificeRage_new.GA_SacrificeRage_new_C.ExecuteUbergraph_GA_SacrificeRage_new
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_SacrificeRage_new_C::ExecuteUbergraph_GA_SacrificeRage_new(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SacrificeRage_new.GA_SacrificeRage_new_C.ExecuteUbergraph_GA_SacrificeRage_new");

	UGA_SacrificeRage_new_C_ExecuteUbergraph_GA_SacrificeRage_new_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
