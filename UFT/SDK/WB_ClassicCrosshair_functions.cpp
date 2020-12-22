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

// Function WB_ClassicCrosshair.WB_ClassicCrosshair_C.Set Crosshair Color
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Linear                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ClassicCrosshair_C::Set_Crosshair_Color(const struct FLinearColor& Linear)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicCrosshair.WB_ClassicCrosshair_C.Set Crosshair Color");

	UWB_ClassicCrosshair_C_Set_Crosshair_Color_Params params;
	params.Linear = Linear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ClassicCrosshair.WB_ClassicCrosshair_C.ExecuteUbergraph_WB_ClassicCrosshair
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ClassicCrosshair_C::ExecuteUbergraph_WB_ClassicCrosshair(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ClassicCrosshair.WB_ClassicCrosshair_C.ExecuteUbergraph_WB_ClassicCrosshair");

	UWB_ClassicCrosshair_C_ExecuteUbergraph_WB_ClassicCrosshair_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
