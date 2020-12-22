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

// Function GA_PowerShot2_new.GA_PowerShot2_new_C.EventReceived_ED9677824316327FCB04A886A2735AF6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_PowerShot2_new_C::EventReceived_ED9677824316327FCB04A886A2735AF6(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_PowerShot2_new.GA_PowerShot2_new_C.EventReceived_ED9677824316327FCB04A886A2735AF6");

	UGA_PowerShot2_new_C_EventReceived_ED9677824316327FCB04A886A2735AF6_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PowerShot2_new.GA_PowerShot2_new_C.InvalidHandle_10029C514423AD1B2E03CCA1275B9603
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_PowerShot2_new_C::InvalidHandle_10029C514423AD1B2E03CCA1275B9603(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_PowerShot2_new.GA_PowerShot2_new_C.InvalidHandle_10029C514423AD1B2E03CCA1275B9603");

	UGA_PowerShot2_new_C_InvalidHandle_10029C514423AD1B2E03CCA1275B9603_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PowerShot2_new.GA_PowerShot2_new_C.OnRemoved_10029C514423AD1B2E03CCA1275B9603
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_PowerShot2_new_C::OnRemoved_10029C514423AD1B2E03CCA1275B9603(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_PowerShot2_new.GA_PowerShot2_new_C.OnRemoved_10029C514423AD1B2E03CCA1275B9603");

	UGA_PowerShot2_new_C_OnRemoved_10029C514423AD1B2E03CCA1275B9603_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PowerShot2_new.GA_PowerShot2_new_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_PowerShot2_new_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_PowerShot2_new.GA_PowerShot2_new_C.K2_ActivateAbility");

	UGA_PowerShot2_new_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PowerShot2_new.GA_PowerShot2_new_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_PowerShot2_new_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_PowerShot2_new.GA_PowerShot2_new_C.K2_OnEndAbility");

	UGA_PowerShot2_new_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PowerShot2_new.GA_PowerShot2_new_C.ExecuteUbergraph_GA_PowerShot2_new
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_PowerShot2_new_C::ExecuteUbergraph_GA_PowerShot2_new(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_PowerShot2_new.GA_PowerShot2_new_C.ExecuteUbergraph_GA_PowerShot2_new");

	UGA_PowerShot2_new_C_ExecuteUbergraph_GA_PowerShot2_new_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
