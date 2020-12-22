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

// Function GA_PowerShot_new.GA_PowerShot_new_C.EventReceived_5268730746588438709D9CA6D512C34E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PowerShot_new_C::EventReceived_5268730746588438709D9CA6D512C34E(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_PowerShot_new.GA_PowerShot_new_C.EventReceived_5268730746588438709D9CA6D512C34E");

	UGA_PowerShot_new_C_EventReceived_5268730746588438709D9CA6D512C34E_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PowerShot_new.GA_PowerShot_new_C.InvalidHandle_423042D143082123B831878B37606DA1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_PowerShot_new_C::InvalidHandle_423042D143082123B831878B37606DA1(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_PowerShot_new.GA_PowerShot_new_C.InvalidHandle_423042D143082123B831878B37606DA1");

	UGA_PowerShot_new_C_InvalidHandle_423042D143082123B831878B37606DA1_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PowerShot_new.GA_PowerShot_new_C.OnRemoved_423042D143082123B831878B37606DA1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_PowerShot_new_C::OnRemoved_423042D143082123B831878B37606DA1(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_PowerShot_new.GA_PowerShot_new_C.OnRemoved_423042D143082123B831878B37606DA1");

	UGA_PowerShot_new_C_OnRemoved_423042D143082123B831878B37606DA1_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PowerShot_new.GA_PowerShot_new_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_PowerShot_new_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_PowerShot_new.GA_PowerShot_new_C.K2_ActivateAbility");

	UGA_PowerShot_new_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PowerShot_new.GA_PowerShot_new_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_PowerShot_new_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_PowerShot_new.GA_PowerShot_new_C.K2_OnEndAbility");

	UGA_PowerShot_new_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PowerShot_new.GA_PowerShot_new_C.ExecuteUbergraph_GA_PowerShot_new
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_PowerShot_new_C::ExecuteUbergraph_GA_PowerShot_new(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_PowerShot_new.GA_PowerShot_new_C.ExecuteUbergraph_GA_PowerShot_new");

	UGA_PowerShot_new_C_ExecuteUbergraph_GA_PowerShot_new_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
