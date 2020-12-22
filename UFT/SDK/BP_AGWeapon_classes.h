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

// BlueprintGeneratedClass BP_AGWeapon.BP_AGWeapon_C
// 0x0010 (FullSize[0x0348] - InheritedSize[0x0338])
class ABP_AGWeapon_C : public AAGWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AGWeapon.BP_AGWeapon_C");
		return ptr;
	}


	void OnOwnedTagChanged_C52886434498EC5F3DB0209ACCD68CFB(const struct FGameplayTag& OwningTag, int Amount);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AGWeapon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
