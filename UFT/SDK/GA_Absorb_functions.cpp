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

// Function GA_Absorb.GA_Absorb_C.EventReceived_3F5F7B8E457BA5E79A3DFA9C98F422A0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Absorb_C::EventReceived_3F5F7B8E457BA5E79A3DFA9C98F422A0(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Absorb.GA_Absorb_C.EventReceived_3F5F7B8E457BA5E79A3DFA9C98F422A0");

	UGA_Absorb_C_EventReceived_3F5F7B8E457BA5E79A3DFA9C98F422A0_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Absorb.GA_Absorb_C.InvalidHandle_B87303FE4D2FB094FA56B196781983AF
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Absorb_C::InvalidHandle_B87303FE4D2FB094FA56B196781983AF(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Absorb.GA_Absorb_C.InvalidHandle_B87303FE4D2FB094FA56B196781983AF");

	UGA_Absorb_C_InvalidHandle_B87303FE4D2FB094FA56B196781983AF_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Absorb.GA_Absorb_C.OnRemoved_B87303FE4D2FB094FA56B196781983AF
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Absorb_C::OnRemoved_B87303FE4D2FB094FA56B196781983AF(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Absorb.GA_Absorb_C.OnRemoved_B87303FE4D2FB094FA56B196781983AF");

	UGA_Absorb_C_OnRemoved_B87303FE4D2FB094FA56B196781983AF_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Absorb.GA_Absorb_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Absorb_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Absorb.GA_Absorb_C.K2_ActivateAbility");

	UGA_Absorb_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Absorb.GA_Absorb_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Absorb_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Absorb.GA_Absorb_C.K2_OnEndAbility");

	UGA_Absorb_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Absorb.GA_Absorb_C.ExecuteUbergraph_GA_Absorb
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Absorb_C::ExecuteUbergraph_GA_Absorb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Absorb.GA_Absorb_C.ExecuteUbergraph_GA_Absorb");

	UGA_Absorb_C_ExecuteUbergraph_GA_Absorb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
