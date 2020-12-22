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

// Function WB_Shop.WB_Shop_C.Get Gold Text
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
void UWB_Shop_C::Get_Gold_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Shop.WB_Shop_C.Get Gold Text");

	UWB_Shop_C_Get_Gold_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Shop.WB_Shop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Shop_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Shop.WB_Shop_C.Construct");

	UWB_Shop_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Shop.WB_Shop_C.BndEvt__CloseShopButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_Shop_C::BndEvt__CloseShopButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Shop.WB_Shop_C.BndEvt__CloseShopButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWB_Shop_C_BndEvt__CloseShopButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Shop.WB_Shop_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Shop_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Shop.WB_Shop_C.Destruct");

	UWB_Shop_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Shop.WB_Shop_C.On Gold Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OldAmount                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NewAmount                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Shop_C::On_Gold_Changed(int OldAmount, int NewAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Shop.WB_Shop_C.On Gold Changed");

	UWB_Shop_C_On_Gold_Changed_Params params;
	params.OldAmount = OldAmount;
	params.NewAmount = NewAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Shop.WB_Shop_C.ExecuteUbergraph_WB_Shop
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Shop_C::ExecuteUbergraph_WB_Shop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Shop.WB_Shop_C.ExecuteUbergraph_WB_Shop");

	UWB_Shop_C_ExecuteUbergraph_WB_Shop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
