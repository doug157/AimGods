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

// BlueprintGeneratedClass BP_InputDetect_Instance.BP_InputDetect_Instance_C
// 0x0018 (FullSize[0x0180] - InheritedSize[0x0168])
class UBP_InputDetect_Instance_C : public UGameInstance
{
public:
	bool                                               bShowMouse;                                                // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<EInputType>                            InputType;                                                 // 0x0169(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8LTQ[0x6];                                     // 0x016A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    UpdateInputType;                                           // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_InputDetect_Instance.BP_InputDetect_Instance_C");
		return ptr;
	}


	void SetShowMouse(bool bShowMouse);
	void SetInputType(TEnumAsByte<EInputType> InputType);
	void UpdateInputType__DelegateSignature(TEnumAsByte<EInputType> InputType);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
