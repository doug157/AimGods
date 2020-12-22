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

// WidgetBlueprintGeneratedClass WB_AddFriend.WB_AddFriend_C
// 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
class UWB_AddFriend_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Clicked;                                                   // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     AddFriendBtnA;                                             // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_111;                                                 // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SendFriendRequestDialog_C*               WB_SendFriendRequestDialog;                                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_AddFriend.WB_AddFriend_C");
		return ptr;
	}


	void BndEvt__WB_SendFriendRequestDialog_K2Node_ComponentBoundEvent_0_FriendSearchOperationDone__DelegateSignature();
	void BndEvt__AddFriendBtnA_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_SendFriendRequestDialog_K2Node_ComponentBoundEvent_2_CloseWindow__DelegateSignature();
	void ExecuteUbergraph_WB_AddFriend(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
