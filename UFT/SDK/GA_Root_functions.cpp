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

// Function GA_Root.GA_Root_C.EventReceived_7897C47B4073DF74733EC89C2DCF30A0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Root_C::EventReceived_7897C47B4073DF74733EC89C2DCF30A0(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Root.GA_Root_C.EventReceived_7897C47B4073DF74733EC89C2DCF30A0");

	UGA_Root_C_EventReceived_7897C47B4073DF74733EC89C2DCF30A0_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Root.GA_Root_C.InvalidHandle_A5A10FE440F020C4746FA8A26ACB2EF1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Root_C::InvalidHandle_A5A10FE440F020C4746FA8A26ACB2EF1(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Root.GA_Root_C.InvalidHandle_A5A10FE440F020C4746FA8A26ACB2EF1");

	UGA_Root_C_InvalidHandle_A5A10FE440F020C4746FA8A26ACB2EF1_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Root.GA_Root_C.OnRemoved_A5A10FE440F020C4746FA8A26ACB2EF1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Root_C::OnRemoved_A5A10FE440F020C4746FA8A26ACB2EF1(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Root.GA_Root_C.OnRemoved_A5A10FE440F020C4746FA8A26ACB2EF1");

	UGA_Root_C_OnRemoved_A5A10FE440F020C4746FA8A26ACB2EF1_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Root.GA_Root_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Root_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Root.GA_Root_C.K2_ActivateAbility");

	UGA_Root_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Root.GA_Root_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Root_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Root.GA_Root_C.K2_OnEndAbility");

	UGA_Root_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Root.GA_Root_C.ExecuteUbergraph_GA_Root
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Root_C::ExecuteUbergraph_GA_Root(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Root.GA_Root_C.ExecuteUbergraph_GA_Root");

	UGA_Root_C_ExecuteUbergraph_GA_Root_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
