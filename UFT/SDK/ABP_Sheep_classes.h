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

// AnimBlueprintGeneratedClass ABP_Sheep.ABP_Sheep_C
// 0x0204 (FullSize[0x046C] - InheritedSize[0x0268])
class UABP_Sheep_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_PYR6[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_827D0DAB4CEB93C4FE7E558165DE2C5A;       // 0x0278(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F659921E495F59BB4C411392E20D0E71; // 0x02A8(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8657AFE5496EFB431B6BCC97AAD66BDB; // 0x0388(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F1FE0A87491ACC8AEC431EA4CF55E543; // 0x03B8(0x00B0)
	float                                              Speed;                                                     // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Sheep.ABP_Sheep_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_Sheep(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
