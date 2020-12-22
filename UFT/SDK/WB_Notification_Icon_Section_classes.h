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

// WidgetBlueprintGeneratedClass WB_Notification_Icon_Section.WB_Notification_Icon_Section_C
// 0x0058 (FullSize[0x0288] - InheritedSize[0x0230])
class UWB_Notification_Icon_Section_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            OpenCloseAnimation;                                        // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      BG;                                                        // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Notification_Button_C*                   ChatNotification;                                          // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Notification_Button_C*                   CustomGameNotification;                                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Notification_Button_C*                   FriendNotification;                                        // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Notification_Button_C*                   ImportantInformation;                                      // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Notification_Button_C*                   PartyNotification;                                         // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NotificationBox_C*                       WB_NotificationBox;                                        // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    UpdateFriendsList;                                         // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Notification_Icon_Section.WB_Notification_Icon_Section_C");
		return ptr;
	}


	void BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_2_Notification_FriendRequest_Pop__DelegateSignature(int Quantity);
	void BndEvt__FriendNotification_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature();
	void BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_7_Update_Friends_List__DelegateSignature();
	void BndEvt__PartyNotification_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature();
	void BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_0_CloseWindow__DelegateSignature();
	void BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_1_Notification_PartyRequest_Pop__DelegateSignature(int Quantity);
	void Construct();
	void BndEvt__CustomGameNotification_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
	void BndEvt__WB_NotificationBox_K2Node_ComponentBoundEvent_5_Notification_CustomGameRequest_Pop__DelegateSignature(int Quantity);
	void ExecuteUbergraph_WB_Notification_Icon_Section(int EntryPoint);
	void UpdateFriendsList__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
