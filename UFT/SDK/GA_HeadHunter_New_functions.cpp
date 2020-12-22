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

// Function GA_HeadHunter_New.GA_HeadHunter_New_C.EventReceived_2D63217C474B2FE009D424854AD514A1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_HeadHunter_New_C::EventReceived_2D63217C474B2FE009D424854AD514A1(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_HeadHunter_New.GA_HeadHunter_New_C.EventReceived_2D63217C474B2FE009D424854AD514A1");

	UGA_HeadHunter_New_C_EventReceived_2D63217C474B2FE009D424854AD514A1_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_HeadHunter_New.GA_HeadHunter_New_C.InvalidHandle_50D2E54344A54A1B797677807D06FC04
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_HeadHunter_New_C::InvalidHandle_50D2E54344A54A1B797677807D06FC04(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_HeadHunter_New.GA_HeadHunter_New_C.InvalidHandle_50D2E54344A54A1B797677807D06FC04");

	UGA_HeadHunter_New_C_InvalidHandle_50D2E54344A54A1B797677807D06FC04_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_HeadHunter_New.GA_HeadHunter_New_C.OnRemoved_50D2E54344A54A1B797677807D06FC04
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_HeadHunter_New_C::OnRemoved_50D2E54344A54A1B797677807D06FC04(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_HeadHunter_New.GA_HeadHunter_New_C.OnRemoved_50D2E54344A54A1B797677807D06FC04");

	UGA_HeadHunter_New_C_OnRemoved_50D2E54344A54A1B797677807D06FC04_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_HeadHunter_New.GA_HeadHunter_New_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_HeadHunter_New_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_HeadHunter_New.GA_HeadHunter_New_C.K2_ActivateAbility");

	UGA_HeadHunter_New_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_HeadHunter_New.GA_HeadHunter_New_C.ExecuteUbergraph_GA_HeadHunter_New
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_HeadHunter_New_C::ExecuteUbergraph_GA_HeadHunter_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_HeadHunter_New.GA_HeadHunter_New_C.ExecuteUbergraph_GA_HeadHunter_New");

	UGA_HeadHunter_New_C_ExecuteUbergraph_GA_HeadHunter_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
