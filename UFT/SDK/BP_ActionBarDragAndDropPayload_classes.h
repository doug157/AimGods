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

// BlueprintGeneratedClass BP_ActionBarDragAndDropPayload.BP_ActionBarDragAndDropPayload_C
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UBP_ActionBarDragAndDropPayload_C : public UObject
{
public:
	class UClass*                                      Ability;                                                   // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWB_ActionBarSlot_C*                         ActionBarSlot;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWB_LoadoutActionBarSlot_C*                  LoadoutActionBarSlot;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ActionBarDragAndDropPayload.BP_ActionBarDragAndDropPayload_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
