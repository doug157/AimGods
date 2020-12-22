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

// Function BP_AGPlayerState.BP_AGPlayerState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_AGPlayerState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGPlayerState.BP_AGPlayerState_C.ReceiveBeginPlay");

	ABP_AGPlayerState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGPlayerState.BP_AGPlayerState_C.ExecuteUbergraph_BP_AGPlayerState
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGPlayerState_C::ExecuteUbergraph_BP_AGPlayerState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGPlayerState.BP_AGPlayerState_C.ExecuteUbergraph_BP_AGPlayerState");

	ABP_AGPlayerState_C_ExecuteUbergraph_BP_AGPlayerState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
