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

// WidgetBlueprintGeneratedClass WB_LoadoutActionBar.WB_LoadoutActionBar_C
// 0x00A8 (FullSize[0x02D8] - InheritedSize[0x0230])
class UWB_LoadoutActionBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              ActionBarBox;                                              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_LoadoutActionBarSlot_C*                  WB_LoadoutActionBarSlot;                                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_LoadoutActionBarSlot_C*                  WB_LoadoutActionBarSlot_2;                                 // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_LoadoutActionBarSlot_C*                  WB_LoadoutActionBarSlot_3;                                 // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_LoadoutActionBarSlot_C*                  WB_LoadoutActionBarSlot_4;                                 // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_LoadoutActionBarSlot_C*                  WB_LoadoutActionBarSlot_5;                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_LoadoutActionBarSlot_C*                  WB_LoadoutActionBarSlot_6;                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_LoadoutActionBarSlot_C*                  WB_LoadoutActionBarSlot_7;                                 // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<EAGAbilityInputID, class UWB_LoadoutActionBarSlot_C*> ActionBarSlots;                                            // 0x0278(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	struct FScriptMulticastDelegate                    ClickedAnySlot;                                            // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_LoadoutActionBar.WB_LoadoutActionBar_C");
		return ptr;
	}


	void Construct();
	void On_Loadout_Ability_Changed(EAGAbilityInputID InputID, class UClass* Ability);
	void BndEvt__WB_LoadoutActionBarSlot_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void BndEvt__WB_LoadoutActionBarSlot_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void BndEvt__WB_LoadoutActionBarSlot_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void BndEvt__WB_LoadoutActionBarSlot_3_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
	void BndEvt__WB_LoadoutActionBarSlot_4_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature();
	void BndEvt__WB_LoadoutActionBarSlot_5_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature();
	void BndEvt__WB_LoadoutActionBarSlot_6_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature();
	void ExecuteUbergraph_WB_LoadoutActionBar(int EntryPoint);
	void ClickedAnySlot__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
