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

// Function GA_Heal.GA_Heal_C.EventReceived_2C7C17654363447157E312A00F5AF860
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Heal_C::EventReceived_2C7C17654363447157E312A00F5AF860(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Heal.GA_Heal_C.EventReceived_2C7C17654363447157E312A00F5AF860");

	UGA_Heal_C_EventReceived_2C7C17654363447157E312A00F5AF860_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Heal.GA_Heal_C.InvalidHandle_532949E1418EFD8B2DA563A2102A94B6
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Heal_C::InvalidHandle_532949E1418EFD8B2DA563A2102A94B6(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Heal.GA_Heal_C.InvalidHandle_532949E1418EFD8B2DA563A2102A94B6");

	UGA_Heal_C_InvalidHandle_532949E1418EFD8B2DA563A2102A94B6_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Heal.GA_Heal_C.OnRemoved_532949E1418EFD8B2DA563A2102A94B6
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Heal_C::OnRemoved_532949E1418EFD8B2DA563A2102A94B6(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Heal.GA_Heal_C.OnRemoved_532949E1418EFD8B2DA563A2102A94B6");

	UGA_Heal_C_OnRemoved_532949E1418EFD8B2DA563A2102A94B6_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Heal.GA_Heal_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Heal_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Heal.GA_Heal_C.K2_ActivateAbility");

	UGA_Heal_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Heal.GA_Heal_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Heal_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Heal.GA_Heal_C.K2_OnEndAbility");

	UGA_Heal_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Heal.GA_Heal_C.ExecuteUbergraph_GA_Heal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Heal_C::ExecuteUbergraph_GA_Heal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Heal.GA_Heal_C.ExecuteUbergraph_GA_Heal");

	UGA_Heal_C_ExecuteUbergraph_GA_Heal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
