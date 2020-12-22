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

// Function WB_ShopItemCategory.WB_ShopItemCategory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_ShopItemCategory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShopItemCategory.WB_ShopItemCategory_C.Construct");

	UWB_ShopItemCategory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ShopItemCategory.WB_ShopItemCategory_C.Add Item To Category Box
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_ShopItem_C*          Shop_Item                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ShopItemCategory_C::Add_Item_To_Category_Box(class UWB_ShopItem_C* Shop_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShopItemCategory.WB_ShopItemCategory_C.Add Item To Category Box");

	UWB_ShopItemCategory_C_Add_Item_To_Category_Box_Params params;
	params.Shop_Item = Shop_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ShopItemCategory.WB_ShopItemCategory_C.ExecuteUbergraph_WB_ShopItemCategory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ShopItemCategory_C::ExecuteUbergraph_WB_ShopItemCategory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShopItemCategory.WB_ShopItemCategory_C.ExecuteUbergraph_WB_ShopItemCategory");

	UWB_ShopItemCategory_C_ExecuteUbergraph_WB_ShopItemCategory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
