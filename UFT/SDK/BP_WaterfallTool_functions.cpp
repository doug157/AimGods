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

// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Waterfall Particles
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_WaterfallTool_C::Setup_Waterfall_Particles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Waterfall Particles");

	ABP_WaterfallTool_C_Setup_Waterfall_Particles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Adds Waterfall Particles
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_WaterfallTool_C::Setup_Adds_Waterfall_Particles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Adds Waterfall Particles");

	ABP_WaterfallTool_C_Setup_Adds_Waterfall_Particles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Waterfall Particle Parameters
// (Private, BlueprintCallable, BlueprintEvent)
void ABP_WaterfallTool_C::Setup_Waterfall_Particle_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Waterfall Particle Parameters");

	ABP_WaterfallTool_C_Setup_Waterfall_Particle_Parameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Adds Waterfall Particle Parameters
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_WaterfallTool_C::Setup_Adds_Waterfall_Particle_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Adds Waterfall Particle Parameters");

	ABP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WaterfallTool.BP_WaterfallTool_C.Set Adds Waterfall Particle Effect Location
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAdditionalCascades> Cascade_Splines_Data           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UParticleSystemComponent*> Cascade_Top_Splash             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*> Cascade_Bottom_Splash          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*> Cascade_Mist                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// TArray<class USplineComponent*> Cascade_Spline_Comps           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void ABP_WaterfallTool_C::Set_Adds_Waterfall_Particle_Effect_Location(TArray<struct FAdditionalCascades>* Cascade_Splines_Data, TArray<class UParticleSystemComponent*>* Cascade_Top_Splash, TArray<class UParticleSystemComponent*>* Cascade_Bottom_Splash, TArray<class UParticleSystemComponent*>* Cascade_Mist, TArray<class USplineComponent*>* Cascade_Spline_Comps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterfallTool.BP_WaterfallTool_C.Set Adds Waterfall Particle Effect Location");

	ABP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Cascade_Splines_Data != nullptr)
		*Cascade_Splines_Data = params.Cascade_Splines_Data;
	if (Cascade_Top_Splash != nullptr)
		*Cascade_Top_Splash = params.Cascade_Top_Splash;
	if (Cascade_Bottom_Splash != nullptr)
		*Cascade_Bottom_Splash = params.Cascade_Bottom_Splash;
	if (Cascade_Mist != nullptr)
		*Cascade_Mist = params.Cascade_Mist;
	if (Cascade_Spline_Comps != nullptr)
		*Cascade_Spline_Comps = params.Cascade_Spline_Comps;

}


// Function BP_WaterfallTool.BP_WaterfallTool_C.Do Waterfall Trace
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*        Spline_Input                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>          Actors_to_Ignore               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABP_WaterfallTool_C::Do_Waterfall_Trace(class USplineComponent* Spline_Input, float Scale, TArray<class AActor*>* Actors_to_Ignore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterfallTool.BP_WaterfallTool_C.Do Waterfall Trace");

	ABP_WaterfallTool_C_Do_Waterfall_Trace_Params params;
	params.Spline_Input = Spline_Input;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Actors_to_Ignore != nullptr)
		*Actors_to_Ignore = params.Actors_to_Ignore;

}


// Function BP_WaterfallTool.BP_WaterfallTool_C.Check Spline Input Keys
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAdditionalCascades> Cascades_In                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Passed                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_WaterfallTool_C::Check_Spline_Input_Keys(TArray<struct FAdditionalCascades>* Cascades_In, bool* Passed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterfallTool.BP_WaterfallTool_C.Check Spline Input Keys");

	ABP_WaterfallTool_C_Check_Spline_Input_Keys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Cascades_In != nullptr)
		*Cascades_In = params.Cascades_In;
	if (Passed != nullptr)
		*Passed = params.Passed;

}


// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Spline Mesh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*        Spline_Comp                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WaterfallTool_C::Setup_Spline_Mesh(class USplineComponent* Spline_Comp, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Spline Mesh");

	ABP_WaterfallTool_C_Setup_Spline_Mesh_Params params;
	params.Spline_Comp = Spline_Comp;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WaterfallTool.BP_WaterfallTool_C.Set Waterfall Particle Effect Location
// (Private, BlueprintCallable, BlueprintEvent)
void ABP_WaterfallTool_C::Set_Waterfall_Particle_Effect_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterfallTool.BP_WaterfallTool_C.Set Waterfall Particle Effect Location");

	ABP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Material Parameters
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Current_Index                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*        Spline                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WaterfallTool_C::Setup_Material_Parameters(class UMaterialInstanceDynamic* Material, int Current_Index, class USplineComponent* Spline)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Material Parameters");

	ABP_WaterfallTool_C_Setup_Material_Parameters_Params params;
	params.Material = Material;
	params.Current_Index = Current_Index;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WaterfallTool.BP_WaterfallTool_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_WaterfallTool_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterfallTool.BP_WaterfallTool_C.UserConstructionScript");

	ABP_WaterfallTool_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WaterfallTool.BP_WaterfallTool_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WaterfallTool_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterfallTool.BP_WaterfallTool_C.ReceiveTick");

	ABP_WaterfallTool_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WaterfallTool.BP_WaterfallTool_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_WaterfallTool_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterfallTool.BP_WaterfallTool_C.ReceiveBeginPlay");

	ABP_WaterfallTool_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WaterfallTool.BP_WaterfallTool_C.ExecuteUbergraph_BP_WaterfallTool
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WaterfallTool_C::ExecuteUbergraph_BP_WaterfallTool(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterfallTool.BP_WaterfallTool_C.ExecuteUbergraph_BP_WaterfallTool");

	ABP_WaterfallTool_C_ExecuteUbergraph_BP_WaterfallTool_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
