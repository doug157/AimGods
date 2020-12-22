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

// BlueprintGeneratedClass GA_CloakOfShadows_New.GA_CloakOfShadows_New_C
// 0x0008 (FullSize[0x04B8] - InheritedSize[0x04B0])
class UGA_CloakOfShadows_New_C : public UAGGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_CloakOfShadows_New.GA_CloakOfShadows_New_C");
		return ptr;
	}


	void InvalidHandle_7CF270C74587F69A579BA8BFF50A0EF9(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void OnRemoved_7CF270C74587F69A579BA8BFF50A0EF9(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_CloakOfShadows_New(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
