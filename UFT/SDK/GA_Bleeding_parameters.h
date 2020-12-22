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

// Function GA_Bleeding.GA_Bleeding_C.CheckAndSetupCachables
struct UGA_Bleeding_C_CheckAndSetupCachables_Params
{
};

// Function GA_Bleeding.GA_Bleeding_C.EventReceived_9D3168114BB1A0BA7A0EF59226C092DE
struct UGA_Bleeding_C_EventReceived_9D3168114BB1A0BA7A0EF59226C092DE_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Bleeding.GA_Bleeding_C.InvalidHandle_807C256D45883C8188361380ADEB66E3
struct UGA_Bleeding_C_InvalidHandle_807C256D45883C8188361380ADEB66E3_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Bleeding.GA_Bleeding_C.OnRemoved_807C256D45883C8188361380ADEB66E3
struct UGA_Bleeding_C_OnRemoved_807C256D45883C8188361380ADEB66E3_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Bleeding.GA_Bleeding_C.K2_ActivateAbility
struct UGA_Bleeding_C_K2_ActivateAbility_Params
{
};

// Function GA_Bleeding.GA_Bleeding_C.K2_OnEndAbility
struct UGA_Bleeding_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Bleeding.GA_Bleeding_C.CheckParameters
struct UGA_Bleeding_C_CheckParameters_Params
{
	class UAbilitySystemComponent*                     OwningActorASC;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      GameplayEffectClass;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle                OwningActorASCContext;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UAbilitySystemComponent*                     TargetASC;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GA_Bleeding.GA_Bleeding_C.ExecuteUbergraph_GA_Bleeding
struct UGA_Bleeding_C_ExecuteUbergraph_GA_Bleeding_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
