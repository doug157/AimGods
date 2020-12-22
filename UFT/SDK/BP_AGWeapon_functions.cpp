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

// Function BP_AGWeapon.BP_AGWeapon_C.OnOwnedTagChanged_C52886434498EC5F3DB0209ACCD68CFB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            OwningTag                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGWeapon_C::OnOwnedTagChanged_C52886434498EC5F3DB0209ACCD68CFB(const struct FGameplayTag& OwningTag, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGWeapon.BP_AGWeapon_C.OnOwnedTagChanged_C52886434498EC5F3DB0209ACCD68CFB");

	ABP_AGWeapon_C_OnOwnedTagChanged_C52886434498EC5F3DB0209ACCD68CFB_Params params;
	params.OwningTag = OwningTag;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGWeapon.BP_AGWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_AGWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGWeapon.BP_AGWeapon_C.ReceiveBeginPlay");

	ABP_AGWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGWeapon.BP_AGWeapon_C.ExecuteUbergraph_BP_AGWeapon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGWeapon_C::ExecuteUbergraph_BP_AGWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGWeapon.BP_AGWeapon_C.ExecuteUbergraph_BP_AGWeapon");

	ABP_AGWeapon_C_ExecuteUbergraph_BP_AGWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
