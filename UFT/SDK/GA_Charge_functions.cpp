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

// Function GA_Charge.GA_Charge_C.EventReceived_B389E46F442D31DDADF2378223D28E0A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Charge_C::EventReceived_B389E46F442D31DDADF2378223D28E0A(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Charge.GA_Charge_C.EventReceived_B389E46F442D31DDADF2378223D28E0A");

	UGA_Charge_C_EventReceived_B389E46F442D31DDADF2378223D28E0A_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Charge.GA_Charge_C.InvalidHandle_1511F05D4E525A7473279A983FBAF867
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Charge_C::InvalidHandle_1511F05D4E525A7473279A983FBAF867(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Charge.GA_Charge_C.InvalidHandle_1511F05D4E525A7473279A983FBAF867");

	UGA_Charge_C_InvalidHandle_1511F05D4E525A7473279A983FBAF867_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Charge.GA_Charge_C.OnRemoved_1511F05D4E525A7473279A983FBAF867
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Charge_C::OnRemoved_1511F05D4E525A7473279A983FBAF867(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Charge.GA_Charge_C.OnRemoved_1511F05D4E525A7473279A983FBAF867");

	UGA_Charge_C_OnRemoved_1511F05D4E525A7473279A983FBAF867_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Charge.GA_Charge_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Charge_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Charge.GA_Charge_C.K2_OnEndAbility");

	UGA_Charge_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Charge.GA_Charge_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Charge_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Charge.GA_Charge_C.K2_ActivateAbility");

	UGA_Charge_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Charge.GA_Charge_C.ExecuteUbergraph_GA_Charge
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Charge_C::ExecuteUbergraph_GA_Charge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Charge.GA_Charge_C.ExecuteUbergraph_GA_Charge");

	UGA_Charge_C_ExecuteUbergraph_GA_Charge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
