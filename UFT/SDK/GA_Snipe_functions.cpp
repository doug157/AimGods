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

// Function GA_Snipe.GA_Snipe_C.EventReceived_43D97A3E4CAC783DF253CBB5E1B6946B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Snipe_C::EventReceived_43D97A3E4CAC783DF253CBB5E1B6946B(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Snipe.GA_Snipe_C.EventReceived_43D97A3E4CAC783DF253CBB5E1B6946B");

	UGA_Snipe_C_EventReceived_43D97A3E4CAC783DF253CBB5E1B6946B_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Snipe.GA_Snipe_C.InvalidHandle_17F4CA39409C4EFCD2E294957DCCCA6A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Snipe_C::InvalidHandle_17F4CA39409C4EFCD2E294957DCCCA6A(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Snipe.GA_Snipe_C.InvalidHandle_17F4CA39409C4EFCD2E294957DCCCA6A");

	UGA_Snipe_C_InvalidHandle_17F4CA39409C4EFCD2E294957DCCCA6A_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Snipe.GA_Snipe_C.OnRemoved_17F4CA39409C4EFCD2E294957DCCCA6A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Snipe_C::OnRemoved_17F4CA39409C4EFCD2E294957DCCCA6A(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Snipe.GA_Snipe_C.OnRemoved_17F4CA39409C4EFCD2E294957DCCCA6A");

	UGA_Snipe_C_OnRemoved_17F4CA39409C4EFCD2E294957DCCCA6A_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Snipe.GA_Snipe_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Snipe_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Snipe.GA_Snipe_C.K2_ActivateAbility");

	UGA_Snipe_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Snipe.GA_Snipe_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Snipe_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Snipe.GA_Snipe_C.K2_OnEndAbility");

	UGA_Snipe_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Snipe.GA_Snipe_C.ExecuteUbergraph_GA_Snipe
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Snipe_C::ExecuteUbergraph_GA_Snipe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Snipe.GA_Snipe_C.ExecuteUbergraph_GA_Snipe");

	UGA_Snipe_C_ExecuteUbergraph_GA_Snipe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
