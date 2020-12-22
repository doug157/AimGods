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

// WidgetBlueprintGeneratedClass WB_PlayerDamage.WB_PlayerDamage_C
// 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
class UWB_PlayerDamage_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Anim;                                                      // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  DamageText;                                                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_PlayerDamage.WB_PlayerDamage_C");
		return ptr;
	}


	void Initialize(bool Heal_, float Number);
	void Finished_A6AC22264894A303AC45448B5334C92A();
	void Construct();
	void Spawn(bool Heal_, float Number);
	void ExecuteUbergraph_WB_PlayerDamage(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
