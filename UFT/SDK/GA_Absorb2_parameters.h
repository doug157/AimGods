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

// Function GA_Absorb2.GA_Absorb2_C.EventReceived_9D6067D4443D1D10083D1592488CC28A
struct UGA_Absorb2_C_EventReceived_9D6067D4443D1D10083D1592488CC28A_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Absorb2.GA_Absorb2_C.InvalidHandle_0CC4E46A4A5B5FE0B29A48802B44D2EA
struct UGA_Absorb2_C_InvalidHandle_0CC4E46A4A5B5FE0B29A48802B44D2EA_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Absorb2.GA_Absorb2_C.OnRemoved_0CC4E46A4A5B5FE0B29A48802B44D2EA
struct UGA_Absorb2_C_OnRemoved_0CC4E46A4A5B5FE0B29A48802B44D2EA_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Absorb2.GA_Absorb2_C.K2_ActivateAbility
struct UGA_Absorb2_C_K2_ActivateAbility_Params
{
};

// Function GA_Absorb2.GA_Absorb2_C.K2_OnEndAbility
struct UGA_Absorb2_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Absorb2.GA_Absorb2_C.ExecuteUbergraph_GA_Absorb2
struct UGA_Absorb2_C_ExecuteUbergraph_GA_Absorb2_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
