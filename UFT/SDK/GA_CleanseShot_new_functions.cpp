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

// Function GA_CleanseShot_new.GA_CleanseShot_new_C.EventReceived_0A6E37B143CFBABB82B584903EC5332A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_CleanseShot_new_C::EventReceived_0A6E37B143CFBABB82B584903EC5332A(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CleanseShot_new.GA_CleanseShot_new_C.EventReceived_0A6E37B143CFBABB82B584903EC5332A");

	UGA_CleanseShot_new_C_EventReceived_0A6E37B143CFBABB82B584903EC5332A_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_CleanseShot_new.GA_CleanseShot_new_C.InvalidHandle_C2436D904E59C252613C6C933CF6A852
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_CleanseShot_new_C::InvalidHandle_C2436D904E59C252613C6C933CF6A852(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CleanseShot_new.GA_CleanseShot_new_C.InvalidHandle_C2436D904E59C252613C6C933CF6A852");

	UGA_CleanseShot_new_C_InvalidHandle_C2436D904E59C252613C6C933CF6A852_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_CleanseShot_new.GA_CleanseShot_new_C.OnRemoved_C2436D904E59C252613C6C933CF6A852
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_CleanseShot_new_C::OnRemoved_C2436D904E59C252613C6C933CF6A852(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CleanseShot_new.GA_CleanseShot_new_C.OnRemoved_C2436D904E59C252613C6C933CF6A852");

	UGA_CleanseShot_new_C_OnRemoved_C2436D904E59C252613C6C933CF6A852_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_CleanseShot_new.GA_CleanseShot_new_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_CleanseShot_new_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CleanseShot_new.GA_CleanseShot_new_C.K2_ActivateAbility");

	UGA_CleanseShot_new_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_CleanseShot_new.GA_CleanseShot_new_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_CleanseShot_new_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CleanseShot_new.GA_CleanseShot_new_C.K2_OnEndAbility");

	UGA_CleanseShot_new_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_CleanseShot_new.GA_CleanseShot_new_C.ExecuteUbergraph_GA_CleanseShot_new
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_CleanseShot_new_C::ExecuteUbergraph_GA_CleanseShot_new(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CleanseShot_new.GA_CleanseShot_new_C.ExecuteUbergraph_GA_CleanseShot_new");

	UGA_CleanseShot_new_C_ExecuteUbergraph_GA_CleanseShot_new_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
