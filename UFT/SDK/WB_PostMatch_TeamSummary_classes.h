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

// WidgetBlueprintGeneratedClass WB_PostMatch_TeamSummary.WB_PostMatch_TeamSummary_C
// 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
class UWB_PostMatch_TeamSummary_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  Txt_EnemyTeamEloValue;                                     // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Txt_MyTeamEloValue;                                        // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_PostMatch_TeamSummary.WB_PostMatch_TeamSummary_C");
		return ptr;
	}


	void Construct();
	void TimeRefresh();
	void ExecuteUbergraph_WB_PostMatch_TeamSummary(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
