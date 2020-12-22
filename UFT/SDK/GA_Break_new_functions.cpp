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

// Function GA_Break_new.GA_Break_new_C.EventReceived_20522A814B65D74C8F91E29599CB5265
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Break_new_C::EventReceived_20522A814B65D74C8F91E29599CB5265(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Break_new.GA_Break_new_C.EventReceived_20522A814B65D74C8F91E29599CB5265");

	UGA_Break_new_C_EventReceived_20522A814B65D74C8F91E29599CB5265_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Break_new.GA_Break_new_C.InvalidHandle_51A166A445F98D3052A5B882D53C6B07
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Break_new_C::InvalidHandle_51A166A445F98D3052A5B882D53C6B07(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Break_new.GA_Break_new_C.InvalidHandle_51A166A445F98D3052A5B882D53C6B07");

	UGA_Break_new_C_InvalidHandle_51A166A445F98D3052A5B882D53C6B07_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Break_new.GA_Break_new_C.OnRemoved_51A166A445F98D3052A5B882D53C6B07
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Break_new_C::OnRemoved_51A166A445F98D3052A5B882D53C6B07(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Break_new.GA_Break_new_C.OnRemoved_51A166A445F98D3052A5B882D53C6B07");

	UGA_Break_new_C_OnRemoved_51A166A445F98D3052A5B882D53C6B07_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Break_new.GA_Break_new_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Break_new_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Break_new.GA_Break_new_C.K2_ActivateAbility");

	UGA_Break_new_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Break_new.GA_Break_new_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Break_new_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Break_new.GA_Break_new_C.K2_OnEndAbility");

	UGA_Break_new_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Break_new.GA_Break_new_C.ExecuteUbergraph_GA_Break_new
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Break_new_C::ExecuteUbergraph_GA_Break_new(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Break_new.GA_Break_new_C.ExecuteUbergraph_GA_Break_new");

	UGA_Break_new_C_ExecuteUbergraph_GA_Break_new_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
