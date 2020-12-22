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

// WidgetBlueprintGeneratedClass WB_CharacterRotationArea.WB_CharacterRotationArea_C
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class UWB_CharacterRotationArea_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      MainMenuChar;                                              // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_CharacterRotationArea.WB_CharacterRotationArea_C");
		return ptr;
	}


	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Construct();
	void ExecuteUbergraph_WB_CharacterRotationArea(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
