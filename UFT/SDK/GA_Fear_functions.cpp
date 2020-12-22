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

// Function GA_Fear.GA_Fear_C.EventReceived_DB04C05143244B4400271081633A8D89
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Fear_C::EventReceived_DB04C05143244B4400271081633A8D89(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Fear.GA_Fear_C.EventReceived_DB04C05143244B4400271081633A8D89");

	UGA_Fear_C_EventReceived_DB04C05143244B4400271081633A8D89_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Fear.GA_Fear_C.InvalidHandle_80A807C04901CB1686762780886EDD88
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Fear_C::InvalidHandle_80A807C04901CB1686762780886EDD88(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Fear.GA_Fear_C.InvalidHandle_80A807C04901CB1686762780886EDD88");

	UGA_Fear_C_InvalidHandle_80A807C04901CB1686762780886EDD88_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Fear.GA_Fear_C.OnRemoved_80A807C04901CB1686762780886EDD88
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Fear_C::OnRemoved_80A807C04901CB1686762780886EDD88(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Fear.GA_Fear_C.OnRemoved_80A807C04901CB1686762780886EDD88");

	UGA_Fear_C_OnRemoved_80A807C04901CB1686762780886EDD88_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Fear.GA_Fear_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Fear_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Fear.GA_Fear_C.K2_ActivateAbility");

	UGA_Fear_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Fear.GA_Fear_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Fear_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Fear.GA_Fear_C.K2_OnEndAbility");

	UGA_Fear_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Fear.GA_Fear_C.ExecuteUbergraph_GA_Fear
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Fear_C::ExecuteUbergraph_GA_Fear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Fear.GA_Fear_C.ExecuteUbergraph_GA_Fear");

	UGA_Fear_C_ExecuteUbergraph_GA_Fear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
