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

// Function WB_Btn_Generic.WB_Btn_Generic_C.SetInUse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InUse                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Btn_Generic_C::SetInUse(bool InUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_Generic.WB_Btn_Generic_C.SetInUse");

	UWB_Btn_Generic_C_SetInUse_Params params;
	params.InUse = InUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Btn_Generic.WB_Btn_Generic_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Btn_Generic_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_Generic.WB_Btn_Generic_C.PreConstruct");

	UWB_Btn_Generic_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Btn_Generic.WB_Btn_Generic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Btn_Generic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_Generic.WB_Btn_Generic_C.Construct");

	UWB_Btn_Generic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Btn_Generic.WB_Btn_Generic_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_Btn_Generic_C::BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_Generic.WB_Btn_Generic_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWB_Btn_Generic_C_BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Btn_Generic.WB_Btn_Generic_C.BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_Btn_Generic_C::BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_Generic.WB_Btn_Generic_C.BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWB_Btn_Generic_C_BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Btn_Generic.WB_Btn_Generic_C.BndEvt__Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_Btn_Generic_C::BndEvt__Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_Generic.WB_Btn_Generic_C.BndEvt__Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWB_Btn_Generic_C_BndEvt__Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Btn_Generic.WB_Btn_Generic_C.ExecuteUbergraph_WB_Btn_Generic
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Btn_Generic_C::ExecuteUbergraph_WB_Btn_Generic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_Generic.WB_Btn_Generic_C.ExecuteUbergraph_WB_Btn_Generic");

	UWB_Btn_Generic_C_ExecuteUbergraph_WB_Btn_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Btn_Generic.WB_Btn_Generic_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Btn_Generic_C::Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_Generic.WB_Btn_Generic_C.Clicked__DelegateSignature");

	UWB_Btn_Generic_C_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
