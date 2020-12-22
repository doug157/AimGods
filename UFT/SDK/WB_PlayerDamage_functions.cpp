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

// Function WB_PlayerDamage.WB_PlayerDamage_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Heal_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PlayerDamage_C::Initialize(bool Heal_, float Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerDamage.WB_PlayerDamage_C.Initialize");

	UWB_PlayerDamage_C_Initialize_Params params;
	params.Heal_ = Heal_;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerDamage.WB_PlayerDamage_C.Finished_A6AC22264894A303AC45448B5334C92A
// (BlueprintCallable, BlueprintEvent)
void UWB_PlayerDamage_C::Finished_A6AC22264894A303AC45448B5334C92A()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerDamage.WB_PlayerDamage_C.Finished_A6AC22264894A303AC45448B5334C92A");

	UWB_PlayerDamage_C_Finished_A6AC22264894A303AC45448B5334C92A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerDamage.WB_PlayerDamage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_PlayerDamage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerDamage.WB_PlayerDamage_C.Construct");

	UWB_PlayerDamage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerDamage.WB_PlayerDamage_C.Spawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Heal_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PlayerDamage_C::Spawn(bool Heal_, float Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerDamage.WB_PlayerDamage_C.Spawn");

	UWB_PlayerDamage_C_Spawn_Params params;
	params.Heal_ = Heal_;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerDamage.WB_PlayerDamage_C.ExecuteUbergraph_WB_PlayerDamage
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PlayerDamage_C::ExecuteUbergraph_WB_PlayerDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerDamage.WB_PlayerDamage_C.ExecuteUbergraph_WB_PlayerDamage");

	UWB_PlayerDamage_C_ExecuteUbergraph_WB_PlayerDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
