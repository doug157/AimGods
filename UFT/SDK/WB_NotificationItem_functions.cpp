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

// Function WB_NotificationItem.WB_NotificationItem_C.OnDisplayWidgetTimerEnd
// (BlueprintCallable, BlueprintEvent)
void UWB_NotificationItem_C::OnDisplayWidgetTimerEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationItem.WB_NotificationItem_C.OnDisplayWidgetTimerEnd");

	UWB_NotificationItem_C_OnDisplayWidgetTimerEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NotificationItem.WB_NotificationItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_NotificationItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationItem.WB_NotificationItem_C.Construct");

	UWB_NotificationItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NotificationItem.WB_NotificationItem_C.FillWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENotificationType> Notification_Type              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Notification_Text              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_NotificationItem_C::FillWidget(TEnumAsByte<ENotificationType> Notification_Type, const struct FString& Notification_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationItem.WB_NotificationItem_C.FillWidget");

	UWB_NotificationItem_C_FillWidget_Params params;
	params.Notification_Type = Notification_Type;
	params.Notification_Text = Notification_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_NotificationItem.WB_NotificationItem_C.ExecuteUbergraph_WB_NotificationItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_NotificationItem_C::ExecuteUbergraph_WB_NotificationItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_NotificationItem.WB_NotificationItem_C.ExecuteUbergraph_WB_NotificationItem");

	UWB_NotificationItem_C_ExecuteUbergraph_WB_NotificationItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
