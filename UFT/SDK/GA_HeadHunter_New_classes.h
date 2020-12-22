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

// BlueprintGeneratedClass GA_HeadHunter_New.GA_HeadHunter_New_C
// 0x0010 (FullSize[0x04C0] - InheritedSize[0x04B0])
class UGA_HeadHunter_New_C : public UAGGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAbilityTask_WaitGameplayEvent*              WaitHeadshotEventTask;                                     // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_HeadHunter_New.GA_HeadHunter_New_C");
		return ptr;
	}


	void EventReceived_2D63217C474B2FE009D424854AD514A1(const struct FGameplayEventData& Payload);
	void InvalidHandle_50D2E54344A54A1B797677807D06FC04(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void OnRemoved_50D2E54344A54A1B797677807D06FC04(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_HeadHunter_New(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
