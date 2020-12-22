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

// Function WB_ShopItems.WB_ShopItems_C.Populate Category Boxes
// (BlueprintCallable, BlueprintEvent)
void UWB_ShopItems_C::Populate_Category_Boxes()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShopItems.WB_ShopItems_C.Populate Category Boxes");

	UWB_ShopItems_C_Populate_Category_Boxes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ShopItems.WB_ShopItems_C.Populate Shop Items
// (BlueprintCallable, BlueprintEvent)
void UWB_ShopItems_C::Populate_Shop_Items()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShopItems.WB_ShopItems_C.Populate Shop Items");

	UWB_ShopItems_C_Populate_Shop_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ShopItems.WB_ShopItems_C.Fill Items
// (BlueprintCallable, BlueprintEvent)
void UWB_ShopItems_C::Fill_Items()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShopItems.WB_ShopItems_C.Fill Items");

	UWB_ShopItems_C_Fill_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ShopItems.WB_ShopItems_C.ExecuteUbergraph_WB_ShopItems
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ShopItems_C::ExecuteUbergraph_WB_ShopItems(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ShopItems.WB_ShopItems_C.ExecuteUbergraph_WB_ShopItems");

	UWB_ShopItems_C_ExecuteUbergraph_WB_ShopItems_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
