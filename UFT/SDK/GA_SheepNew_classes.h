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

// BlueprintGeneratedClass GA_SheepNew.GA_SheepNew_C
// 0x0050 (FullSize[0x0500] - InheritedSize[0x04B0])
class UGA_SheepNew_C : public UAGGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FActiveGameplayEffectHandle                 GESheepBuffSpecHandle;                                     // 0x04B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEvent*              ATWaitGameplayEvent;                                       // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEffectRemoved*      ATGEChargeRemoved;                                         // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEffectRemoved*      ATGEDebuffRemoved;                                         // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               SheepMesh;                                                 // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AGCharacter_C*                           TargetCharacter;                                           // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               HumanMesh;                                                 // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      HumanAnimClass;                                            // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle                 GESheepDebuffSpecHandle;                                   // 0x04F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_SheepNew.GA_SheepNew_C");
		return ptr;
	}


	void EventReceived_7232435B4781CBA57A5F32B953D29CC5(const struct FGameplayEventData& Payload);
	void InvalidHandle_8C953441424CCFCF9C5F7D98812C991D(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void OnRemoved_8C953441424CCFCF9C5F7D98812C991D(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void TargetReceivedDamage(class UAGAbilitySystemComponent* SourceASC, float MitigatedDamage, const struct FGameplayTagContainer& GEAssetTags);
	void ExecuteUbergraph_GA_SheepNew(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
