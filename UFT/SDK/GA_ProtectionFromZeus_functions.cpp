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

// Function GA_ProtectionFromZeus.GA_ProtectionFromZeus_C.InvalidHandle_3994E5D148CF3D326445E3BC01A559A8
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_ProtectionFromZeus_C::InvalidHandle_3994E5D148CF3D326445E3BC01A559A8(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_ProtectionFromZeus.GA_ProtectionFromZeus_C.InvalidHandle_3994E5D148CF3D326445E3BC01A559A8");

	UGA_ProtectionFromZeus_C_InvalidHandle_3994E5D148CF3D326445E3BC01A559A8_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ProtectionFromZeus.GA_ProtectionFromZeus_C.OnRemoved_3994E5D148CF3D326445E3BC01A559A8
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_ProtectionFromZeus_C::OnRemoved_3994E5D148CF3D326445E3BC01A559A8(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_ProtectionFromZeus.GA_ProtectionFromZeus_C.OnRemoved_3994E5D148CF3D326445E3BC01A559A8");

	UGA_ProtectionFromZeus_C_OnRemoved_3994E5D148CF3D326445E3BC01A559A8_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ProtectionFromZeus.GA_ProtectionFromZeus_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_ProtectionFromZeus_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_ProtectionFromZeus.GA_ProtectionFromZeus_C.K2_ActivateAbility");

	UGA_ProtectionFromZeus_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_ProtectionFromZeus.GA_ProtectionFromZeus_C.ExecuteUbergraph_GA_ProtectionFromZeus
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_ProtectionFromZeus_C::ExecuteUbergraph_GA_ProtectionFromZeus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_ProtectionFromZeus.GA_ProtectionFromZeus_C.ExecuteUbergraph_GA_ProtectionFromZeus");

	UGA_ProtectionFromZeus_C_ExecuteUbergraph_GA_ProtectionFromZeus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
