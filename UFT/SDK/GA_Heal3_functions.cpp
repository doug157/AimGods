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

// Function GA_Heal3.GA_Heal3_C.EventReceived_0225B4D8480001A476428194229CE6B2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Heal3_C::EventReceived_0225B4D8480001A476428194229CE6B2(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Heal3.GA_Heal3_C.EventReceived_0225B4D8480001A476428194229CE6B2");

	UGA_Heal3_C_EventReceived_0225B4D8480001A476428194229CE6B2_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Heal3.GA_Heal3_C.InvalidHandle_8B07A82B455DF0047321E2AE8BCEE70F
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Heal3_C::InvalidHandle_8B07A82B455DF0047321E2AE8BCEE70F(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Heal3.GA_Heal3_C.InvalidHandle_8B07A82B455DF0047321E2AE8BCEE70F");

	UGA_Heal3_C_InvalidHandle_8B07A82B455DF0047321E2AE8BCEE70F_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Heal3.GA_Heal3_C.OnRemoved_8B07A82B455DF0047321E2AE8BCEE70F
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Heal3_C::OnRemoved_8B07A82B455DF0047321E2AE8BCEE70F(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Heal3.GA_Heal3_C.OnRemoved_8B07A82B455DF0047321E2AE8BCEE70F");

	UGA_Heal3_C_OnRemoved_8B07A82B455DF0047321E2AE8BCEE70F_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Heal3.GA_Heal3_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Heal3_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Heal3.GA_Heal3_C.K2_ActivateAbility");

	UGA_Heal3_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Heal3.GA_Heal3_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Heal3_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Heal3.GA_Heal3_C.K2_OnEndAbility");

	UGA_Heal3_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Heal3.GA_Heal3_C.ExecuteUbergraph_GA_Heal3
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Heal3_C::ExecuteUbergraph_GA_Heal3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Heal3.GA_Heal3_C.ExecuteUbergraph_GA_Heal3");

	UGA_Heal3_C_ExecuteUbergraph_GA_Heal3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
