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

// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.Initialize
struct UWB_CustomGames_TeamPlayer_C_Initialize_Params
{
};

// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.SetKickBtnVisibility
struct UWB_CustomGames_TeamPlayer_C_SetKickBtnVisibility_Params
{
};

// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.RemovePlayer
struct UWB_CustomGames_TeamPlayer_C_RemovePlayer_Params
{
	struct FCustomGamePlayer                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.SetPlayerIfMatches
struct UWB_CustomGames_TeamPlayer_C_SetPlayerIfMatches_Params
{
	struct FCustomGamePlayer                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.Construct
struct UWB_CustomGames_TeamPlayer_C_Construct_Params
{
};

// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.BndEvt__Btn_Row_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWB_CustomGames_TeamPlayer_C_BndEvt__Btn_Row_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerChangedTeamWs
struct UWB_CustomGames_TeamPlayer_C_OnPlayerChangedTeamWs_Params
{
	struct FCustomGamePlayer                           Player;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.RefreshVisuals
struct UWB_CustomGames_TeamPlayer_C_RefreshVisuals_Params
{
};

// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.TrySetPlayer
struct UWB_CustomGames_TeamPlayer_C_TrySetPlayer_Params
{
	struct FCustomGamePlayer                           Player;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerJoinedCustomGameWs
struct UWB_CustomGames_TeamPlayer_C_OnPlayerJoinedCustomGameWs_Params
{
	struct FCustomGamePlayer                           Player;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerLeftCustomGameWs
struct UWB_CustomGames_TeamPlayer_C_OnPlayerLeftCustomGameWs_Params
{
	struct FCustomGamePlayer                           Player;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerReadyStateChangedWs
struct UWB_CustomGames_TeamPlayer_C_OnPlayerReadyStateChangedWs_Params
{
	struct FString                                     PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bIsReady;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.BndEvt__Btn_Kick_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWB_CustomGames_TeamPlayer_C_BndEvt__Btn_Kick_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerKickedWs
struct UWB_CustomGames_TeamPlayer_C_OnPlayerKickedWs_Params
{
	TEnumAsByte<EFCustomGameTeam>                      Team;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.PreConstruct
struct UWB_CustomGames_TeamPlayer_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.ExecuteUbergraph_WB_CustomGames_TeamPlayer
struct UWB_CustomGames_TeamPlayer_C_ExecuteUbergraph_WB_CustomGames_TeamPlayer_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
