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

// Function WB_PostMatch_PlayerSummary.WB_PostMatch_PlayerSummary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_PostMatch_PlayerSummary_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatch_PlayerSummary.WB_PostMatch_PlayerSummary_C.Construct");

	UWB_PostMatch_PlayerSummary_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PostMatch_PlayerSummary.WB_PostMatch_PlayerSummary_C.TimerRefresh
// (BlueprintCallable, BlueprintEvent)
void UWB_PostMatch_PlayerSummary_C::TimerRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatch_PlayerSummary.WB_PostMatch_PlayerSummary_C.TimerRefresh");

	UWB_PostMatch_PlayerSummary_C_TimerRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PostMatch_PlayerSummary.WB_PostMatch_PlayerSummary_C.ExecuteUbergraph_WB_PostMatch_PlayerSummary
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PostMatch_PlayerSummary_C::ExecuteUbergraph_WB_PostMatch_PlayerSummary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatch_PlayerSummary.WB_PostMatch_PlayerSummary_C.ExecuteUbergraph_WB_PostMatch_PlayerSummary");

	UWB_PostMatch_PlayerSummary_C_ExecuteUbergraph_WB_PostMatch_PlayerSummary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
