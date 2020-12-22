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

// BlueprintGeneratedClass GA_RootMotionRadialForce.GA_RootMotionRadialForce_C
// 0x0010 (FullSize[0x04C0] - InheritedSize[0x04B0])
class UGA_RootMotionRadialForce_C : public UAGGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAbilityTask_ApplyRootMotionRadialForce*     RadialForceRootMotionTask;                                 // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_RootMotionRadialForce.GA_RootMotionRadialForce_C");
		return ptr;
	}


	void OnFinish_FA4FE7EC4D3A2B55CA145FA557D40488();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_RootMotionRadialForce(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
