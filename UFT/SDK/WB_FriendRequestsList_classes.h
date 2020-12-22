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

// WidgetBlueprintGeneratedClass WB_FriendRequestsList.WB_FriendRequestsList_C
// 0x0048 (FullSize[0x0278] - InheritedSize[0x0230])
class UWB_FriendRequestsList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  VB_FriendRequest;                                          // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               IncomingRequestsSucceeded;                                 // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               OutgoingRequestsSucceeded;                                 // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NC3T[0x6];                                     // 0x0242(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    WeHaveSomething;                                           // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    WeHaveNothing;                                             // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    UpdateFriendsList;                                         // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_FriendRequestsList.WB_FriendRequestsList_C");
		return ptr;
	}


	void Load_Requests();
	void Construct();
	void OnGetIncomingFriendRequests(bool Success, const struct FString& Response, const struct FAGFriendError& Error, TArray<struct FAGPendingFriendRequest> FriendRequests);
	void OnGetOutgoingFriendRequests(bool Success, const struct FString& Response, const struct FAGFriendError& Error, TArray<struct FAGPendingFriendRequest> FriendRequests);
	void OnFriendRequestReceivedWs(const struct FString& RequestId, const struct FString& Username);
	void AcceptFriend();
	void OnSendFriendRequest(bool Success, const struct FString& Response, const struct FAGFriendError& Error);
	void OnOutgoingFriendRequestAcceptedWs(const struct FString& RequestId);
	void OnAcceptFriendRequest(bool Success, const struct FString& Response, const struct FAGFriendError& Error);
	void UpdateFriendNotifications();
	void OnCancelOutgoingFriendshipRequest(bool Success, const struct FString& Response, const struct FAGFriendError& Error);
	void OnIncomingFriendRequestCancelledWs(const struct FString& RequestId);
	void RemoveFriendRequests();
	void ExecuteUbergraph_WB_FriendRequestsList(int EntryPoint);
	void UpdateFriendsList__DelegateSignature();
	void WeHaveNothing__DelegateSignature();
	void WeHaveSomething__DelegateSignature(int Quantity);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
