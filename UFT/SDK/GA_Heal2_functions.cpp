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

// Function GA_Heal2.GA_Heal2_C.EventReceived_4E3B9D16429C9582D1AD04ACCA34B8C8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Heal2_C::EventReceived_4E3B9D16429C9582D1AD04ACCA34B8C8(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Heal2.GA_Heal2_C.EventReceived_4E3B9D16429C9582D1AD04ACCA34B8C8");

	UGA_Heal2_C_EventReceived_4E3B9D16429C9582D1AD04ACCA34B8C8_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Heal2.GA_Heal2_C.InvalidHandle_2BE542BE4327E15B41826E80C59D30B4
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Heal2_C::InvalidHandle_2BE542BE4327E15B41826E80C59D30B4(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Heal2.GA_Heal2_C.InvalidHandle_2BE542BE4327E15B41826E80C59D30B4");

	UGA_Heal2_C_InvalidHandle_2BE542BE4327E15B41826E80C59D30B4_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Heal2.GA_Heal2_C.OnRemoved_2BE542BE4327E15B41826E80C59D30B4
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Heal2_C::OnRemoved_2BE542BE4327E15B41826E80C59D30B4(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Heal2.GA_Heal2_C.OnRemoved_2BE542BE4327E15B41826E80C59D30B4");

	UGA_Heal2_C_OnRemoved_2BE542BE4327E15B41826E80C59D30B4_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Heal2.GA_Heal2_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Heal2_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Heal2.GA_Heal2_C.K2_ActivateAbility");

	UGA_Heal2_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Heal2.GA_Heal2_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Heal2_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Heal2.GA_Heal2_C.K2_OnEndAbility");

	UGA_Heal2_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Heal2.GA_Heal2_C.ExecuteUbergraph_GA_Heal2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Heal2_C::ExecuteUbergraph_GA_Heal2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Heal2.GA_Heal2_C.ExecuteUbergraph_GA_Heal2");

	UGA_Heal2_C_ExecuteUbergraph_GA_Heal2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
