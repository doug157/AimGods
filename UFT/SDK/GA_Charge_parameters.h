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

// Function GA_Charge.GA_Charge_C.EventReceived_B389E46F442D31DDADF2378223D28E0A
struct UGA_Charge_C_EventReceived_B389E46F442D31DDADF2378223D28E0A_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Charge.GA_Charge_C.InvalidHandle_1511F05D4E525A7473279A983FBAF867
struct UGA_Charge_C_InvalidHandle_1511F05D4E525A7473279A983FBAF867_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Charge.GA_Charge_C.OnRemoved_1511F05D4E525A7473279A983FBAF867
struct UGA_Charge_C_OnRemoved_1511F05D4E525A7473279A983FBAF867_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Charge.GA_Charge_C.K2_OnEndAbility
struct UGA_Charge_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Charge.GA_Charge_C.K2_ActivateAbility
struct UGA_Charge_C_K2_ActivateAbility_Params
{
};

// Function GA_Charge.GA_Charge_C.ExecuteUbergraph_GA_Charge
struct UGA_Charge_C_ExecuteUbergraph_GA_Charge_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
