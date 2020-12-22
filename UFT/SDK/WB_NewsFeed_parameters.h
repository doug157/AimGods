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

// Function WB_NewsFeed.WB_NewsFeed_C.PopulateNewsFeed
struct UWB_NewsFeed_C_PopulateNewsFeed_Params
{
};

// Function WB_NewsFeed.WB_NewsFeed_C.Construct
struct UWB_NewsFeed_C_Construct_Params
{
};

// Function WB_NewsFeed.WB_NewsFeed_C.Destruct
struct UWB_NewsFeed_C_Destruct_Params
{
};

// Function WB_NewsFeed.WB_NewsFeed_C.OnNewsFeedReceieved
struct UWB_NewsFeed_C_OnNewsFeedReceieved_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FNewsFeedItem>                       NewsFeedItems;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FNewsFeedError                              Error;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_NewsFeed.WB_NewsFeed_C.PreConstruct
struct UWB_NewsFeed_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_NewsFeed.WB_NewsFeed_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWB_NewsFeed_C_BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_NewsFeed.WB_NewsFeed_C.BndEvt__Btn_Open_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWB_NewsFeed_C_BndEvt__Btn_Open_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_NewsFeed.WB_NewsFeed_C.ExecuteUbergraph_WB_NewsFeed
struct UWB_NewsFeed_C_ExecuteUbergraph_WB_NewsFeed_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
