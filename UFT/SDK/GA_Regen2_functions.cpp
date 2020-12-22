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

// Function GA_Regen2.GA_Regen2_C.EventReceived_6E03EDB24282BDB7142E54B9043D4104
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Regen2_C::EventReceived_6E03EDB24282BDB7142E54B9043D4104(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Regen2.GA_Regen2_C.EventReceived_6E03EDB24282BDB7142E54B9043D4104");

	UGA_Regen2_C_EventReceived_6E03EDB24282BDB7142E54B9043D4104_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Regen2.GA_Regen2_C.InvalidHandle_1A7E9C4F4CEE12B76DBB12BA93DF969B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Regen2_C::InvalidHandle_1A7E9C4F4CEE12B76DBB12BA93DF969B(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Regen2.GA_Regen2_C.InvalidHandle_1A7E9C4F4CEE12B76DBB12BA93DF969B");

	UGA_Regen2_C_InvalidHandle_1A7E9C4F4CEE12B76DBB12BA93DF969B_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Regen2.GA_Regen2_C.OnRemoved_1A7E9C4F4CEE12B76DBB12BA93DF969B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Regen2_C::OnRemoved_1A7E9C4F4CEE12B76DBB12BA93DF969B(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Regen2.GA_Regen2_C.OnRemoved_1A7E9C4F4CEE12B76DBB12BA93DF969B");

	UGA_Regen2_C_OnRemoved_1A7E9C4F4CEE12B76DBB12BA93DF969B_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Regen2.GA_Regen2_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Regen2_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Regen2.GA_Regen2_C.K2_ActivateAbility");

	UGA_Regen2_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Regen2.GA_Regen2_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Regen2_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Regen2.GA_Regen2_C.K2_OnEndAbility");

	UGA_Regen2_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Regen2.GA_Regen2_C.ExecuteUbergraph_GA_Regen2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Regen2_C::ExecuteUbergraph_GA_Regen2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Regen2.GA_Regen2_C.ExecuteUbergraph_GA_Regen2");

	UGA_Regen2_C_ExecuteUbergraph_GA_Regen2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
