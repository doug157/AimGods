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

// Function GA_Disarm.GA_Disarm_C.EventReceived_108C3B8840A21CD280DDA18E14475F2F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Disarm_C::EventReceived_108C3B8840A21CD280DDA18E14475F2F(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Disarm.GA_Disarm_C.EventReceived_108C3B8840A21CD280DDA18E14475F2F");

	UGA_Disarm_C_EventReceived_108C3B8840A21CD280DDA18E14475F2F_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Disarm.GA_Disarm_C.InvalidHandle_12D1366B4EA5464FD5CF62913C2D2A4A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Disarm_C::InvalidHandle_12D1366B4EA5464FD5CF62913C2D2A4A(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Disarm.GA_Disarm_C.InvalidHandle_12D1366B4EA5464FD5CF62913C2D2A4A");

	UGA_Disarm_C_InvalidHandle_12D1366B4EA5464FD5CF62913C2D2A4A_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Disarm.GA_Disarm_C.OnRemoved_12D1366B4EA5464FD5CF62913C2D2A4A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Disarm_C::OnRemoved_12D1366B4EA5464FD5CF62913C2D2A4A(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Disarm.GA_Disarm_C.OnRemoved_12D1366B4EA5464FD5CF62913C2D2A4A");

	UGA_Disarm_C_OnRemoved_12D1366B4EA5464FD5CF62913C2D2A4A_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Disarm.GA_Disarm_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Disarm_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Disarm.GA_Disarm_C.K2_ActivateAbility");

	UGA_Disarm_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Disarm.GA_Disarm_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Disarm_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Disarm.GA_Disarm_C.K2_OnEndAbility");

	UGA_Disarm_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Disarm.GA_Disarm_C.ExecuteUbergraph_GA_Disarm
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Disarm_C::ExecuteUbergraph_GA_Disarm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Disarm.GA_Disarm_C.ExecuteUbergraph_GA_Disarm");

	UGA_Disarm_C_ExecuteUbergraph_GA_Disarm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
