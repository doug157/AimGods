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

// BlueprintGeneratedClass GA_PersistentHealthRegen.GA_PersistentHealthRegen_C
// 0x0018 (FullSize[0x04C8] - InheritedSize[0x04B0])
class UGA_PersistentHealthRegen_C : public UAGGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              HealthRegenRate;                                           // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4NEU[0x4];                                     // 0x04BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAbilityTask_Repeat*                         RepeatTask;                                                // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_PersistentHealthRegen.GA_PersistentHealthRegen_C");
		return ptr;
	}


	void OnFinished_712AA67141E78B3E710A9DB39319877E(int ActionNumber);
	void OnPerformAction_712AA67141E78B3E710A9DB39319877E(int ActionNumber);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_PersistentHealthRegen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
