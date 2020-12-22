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

// WidgetBlueprintGeneratedClass WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C
// 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
class UWB_Incoming_CustomGames_Invite_List_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  SB_IncomingCustomGameInvites;                              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VB_Invites;                                                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    CustomGame_WeHaveSomething;                                // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C");
		return ptr;
	}


	void Construct();
	void OnGetIncomingInvites(TArray<struct FIncomingCustomGameInvite> CustomGameInvites);
	void OnCustomGameInviteReceivedWs(const struct FIncomingCustomGameInvite& CustomGameInvite);
	void UpdateCustomGameNotifications();
	void OnAcceptInvite(const struct FCustomGame& CurrentGame);
	void OnCustomGameInviteCancelledWs(const struct FString& InviteId);
	void ClearOutInvites();
	void ExecuteUbergraph_WB_Incoming_CustomGames_Invite_List(int EntryPoint);
	void CustomGame_WeHaveSomething__DelegateSignature(int Quantity);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
