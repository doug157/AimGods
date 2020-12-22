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

// Function GA_Bleeding2.GA_Bleeding2_C.CheckAndSetupCachables
struct UGA_Bleeding2_C_CheckAndSetupCachables_Params
{
};

// Function GA_Bleeding2.GA_Bleeding2_C.EventReceived_748DCDCF47995F33EAAFC099C9811B7C
struct UGA_Bleeding2_C_EventReceived_748DCDCF47995F33EAAFC099C9811B7C_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Bleeding2.GA_Bleeding2_C.InvalidHandle_7966EABB4E34C71AF13FF09B344B5A62
struct UGA_Bleeding2_C_InvalidHandle_7966EABB4E34C71AF13FF09B344B5A62_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Bleeding2.GA_Bleeding2_C.OnRemoved_7966EABB4E34C71AF13FF09B344B5A62
struct UGA_Bleeding2_C_OnRemoved_7966EABB4E34C71AF13FF09B344B5A62_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Bleeding2.GA_Bleeding2_C.K2_ActivateAbility
struct UGA_Bleeding2_C_K2_ActivateAbility_Params
{
};

// Function GA_Bleeding2.GA_Bleeding2_C.K2_OnEndAbility
struct UGA_Bleeding2_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Bleeding2.GA_Bleeding2_C.ExecuteUbergraph_GA_Bleeding2
struct UGA_Bleeding2_C_ExecuteUbergraph_GA_Bleeding2_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
