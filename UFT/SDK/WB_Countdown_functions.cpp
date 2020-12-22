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

// Function WB_Countdown.WB_Countdown_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Countdown_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Countdown.WB_Countdown_C.Construct");

	UWB_Countdown_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Countdown.WB_Countdown_C.Timer
// (BlueprintCallable, BlueprintEvent)
void UWB_Countdown_C::Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Countdown.WB_Countdown_C.Timer");

	UWB_Countdown_C_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Countdown.WB_Countdown_C.ExecuteUbergraph_WB_Countdown
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Countdown_C::ExecuteUbergraph_WB_Countdown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Countdown.WB_Countdown_C.ExecuteUbergraph_WB_Countdown");

	UWB_Countdown_C_ExecuteUbergraph_WB_Countdown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Countdown.WB_Countdown_C.ShowTime__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Countdown_C::ShowTime__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Countdown.WB_Countdown_C.ShowTime__DelegateSignature");

	UWB_Countdown_C_ShowTime__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
