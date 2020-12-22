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

// WidgetBlueprintGeneratedClass WB_PartyInvite_List.WB_PartyInvite_List_C
// 0x0030 (FullSize[0x0260] - InheritedSize[0x0230])
class UWB_PartyInvite_List_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  VB_PartyRequests;                                          // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFriendsLibrary*                             Friends;                                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IncomingRequestsSucceeded;                                 // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               OutgoingRequestsSucceeded;                                 // 0x0249(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F9AH[0x6];                                     // 0x024A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    Party_WeHaveSomething;                                     // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_PartyInvite_List.WB_PartyInvite_List_C");
		return ptr;
	}


	void Load_Requests();
	void Construct();
	void OnGetPartyInvites(bool Success, const struct FString& Response, const struct FPartyError& Error, const struct FPartyInvites& Invites);
	void OnPartyInviteReceivedWs_Event(const struct FString& PartyInviteId, const struct FString& Username, int64_t InviteExpiresAt);
	void OnIncomingPartyInviteCancelledWs(const struct FString& PartyInviteId);
	void OnOutgoingPartyInviteAccepted(const struct FString& PartyInviteId, const struct FString& UserId, const struct FString& Username);
	void UpdatePartyNotification();
	void OnSendPartyInvite(bool Success, const struct FString& Response, const struct FPartyError& Error, const struct FOutgoingPartyInvite& OutgoingInvite);
	void OnCancelPartyInvite(bool Success, const struct FString& Response, const struct FPartyError& Error);
	void OnAcceptPartyInvite(bool Success, const struct FPartyError& Error, const struct FCurrentParty& CurrentParty);
	void ClearOutPartyInvites();
	void ExecuteUbergraph_WB_PartyInvite_List(int EntryPoint);
	void Party_WeHaveSomething__DelegateSignature(int Quantity);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
