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

// BlueprintGeneratedClass GA_DoubleStrikes_New.GA_DoubleStrikes_New_C
// 0x0010 (FullSize[0x04C0] - InheritedSize[0x04B0])
class UGA_DoubleStrikes_New_C : public UAGGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      DoubleStrikesGEClass;                                      // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_DoubleStrikes_New.GA_DoubleStrikes_New_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_DoubleStrikes_New(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
