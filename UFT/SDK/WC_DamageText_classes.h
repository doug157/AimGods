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

// BlueprintGeneratedClass WC_DamageText.WC_DamageText_C
// 0x0008 (FullSize[0x0528] - InheritedSize[0x0520])
class UWC_DamageText_C : public UAGDamageTextWidgetComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WC_DamageText.WC_DamageText_C");
		return ptr;
	}


	void SetDamageText(float Damage, EDamageTextType DamageTextType, int GoldAmount, class UTexture2D* DebuffIcon);
	void AddDebuffIcon(class UImage* DebuffImage);
	void ExecuteUbergraph_WC_DamageText(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
