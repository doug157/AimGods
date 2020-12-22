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

// Function GA_Trap.GA_Trap_C.EventReceived_88CCF736488466D7ACD414836AF6457F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Trap_C::EventReceived_88CCF736488466D7ACD414836AF6457F(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap.GA_Trap_C.EventReceived_88CCF736488466D7ACD414836AF6457F");

	UGA_Trap_C_EventReceived_88CCF736488466D7ACD414836AF6457F_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Trap.GA_Trap_C.InvalidHandle_F525B0E94B6D6418E95E6F8250DFF9F9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Trap_C::InvalidHandle_F525B0E94B6D6418E95E6F8250DFF9F9(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap.GA_Trap_C.InvalidHandle_F525B0E94B6D6418E95E6F8250DFF9F9");

	UGA_Trap_C_InvalidHandle_F525B0E94B6D6418E95E6F8250DFF9F9_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Trap.GA_Trap_C.OnRemoved_F525B0E94B6D6418E95E6F8250DFF9F9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Trap_C::OnRemoved_F525B0E94B6D6418E95E6F8250DFF9F9(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap.GA_Trap_C.OnRemoved_F525B0E94B6D6418E95E6F8250DFF9F9");

	UGA_Trap_C_OnRemoved_F525B0E94B6D6418E95E6F8250DFF9F9_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Trap.GA_Trap_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Trap_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap.GA_Trap_C.K2_ActivateAbility");

	UGA_Trap_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Trap.GA_Trap_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Trap_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap.GA_Trap_C.K2_OnEndAbility");

	UGA_Trap_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Trap.GA_Trap_C.ExecuteUbergraph_GA_Trap
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Trap_C::ExecuteUbergraph_GA_Trap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap.GA_Trap_C.ExecuteUbergraph_GA_Trap");

	UGA_Trap_C_ExecuteUbergraph_GA_Trap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
