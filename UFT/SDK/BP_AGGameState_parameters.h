#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function BP_AGGameState.BP_AGGameState_C.ReceiveBeginPlay
struct ABP_AGGameState_C_ReceiveBeginPlay_Params
{
};

// Function BP_AGGameState.BP_AGGameState_C.On Post Match Begin
struct ABP_AGGameState_C_On_Post_Match_Begin_Params
{
	bool                                               bRedTeamWon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AGGameState.BP_AGGameState_C.ExecuteUbergraph_BP_AGGameState
struct ABP_AGGameState_C_ExecuteUbergraph_BP_AGGameState_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
