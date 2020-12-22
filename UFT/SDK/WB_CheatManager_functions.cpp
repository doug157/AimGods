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

// Function WB_CheatManager.WB_CheatManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_CheatManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CheatManager.WB_CheatManager_C.Construct");

	UWB_CheatManager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CheatManager.WB_CheatManager_C.ToggleCheatButton
// (BlueprintCallable, BlueprintEvent)
void UWB_CheatManager_C::ToggleCheatButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CheatManager.WB_CheatManager_C.ToggleCheatButton");

	UWB_CheatManager_C_ToggleCheatButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CheatManager.WB_CheatManager_C.ExecuteUbergraph_WB_CheatManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_CheatManager_C::ExecuteUbergraph_WB_CheatManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CheatManager.WB_CheatManager_C.ExecuteUbergraph_WB_CheatManager");

	UWB_CheatManager_C_ExecuteUbergraph_WB_CheatManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
