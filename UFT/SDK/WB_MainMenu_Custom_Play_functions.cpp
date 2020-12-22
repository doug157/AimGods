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

// Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.Btn_Change_Status
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Leader                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsReady_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           AllPlayersReady_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<EMatchmakingStatus> CurrentStatus                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_MainMenu_Custom_Play_C::Btn_Change_Status(bool Leader, bool IsReady_, bool AllPlayersReady_, TEnumAsByte<EMatchmakingStatus> CurrentStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.Btn_Change_Status");

	UWB_MainMenu_Custom_Play_C_Btn_Change_Status_Params params;
	params.Leader = Leader;
	params.IsReady_ = IsReady_;
	params.AllPlayersReady_ = AllPlayersReady_;
	params.CurrentStatus = CurrentStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_MainMenu_Custom_Play_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.Construct");

	UWB_MainMenu_Custom_Play_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_MainMenu_Custom_Play_C::BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWB_MainMenu_Custom_Play_C_BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_MainMenu_Custom_Play_C::BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWB_MainMenu_Custom_Play_C_BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_MainMenu_Custom_Play_C::BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWB_MainMenu_Custom_Play_C_BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.ChangeOfStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMatchmakingStatus> Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_MainMenu_Custom_Play_C::ChangeOfStatus(TEnumAsByte<EMatchmakingStatus> Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.ChangeOfStatus");

	UWB_MainMenu_Custom_Play_C_ChangeOfStatus_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.OnStartCustomLobbyGameSessionPlacementStarted
// (BlueprintCallable, BlueprintEvent)
void UWB_MainMenu_Custom_Play_C::OnStartCustomLobbyGameSessionPlacementStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.OnStartCustomLobbyGameSessionPlacementStarted");

	UWB_MainMenu_Custom_Play_C_OnStartCustomLobbyGameSessionPlacementStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.ExecuteUbergraph_WB_MainMenu_Custom_Play
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_MainMenu_Custom_Play_C::ExecuteUbergraph_WB_MainMenu_Custom_Play(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.ExecuteUbergraph_WB_MainMenu_Custom_Play");

	UWB_MainMenu_Custom_Play_C_ExecuteUbergraph_WB_MainMenu_Custom_Play_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.LeaveParty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_MainMenu_Custom_Play_C::LeaveParty__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.LeaveParty__DelegateSignature");

	UWB_MainMenu_Custom_Play_C_LeaveParty__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_MainMenu_Custom_Play_C::Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_MainMenu_Custom_Play.WB_MainMenu_Custom_Play_C.Clicked__DelegateSignature");

	UWB_MainMenu_Custom_Play_C_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
