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

// Function GA_Disarm.GA_Disarm_C.EventReceived_108C3B8840A21CD280DDA18E14475F2F
struct UGA_Disarm_C_EventReceived_108C3B8840A21CD280DDA18E14475F2F_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Disarm.GA_Disarm_C.InvalidHandle_12D1366B4EA5464FD5CF62913C2D2A4A
struct UGA_Disarm_C_InvalidHandle_12D1366B4EA5464FD5CF62913C2D2A4A_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Disarm.GA_Disarm_C.OnRemoved_12D1366B4EA5464FD5CF62913C2D2A4A
struct UGA_Disarm_C_OnRemoved_12D1366B4EA5464FD5CF62913C2D2A4A_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Disarm.GA_Disarm_C.K2_ActivateAbility
struct UGA_Disarm_C_K2_ActivateAbility_Params
{
};

// Function GA_Disarm.GA_Disarm_C.K2_OnEndAbility
struct UGA_Disarm_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Disarm.GA_Disarm_C.ExecuteUbergraph_GA_Disarm
struct UGA_Disarm_C_ExecuteUbergraph_GA_Disarm_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
