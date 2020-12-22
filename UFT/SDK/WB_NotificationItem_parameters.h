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

// Function WB_NotificationItem.WB_NotificationItem_C.OnDisplayWidgetTimerEnd
struct UWB_NotificationItem_C_OnDisplayWidgetTimerEnd_Params
{
};

// Function WB_NotificationItem.WB_NotificationItem_C.Construct
struct UWB_NotificationItem_C_Construct_Params
{
};

// Function WB_NotificationItem.WB_NotificationItem_C.FillWidget
struct UWB_NotificationItem_C_FillWidget_Params
{
	TEnumAsByte<ENotificationType>                     Notification_Type;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Notification_Text;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_NotificationItem.WB_NotificationItem_C.ExecuteUbergraph_WB_NotificationItem
struct UWB_NotificationItem_C_ExecuteUbergraph_WB_NotificationItem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
