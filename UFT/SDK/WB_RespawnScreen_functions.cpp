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

// Function WB_RespawnScreen.WB_RespawnScreen_C.Finished_8290CD1B40040114A413D2A1483419FE
// (BlueprintCallable, BlueprintEvent)
void UWB_RespawnScreen_C::Finished_8290CD1B40040114A413D2A1483419FE()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_RespawnScreen.WB_RespawnScreen_C.Finished_8290CD1B40040114A413D2A1483419FE");

	UWB_RespawnScreen_C_Finished_8290CD1B40040114A413D2A1483419FE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_RespawnScreen.WB_RespawnScreen_C.Decrement Timer
// (BlueprintCallable, BlueprintEvent)
void UWB_RespawnScreen_C::Decrement_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_RespawnScreen.WB_RespawnScreen_C.Decrement Timer");

	UWB_RespawnScreen_C_Decrement_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_RespawnScreen.WB_RespawnScreen_C.Start Respawn Countdown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time_till_Respawn              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_RespawnScreen_C::Start_Respawn_Countdown(float Time_till_Respawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_RespawnScreen.WB_RespawnScreen_C.Start Respawn Countdown");

	UWB_RespawnScreen_C_Start_Respawn_Countdown_Params params;
	params.Time_till_Respawn = Time_till_Respawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_RespawnScreen.WB_RespawnScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_RespawnScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_RespawnScreen.WB_RespawnScreen_C.Construct");

	UWB_RespawnScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_RespawnScreen.WB_RespawnScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_RespawnScreen_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_RespawnScreen.WB_RespawnScreen_C.Destruct");

	UWB_RespawnScreen_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_RespawnScreen.WB_RespawnScreen_C.ExecuteUbergraph_WB_RespawnScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_RespawnScreen_C::ExecuteUbergraph_WB_RespawnScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_RespawnScreen.WB_RespawnScreen_C.ExecuteUbergraph_WB_RespawnScreen");

	UWB_RespawnScreen_C_ExecuteUbergraph_WB_RespawnScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
