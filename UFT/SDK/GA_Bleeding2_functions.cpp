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

// Function GA_Bleeding2.GA_Bleeding2_C.CheckAndSetupCachables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGA_Bleeding2_C::CheckAndSetupCachables()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding2.GA_Bleeding2_C.CheckAndSetupCachables");

	UGA_Bleeding2_C_CheckAndSetupCachables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bleeding2.GA_Bleeding2_C.EventReceived_748DCDCF47995F33EAAFC099C9811B7C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Bleeding2_C::EventReceived_748DCDCF47995F33EAAFC099C9811B7C(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding2.GA_Bleeding2_C.EventReceived_748DCDCF47995F33EAAFC099C9811B7C");

	UGA_Bleeding2_C_EventReceived_748DCDCF47995F33EAAFC099C9811B7C_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bleeding2.GA_Bleeding2_C.InvalidHandle_7966EABB4E34C71AF13FF09B344B5A62
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Bleeding2_C::InvalidHandle_7966EABB4E34C71AF13FF09B344B5A62(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding2.GA_Bleeding2_C.InvalidHandle_7966EABB4E34C71AF13FF09B344B5A62");

	UGA_Bleeding2_C_InvalidHandle_7966EABB4E34C71AF13FF09B344B5A62_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bleeding2.GA_Bleeding2_C.OnRemoved_7966EABB4E34C71AF13FF09B344B5A62
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Bleeding2_C::OnRemoved_7966EABB4E34C71AF13FF09B344B5A62(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding2.GA_Bleeding2_C.OnRemoved_7966EABB4E34C71AF13FF09B344B5A62");

	UGA_Bleeding2_C_OnRemoved_7966EABB4E34C71AF13FF09B344B5A62_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bleeding2.GA_Bleeding2_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Bleeding2_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding2.GA_Bleeding2_C.K2_ActivateAbility");

	UGA_Bleeding2_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bleeding2.GA_Bleeding2_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Bleeding2_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding2.GA_Bleeding2_C.K2_OnEndAbility");

	UGA_Bleeding2_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bleeding2.GA_Bleeding2_C.ExecuteUbergraph_GA_Bleeding2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Bleeding2_C::ExecuteUbergraph_GA_Bleeding2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding2.GA_Bleeding2_C.ExecuteUbergraph_GA_Bleeding2");

	UGA_Bleeding2_C_ExecuteUbergraph_GA_Bleeding2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
