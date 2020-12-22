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

// Function GA_CounterHeadshot.GA_CounterHeadshot_C.EventReceived_84A6D8D1409A551806D5A687E01C4F4D
struct UGA_CounterHeadshot_C_EventReceived_84A6D8D1409A551806D5A687E01C4F4D_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_CounterHeadshot.GA_CounterHeadshot_C.InvalidHandle_D790F3FB42EF05665FD3CC812452BDF7
struct UGA_CounterHeadshot_C_InvalidHandle_D790F3FB42EF05665FD3CC812452BDF7_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_CounterHeadshot.GA_CounterHeadshot_C.OnRemoved_D790F3FB42EF05665FD3CC812452BDF7
struct UGA_CounterHeadshot_C_OnRemoved_D790F3FB42EF05665FD3CC812452BDF7_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_CounterHeadshot.GA_CounterHeadshot_C.K2_ActivateAbility
struct UGA_CounterHeadshot_C_K2_ActivateAbility_Params
{
};

// Function GA_CounterHeadshot.GA_CounterHeadshot_C.K2_OnEndAbility
struct UGA_CounterHeadshot_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_CounterHeadshot.GA_CounterHeadshot_C.ExecuteUbergraph_GA_CounterHeadshot
struct UGA_CounterHeadshot_C_ExecuteUbergraph_GA_CounterHeadshot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
