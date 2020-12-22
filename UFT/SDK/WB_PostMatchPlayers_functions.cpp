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

// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.FillPlayerArrayFromStats
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameStatsPayload> GameStats                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWB_PostMatchPlayers_C::FillPlayerArrayFromStats(TArray<struct FGameStatsPayload>* GameStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.FillPlayerArrayFromStats");

	UWB_PostMatchPlayers_C_FillPlayerArrayFromStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameStats != nullptr)
		*GameStats = params.GameStats;

}


// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.AreAllPlayerStatsLoaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Loaded                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_PostMatchPlayers_C::AreAllPlayerStatsLoaded(bool* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.AreAllPlayerStatsLoaded");

	UWB_PostMatchPlayers_C_AreAllPlayerStatsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loaded != nullptr)
		*Loaded = params.Loaded;

}


// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_PostMatchPlayers_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.Construct");

	UWB_PostMatchPlayers_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.TimerUpdate
// (BlueprintCallable, BlueprintEvent)
void UWB_PostMatchPlayers_C::TimerUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.TimerUpdate");

	UWB_PostMatchPlayers_C_TimerUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.CustomGameEndGame
// (BlueprintCallable, BlueprintEvent)
void UWB_PostMatchPlayers_C::CustomGameEndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.CustomGameEndGame");

	UWB_PostMatchPlayers_C_CustomGameEndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.Retry Load Stats
// (BlueprintCallable, BlueprintEvent)
void UWB_PostMatchPlayers_C::Retry_Load_Stats()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.Retry Load Stats");

	UWB_PostMatchPlayers_C_Retry_Load_Stats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_PostMatchPlayers_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.PreConstruct");

	UWB_PostMatchPlayers_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.OnEndGameStatsReceived
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameStatsPayload> EndGameStats                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bIsCustomGame                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_PostMatchPlayers_C::OnEndGameStatsReceived(TArray<struct FGameStatsPayload> EndGameStats, bool bIsCustomGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.OnEndGameStatsReceived");

	UWB_PostMatchPlayers_C_OnEndGameStatsReceived_Params params;
	params.EndGameStats = EndGameStats;
	params.bIsCustomGame = bIsCustomGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.DisplayEndgameStats
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCustomGame                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGameStatsPayload> GameStats                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWB_PostMatchPlayers_C::DisplayEndgameStats(bool bIsCustomGame, TArray<struct FGameStatsPayload> GameStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.DisplayEndgameStats");

	UWB_PostMatchPlayers_C_DisplayEndgameStats_Params params;
	params.bIsCustomGame = bIsCustomGame;
	params.GameStats = GameStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.DisplayCustomEndGameStats
// (BlueprintCallable, BlueprintEvent)
void UWB_PostMatchPlayers_C::DisplayCustomEndGameStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.DisplayCustomEndGameStats");

	UWB_PostMatchPlayers_C_DisplayCustomEndGameStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.ExecuteUbergraph_WB_PostMatchPlayers
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PostMatchPlayers_C::ExecuteUbergraph_WB_PostMatchPlayers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatchPlayers.WB_PostMatchPlayers_C.ExecuteUbergraph_WB_PostMatchPlayers");

	UWB_PostMatchPlayers_C_ExecuteUbergraph_WB_PostMatchPlayers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
