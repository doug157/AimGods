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

// Function WB_HitEffect.WB_HitEffect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_HitEffect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_HitEffect.WB_HitEffect_C.Construct");

	UWB_HitEffect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_HitEffect.WB_HitEffect_C.ExecuteUbergraph_WB_HitEffect
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_HitEffect_C::ExecuteUbergraph_WB_HitEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_HitEffect.WB_HitEffect_C.ExecuteUbergraph_WB_HitEffect");

	UWB_HitEffect_C_ExecuteUbergraph_WB_HitEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
