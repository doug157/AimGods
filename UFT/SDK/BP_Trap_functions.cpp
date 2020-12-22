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
// Functions
//---------------------------------------------------------------------------

// Function BP_Trap.BP_Trap_C.CreateEffectSpecHandles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Trap_C::CreateEffectSpecHandles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trap.BP_Trap_C.CreateEffectSpecHandles");

	ABP_Trap_C_CreateEffectSpecHandles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trap.BP_Trap_C.SetTrapTableValues
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Trap_C::SetTrapTableValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trap.BP_Trap_C.SetTrapTableValues");

	ABP_Trap_C_SetTrapTableValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trap.BP_Trap_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ABP_Trap_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trap.BP_Trap_C.Timeline_0__FinishedFunc");

	ABP_Trap_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trap.BP_Trap_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ABP_Trap_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trap.BP_Trap_C.Timeline_0__UpdateFunc");

	ABP_Trap_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trap.BP_Trap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Trap_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trap.BP_Trap_C.ReceiveBeginPlay");

	ABP_Trap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trap.BP_Trap_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_Trap_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trap.BP_Trap_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Trap_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trap.BP_Trap_C.OnEnemySteppedOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trap_C::OnEnemySteppedOn(class AActor* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trap.BP_Trap_C.OnEnemySteppedOn");

	ABP_Trap_C_OnEnemySteppedOn_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trap.BP_Trap_C.ToggleVisibilityForEnemies
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Trap_C::ToggleVisibilityForEnemies(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trap.BP_Trap_C.ToggleVisibilityForEnemies");

	ABP_Trap_C_ToggleVisibilityForEnemies_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trap.BP_Trap_C.AnimateTrapSnapping
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Trap_C::AnimateTrapSnapping()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trap.BP_Trap_C.AnimateTrapSnapping");

	ABP_Trap_C_AnimateTrapSnapping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trap.BP_Trap_C.ExecuteUbergraph_BP_Trap
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trap_C::ExecuteUbergraph_BP_Trap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trap.BP_Trap_C.ExecuteUbergraph_BP_Trap");

	ABP_Trap_C_ExecuteUbergraph_BP_Trap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
