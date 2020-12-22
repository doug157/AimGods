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

// Function WB_Shop_Tooltip.WB_Shop_Tooltip_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_Shop_Tooltip_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Shop_Tooltip.WB_Shop_Tooltip_C.Initialize");

	UWB_Shop_Tooltip_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Shop_Tooltip.WB_Shop_Tooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Shop_Tooltip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Shop_Tooltip.WB_Shop_Tooltip_C.Construct");

	UWB_Shop_Tooltip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Shop_Tooltip.WB_Shop_Tooltip_C.ExecuteUbergraph_WB_Shop_Tooltip
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Shop_Tooltip_C::ExecuteUbergraph_WB_Shop_Tooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Shop_Tooltip.WB_Shop_Tooltip_C.ExecuteUbergraph_WB_Shop_Tooltip");

	UWB_Shop_Tooltip_C_ExecuteUbergraph_WB_Shop_Tooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
