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

// Function GA_Vanish.GA_Vanish_C.InvalidHandle_09D79AB246C75B19B2EAC79089CD2878
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Vanish_C::InvalidHandle_09D79AB246C75B19B2EAC79089CD2878(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Vanish.GA_Vanish_C.InvalidHandle_09D79AB246C75B19B2EAC79089CD2878");

	UGA_Vanish_C_InvalidHandle_09D79AB246C75B19B2EAC79089CD2878_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Vanish.GA_Vanish_C.OnRemoved_09D79AB246C75B19B2EAC79089CD2878
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Vanish_C::OnRemoved_09D79AB246C75B19B2EAC79089CD2878(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Vanish.GA_Vanish_C.OnRemoved_09D79AB246C75B19B2EAC79089CD2878");

	UGA_Vanish_C_OnRemoved_09D79AB246C75B19B2EAC79089CD2878_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Vanish.GA_Vanish_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Vanish_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Vanish.GA_Vanish_C.K2_ActivateAbility");

	UGA_Vanish_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Vanish.GA_Vanish_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Vanish_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Vanish.GA_Vanish_C.K2_OnEndAbility");

	UGA_Vanish_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Vanish.GA_Vanish_C.ExecuteUbergraph_GA_Vanish
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Vanish_C::ExecuteUbergraph_GA_Vanish(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Vanish.GA_Vanish_C.ExecuteUbergraph_GA_Vanish");

	UGA_Vanish_C_ExecuteUbergraph_GA_Vanish_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
