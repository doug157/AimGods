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

// Function GA_Bleeding.GA_Bleeding_C.CheckAndSetupCachables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGA_Bleeding_C::CheckAndSetupCachables()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding.GA_Bleeding_C.CheckAndSetupCachables");

	UGA_Bleeding_C_CheckAndSetupCachables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bleeding.GA_Bleeding_C.EventReceived_9D3168114BB1A0BA7A0EF59226C092DE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Bleeding_C::EventReceived_9D3168114BB1A0BA7A0EF59226C092DE(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding.GA_Bleeding_C.EventReceived_9D3168114BB1A0BA7A0EF59226C092DE");

	UGA_Bleeding_C_EventReceived_9D3168114BB1A0BA7A0EF59226C092DE_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bleeding.GA_Bleeding_C.InvalidHandle_807C256D45883C8188361380ADEB66E3
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Bleeding_C::InvalidHandle_807C256D45883C8188361380ADEB66E3(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding.GA_Bleeding_C.InvalidHandle_807C256D45883C8188361380ADEB66E3");

	UGA_Bleeding_C_InvalidHandle_807C256D45883C8188361380ADEB66E3_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bleeding.GA_Bleeding_C.OnRemoved_807C256D45883C8188361380ADEB66E3
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Bleeding_C::OnRemoved_807C256D45883C8188361380ADEB66E3(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding.GA_Bleeding_C.OnRemoved_807C256D45883C8188361380ADEB66E3");

	UGA_Bleeding_C_OnRemoved_807C256D45883C8188361380ADEB66E3_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bleeding.GA_Bleeding_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Bleeding_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding.GA_Bleeding_C.K2_ActivateAbility");

	UGA_Bleeding_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bleeding.GA_Bleeding_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Bleeding_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding.GA_Bleeding_C.K2_OnEndAbility");

	UGA_Bleeding_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bleeding.GA_Bleeding_C.CheckParameters
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* OwningActorASC                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  GameplayEffectClass            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle OwningActorASCContext          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UAbilitySystemComponent* TargetASC                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Bleeding_C::CheckParameters(class UAbilitySystemComponent* OwningActorASC, class UClass* GameplayEffectClass, const struct FGameplayEffectContextHandle& OwningActorASCContext, class UAbilitySystemComponent* TargetASC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding.GA_Bleeding_C.CheckParameters");

	UGA_Bleeding_C_CheckParameters_Params params;
	params.OwningActorASC = OwningActorASC;
	params.GameplayEffectClass = GameplayEffectClass;
	params.OwningActorASCContext = OwningActorASCContext;
	params.TargetASC = TargetASC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bleeding.GA_Bleeding_C.ExecuteUbergraph_GA_Bleeding
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Bleeding_C::ExecuteUbergraph_GA_Bleeding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding.GA_Bleeding_C.ExecuteUbergraph_GA_Bleeding");

	UGA_Bleeding_C_ExecuteUbergraph_GA_Bleeding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
