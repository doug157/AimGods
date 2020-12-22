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

// Function GA_Slow.GA_Slow_C.EventReceived_8C05C42E4A4A154A0AA97E86DE76A269
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Slow_C::EventReceived_8C05C42E4A4A154A0AA97E86DE76A269(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Slow.GA_Slow_C.EventReceived_8C05C42E4A4A154A0AA97E86DE76A269");

	UGA_Slow_C_EventReceived_8C05C42E4A4A154A0AA97E86DE76A269_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Slow.GA_Slow_C.InvalidHandle_083D573A49EF46DD23593389EE9BB218
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Slow_C::InvalidHandle_083D573A49EF46DD23593389EE9BB218(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Slow.GA_Slow_C.InvalidHandle_083D573A49EF46DD23593389EE9BB218");

	UGA_Slow_C_InvalidHandle_083D573A49EF46DD23593389EE9BB218_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Slow.GA_Slow_C.OnRemoved_083D573A49EF46DD23593389EE9BB218
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Slow_C::OnRemoved_083D573A49EF46DD23593389EE9BB218(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Slow.GA_Slow_C.OnRemoved_083D573A49EF46DD23593389EE9BB218");

	UGA_Slow_C_OnRemoved_083D573A49EF46DD23593389EE9BB218_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Slow.GA_Slow_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Slow_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Slow.GA_Slow_C.K2_ActivateAbility");

	UGA_Slow_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Slow.GA_Slow_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Slow_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Slow.GA_Slow_C.K2_OnEndAbility");

	UGA_Slow_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Slow.GA_Slow_C.ExecuteUbergraph_GA_Slow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Slow_C::ExecuteUbergraph_GA_Slow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Slow.GA_Slow_C.ExecuteUbergraph_GA_Slow");

	UGA_Slow_C_ExecuteUbergraph_GA_Slow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
