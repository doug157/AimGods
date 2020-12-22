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

// Function GA_Curse.GA_Curse_C.EventReceived_555AAEF74EA92E3AE9297A9137BBC146
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Curse_C::EventReceived_555AAEF74EA92E3AE9297A9137BBC146(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Curse.GA_Curse_C.EventReceived_555AAEF74EA92E3AE9297A9137BBC146");

	UGA_Curse_C_EventReceived_555AAEF74EA92E3AE9297A9137BBC146_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Curse.GA_Curse_C.InvalidHandle_D47480A34760B7274C35AE8109DE370F
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Curse_C::InvalidHandle_D47480A34760B7274C35AE8109DE370F(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Curse.GA_Curse_C.InvalidHandle_D47480A34760B7274C35AE8109DE370F");

	UGA_Curse_C_InvalidHandle_D47480A34760B7274C35AE8109DE370F_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Curse.GA_Curse_C.OnRemoved_D47480A34760B7274C35AE8109DE370F
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Curse_C::OnRemoved_D47480A34760B7274C35AE8109DE370F(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Curse.GA_Curse_C.OnRemoved_D47480A34760B7274C35AE8109DE370F");

	UGA_Curse_C_OnRemoved_D47480A34760B7274C35AE8109DE370F_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Curse.GA_Curse_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Curse_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Curse.GA_Curse_C.K2_ActivateAbility");

	UGA_Curse_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Curse.GA_Curse_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Curse_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Curse.GA_Curse_C.K2_OnEndAbility");

	UGA_Curse_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Curse.GA_Curse_C.ExecuteUbergraph_GA_Curse
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Curse_C::ExecuteUbergraph_GA_Curse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Curse.GA_Curse_C.ExecuteUbergraph_GA_Curse");

	UGA_Curse_C_ExecuteUbergraph_GA_Curse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
