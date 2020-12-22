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

// Function WB_Border_A.WB_Border_A_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Border_A_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Border_A.WB_Border_A_C.PreConstruct");

	UWB_Border_A_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Border_A.WB_Border_A_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Border_A_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Border_A.WB_Border_A_C.Construct");

	UWB_Border_A_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Border_A.WB_Border_A_C.ExecuteUbergraph_WB_Border_A
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Border_A_C::ExecuteUbergraph_WB_Border_A(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Border_A.WB_Border_A_C.ExecuteUbergraph_WB_Border_A");

	UWB_Border_A_C_ExecuteUbergraph_WB_Border_A_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
