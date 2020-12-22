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

// Function GA_Sprint.GA_Sprint_C.InvalidHandle_77C2C84C4197CA6144F4DCAD82FD3B2D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Sprint_C::InvalidHandle_77C2C84C4197CA6144F4DCAD82FD3B2D(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.InvalidHandle_77C2C84C4197CA6144F4DCAD82FD3B2D");

	UGA_Sprint_C_InvalidHandle_77C2C84C4197CA6144F4DCAD82FD3B2D_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Sprint.GA_Sprint_C.OnRemoved_77C2C84C4197CA6144F4DCAD82FD3B2D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Sprint_C::OnRemoved_77C2C84C4197CA6144F4DCAD82FD3B2D(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.OnRemoved_77C2C84C4197CA6144F4DCAD82FD3B2D");

	UGA_Sprint_C_OnRemoved_77C2C84C4197CA6144F4DCAD82FD3B2D_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Sprint.GA_Sprint_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Sprint_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.K2_OnEndAbility");

	UGA_Sprint_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Sprint.GA_Sprint_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Sprint_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.K2_ActivateAbility");

	UGA_Sprint_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Sprint.GA_Sprint_C.ExecuteUbergraph_GA_Sprint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Sprint_C::ExecuteUbergraph_GA_Sprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.ExecuteUbergraph_GA_Sprint");

	UGA_Sprint_C_ExecuteUbergraph_GA_Sprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
