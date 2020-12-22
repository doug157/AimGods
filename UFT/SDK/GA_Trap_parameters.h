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

// Function GA_Trap.GA_Trap_C.EventReceived_88CCF736488466D7ACD414836AF6457F
struct UGA_Trap_C_EventReceived_88CCF736488466D7ACD414836AF6457F_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Trap.GA_Trap_C.InvalidHandle_F525B0E94B6D6418E95E6F8250DFF9F9
struct UGA_Trap_C_InvalidHandle_F525B0E94B6D6418E95E6F8250DFF9F9_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Trap.GA_Trap_C.OnRemoved_F525B0E94B6D6418E95E6F8250DFF9F9
struct UGA_Trap_C_OnRemoved_F525B0E94B6D6418E95E6F8250DFF9F9_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Trap.GA_Trap_C.K2_ActivateAbility
struct UGA_Trap_C_K2_ActivateAbility_Params
{
};

// Function GA_Trap.GA_Trap_C.K2_OnEndAbility
struct UGA_Trap_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Trap.GA_Trap_C.ExecuteUbergraph_GA_Trap
struct UGA_Trap_C_ExecuteUbergraph_GA_Trap_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
