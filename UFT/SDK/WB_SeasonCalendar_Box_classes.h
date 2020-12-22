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

// WidgetBlueprintGeneratedClass WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C
// 0x0048 (FullSize[0x0278] - InheritedSize[0x0230])
class UWB_SeasonCalendar_Box_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  head;                                                      // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Number;                                                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       HeadText;                                                  // 0x0248(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       NumberText;                                                // 0x0260(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C");
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void Construct();
	void UpdateNumber(const struct FText& NewNumber);
	void ExecuteUbergraph_WB_SeasonCalendar_Box(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
