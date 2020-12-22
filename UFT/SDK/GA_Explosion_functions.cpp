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

// Function GA_Explosion.GA_Explosion_C.EventReceived_853F63924242BE40FE382D97BE33D12E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Explosion_C::EventReceived_853F63924242BE40FE382D97BE33D12E(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Explosion.GA_Explosion_C.EventReceived_853F63924242BE40FE382D97BE33D12E");

	UGA_Explosion_C_EventReceived_853F63924242BE40FE382D97BE33D12E_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explosion.GA_Explosion_C.InvalidHandle_95F059D74A5F1FE420D8F6918A0DBA79
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Explosion_C::InvalidHandle_95F059D74A5F1FE420D8F6918A0DBA79(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Explosion.GA_Explosion_C.InvalidHandle_95F059D74A5F1FE420D8F6918A0DBA79");

	UGA_Explosion_C_InvalidHandle_95F059D74A5F1FE420D8F6918A0DBA79_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explosion.GA_Explosion_C.OnRemoved_95F059D74A5F1FE420D8F6918A0DBA79
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Explosion_C::OnRemoved_95F059D74A5F1FE420D8F6918A0DBA79(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Explosion.GA_Explosion_C.OnRemoved_95F059D74A5F1FE420D8F6918A0DBA79");

	UGA_Explosion_C_OnRemoved_95F059D74A5F1FE420D8F6918A0DBA79_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explosion.GA_Explosion_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Explosion_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Explosion.GA_Explosion_C.K2_ActivateAbility");

	UGA_Explosion_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explosion.GA_Explosion_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Explosion_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Explosion.GA_Explosion_C.K2_OnEndAbility");

	UGA_Explosion_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explosion.GA_Explosion_C.ExecuteUbergraph_GA_Explosion
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Explosion_C::ExecuteUbergraph_GA_Explosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Explosion.GA_Explosion_C.ExecuteUbergraph_GA_Explosion");

	UGA_Explosion_C_ExecuteUbergraph_GA_Explosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
