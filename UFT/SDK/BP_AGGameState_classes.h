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

// BlueprintGeneratedClass BP_AGGameState.BP_AGGameState_C
// 0x0010 (FullSize[0x0358] - InheritedSize[0x0348])
class ABP_AGGameState_C : public AAGGameState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AGGameState.BP_AGGameState_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void On_Post_Match_Begin(bool bRedTeamWon);
	void ExecuteUbergraph_BP_AGGameState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
