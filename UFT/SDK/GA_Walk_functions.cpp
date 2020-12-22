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

// Function GA_Walk.GA_Walk_C.OnRelease_2B03566A40E5B1F57AAA56A940831EEC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeHeld                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Walk_C::OnRelease_2B03566A40E5B1F57AAA56A940831EEC(float TimeHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Walk.GA_Walk_C.OnRelease_2B03566A40E5B1F57AAA56A940831EEC");

	UGA_Walk_C_OnRelease_2B03566A40E5B1F57AAA56A940831EEC_Params params;
	params.TimeHeld = TimeHeld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Walk.GA_Walk_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Walk_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Walk.GA_Walk_C.K2_OnEndAbility");

	UGA_Walk_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Walk.GA_Walk_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Walk_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Walk.GA_Walk_C.K2_ActivateAbility");

	UGA_Walk_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Walk.GA_Walk_C.ExecuteUbergraph_GA_Walk
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Walk_C::ExecuteUbergraph_GA_Walk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Walk.GA_Walk_C.ExecuteUbergraph_GA_Walk");

	UGA_Walk_C_ExecuteUbergraph_GA_Walk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
