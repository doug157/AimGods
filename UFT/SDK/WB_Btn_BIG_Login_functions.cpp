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

// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.Btn_Change_Status
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Leader                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsReady_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           AllPlayersReady_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<EMatchmakingStatus> CurrentStatus                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Btn_BIG_Login_C::Btn_Change_Status(bool Leader, bool IsReady_, bool AllPlayersReady_, TEnumAsByte<EMatchmakingStatus> CurrentStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.Btn_Change_Status");

	UWB_Btn_BIG_Login_C_Btn_Change_Status_Params params;
	params.Leader = Leader;
	params.IsReady_ = IsReady_;
	params.AllPlayersReady_ = AllPlayersReady_;
	params.CurrentStatus = CurrentStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_Btn_BIG_Login_C::BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWB_Btn_BIG_Login_C_BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_Btn_BIG_Login_C::BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWB_Btn_BIG_Login_C_BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_Btn_BIG_Login_C::BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWB_Btn_BIG_Login_C_BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.ChangeOfStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMatchmakingStatus> Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Btn_BIG_Login_C::ChangeOfStatus(TEnumAsByte<EMatchmakingStatus> Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.ChangeOfStatus");

	UWB_Btn_BIG_Login_C_ChangeOfStatus_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.ExecuteUbergraph_WB_Btn_BIG_Login
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Btn_BIG_Login_C::ExecuteUbergraph_WB_Btn_BIG_Login(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.ExecuteUbergraph_WB_Btn_BIG_Login");

	UWB_Btn_BIG_Login_C_ExecuteUbergraph_WB_Btn_BIG_Login_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.LeaveParty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Btn_BIG_Login_C::LeaveParty__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.LeaveParty__DelegateSignature");

	UWB_Btn_BIG_Login_C_LeaveParty__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Btn_BIG_Login_C::Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_BIG_Login.WB_Btn_BIG_Login_C.Clicked__DelegateSignature");

	UWB_Btn_BIG_Login_C_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
