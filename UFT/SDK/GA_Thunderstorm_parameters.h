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

// Function GA_Thunderstorm.GA_Thunderstorm_C.EventReceived_F05AD5454409EEE7B165D489FDDE8D0C
struct UGA_Thunderstorm_C_EventReceived_F05AD5454409EEE7B165D489FDDE8D0C_Params
{
	struct FGameplayEventData                          Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Thunderstorm.GA_Thunderstorm_C.InvalidHandle_AB657BF74F2A321CCC4272AC578C748D
struct UGA_Thunderstorm_C_InvalidHandle_AB657BF74F2A321CCC4272AC578C748D_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Thunderstorm.GA_Thunderstorm_C.OnRemoved_AB657BF74F2A321CCC4272AC578C748D
struct UGA_Thunderstorm_C_OnRemoved_AB657BF74F2A321CCC4272AC578C748D_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Thunderstorm.GA_Thunderstorm_C.K2_ActivateAbility
struct UGA_Thunderstorm_C_K2_ActivateAbility_Params
{
};

// Function GA_Thunderstorm.GA_Thunderstorm_C.K2_OnEndAbility
struct UGA_Thunderstorm_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Thunderstorm.GA_Thunderstorm_C.ExecuteUbergraph_GA_Thunderstorm
struct UGA_Thunderstorm_C_ExecuteUbergraph_GA_Thunderstorm_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
