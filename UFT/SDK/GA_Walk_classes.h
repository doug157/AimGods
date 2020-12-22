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

// BlueprintGeneratedClass GA_Walk.GA_Walk_C
// 0x0008 (FullSize[0x04B8] - InheritedSize[0x04B0])
class UGA_Walk_C : public UAGGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Walk.GA_Walk_C");
		return ptr;
	}


	void OnRelease_2B03566A40E5B1F57AAA56A940831EEC(float TimeHeld);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Walk(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
