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

// Function GA_RootMotionMoveToForce.GA_RootMotionMoveToForce_C.OnTimedOutAndDestinationReached_EDA6A90643EFEB5AF2DA19BAF2ACD9EC
// (BlueprintCallable, BlueprintEvent)
void UGA_RootMotionMoveToForce_C::OnTimedOutAndDestinationReached_EDA6A90643EFEB5AF2DA19BAF2ACD9EC()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_RootMotionMoveToForce.GA_RootMotionMoveToForce_C.OnTimedOutAndDestinationReached_EDA6A90643EFEB5AF2DA19BAF2ACD9EC");

	UGA_RootMotionMoveToForce_C_OnTimedOutAndDestinationReached_EDA6A90643EFEB5AF2DA19BAF2ACD9EC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_RootMotionMoveToForce.GA_RootMotionMoveToForce_C.OnTimedOut_EDA6A90643EFEB5AF2DA19BAF2ACD9EC
// (BlueprintCallable, BlueprintEvent)
void UGA_RootMotionMoveToForce_C::OnTimedOut_EDA6A90643EFEB5AF2DA19BAF2ACD9EC()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_RootMotionMoveToForce.GA_RootMotionMoveToForce_C.OnTimedOut_EDA6A90643EFEB5AF2DA19BAF2ACD9EC");

	UGA_RootMotionMoveToForce_C_OnTimedOut_EDA6A90643EFEB5AF2DA19BAF2ACD9EC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_RootMotionMoveToForce.GA_RootMotionMoveToForce_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_RootMotionMoveToForce_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_RootMotionMoveToForce.GA_RootMotionMoveToForce_C.K2_OnEndAbility");

	UGA_RootMotionMoveToForce_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_RootMotionMoveToForce.GA_RootMotionMoveToForce_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_RootMotionMoveToForce_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_RootMotionMoveToForce.GA_RootMotionMoveToForce_C.K2_ActivateAbilityFromEvent");

	UGA_RootMotionMoveToForce_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_RootMotionMoveToForce.GA_RootMotionMoveToForce_C.ExecuteUbergraph_GA_RootMotionMoveToForce
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_RootMotionMoveToForce_C::ExecuteUbergraph_GA_RootMotionMoveToForce(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_RootMotionMoveToForce.GA_RootMotionMoveToForce_C.ExecuteUbergraph_GA_RootMotionMoveToForce");

	UGA_RootMotionMoveToForce_C_ExecuteUbergraph_GA_RootMotionMoveToForce_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
