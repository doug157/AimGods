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

// Function WB_ShopItemDetails.WB_ShopItemDetails_C.Set Displayed Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_ShopItem_C*          Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ShopItemDetails_C::Set_Displayed_Item(class UWB_ShopItem_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShopItemDetails.WB_ShopItemDetails_C.Set Displayed Item");

	UWB_ShopItemDetails_C_Set_Displayed_Item_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ShopItemDetails.WB_ShopItemDetails_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_ShopItemDetails_C::BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShopItemDetails.WB_ShopItemDetails_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWB_ShopItemDetails_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ShopItemDetails.WB_ShopItemDetails_C.ExecuteUbergraph_WB_ShopItemDetails
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ShopItemDetails_C::ExecuteUbergraph_WB_ShopItemDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShopItemDetails.WB_ShopItemDetails_C.ExecuteUbergraph_WB_ShopItemDetails");

	UWB_ShopItemDetails_C_ExecuteUbergraph_WB_ShopItemDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
