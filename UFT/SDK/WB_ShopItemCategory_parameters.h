#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function WB_ShopItemCategory.WB_ShopItemCategory_C.Construct
struct UWB_ShopItemCategory_C_Construct_Params
{
};

// Function WB_ShopItemCategory.WB_ShopItemCategory_C.Add Item To Category Box
struct UWB_ShopItemCategory_C_Add_Item_To_Category_Box_Params
{
	class UWB_ShopItem_C*                              Shop_Item;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ShopItemCategory.WB_ShopItemCategory_C.ExecuteUbergraph_WB_ShopItemCategory
struct UWB_ShopItemCategory_C_ExecuteUbergraph_WB_ShopItemCategory_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
