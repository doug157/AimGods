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

// Function BP_AGGameState.BP_AGGameState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_AGGameState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameState.BP_AGGameState_C.ReceiveBeginPlay");

	ABP_AGGameState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameState.BP_AGGameState_C.On Post Match Begin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRedTeamWon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AGGameState_C::On_Post_Match_Begin(bool bRedTeamWon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameState.BP_AGGameState_C.On Post Match Begin");

	ABP_AGGameState_C_On_Post_Match_Begin_Params params;
	params.bRedTeamWon = bRedTeamWon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameState.BP_AGGameState_C.ExecuteUbergraph_BP_AGGameState
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGGameState_C::ExecuteUbergraph_BP_AGGameState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameState.BP_AGGameState_C.ExecuteUbergraph_BP_AGGameState");

	ABP_AGGameState_C_ExecuteUbergraph_BP_AGGameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
