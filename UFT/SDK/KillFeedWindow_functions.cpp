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

// Function KillFeedWindow.KillFeedWindow_C.SetTextToSend
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bTeam                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Killer                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Dead                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   TexToSend                      (Parm, OutParm)
void UKillFeedWindow_C::SetTextToSend(bool bTeam, const struct FText& Killer, const struct FText& Dead, struct FText* TexToSend)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillFeedWindow.KillFeedWindow_C.SetTextToSend");

	UKillFeedWindow_C_SetTextToSend_Params params;
	params.bTeam = bTeam;
	params.Killer = Killer;
	params.Dead = Dead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TexToSend != nullptr)
		*TexToSend = params.TexToSend;

}


// Function KillFeedWindow.KillFeedWindow_C.UpdateKillFeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Killer                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Victim                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bKillerIsRedTeam               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bVictimIsRedTeam               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UKillFeedWindow_C::UpdateKillFeed(const struct FText& Killer, const struct FText& Victim, bool bKillerIsRedTeam, bool bVictimIsRedTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillFeedWindow.KillFeedWindow_C.UpdateKillFeed");

	UKillFeedWindow_C_UpdateKillFeed_Params params;
	params.Killer = Killer;
	params.Victim = Victim;
	params.bKillerIsRedTeam = bKillerIsRedTeam;
	params.bVictimIsRedTeam = bVictimIsRedTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function KillFeedWindow.KillFeedWindow_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UKillFeedWindow_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillFeedWindow.KillFeedWindow_C.OnInitialized");

	UKillFeedWindow_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function KillFeedWindow.KillFeedWindow_C.ExecuteUbergraph_KillFeedWindow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKillFeedWindow_C::ExecuteUbergraph_KillFeedWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillFeedWindow.KillFeedWindow_C.ExecuteUbergraph_KillFeedWindow");

	UKillFeedWindow_C_ExecuteUbergraph_KillFeedWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
