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

// BlueprintGeneratedClass BP_ButtonManager_Functions.BP_ButtonManager_Functions_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_ButtonManager_Functions_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ButtonManager_Functions.BP_ButtonManager_Functions_C");
		return ptr;
	}


	void STATIC_GetButtonManager(class UWB_Button_Base_C* ButtonWidget, class UObject* __WorldContext, TScriptInterface<class UBPi_ButtonManager_C>* ButtonManager);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
