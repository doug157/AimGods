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

// Function WB_QueuePopup.WB_QueuePopup_C.GetTimerPercent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWB_QueuePopup_C::GetTimerPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_QueuePopup.WB_QueuePopup_C.GetTimerPercent");

	UWB_QueuePopup_C_GetTimerPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_QueuePopup.WB_QueuePopup_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_QueuePopup_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_QueuePopup.WB_QueuePopup_C.Tick");

	UWB_QueuePopup_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_QueuePopup.WB_QueuePopup_C.OnMatchmakingStatusChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMatchmakingStatus> NewStatus                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_QueuePopup_C::OnMatchmakingStatusChanged(TEnumAsByte<EMatchmakingStatus> NewStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_QueuePopup.WB_QueuePopup_C.OnMatchmakingStatusChanged");

	UWB_QueuePopup_C_OnMatchmakingStatusChanged_Params params;
	params.NewStatus = NewStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_QueuePopup.WB_QueuePopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_QueuePopup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_QueuePopup.WB_QueuePopup_C.Construct");

	UWB_QueuePopup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_QueuePopup.WB_QueuePopup_C.BndEvt__WB_Btn_Special_A_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_QueuePopup_C::BndEvt__WB_Btn_Special_A_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_QueuePopup.WB_QueuePopup_C.BndEvt__WB_Btn_Special_A_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	UWB_QueuePopup_C_BndEvt__WB_Btn_Special_A_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_QueuePopup.WB_QueuePopup_C.BndEvt__WB_Btn_Accept_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_QueuePopup_C::BndEvt__WB_Btn_Accept_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_QueuePopup.WB_QueuePopup_C.BndEvt__WB_Btn_Accept_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	UWB_QueuePopup_C_BndEvt__WB_Btn_Accept_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_QueuePopup.WB_QueuePopup_C.ExecuteUbergraph_WB_QueuePopup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_QueuePopup_C::ExecuteUbergraph_WB_QueuePopup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_QueuePopup.WB_QueuePopup_C.ExecuteUbergraph_WB_QueuePopup");

	UWB_QueuePopup_C_ExecuteUbergraph_WB_QueuePopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
