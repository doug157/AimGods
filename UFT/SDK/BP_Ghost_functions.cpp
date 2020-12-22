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

// Function BP_Ghost.BP_Ghost_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Ghost_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ghost.BP_Ghost_C.ReceiveBeginPlay");

	ABP_Ghost_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Ghost.BP_Ghost_C.BPOnSpectateModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bFreeMode                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Ghost_C::BPOnSpectateModeChanged(bool bFreeMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ghost.BP_Ghost_C.BPOnSpectateModeChanged");

	ABP_Ghost_C_BPOnSpectateModeChanged_Params params;
	params.bFreeMode = bFreeMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Ghost.BP_Ghost_C.ExecuteUbergraph_BP_Ghost
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Ghost_C::ExecuteUbergraph_BP_Ghost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ghost.BP_Ghost_C.ExecuteUbergraph_BP_Ghost");

	ABP_Ghost_C_ExecuteUbergraph_BP_Ghost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
