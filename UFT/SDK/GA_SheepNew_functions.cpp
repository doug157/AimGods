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

// Function GA_SheepNew.GA_SheepNew_C.EventReceived_7232435B4781CBA57A5F32B953D29CC5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_SheepNew_C::EventReceived_7232435B4781CBA57A5F32B953D29CC5(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SheepNew.GA_SheepNew_C.EventReceived_7232435B4781CBA57A5F32B953D29CC5");

	UGA_SheepNew_C_EventReceived_7232435B4781CBA57A5F32B953D29CC5_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_SheepNew.GA_SheepNew_C.InvalidHandle_8C953441424CCFCF9C5F7D98812C991D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_SheepNew_C::InvalidHandle_8C953441424CCFCF9C5F7D98812C991D(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SheepNew.GA_SheepNew_C.InvalidHandle_8C953441424CCFCF9C5F7D98812C991D");

	UGA_SheepNew_C_InvalidHandle_8C953441424CCFCF9C5F7D98812C991D_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_SheepNew.GA_SheepNew_C.OnRemoved_8C953441424CCFCF9C5F7D98812C991D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_SheepNew_C::OnRemoved_8C953441424CCFCF9C5F7D98812C991D(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SheepNew.GA_SheepNew_C.OnRemoved_8C953441424CCFCF9C5F7D98812C991D");

	UGA_SheepNew_C_OnRemoved_8C953441424CCFCF9C5F7D98812C991D_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_SheepNew.GA_SheepNew_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_SheepNew_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SheepNew.GA_SheepNew_C.K2_OnEndAbility");

	UGA_SheepNew_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_SheepNew.GA_SheepNew_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_SheepNew_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SheepNew.GA_SheepNew_C.K2_ActivateAbility");

	UGA_SheepNew_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_SheepNew.GA_SheepNew_C.TargetReceivedDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAGAbilitySystemComponent* SourceASC                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MitigatedDamage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer   GEAssetTags                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_SheepNew_C::TargetReceivedDamage(class UAGAbilitySystemComponent* SourceASC, float MitigatedDamage, const struct FGameplayTagContainer& GEAssetTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SheepNew.GA_SheepNew_C.TargetReceivedDamage");

	UGA_SheepNew_C_TargetReceivedDamage_Params params;
	params.SourceASC = SourceASC;
	params.MitigatedDamage = MitigatedDamage;
	params.GEAssetTags = GEAssetTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_SheepNew.GA_SheepNew_C.ExecuteUbergraph_GA_SheepNew
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_SheepNew_C::ExecuteUbergraph_GA_SheepNew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SheepNew.GA_SheepNew_C.ExecuteUbergraph_GA_SheepNew");

	UGA_SheepNew_C_ExecuteUbergraph_GA_SheepNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
