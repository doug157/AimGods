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

// AnimBlueprintGeneratedClass AnimBP_Character1PFinal.AnimBP_Character1PFinal_C
// 0x03AE (FullSize[0x0616] - InheritedSize[0x0268])
class UAnimBP_Character1PFinal_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_OYCG[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0424BBCA4A7763010DCF5F941E488102;       // 0x0278(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1F49BB7E46C67226D1F970917D4CC3D4;       // 0x02A8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5A8D74E54B9E3449AC3799A7BEDBBEBA; // 0x02F0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A2BB9728494D06C6DD8E1BA141668522; // 0x0390(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_63CF2FF1402222717D618F85541E9BD8; // 0x0408(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_90BDF2F2451B1BF6D800678CDC3148DD; // 0x04E8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1D550CDB4905DC8C1E44F88B14B3765F; // 0x0588(0x0078)
	float                                              Speed;                                                     // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Velocity2D;                                                // 0x0604(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsMoving;                                                  // 0x060C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JLT9[0x3];                                     // 0x060D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Direction;                                                 // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayChargingAnim;                                          // 0x0614(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsFalling;                                                 // 0x0615(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_Character1PFinal.AnimBP_Character1PFinal_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AnimBP_Character1PFinal(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
