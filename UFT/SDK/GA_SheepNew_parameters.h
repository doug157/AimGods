#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function GA_SheepNew.GA_SheepNew_C.EventReceived_7232435B4781CBA57A5F32B953D29CC5
struct UGA_SheepNew_C_EventReceived_7232435B4781CBA57A5F32B953D29CC5_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_SheepNew.GA_SheepNew_C.InvalidHandle_8C953441424CCFCF9C5F7D98812C991D
struct UGA_SheepNew_C_InvalidHandle_8C953441424CCFCF9C5F7D98812C991D_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_SheepNew.GA_SheepNew_C.OnRemoved_8C953441424CCFCF9C5F7D98812C991D
struct UGA_SheepNew_C_OnRemoved_8C953441424CCFCF9C5F7D98812C991D_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_SheepNew.GA_SheepNew_C.K2_OnEndAbility
struct UGA_SheepNew_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_SheepNew.GA_SheepNew_C.K2_ActivateAbility
struct UGA_SheepNew_C_K2_ActivateAbility_Params
{
};

// Function GA_SheepNew.GA_SheepNew_C.TargetReceivedDamage
struct UGA_SheepNew_C_TargetReceivedDamage_Params
{
	class UAGAbilitySystemComponent*                   SourceASC;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MitigatedDamage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                       GEAssetTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_SheepNew.GA_SheepNew_C.ExecuteUbergraph_GA_SheepNew
struct UGA_SheepNew_C_ExecuteUbergraph_GA_SheepNew_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
