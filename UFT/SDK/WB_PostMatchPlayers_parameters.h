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

// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.FillPlayerArrayFromStats
struct UWB_PostMatchPlayers_C_FillPlayerArrayFromStats_Params
{
	TArray<struct FGameStatsPayload>                   GameStats;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.AreAllPlayerStatsLoaded
struct UWB_PostMatchPlayers_C_AreAllPlayerStatsLoaded_Params
{
	bool                                               Loaded;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.Construct
struct UWB_PostMatchPlayers_C_Construct_Params
{
};

// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.TimerUpdate
struct UWB_PostMatchPlayers_C_TimerUpdate_Params
{
};

// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.CustomGameEndGame
struct UWB_PostMatchPlayers_C_CustomGameEndGame_Params
{
};

// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.Retry Load Stats
struct UWB_PostMatchPlayers_C_Retry_Load_Stats_Params
{
};

// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.PreConstruct
struct UWB_PostMatchPlayers_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.OnEndGameStatsReceived
struct UWB_PostMatchPlayers_C_OnEndGameStatsReceived_Params
{
	TArray<struct FGameStatsPayload>                   EndGameStats;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bIsCustomGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.DisplayEndgameStats
struct UWB_PostMatchPlayers_C_DisplayEndgameStats_Params
{
	bool                                               bIsCustomGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FGameStatsPayload>                   GameStats;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.DisplayCustomEndGameStats
struct UWB_PostMatchPlayers_C_DisplayCustomEndGameStats_Params
{
};

// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.ExecuteUbergraph_WB_PostMatchPlayers
struct UWB_PostMatchPlayers_C_ExecuteUbergraph_WB_PostMatchPlayers_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
