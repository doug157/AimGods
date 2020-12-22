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

// Function GA_PersistentHealthRegen.GA_PersistentHealthRegen_C.OnFinished_712AA67141E78B3E710A9DB39319877E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActionNumber                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_PersistentHealthRegen_C::OnFinished_712AA67141E78B3E710A9DB39319877E(int ActionNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_PersistentHealthRegen.GA_PersistentHealthRegen_C.OnFinished_712AA67141E78B3E710A9DB39319877E");

	UGA_PersistentHealthRegen_C_OnFinished_712AA67141E78B3E710A9DB39319877E_Params params;
	params.ActionNumber = ActionNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PersistentHealthRegen.GA_PersistentHealthRegen_C.OnPerformAction_712AA67141E78B3E710A9DB39319877E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActionNumber                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_PersistentHealthRegen_C::OnPerformAction_712AA67141E78B3E710A9DB39319877E(int ActionNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_PersistentHealthRegen.GA_PersistentHealthRegen_C.OnPerformAction_712AA67141E78B3E710A9DB39319877E");

	UGA_PersistentHealthRegen_C_OnPerformAction_712AA67141E78B3E710A9DB39319877E_Params params;
	params.ActionNumber = ActionNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PersistentHealthRegen.GA_PersistentHealthRegen_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_PersistentHealthRegen_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_PersistentHealthRegen.GA_PersistentHealthRegen_C.K2_ActivateAbility");

	UGA_PersistentHealthRegen_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PersistentHealthRegen.GA_PersistentHealthRegen_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_PersistentHealthRegen_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_PersistentHealthRegen.GA_PersistentHealthRegen_C.K2_OnEndAbility");

	UGA_PersistentHealthRegen_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_PersistentHealthRegen.GA_PersistentHealthRegen_C.ExecuteUbergraph_GA_PersistentHealthRegen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_PersistentHealthRegen_C::ExecuteUbergraph_GA_PersistentHealthRegen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_PersistentHealthRegen.GA_PersistentHealthRegen_C.ExecuteUbergraph_GA_PersistentHealthRegen");

	UGA_PersistentHealthRegen_C_ExecuteUbergraph_GA_PersistentHealthRegen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
