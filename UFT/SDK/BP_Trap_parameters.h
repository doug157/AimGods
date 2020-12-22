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

// Function BP_Trap.BP_Trap_C.CreateEffectSpecHandles
struct ABP_Trap_C_CreateEffectSpecHandles_Params
{
};

// Function BP_Trap.BP_Trap_C.SetTrapTableValues
struct ABP_Trap_C_SetTrapTableValues_Params
{
};

// Function BP_Trap.BP_Trap_C.Timeline_0__FinishedFunc
struct ABP_Trap_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_Trap.BP_Trap_C.Timeline_0__UpdateFunc
struct ABP_Trap_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_Trap.BP_Trap_C.ReceiveBeginPlay
struct ABP_Trap_C_ReceiveBeginPlay_Params
{
};

// Function BP_Trap.BP_Trap_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Trap_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_Trap.BP_Trap_C.OnEnemySteppedOn
struct ABP_Trap_C_OnEnemySteppedOn_Params
{
	class AActor*                                      Enemy;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Trap.BP_Trap_C.ToggleVisibilityForEnemies
struct ABP_Trap_C_ToggleVisibilityForEnemies_Params
{
	bool                                               IsVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Trap.BP_Trap_C.AnimateTrapSnapping
struct ABP_Trap_C_AnimateTrapSnapping_Params
{
};

// Function BP_Trap.BP_Trap_C.ExecuteUbergraph_BP_Trap
struct ABP_Trap_C_ExecuteUbergraph_BP_Trap_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
