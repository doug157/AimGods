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

// WidgetBlueprintGeneratedClass WB_ActionBar.WB_ActionBar_C
// 0x00A8 (FullSize[0x02D8] - InheritedSize[0x0230])
class UWB_ActionBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              ActionBarBox;                                              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ActionBarSlot_C*                         WB_ActionBarSlot;                                          // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ActionBarSlot_C*                         WB_ActionBarSlot_2;                                        // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ActionBarSlot_C*                         WB_ActionBarSlot_3;                                        // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ActionBarSlot_C*                         WB_ActionBarSlot_4;                                        // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ActionBarSlot_C*                         WB_ActionBarSlot_5;                                        // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ActionBarSlot_C*                         WB_ActionBarSlot_6;                                        // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ActionBarSlot_C*                         WB_ActionBarSlot_7;                                        // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<EAGAbilityInputID, struct FStruct_ActionBarSlotAbilityInfo> ActionBarSlots;                                            // 0x0278(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	class UWB_Gameplay_C*                              HUD;                                                       // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAGAbilitySystemComponent*                   OwnerASC;                                                  // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ActionBar.WB_ActionBar_C");
		return ptr;
	}


	void CheckAbilityActivationStatus(const struct FGameplayTag& InOwningTag, EAGAbilityInputID InAbilityInput, const struct FStruct_ActionBarSlotAbilityInfo& InActionBarSlotAbilityInfo, int InCount);
	void OnOwnedTagChanged_D84337954CD10C215BAB2A89C4B2221E(const struct FGameplayTag& OwningTag, int Amount);
	void Construct();
	void On_Ability_Added(class UAbilitySystemComponent* AbilitySystemComponent, class UClass* GameplayAbilityClass, EAGAbilityInputID InputID);
	void Wait_for_Valid_Data();
	void ListenForAbilitiesBeingBlocked();
	void ListenForAbilitiesBeingUsed();
	void OnLocalAbilityInputPressed(EAGAbilityInputID AbilityInputID);
	void ExecuteUbergraph_WB_ActionBar(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
