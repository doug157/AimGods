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

// BlueprintGeneratedClass GA_ProtectionFromZeus.GA_ProtectionFromZeus_C
// 0x0008 (FullSize[0x04B8] - InheritedSize[0x04B0])
class UGA_ProtectionFromZeus_C : public UAGGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_ProtectionFromZeus.GA_ProtectionFromZeus_C");
		return ptr;
	}


	void InvalidHandle_3994E5D148CF3D326445E3BC01A559A8(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void OnRemoved_3994E5D148CF3D326445E3BC01A559A8(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_ProtectionFromZeus(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
