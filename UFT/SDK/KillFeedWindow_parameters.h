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

// Function KillFeedWindow.KillFeedWindow_C.SetTextToSend
struct UKillFeedWindow_C_SetTextToSend_Params
{
	bool                                               bTeam;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Killer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Dead;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       TexToSend;                                                 // (Parm, OutParm)
};

// Function KillFeedWindow.KillFeedWindow_C.UpdateKillFeed
struct UKillFeedWindow_C_UpdateKillFeed_Params
{
	struct FText                                       Killer;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Victim;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bKillerIsRedTeam;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bVictimIsRedTeam;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KillFeedWindow.KillFeedWindow_C.OnInitialized
struct UKillFeedWindow_C_OnInitialized_Params
{
};

// Function KillFeedWindow.KillFeedWindow_C.ExecuteUbergraph_KillFeedWindow
struct UKillFeedWindow_C_ExecuteUbergraph_KillFeedWindow_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
