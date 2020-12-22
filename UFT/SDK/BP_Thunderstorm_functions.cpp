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

// Function BP_Thunderstorm.BP_Thunderstorm_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Thunderstorm_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Thunderstorm.BP_Thunderstorm_C.ReceiveBeginPlay");

	ABP_Thunderstorm_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Thunderstorm.BP_Thunderstorm_C.OnDamageTick
// (BlueprintCallable, BlueprintEvent)
void ABP_Thunderstorm_C::OnDamageTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Thunderstorm.BP_Thunderstorm_C.OnDamageTick");

	ABP_Thunderstorm_C_OnDamageTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Thunderstorm.BP_Thunderstorm_C.OnDestroyed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Thunderstorm_C::OnDestroyed_Event_1(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Thunderstorm.BP_Thunderstorm_C.OnDestroyed_Event_1");

	ABP_Thunderstorm_C_OnDestroyed_Event_1_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Thunderstorm.BP_Thunderstorm_C.ExecuteUbergraph_BP_Thunderstorm
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Thunderstorm_C::ExecuteUbergraph_BP_Thunderstorm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Thunderstorm.BP_Thunderstorm_C.ExecuteUbergraph_BP_Thunderstorm");

	ABP_Thunderstorm_C_ExecuteUbergraph_BP_Thunderstorm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
