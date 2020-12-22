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

// WidgetBlueprintGeneratedClass WB_FriendChatText.WB_FriendChatText_C
// 0x0021 (FullSize[0x0251] - InheritedSize[0x0230])
class UWB_FriendChatText_C : public UUserWidget
{
public:
	class UTextBlock*                                  MessageWidget;                                             // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       ActualText;                                                // 0x0238(0x0018) (Edit, BlueprintVisible, Net, ExposeOnSpawn)
	bool                                               bIsFromMe;                                                 // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_FriendChatText.WB_FriendChatText_C");
		return ptr;
	}


	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FSlateColor Get_MessageWidget_ColorAndOpacity();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
