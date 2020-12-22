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

// Function GA_CloakOfShadows_New.GA_CloakOfShadows_New_C.InvalidHandle_7CF270C74587F69A579BA8BFF50A0EF9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_CloakOfShadows_New_C::InvalidHandle_7CF270C74587F69A579BA8BFF50A0EF9(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CloakOfShadows_New.GA_CloakOfShadows_New_C.InvalidHandle_7CF270C74587F69A579BA8BFF50A0EF9");

	UGA_CloakOfShadows_New_C_InvalidHandle_7CF270C74587F69A579BA8BFF50A0EF9_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_CloakOfShadows_New.GA_CloakOfShadows_New_C.OnRemoved_7CF270C74587F69A579BA8BFF50A0EF9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_CloakOfShadows_New_C::OnRemoved_7CF270C74587F69A579BA8BFF50A0EF9(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CloakOfShadows_New.GA_CloakOfShadows_New_C.OnRemoved_7CF270C74587F69A579BA8BFF50A0EF9");

	UGA_CloakOfShadows_New_C_OnRemoved_7CF270C74587F69A579BA8BFF50A0EF9_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_CloakOfShadows_New.GA_CloakOfShadows_New_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_CloakOfShadows_New_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CloakOfShadows_New.GA_CloakOfShadows_New_C.K2_ActivateAbility");

	UGA_CloakOfShadows_New_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_CloakOfShadows_New.GA_CloakOfShadows_New_C.ExecuteUbergraph_GA_CloakOfShadows_New
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_CloakOfShadows_New_C::ExecuteUbergraph_GA_CloakOfShadows_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_CloakOfShadows_New.GA_CloakOfShadows_New_C.ExecuteUbergraph_GA_CloakOfShadows_New");

	UGA_CloakOfShadows_New_C_ExecuteUbergraph_GA_CloakOfShadows_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
