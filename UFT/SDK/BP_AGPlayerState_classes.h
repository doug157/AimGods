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

// BlueprintGeneratedClass BP_AGPlayerState.BP_AGPlayerState_C
// 0x0010 (FullSize[0x04A8] - InheritedSize[0x0498])
class ABP_AGPlayerState_C : public AAGPlayerState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0498(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AGPlayerState.BP_AGPlayerState_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AGPlayerState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
