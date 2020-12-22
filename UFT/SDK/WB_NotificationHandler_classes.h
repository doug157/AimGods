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

// WidgetBlueprintGeneratedClass WB_NotificationHandler.WB_NotificationHandler_C
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class UWB_NotificationHandler_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                NotificationsBox;                                          // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_NotificationHandler.WB_NotificationHandler_C");
		return ptr;
	}


	void AddTextNotification(TEnumAsByte<ENotificationType> Notification_Type, const struct FString& Notification_Text);
	void OnRemoveFriend(bool Success, const struct FString& Response, const struct FAGFriendError& Error);
	void OnOutgoingFriendRequestAccepted(const struct FString& RequestId);
	void OnBlockPlayer(bool Success, const struct FString& Response, const struct FAGFriendError& Error);
	void OnFriendOnlineStatusChanged(const struct FString& PlayerId, bool IsOnline);
	void OnCustomGameInviteReceived(const struct FIncomingCustomGameInvite& CustomGameInvite);
	void OnUnblockPlayer(bool Success, const struct FString& Response, const struct FAGFriendError& Error);
	void OnSendFriendRequest(bool Success, const struct FString& Response, const struct FAGFriendError& Error);
	void OnFriendRequestReceived(const struct FString& RequestId, const struct FString& Username);
	void Construct();
	void OnSendPartyInvite(bool Success, const struct FString& Response, const struct FPartyError& Error, const struct FOutgoingPartyInvite& OutgoingInvite);
	void OnPartyInviteReceieved(const struct FString& PartyInviteId, const struct FString& Username, int64_t InviteExpiresAt);
	void OnPartyDisbanded(const struct FString& PartyId);
	void OnLeaveParty(bool Success, const struct FString& Response, const struct FPartyError& Error);
	void OnAcceptPartyInvite(bool Success, const struct FPartyError& Error, const struct FCurrentParty& CurrentParty);
	void OnOutgoingPartyInviteAcceptedWs(const struct FString& PartyId, const struct FString& UserId, const struct FString& Username);
	void ExecuteUbergraph_WB_NotificationHandler(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
