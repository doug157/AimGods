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

// Function AnimBP_FinalWeapon.AnimBP_FinalWeapon_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UAnimBP_FinalWeapon_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_FinalWeapon.AnimBP_FinalWeapon_C.AnimGraph");

	UAnimBP_FinalWeapon_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function AnimBP_FinalWeapon.AnimBP_FinalWeapon_C.ExecuteUbergraph_AnimBP_FinalWeapon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimBP_FinalWeapon_C::ExecuteUbergraph_AnimBP_FinalWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_FinalWeapon.AnimBP_FinalWeapon_C.ExecuteUbergraph_AnimBP_FinalWeapon");

	UAnimBP_FinalWeapon_C_ExecuteUbergraph_AnimBP_FinalWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
