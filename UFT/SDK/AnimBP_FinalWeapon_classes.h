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

// AnimBlueprintGeneratedClass AnimBP_FinalWeapon.AnimBP_FinalWeapon_C
// 0x0100 (FullSize[0x0368] - InheritedSize[0x0268])
class UAnimBP_FinalWeapon_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_QBX0[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2FF499D045FB0A97650301AC5EFD5A10;       // 0x0278(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9EC59CC0492B8FF527001C82D463AFDA;       // 0x02A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AF43E082416D708CC47E32A238BA936E; // 0x02F0(0x0078)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_FinalWeapon.AnimBP_FinalWeapon_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AnimBP_FinalWeapon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
