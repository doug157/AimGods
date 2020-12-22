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

// Function WB_ErrorMessage.WB_ErrorMessage_C.BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_ErrorMessage_C::BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ErrorMessage.WB_ErrorMessage_C.BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	UWB_ErrorMessage_C_BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ErrorMessage.WB_ErrorMessage_C.ExecuteUbergraph_WB_ErrorMessage
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ErrorMessage_C::ExecuteUbergraph_WB_ErrorMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ErrorMessage.WB_ErrorMessage_C.ExecuteUbergraph_WB_ErrorMessage");

	UWB_ErrorMessage_C_ExecuteUbergraph_WB_ErrorMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
