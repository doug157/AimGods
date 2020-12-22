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

// Function GA_HealBullets_new.GA_HealBullets_new_C.InvalidHandle_A3CEC4B1455D1FF82CB33CB5982CF0DC
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_HealBullets_new_C::InvalidHandle_A3CEC4B1455D1FF82CB33CB5982CF0DC(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_HealBullets_new.GA_HealBullets_new_C.InvalidHandle_A3CEC4B1455D1FF82CB33CB5982CF0DC");

	UGA_HealBullets_new_C_InvalidHandle_A3CEC4B1455D1FF82CB33CB5982CF0DC_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_HealBullets_new.GA_HealBullets_new_C.OnRemoved_A3CEC4B1455D1FF82CB33CB5982CF0DC
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_HealBullets_new_C::OnRemoved_A3CEC4B1455D1FF82CB33CB5982CF0DC(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_HealBullets_new.GA_HealBullets_new_C.OnRemoved_A3CEC4B1455D1FF82CB33CB5982CF0DC");

	UGA_HealBullets_new_C_OnRemoved_A3CEC4B1455D1FF82CB33CB5982CF0DC_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_HealBullets_new.GA_HealBullets_new_C.EventReceived_D6008311459059F5E6B2E2B449CE2C58
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_HealBullets_new_C::EventReceived_D6008311459059F5E6B2E2B449CE2C58(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_HealBullets_new.GA_HealBullets_new_C.EventReceived_D6008311459059F5E6B2E2B449CE2C58");

	UGA_HealBullets_new_C_EventReceived_D6008311459059F5E6B2E2B449CE2C58_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_HealBullets_new.GA_HealBullets_new_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_HealBullets_new_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_HealBullets_new.GA_HealBullets_new_C.K2_ActivateAbility");

	UGA_HealBullets_new_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_HealBullets_new.GA_HealBullets_new_C.ExecuteUbergraph_GA_HealBullets_new
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_HealBullets_new_C::ExecuteUbergraph_GA_HealBullets_new(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_HealBullets_new.GA_HealBullets_new_C.ExecuteUbergraph_GA_HealBullets_new");

	UGA_HealBullets_new_C_ExecuteUbergraph_GA_HealBullets_new_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
