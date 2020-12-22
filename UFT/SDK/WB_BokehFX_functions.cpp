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

// Function WB_BokehFX.WB_BokehFX_C.CreateBokehFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<EJustification>    EJustification                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_BokehFX_C::CreateBokehFX(const struct FLinearColor& Color, TEnumAsByte<EJustification> EJustification)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BokehFX.WB_BokehFX_C.CreateBokehFX");

	UWB_BokehFX_C_CreateBokehFX_Params params;
	params.Color = Color;
	params.EJustification = EJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_BokehFX.WB_BokehFX_C.ExecuteUbergraph_WB_BokehFX
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_BokehFX_C::ExecuteUbergraph_WB_BokehFX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BokehFX.WB_BokehFX_C.ExecuteUbergraph_WB_BokehFX");

	UWB_BokehFX_C_ExecuteUbergraph_WB_BokehFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
