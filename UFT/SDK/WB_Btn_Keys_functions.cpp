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

// Function WB_Btn_Keys.WB_Btn_Keys_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Btn_Keys_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_Keys.WB_Btn_Keys_C.Construct");

	UWB_Btn_Keys_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Btn_Keys.WB_Btn_Keys_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_Btn_Keys_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_Keys.WB_Btn_Keys_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWB_Btn_Keys_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Btn_Keys.WB_Btn_Keys_C.OnGetUserInfo
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAuthError              AuthError                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FUserInfo               UserInfo                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_Btn_Keys_C::OnGetUserInfo(bool Success, const struct FAuthError& AuthError, const struct FUserInfo& UserInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_Keys.WB_Btn_Keys_C.OnGetUserInfo");

	UWB_Btn_Keys_C_OnGetUserInfo_Params params;
	params.Success = Success;
	params.AuthError = AuthError;
	params.UserInfo = UserInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Btn_Keys.WB_Btn_Keys_C.ExecuteUbergraph_WB_Btn_Keys
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Btn_Keys_C::ExecuteUbergraph_WB_Btn_Keys(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_Keys.WB_Btn_Keys_C.ExecuteUbergraph_WB_Btn_Keys");

	UWB_Btn_Keys_C_ExecuteUbergraph_WB_Btn_Keys_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Btn_Keys.WB_Btn_Keys_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_Btn_Keys_C::Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Btn_Keys.WB_Btn_Keys_C.Clicked__DelegateSignature");

	UWB_Btn_Keys_C_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
