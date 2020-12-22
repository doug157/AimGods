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

// BlueprintGeneratedClass GA_RootMotionMoveToForce.GA_RootMotionMoveToForce_C
// 0x0010 (FullSize[0x04C0] - InheritedSize[0x04B0])
class UGA_RootMotionMoveToForce_C : public UAGGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAbilityTask_ApplyRootMotionMoveToForce*     MoveToForceTask;                                           // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_RootMotionMoveToForce.GA_RootMotionMoveToForce_C");
		return ptr;
	}


	void OnTimedOutAndDestinationReached_EDA6A90643EFEB5AF2DA19BAF2ACD9EC();
	void OnTimedOut_EDA6A90643EFEB5AF2DA19BAF2ACD9EC();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_RootMotionMoveToForce(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
