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

// Function GA_Regen.GA_Regen_C.EventReceived_665E0BC14041662014358C9A26BA9BD3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Regen_C::EventReceived_665E0BC14041662014358C9A26BA9BD3(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Regen.GA_Regen_C.EventReceived_665E0BC14041662014358C9A26BA9BD3");

	UGA_Regen_C_EventReceived_665E0BC14041662014358C9A26BA9BD3_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Regen.GA_Regen_C.InvalidHandle_BB7162634B297C88B7CFECACF202D9AA
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Regen_C::InvalidHandle_BB7162634B297C88B7CFECACF202D9AA(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Regen.GA_Regen_C.InvalidHandle_BB7162634B297C88B7CFECACF202D9AA");

	UGA_Regen_C_InvalidHandle_BB7162634B297C88B7CFECACF202D9AA_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Regen.GA_Regen_C.OnRemoved_BB7162634B297C88B7CFECACF202D9AA
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Regen_C::OnRemoved_BB7162634B297C88B7CFECACF202D9AA(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Regen.GA_Regen_C.OnRemoved_BB7162634B297C88B7CFECACF202D9AA");

	UGA_Regen_C_OnRemoved_BB7162634B297C88B7CFECACF202D9AA_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Regen.GA_Regen_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Regen_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Regen.GA_Regen_C.K2_ActivateAbility");

	UGA_Regen_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Regen.GA_Regen_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Regen_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Regen.GA_Regen_C.K2_OnEndAbility");

	UGA_Regen_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Regen.GA_Regen_C.ExecuteUbergraph_GA_Regen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Regen_C::ExecuteUbergraph_GA_Regen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Regen.GA_Regen_C.ExecuteUbergraph_GA_Regen");

	UGA_Regen_C_ExecuteUbergraph_GA_Regen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
