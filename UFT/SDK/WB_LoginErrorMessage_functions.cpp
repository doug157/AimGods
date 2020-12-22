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

// Function WB_LoginErrorMessage.WB_LoginErrorMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_LoginErrorMessage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoginErrorMessage.WB_LoginErrorMessage_C.Construct");

	UWB_LoginErrorMessage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LoginErrorMessage.WB_LoginErrorMessage_C.BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
void UWB_LoginErrorMessage_C::BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoginErrorMessage.WB_LoginErrorMessage_C.BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	UWB_LoginErrorMessage_C_BndEvt__WB_Btn_Back_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_LoginErrorMessage.WB_LoginErrorMessage_C.ExecuteUbergraph_WB_LoginErrorMessage
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_LoginErrorMessage_C::ExecuteUbergraph_WB_LoginErrorMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LoginErrorMessage.WB_LoginErrorMessage_C.ExecuteUbergraph_WB_LoginErrorMessage");

	UWB_LoginErrorMessage_C_ExecuteUbergraph_WB_LoginErrorMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
