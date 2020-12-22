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

// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Waterfall Particles
struct ABP_WaterfallTool_C_Setup_Waterfall_Particles_Params
{
};

// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Adds Waterfall Particles
struct ABP_WaterfallTool_C_Setup_Adds_Waterfall_Particles_Params
{
};

// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Waterfall Particle Parameters
struct ABP_WaterfallTool_C_Setup_Waterfall_Particle_Parameters_Params
{
};

// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Adds Waterfall Particle Parameters
struct ABP_WaterfallTool_C_Setup_Adds_Waterfall_Particle_Parameters_Params
{
};

// Function BP_WaterfallTool.BP_WaterfallTool_C.Set Adds Waterfall Particle Effect Location
struct ABP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location_Params
{
	TArray<struct FAdditionalCascades>                 Cascade_Splines_Data;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UParticleSystemComponent*>            Cascade_Top_Splash;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>            Cascade_Bottom_Splash;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>            Cascade_Mist;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	TArray<class USplineComponent*>                    Cascade_Spline_Comps;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function BP_WaterfallTool.BP_WaterfallTool_C.Do Waterfall Trace
struct ABP_WaterfallTool_C_Do_Waterfall_Trace_Params
{
	class USplineComponent*                            Spline_Input;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              Actors_to_Ignore;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_WaterfallTool.BP_WaterfallTool_C.Check Spline Input Keys
struct ABP_WaterfallTool_C_Check_Spline_Input_Keys_Params
{
	TArray<struct FAdditionalCascades>                 Cascades_In;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Passed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Spline Mesh
struct ABP_WaterfallTool_C_Setup_Spline_Mesh_Params
{
	class USplineComponent*                            Spline_Comp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WaterfallTool.BP_WaterfallTool_C.Set Waterfall Particle Effect Location
struct ABP_WaterfallTool_C_Set_Waterfall_Particle_Effect_Location_Params
{
};

// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Material Parameters
struct ABP_WaterfallTool_C_Setup_Material_Parameters_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Current_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                            Spline;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WaterfallTool.BP_WaterfallTool_C.UserConstructionScript
struct ABP_WaterfallTool_C_UserConstructionScript_Params
{
};

// Function BP_WaterfallTool.BP_WaterfallTool_C.ReceiveTick
struct ABP_WaterfallTool_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WaterfallTool.BP_WaterfallTool_C.ReceiveBeginPlay
struct ABP_WaterfallTool_C_ReceiveBeginPlay_Params
{
};

// Function BP_WaterfallTool.BP_WaterfallTool_C.ExecuteUbergraph_BP_WaterfallTool
struct ABP_WaterfallTool_C_ExecuteUbergraph_BP_WaterfallTool_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
