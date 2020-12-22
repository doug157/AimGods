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

// BlueprintGeneratedClass BP_HQUI_Functions.BP_HQUI_Functions_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_HQUI_Functions_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HQUI_Functions.BP_HQUI_Functions_C");
		return ptr;
	}


	void STATIC_HandleResponsiveHovering(bool bResponsiveHovering, class UWB_NativeButton_C* ButtonToFocus, class APlayerController* OwningPlayer, class UObject* __WorldContext);
	void STATIC_UnhoverAllNativeButtons(class UWB_NativeButton_C* Exception, class UObject* __WorldContext);
	void STATIC_GetPC_InputDetect(class UObject* __WorldContext, class ABP_PC_InputDetect_C** AsPC_Input_Detect);
	void STATIC_SetRightInputType(const struct FKey& InputKey, class UObject* __WorldContext, struct FKey* LastPressed_Key);
	void STATIC_FindInputType(const struct FKey& InputKey, class UObject* __WorldContext, struct FKey* LastPressed_Key, TEnumAsByte<EInputType>* InputType);
	void STATIC_GetVRControllerKeys(class UObject* __WorldContext, TArray<struct FKey>* Oculus_VR_Keys);
	void STATIC_GetMouseKeys(class UObject* __WorldContext, TArray<struct FKey>* MouseKeys);
	void STATIC_GetKeyboardKeys(class UObject* __WorldContext, TArray<struct FKey>* KeyboardKeys);
	void STATIC_GetGamepadKeys(class UObject* __WorldContext, TArray<struct FKey>* GamepadKeys);
	void STATIC_GetShowMouse(class UObject* __WorldContext, bool* bShowMouse);
	void STATIC_SetShowMouse(bool bShowMouse, class UObject* __WorldContext);
	void STATIC_UnbindOnInputTypeSwitched(const struct FScriptDelegate& Event, class UObject* __WorldContext);
	void STATIC_BindOnInputTypeSwitched(const struct FScriptDelegate& Event, class UObject* __WorldContext);
	void STATIC_SetInputType(TEnumAsByte<EInputType> InputType, class UObject* __WorldContext);
	void STATIC_GetInputType(class UObject* __WorldContext, TEnumAsByte<EInputType>* InputType);
	void STATIC_GetInputDetectGameInstance(class UObject* __WorldContext, class UBP_InputDetect_Instance_C** AsInput_Detect_Instance);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
