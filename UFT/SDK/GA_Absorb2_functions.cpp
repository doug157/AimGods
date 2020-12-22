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

// Function GA_Absorb2.GA_Absorb2_C.EventReceived_9D6067D4443D1D10083D1592488CC28A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Absorb2_C::EventReceived_9D6067D4443D1D10083D1592488CC28A(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Absorb2.GA_Absorb2_C.EventReceived_9D6067D4443D1D10083D1592488CC28A");

	UGA_Absorb2_C_EventReceived_9D6067D4443D1D10083D1592488CC28A_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Absorb2.GA_Absorb2_C.InvalidHandle_0CC4E46A4A5B5FE0B29A48802B44D2EA
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Absorb2_C::InvalidHandle_0CC4E46A4A5B5FE0B29A48802B44D2EA(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Absorb2.GA_Absorb2_C.InvalidHandle_0CC4E46A4A5B5FE0B29A48802B44D2EA");

	UGA_Absorb2_C_InvalidHandle_0CC4E46A4A5B5FE0B29A48802B44D2EA_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Absorb2.GA_Absorb2_C.OnRemoved_0CC4E46A4A5B5FE0B29A48802B44D2EA
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Absorb2_C::OnRemoved_0CC4E46A4A5B5FE0B29A48802B44D2EA(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Absorb2.GA_Absorb2_C.OnRemoved_0CC4E46A4A5B5FE0B29A48802B44D2EA");

	UGA_Absorb2_C_OnRemoved_0CC4E46A4A5B5FE0B29A48802B44D2EA_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Absorb2.GA_Absorb2_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Absorb2_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Absorb2.GA_Absorb2_C.K2_ActivateAbility");

	UGA_Absorb2_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Absorb2.GA_Absorb2_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Absorb2_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Absorb2.GA_Absorb2_C.K2_OnEndAbility");

	UGA_Absorb2_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Absorb2.GA_Absorb2_C.ExecuteUbergraph_GA_Absorb2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Absorb2_C::ExecuteUbergraph_GA_Absorb2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Absorb2.GA_Absorb2_C.ExecuteUbergraph_GA_Absorb2");

	UGA_Absorb2_C_ExecuteUbergraph_GA_Absorb2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
