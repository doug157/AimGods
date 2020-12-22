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

// Function GA_RootMotionRadialForce.GA_RootMotionRadialForce_C.OnFinish_FA4FE7EC4D3A2B55CA145FA557D40488
// (BlueprintCallable, BlueprintEvent)
void UGA_RootMotionRadialForce_C::OnFinish_FA4FE7EC4D3A2B55CA145FA557D40488()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_RootMotionRadialForce.GA_RootMotionRadialForce_C.OnFinish_FA4FE7EC4D3A2B55CA145FA557D40488");

	UGA_RootMotionRadialForce_C_OnFinish_FA4FE7EC4D3A2B55CA145FA557D40488_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_RootMotionRadialForce.GA_RootMotionRadialForce_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_RootMotionRadialForce_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_RootMotionRadialForce.GA_RootMotionRadialForce_C.K2_OnEndAbility");

	UGA_RootMotionRadialForce_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_RootMotionRadialForce.GA_RootMotionRadialForce_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_RootMotionRadialForce_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_RootMotionRadialForce.GA_RootMotionRadialForce_C.K2_ActivateAbilityFromEvent");

	UGA_RootMotionRadialForce_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_RootMotionRadialForce.GA_RootMotionRadialForce_C.ExecuteUbergraph_GA_RootMotionRadialForce
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_RootMotionRadialForce_C::ExecuteUbergraph_GA_RootMotionRadialForce(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_RootMotionRadialForce.GA_RootMotionRadialForce_C.ExecuteUbergraph_GA_RootMotionRadialForce");

	UGA_RootMotionRadialForce_C_ExecuteUbergraph_GA_RootMotionRadialForce_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
