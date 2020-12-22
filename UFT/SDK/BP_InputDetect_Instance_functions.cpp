// Name: AimGods, Version: Beta 2

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.SetShowMouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShowMouse                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_InputDetect_Instance_C::SetShowMouse(bool bShowMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.SetShowMouse");

	UBP_InputDetect_Instance_C_SetShowMouse_Params params;
	params.bShowMouse = bShowMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.SetInputType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputType>        InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_InputDetect_Instance_C::SetInputType(TEnumAsByte<EInputType> InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.SetInputType");

	UBP_InputDetect_Instance_C_SetInputType_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.UpdateInputType__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputType>        InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_InputDetect_Instance_C::UpdateInputType__DelegateSignature(TEnumAsByte<EInputType> InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InputDetect_Instance.BP_InputDetect_Instance_C.UpdateInputType__DelegateSignature");

	UBP_InputDetect_Instance_C_UpdateInputType__DelegateSignature_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
