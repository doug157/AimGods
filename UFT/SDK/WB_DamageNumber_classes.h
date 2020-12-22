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

// WidgetBlueprintGeneratedClass WB_DamageNumber.WB_DamageNumber_C
// 0x0180 (FullSize[0x03B0] - InheritedSize[0x0230])
class UWB_DamageNumber_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Anim_03;                                                   // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Anim_02;                                                   // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Anim_01;                                                   // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            DamageTextFade;                                            // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  DamageNumber;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              DebuffHorizontalBox;                                       // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  GoldAmount;                                                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                              CritFont;                                                  // 0x0270(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateColor                                 CritColor;                                                 // 0x02C0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 NormalColor;                                               // 0x02E8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateFontInfo                              NormalFont;                                                // 0x0310(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                              OutOfRangeFont;                                            // 0x0360(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_DamageNumber.WB_DamageNumber_C");
		return ptr;
	}


	void Finished_C74A44EB49D394462E4FF3BFDD682116();
	void Finished_EAE840F2466551B3C6B96D96DEFF64E5();
	void Construct();
	void UpdateDamage(float Damage, EDamageTextType DamageTextType, class UTexture2D* DebuffTexture, int GoldAmount);
	void AddDebuffImage(class UImage* DebuffImage);
	void ExecuteUbergraph_WB_DamageNumber(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
