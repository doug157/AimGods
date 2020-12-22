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

// BlueprintGeneratedClass MainMenu.MainMenu_C
// 0x0020 (FullSize[0x0240] - InheritedSize[0x0220])
class AMainMenu_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AAmbientSound*                               AmbientSound_1_ExecuteUbergraph_MainMenu_RefProperty;      // 0x0228(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MainMenuChar_C*                          BP_MainMenuChar2_4_ExecuteUbergraph_MainMenu_RefProperty;  // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATextRenderActor*                            TextRenderActor_1_ExecuteUbergraph_MainMenu_RefProperty;   // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MainMenu.MainMenu_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnOutgoingPartyInviteAcceptedWs(const struct FString& PartyId, const struct FString& UserId, const struct FString& Username);
	void OnPartyDisbandedWs(const struct FString& PartyId);
	void OnLeaveCurrentParty(bool Success, const struct FString& Response, const struct FPartyError& Error);
	void OnAcceptPartyInvite(bool Success, const struct FPartyError& Error, const struct FCurrentParty& CurrentParty);
	void ExecuteUbergraph_MainMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
