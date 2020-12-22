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

// BlueprintGeneratedClass GA_HealBullets_new.GA_HealBullets_new_C
// 0x0010 (FullSize[0x04C0] - InheritedSize[0x04B0])
class UGA_HealBullets_new_C : public UAGGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAbilityTask_WaitGameplayEffectRemoved*      WaitForBuffRemoved;                                        // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_HealBullets_new.GA_HealBullets_new_C");
		return ptr;
	}


	void InvalidHandle_A3CEC4B1455D1FF82CB33CB5982CF0DC(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void OnRemoved_A3CEC4B1455D1FF82CB33CB5982CF0DC(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void EventReceived_D6008311459059F5E6B2E2B449CE2C58(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_HealBullets_new(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
