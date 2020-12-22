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

// Function GA_Thunderstorm.GA_Thunderstorm_C.EventReceived_F05AD5454409EEE7B165D489FDDE8D0C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UGA_Thunderstorm_C::EventReceived_F05AD5454409EEE7B165D489FDDE8D0C(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Thunderstorm.GA_Thunderstorm_C.EventReceived_F05AD5454409EEE7B165D489FDDE8D0C");

	UGA_Thunderstorm_C_EventReceived_F05AD5454409EEE7B165D489FDDE8D0C_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Thunderstorm.GA_Thunderstorm_C.InvalidHandle_AB657BF74F2A321CCC4272AC578C748D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Thunderstorm_C::InvalidHandle_AB657BF74F2A321CCC4272AC578C748D(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Thunderstorm.GA_Thunderstorm_C.InvalidHandle_AB657BF74F2A321CCC4272AC578C748D");

	UGA_Thunderstorm_C_InvalidHandle_AB657BF74F2A321CCC4272AC578C748D_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Thunderstorm.GA_Thunderstorm_C.OnRemoved_AB657BF74F2A321CCC4272AC578C748D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGA_Thunderstorm_C::OnRemoved_AB657BF74F2A321CCC4272AC578C748D(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Thunderstorm.GA_Thunderstorm_C.OnRemoved_AB657BF74F2A321CCC4272AC578C748D");

	UGA_Thunderstorm_C_OnRemoved_AB657BF74F2A321CCC4272AC578C748D_Params params;
	params.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Thunderstorm.GA_Thunderstorm_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Thunderstorm_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Thunderstorm.GA_Thunderstorm_C.K2_ActivateAbility");

	UGA_Thunderstorm_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Thunderstorm.GA_Thunderstorm_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Thunderstorm_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Thunderstorm.GA_Thunderstorm_C.K2_OnEndAbility");

	UGA_Thunderstorm_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Thunderstorm.GA_Thunderstorm_C.ExecuteUbergraph_GA_Thunderstorm
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Thunderstorm_C::ExecuteUbergraph_GA_Thunderstorm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Thunderstorm.GA_Thunderstorm_C.ExecuteUbergraph_GA_Thunderstorm");

	UGA_Thunderstorm_C_ExecuteUbergraph_GA_Thunderstorm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
