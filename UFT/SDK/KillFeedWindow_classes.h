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

// WidgetBlueprintGeneratedClass KillFeedWindow.KillFeedWindow_C
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class UKillFeedWindow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  KillFeedLog;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KillFeedWindow.KillFeedWindow_C");
		return ptr;
	}


	void SetTextToSend(bool bTeam, const struct FText& Killer, const struct FText& Dead, struct FText* TexToSend);
	void UpdateKillFeed(const struct FText& Killer, const struct FText& Victim, bool bKillerIsRedTeam, bool bVictimIsRedTeam);
	void OnInitialized();
	void ExecuteUbergraph_KillFeedWindow(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
