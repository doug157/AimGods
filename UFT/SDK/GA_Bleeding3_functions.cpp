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

// Function GA_Bleeding3.GA_Bleeding3_C.CheckAndSetupCachables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGA_Bleeding3_C::CheckAndSetupCachables()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding3.GA_Bleeding3_C.CheckAndSetupCachables");

	UGA_Bleeding3_C_CheckAndSetupCachables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bleeding3.GA_Bleeding3_C.EventReceived_D305570244C224E70090539D4FA6A770
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Bleeding3_C::EventReceived_D305570244C224E70090539D4FA6A770(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding3.GA_Bleeding3_C.EventReceived_D305570244C224E70090539D4FA6A770");

	UGA_Bleeding3_C_EventReceived_D305570244C224E70090539D4FA6A770_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bleeding3.GA_Bleeding3_C.InvalidHandle_DA22B6CB4F0226417E0A4AA489FE9496
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Bleeding3_C::InvalidHandle_DA22B6CB4F0226417E0A4AA489FE9496(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding3.GA_Bleeding3_C.InvalidHandle_DA22B6CB4F0226417E0A4AA489FE9496");

	UGA_Bleeding3_C_InvalidHandle_DA22B6CB4F0226417E0A4AA489FE9496_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bleeding3.GA_Bleeding3_C.OnRemoved_DA22B6CB4F0226417E0A4AA489FE9496
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Bleeding3_C::OnRemoved_DA22B6CB4F0226417E0A4AA489FE9496(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding3.GA_Bleeding3_C.OnRemoved_DA22B6CB4F0226417E0A4AA489FE9496");

	UGA_Bleeding3_C_OnRemoved_DA22B6CB4F0226417E0A4AA489FE9496_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bleeding3.GA_Bleeding3_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Bleeding3_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding3.GA_Bleeding3_C.K2_ActivateAbility");

	UGA_Bleeding3_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bleeding3.GA_Bleeding3_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Bleeding3_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding3.GA_Bleeding3_C.K2_OnEndAbility");

	UGA_Bleeding3_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bleeding3.GA_Bleeding3_C.ExecuteUbergraph_GA_Bleeding3
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Bleeding3_C::ExecuteUbergraph_GA_Bleeding3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bleeding3.GA_Bleeding3_C.ExecuteUbergraph_GA_Bleeding3");

	UGA_Bleeding3_C_ExecuteUbergraph_GA_Bleeding3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
