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

// Function WB_Spectating.WB_Spectating_C.UpdateTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_Spectating_C::UpdateTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Spectating.WB_Spectating_C.UpdateTimer");

	UWB_Spectating_C_UpdateTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Spectating.WB_Spectating_C.GetInfoText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_Spectating_C::GetInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Spectating.WB_Spectating_C.GetInfoText");

	UWB_Spectating_C_GetInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Spectating.WB_Spectating_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Spectating_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Spectating.WB_Spectating_C.Construct");

	UWB_Spectating_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Spectating.WB_Spectating_C.ExecuteUbergraph_WB_Spectating
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Spectating_C::ExecuteUbergraph_WB_Spectating(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Spectating.WB_Spectating_C.ExecuteUbergraph_WB_Spectating");

	UWB_Spectating_C_ExecuteUbergraph_WB_Spectating_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
