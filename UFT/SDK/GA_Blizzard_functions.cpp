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

// Function GA_Blizzard.GA_Blizzard_C.EventReceived_E4A4E2A443AA2CE13AFE58A82F5A2934
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Blizzard_C::EventReceived_E4A4E2A443AA2CE13AFE58A82F5A2934(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Blizzard.GA_Blizzard_C.EventReceived_E4A4E2A443AA2CE13AFE58A82F5A2934");

	UGA_Blizzard_C_EventReceived_E4A4E2A443AA2CE13AFE58A82F5A2934_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Blizzard.GA_Blizzard_C.InvalidHandle_E8B017064A0D334A66446E924354C892
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Blizzard_C::InvalidHandle_E8B017064A0D334A66446E924354C892(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Blizzard.GA_Blizzard_C.InvalidHandle_E8B017064A0D334A66446E924354C892");

	UGA_Blizzard_C_InvalidHandle_E8B017064A0D334A66446E924354C892_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Blizzard.GA_Blizzard_C.OnRemoved_E8B017064A0D334A66446E924354C892
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Blizzard_C::OnRemoved_E8B017064A0D334A66446E924354C892(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Blizzard.GA_Blizzard_C.OnRemoved_E8B017064A0D334A66446E924354C892");

	UGA_Blizzard_C_OnRemoved_E8B017064A0D334A66446E924354C892_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Blizzard.GA_Blizzard_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Blizzard_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Blizzard.GA_Blizzard_C.K2_ActivateAbility");

	UGA_Blizzard_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Blizzard.GA_Blizzard_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Blizzard_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Blizzard.GA_Blizzard_C.K2_OnEndAbility");

	UGA_Blizzard_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Blizzard.GA_Blizzard_C.ExecuteUbergraph_GA_Blizzard
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Blizzard_C::ExecuteUbergraph_GA_Blizzard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Blizzard.GA_Blizzard_C.ExecuteUbergraph_GA_Blizzard");

	UGA_Blizzard_C_ExecuteUbergraph_GA_Blizzard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
