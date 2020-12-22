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

// Function GA_CounterHeadshot.GA_CounterHeadshot_C.EventReceived_84A6D8D1409A551806D5A687E01C4F4D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_CounterHeadshot_C::EventReceived_84A6D8D1409A551806D5A687E01C4F4D(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CounterHeadshot.GA_CounterHeadshot_C.EventReceived_84A6D8D1409A551806D5A687E01C4F4D");

	UGA_CounterHeadshot_C_EventReceived_84A6D8D1409A551806D5A687E01C4F4D_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_CounterHeadshot.GA_CounterHeadshot_C.InvalidHandle_D790F3FB42EF05665FD3CC812452BDF7
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_CounterHeadshot_C::InvalidHandle_D790F3FB42EF05665FD3CC812452BDF7(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CounterHeadshot.GA_CounterHeadshot_C.InvalidHandle_D790F3FB42EF05665FD3CC812452BDF7");

	UGA_CounterHeadshot_C_InvalidHandle_D790F3FB42EF05665FD3CC812452BDF7_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_CounterHeadshot.GA_CounterHeadshot_C.OnRemoved_D790F3FB42EF05665FD3CC812452BDF7
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_CounterHeadshot_C::OnRemoved_D790F3FB42EF05665FD3CC812452BDF7(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CounterHeadshot.GA_CounterHeadshot_C.OnRemoved_D790F3FB42EF05665FD3CC812452BDF7");

	UGA_CounterHeadshot_C_OnRemoved_D790F3FB42EF05665FD3CC812452BDF7_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_CounterHeadshot.GA_CounterHeadshot_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_CounterHeadshot_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CounterHeadshot.GA_CounterHeadshot_C.K2_ActivateAbility");

	UGA_CounterHeadshot_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_CounterHeadshot.GA_CounterHeadshot_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_CounterHeadshot_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CounterHeadshot.GA_CounterHeadshot_C.K2_OnEndAbility");

	UGA_CounterHeadshot_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_CounterHeadshot.GA_CounterHeadshot_C.ExecuteUbergraph_GA_CounterHeadshot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_CounterHeadshot_C::ExecuteUbergraph_GA_CounterHeadshot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CounterHeadshot.GA_CounterHeadshot_C.ExecuteUbergraph_GA_CounterHeadshot");

	UGA_CounterHeadshot_C_ExecuteUbergraph_GA_CounterHeadshot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
