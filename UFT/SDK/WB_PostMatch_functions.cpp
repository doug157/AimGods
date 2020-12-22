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

// Function WB_PostMatch.WB_PostMatch_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_PostMatch_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatch.WB_PostMatch_C.Construct");

	UWB_PostMatch_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PostMatch.WB_PostMatch_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PostMatch_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatch.WB_PostMatch_C.Tick");

	UWB_PostMatch_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PostMatch.WB_PostMatch_C.BndEvt__WB_Btn_Generic_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_PostMatch_C::BndEvt__WB_Btn_Generic_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatch.WB_PostMatch_C.BndEvt__WB_Btn_Generic_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	UWB_PostMatch_C_BndEvt__WB_Btn_Generic_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PostMatch.WB_PostMatch_C.ExecuteUbergraph_WB_PostMatch
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PostMatch_C::ExecuteUbergraph_WB_PostMatch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatch.WB_PostMatch_C.ExecuteUbergraph_WB_PostMatch");

	UWB_PostMatch_C_ExecuteUbergraph_WB_PostMatch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
