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

// BlueprintGeneratedClass GA_IntimidatingRoar_new.GA_IntimidatingRoar_new_C
// 0x0020 (FullSize[0x04D0] - InheritedSize[0x04B0])
class UGA_IntimidatingRoar_new_C : public UAGGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_AGCharacter_C*                           OwnerCharacter;                                            // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EffectRadius;                                              // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GAJM[0x4];                                     // 0x04C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      IntimidatingRoarGEClass;                                   // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_IntimidatingRoar_new.GA_IntimidatingRoar_new_C");
		return ptr;
	}


	void CheckAndSetupCachables();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_IntimidatingRoar_new(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
