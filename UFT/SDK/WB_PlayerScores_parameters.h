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

// Function WB_PlayerScores.WB_PlayerScores_C.SortPlayerArray
struct UWB_PlayerScores_C_SortPlayerArray_Params
{
	TArray<class ABP_AGPlayerState_C*>                 Input;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class ABP_AGPlayerState_C*>                 Output;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function WB_PlayerScores.WB_PlayerScores_C.D
struct UWB_PlayerScores_C_D_Params
{
	class UScrollBox*                                  ScrollBox;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_AGPlayerState_C*>                 PlayerArray;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WB_PlayerScores.WB_PlayerScores_C.Construct
struct UWB_PlayerScores_C_Construct_Params
{
};

// Function WB_PlayerScores.WB_PlayerScores_C.CreatePlayerList
struct UWB_PlayerScores_C_CreatePlayerList_Params
{
};

// Function WB_PlayerScores.WB_PlayerScores_C.ExecuteUbergraph_WB_PlayerScores
struct UWB_PlayerScores_C_ExecuteUbergraph_WB_PlayerScores_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
