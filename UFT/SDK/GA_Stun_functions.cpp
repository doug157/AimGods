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

// Function GA_Stun.GA_Stun_C.EventReceived_D5A647D5418D8C672A3FE1B6FD79BC3E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Stun_C::EventReceived_D5A647D5418D8C672A3FE1B6FD79BC3E(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Stun.GA_Stun_C.EventReceived_D5A647D5418D8C672A3FE1B6FD79BC3E");

	UGA_Stun_C_EventReceived_D5A647D5418D8C672A3FE1B6FD79BC3E_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Stun.GA_Stun_C.InvalidHandle_96ED5C654F76CC9C2BCFE68E8EDA82F7
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Stun_C::InvalidHandle_96ED5C654F76CC9C2BCFE68E8EDA82F7(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Stun.GA_Stun_C.InvalidHandle_96ED5C654F76CC9C2BCFE68E8EDA82F7");

	UGA_Stun_C_InvalidHandle_96ED5C654F76CC9C2BCFE68E8EDA82F7_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Stun.GA_Stun_C.OnRemoved_96ED5C654F76CC9C2BCFE68E8EDA82F7
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Stun_C::OnRemoved_96ED5C654F76CC9C2BCFE68E8EDA82F7(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Stun.GA_Stun_C.OnRemoved_96ED5C654F76CC9C2BCFE68E8EDA82F7");

	UGA_Stun_C_OnRemoved_96ED5C654F76CC9C2BCFE68E8EDA82F7_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Stun.GA_Stun_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Stun_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Stun.GA_Stun_C.K2_ActivateAbility");

	UGA_Stun_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Stun.GA_Stun_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Stun_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Stun.GA_Stun_C.K2_OnEndAbility");

	UGA_Stun_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Stun.GA_Stun_C.ExecuteUbergraph_GA_Stun
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Stun_C::ExecuteUbergraph_GA_Stun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Stun.GA_Stun_C.ExecuteUbergraph_GA_Stun");

	UGA_Stun_C_ExecuteUbergraph_GA_Stun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
