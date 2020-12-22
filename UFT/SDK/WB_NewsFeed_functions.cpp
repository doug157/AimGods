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

// Function WB_NewsFeed.WB_NewsFeed_C.PopulateNewsFeed
// (BlueprintCallable, BlueprintEvent)
void UWB_NewsFeed_C::PopulateNewsFeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NewsFeed.WB_NewsFeed_C.PopulateNewsFeed");

	UWB_NewsFeed_C_PopulateNewsFeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NewsFeed.WB_NewsFeed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_NewsFeed_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NewsFeed.WB_NewsFeed_C.Construct");

	UWB_NewsFeed_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NewsFeed.WB_NewsFeed_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_NewsFeed_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NewsFeed.WB_NewsFeed_C.Destruct");

	UWB_NewsFeed_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NewsFeed.WB_NewsFeed_C.OnNewsFeedReceieved
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FNewsFeedItem>   NewsFeedItems                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FNewsFeedError          Error                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_NewsFeed_C::OnNewsFeedReceieved(bool Success, TArray<struct FNewsFeedItem> NewsFeedItems, const struct FNewsFeedError& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NewsFeed.WB_NewsFeed_C.OnNewsFeedReceieved");

	UWB_NewsFeed_C_OnNewsFeedReceieved_Params params;
	params.Success = Success;
	params.NewsFeedItems = NewsFeedItems;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NewsFeed.WB_NewsFeed_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_NewsFeed_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NewsFeed.WB_NewsFeed_C.PreConstruct");

	UWB_NewsFeed_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NewsFeed.WB_NewsFeed_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_NewsFeed_C::BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NewsFeed.WB_NewsFeed_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWB_NewsFeed_C_BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NewsFeed.WB_NewsFeed_C.BndEvt__Btn_Open_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_NewsFeed_C::BndEvt__Btn_Open_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NewsFeed.WB_NewsFeed_C.BndEvt__Btn_Open_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWB_NewsFeed_C_BndEvt__Btn_Open_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NewsFeed.WB_NewsFeed_C.ExecuteUbergraph_WB_NewsFeed
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_NewsFeed_C::ExecuteUbergraph_WB_NewsFeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NewsFeed.WB_NewsFeed_C.ExecuteUbergraph_WB_NewsFeed");

	UWB_NewsFeed_C_ExecuteUbergraph_WB_NewsFeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
