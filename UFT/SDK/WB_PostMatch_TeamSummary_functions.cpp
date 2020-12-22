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

// Function WB_PostMatch_TeamSummary.WB_PostMatch_TeamSummary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_PostMatch_TeamSummary_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatch_TeamSummary.WB_PostMatch_TeamSummary_C.Construct");

	UWB_PostMatch_TeamSummary_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PostMatch_TeamSummary.WB_PostMatch_TeamSummary_C.TimeRefresh
// (BlueprintCallable, BlueprintEvent)
void UWB_PostMatch_TeamSummary_C::TimeRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatch_TeamSummary.WB_PostMatch_TeamSummary_C.TimeRefresh");

	UWB_PostMatch_TeamSummary_C_TimeRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PostMatch_TeamSummary.WB_PostMatch_TeamSummary_C.ExecuteUbergraph_WB_PostMatch_TeamSummary
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PostMatch_TeamSummary_C::ExecuteUbergraph_WB_PostMatch_TeamSummary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatch_TeamSummary.WB_PostMatch_TeamSummary_C.ExecuteUbergraph_WB_PostMatch_TeamSummary");

	UWB_PostMatch_TeamSummary_C_ExecuteUbergraph_WB_PostMatch_TeamSummary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
