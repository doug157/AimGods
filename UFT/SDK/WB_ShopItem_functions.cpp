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

// Function WB_ShopItem.WB_ShopItem_C.BndEvt__SelectItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_ShopItem_C::BndEvt__SelectItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShopItem.WB_ShopItem_C.BndEvt__SelectItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWB_ShopItem_C_BndEvt__SelectItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ShopItem.WB_ShopItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_ShopItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShopItem.WB_ShopItem_C.Construct");

	UWB_ShopItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ShopItem.WB_ShopItem_C.ExecuteUbergraph_WB_ShopItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ShopItem_C::ExecuteUbergraph_WB_ShopItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShopItem.WB_ShopItem_C.ExecuteUbergraph_WB_ShopItem");

	UWB_ShopItem_C_ExecuteUbergraph_WB_ShopItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
