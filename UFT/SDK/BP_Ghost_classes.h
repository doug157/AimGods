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

// BlueprintGeneratedClass BP_Ghost.BP_Ghost_C
// 0x0020 (FullSize[0x0670] - InheritedSize[0x0650])
class ABP_Ghost_C : public AAGGhost
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0650(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    MeshParticle;                                              // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWB_Spectating_C*                            SpectatingWidget;                                          // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_Gameplay_C*                              GameplayWidget;                                            // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ghost.BP_Ghost_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void BPOnSpectateModeChanged(bool bFreeMode);
	void ExecuteUbergraph_BP_Ghost(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
