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

// Function GA_Regen3.GA_Regen3_C.EventReceived_266F808C43B94E83012AE59295F16B87
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Regen3_C::EventReceived_266F808C43B94E83012AE59295F16B87(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Regen3.GA_Regen3_C.EventReceived_266F808C43B94E83012AE59295F16B87");

	UGA_Regen3_C_EventReceived_266F808C43B94E83012AE59295F16B87_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Regen3.GA_Regen3_C.InvalidHandle_2C6569E248B9FC63A4E69497EE7EC42D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Regen3_C::InvalidHandle_2C6569E248B9FC63A4E69497EE7EC42D(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Regen3.GA_Regen3_C.InvalidHandle_2C6569E248B9FC63A4E69497EE7EC42D");

	UGA_Regen3_C_InvalidHandle_2C6569E248B9FC63A4E69497EE7EC42D_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Regen3.GA_Regen3_C.OnRemoved_2C6569E248B9FC63A4E69497EE7EC42D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Regen3_C::OnRemoved_2C6569E248B9FC63A4E69497EE7EC42D(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Regen3.GA_Regen3_C.OnRemoved_2C6569E248B9FC63A4E69497EE7EC42D");

	UGA_Regen3_C_OnRemoved_2C6569E248B9FC63A4E69497EE7EC42D_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Regen3.GA_Regen3_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Regen3_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Regen3.GA_Regen3_C.K2_ActivateAbility");

	UGA_Regen3_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Regen3.GA_Regen3_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Regen3_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Regen3.GA_Regen3_C.K2_OnEndAbility");

	UGA_Regen3_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Regen3.GA_Regen3_C.ExecuteUbergraph_GA_Regen3
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Regen3_C::ExecuteUbergraph_GA_Regen3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Regen3.GA_Regen3_C.ExecuteUbergraph_GA_Regen3");

	UGA_Regen3_C_ExecuteUbergraph_GA_Regen3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
