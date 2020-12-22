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

// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_CustomGames_TeamPlayer_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.Initialize");

	UWB_CustomGames_TeamPlayer_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.SetKickBtnVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_CustomGames_TeamPlayer_C::SetKickBtnVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.SetKickBtnVisibility");

	UWB_CustomGames_TeamPlayer_C_SetKickBtnVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.RemovePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGamePlayer       Player                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_CustomGames_TeamPlayer_C::RemovePlayer(const struct FCustomGamePlayer& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.RemovePlayer");

	UWB_CustomGames_TeamPlayer_C_RemovePlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.SetPlayerIfMatches
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGamePlayer       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_CustomGames_TeamPlayer_C::SetPlayerIfMatches(struct FCustomGamePlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.SetPlayerIfMatches");

	UWB_CustomGames_TeamPlayer_C_SetPlayerIfMatches_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_CustomGames_TeamPlayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.Construct");

	UWB_CustomGames_TeamPlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.BndEvt__Btn_Row_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_CustomGames_TeamPlayer_C::BndEvt__Btn_Row_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.BndEvt__Btn_Row_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWB_CustomGames_TeamPlayer_C_BndEvt__Btn_Row_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerChangedTeamWs
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGamePlayer       Player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_CustomGames_TeamPlayer_C::OnPlayerChangedTeamWs(const struct FCustomGamePlayer& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerChangedTeamWs");

	UWB_CustomGames_TeamPlayer_C_OnPlayerChangedTeamWs_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.RefreshVisuals
// (BlueprintCallable, BlueprintEvent)
void UWB_CustomGames_TeamPlayer_C::RefreshVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.RefreshVisuals");

	UWB_CustomGames_TeamPlayer_C_RefreshVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.TrySetPlayer
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGamePlayer       Player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_CustomGames_TeamPlayer_C::TrySetPlayer(const struct FCustomGamePlayer& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.TrySetPlayer");

	UWB_CustomGames_TeamPlayer_C_TrySetPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerJoinedCustomGameWs
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGamePlayer       Player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_CustomGames_TeamPlayer_C::OnPlayerJoinedCustomGameWs(const struct FCustomGamePlayer& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerJoinedCustomGameWs");

	UWB_CustomGames_TeamPlayer_C_OnPlayerJoinedCustomGameWs_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerLeftCustomGameWs
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGamePlayer       Player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_CustomGames_TeamPlayer_C::OnPlayerLeftCustomGameWs(const struct FCustomGamePlayer& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerLeftCustomGameWs");

	UWB_CustomGames_TeamPlayer_C_OnPlayerLeftCustomGameWs_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerReadyStateChangedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           bIsReady                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_CustomGames_TeamPlayer_C::OnPlayerReadyStateChangedWs(const struct FString& PlayerId, bool bIsReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerReadyStateChangedWs");

	UWB_CustomGames_TeamPlayer_C_OnPlayerReadyStateChangedWs_Params params;
	params.PlayerId = PlayerId;
	params.bIsReady = bIsReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.BndEvt__Btn_Kick_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_CustomGames_TeamPlayer_C::BndEvt__Btn_Kick_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.BndEvt__Btn_Kick_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWB_CustomGames_TeamPlayer_C_BndEvt__Btn_Kick_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerKickedWs
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFCustomGameTeam>  Team                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_CustomGames_TeamPlayer_C::OnPlayerKickedWs(TEnumAsByte<EFCustomGameTeam> Team, const struct FString& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerKickedWs");

	UWB_CustomGames_TeamPlayer_C_OnPlayerKickedWs_Params params;
	params.Team = Team;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_CustomGames_TeamPlayer_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.PreConstruct");

	UWB_CustomGames_TeamPlayer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.ExecuteUbergraph_WB_CustomGames_TeamPlayer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_CustomGames_TeamPlayer_C::ExecuteUbergraph_WB_CustomGames_TeamPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.ExecuteUbergraph_WB_CustomGames_TeamPlayer");

	UWB_CustomGames_TeamPlayer_C_ExecuteUbergraph_WB_CustomGames_TeamPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
