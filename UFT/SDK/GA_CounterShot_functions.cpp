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

// Function GA_CounterShot.GA_CounterShot_C.EventReceived_39C797A34890824BA8F94CBFC99A65B9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_CounterShot_C::EventReceived_39C797A34890824BA8F94CBFC99A65B9(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CounterShot.GA_CounterShot_C.EventReceived_39C797A34890824BA8F94CBFC99A65B9");

	UGA_CounterShot_C_EventReceived_39C797A34890824BA8F94CBFC99A65B9_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_CounterShot.GA_CounterShot_C.InvalidHandle_81CE147C497798F3CDD20B82EFFCF873
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_CounterShot_C::InvalidHandle_81CE147C497798F3CDD20B82EFFCF873(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CounterShot.GA_CounterShot_C.InvalidHandle_81CE147C497798F3CDD20B82EFFCF873");

	UGA_CounterShot_C_InvalidHandle_81CE147C497798F3CDD20B82EFFCF873_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_CounterShot.GA_CounterShot_C.OnRemoved_81CE147C497798F3CDD20B82EFFCF873
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_CounterShot_C::OnRemoved_81CE147C497798F3CDD20B82EFFCF873(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CounterShot.GA_CounterShot_C.OnRemoved_81CE147C497798F3CDD20B82EFFCF873");

	UGA_CounterShot_C_OnRemoved_81CE147C497798F3CDD20B82EFFCF873_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_CounterShot.GA_CounterShot_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_CounterShot_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CounterShot.GA_CounterShot_C.K2_ActivateAbility");

	UGA_CounterShot_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_CounterShot.GA_CounterShot_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_CounterShot_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CounterShot.GA_CounterShot_C.K2_OnEndAbility");

	UGA_CounterShot_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_CounterShot.GA_CounterShot_C.ExecuteUbergraph_GA_CounterShot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_CounterShot_C::ExecuteUbergraph_GA_CounterShot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CounterShot.GA_CounterShot_C.ExecuteUbergraph_GA_CounterShot");

	UGA_CounterShot_C_ExecuteUbergraph_GA_CounterShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
