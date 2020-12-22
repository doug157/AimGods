#pragma once

// Name: AimGods, Version: Beta 2


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WaterfallTool.BP_WaterfallTool_C
// 0x00D0 (FullSize[0x02E8] - InheritedSize[0x0218])
class ABP_WaterfallTool_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0218(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Mist;                                                      // 0x0220(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    BottomSplash;                                              // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    TopSplash;                                                 // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                            Waterfall_Spline;                                          // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               Ground_Check;                                              // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HK5W[0x3];                                     // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Easy_Scale;                                                // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Water_Color;                                               // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Foam_Brightness;                                           // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Opacity;                                                   // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Opacity_Edge_Fade;                                         // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Flow_Speed;                                                // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Start_Fade;                                                // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A3DH[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAdditionalCascades>                 Additional_Waterfalls;                                     // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UParticleSystemComponent*>            Additional_Top_Splash;                                     // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>            Additional_Bottom_Splash;                                  // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>            Additional_Mist;                                           // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USplineComponent*>                    Adds_Waterfall_Spline_Comps;                               // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	float                                              End_Fade;                                                  // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Edge_Fade;                                                 // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Object_Detection;                                          // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q3TR[0x3];                                     // 0x02C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Object_Detection_Size;                                     // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Object_Detection_Strength;                                 // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Object_Detection_Smoothness;                               // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              Actors_to_Ignore;                                          // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WaterfallTool.BP_WaterfallTool_C");
		return ptr;
	}


	void Setup_Waterfall_Particles();
	void Setup_Adds_Waterfall_Particles();
	void Setup_Waterfall_Particle_Parameters();
	void Setup_Adds_Waterfall_Particle_Parameters();
	void Set_Adds_Waterfall_Particle_Effect_Location(TArray<struct FAdditionalCascades>* Cascade_Splines_Data, TArray<class UParticleSystemComponent*>* Cascade_Top_Splash, TArray<class UParticleSystemComponent*>* Cascade_Bottom_Splash, TArray<class UParticleSystemComponent*>* Cascade_Mist, TArray<class USplineComponent*>* Cascade_Spline_Comps);
	void Do_Waterfall_Trace(class USplineComponent* Spline_Input, float Scale, TArray<class AActor*>* Actors_to_Ignore);
	void Check_Spline_Input_Keys(TArray<struct FAdditionalCascades>* Cascades_In, bool* Passed);
	void Setup_Spline_Mesh(class USplineComponent* Spline_Comp, float Scale);
	void Set_Waterfall_Particle_Effect_Location();
	void Setup_Material_Parameters(class UMaterialInstanceDynamic* Material, int Current_Index, class USplineComponent* Spline);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WaterfallTool(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
