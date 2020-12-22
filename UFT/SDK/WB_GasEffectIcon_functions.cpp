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

// Function WB_GasEffectIcon.WB_GasEffectIcon_C.Decrement Effect Timer
// (BlueprintCallable, BlueprintEvent)
void UWB_GasEffectIcon_C::Decrement_Effect_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_GasEffectIcon.WB_GasEffectIcon_C.Decrement Effect Timer");

	UWB_GasEffectIcon_C_Decrement_Effect_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_GasEffectIcon.WB_GasEffectIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_GasEffectIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_GasEffectIcon.WB_GasEffectIcon_C.Construct");

	UWB_GasEffectIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_GasEffectIcon.WB_GasEffectIcon_C.ExecuteUbergraph_WB_GasEffectIcon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_GasEffectIcon_C::ExecuteUbergraph_WB_GasEffectIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_GasEffectIcon.WB_GasEffectIcon_C.ExecuteUbergraph_WB_GasEffectIcon");

	UWB_GasEffectIcon_C_ExecuteUbergraph_WB_GasEffectIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
