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

// WidgetBlueprintGeneratedClass WB_Parties.WB_Parties_C
// 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
class UWB_Parties_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                             LoadSwitcher;                                              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                PartyBox;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MainMenu_CustomMatch_C*                  WB_MainMenu_LeaveParty;                                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_PartyRow_C*                              WB_PartyRow;                                               // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Parties.WB_Parties_C");
		return ptr;
	}


	void Check_Visibility();
	void OnLeaveCurrentParty(bool Success, const struct FString& Response, const struct FPartyError& Error);
	void Construct();
	void OnAcceptPartyInvite(bool Success, const struct FPartyError& Error, const struct FCurrentParty& CurrentParty);
	void OnPartyInviteAcceptedWs(const struct FString& PartyId, const struct FString& UserId, const struct FString& Username);
	void BndEvt__WB_MainMenu_LeaveParty_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void OnPartyDisbandedWs(const struct FString& PartyId);
	void ExecuteUbergraph_WB_Parties(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
