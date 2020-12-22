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

// Function WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C.PreConstruct
struct UWB_SeasonCalendar_Box_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C.Construct
struct UWB_SeasonCalendar_Box_C_Construct_Params
{
};

// Function WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C.UpdateNumber
struct UWB_SeasonCalendar_Box_C_UpdateNumber_Params
{
	struct FText                                       NewNumber;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C.ExecuteUbergraph_WB_SeasonCalendar_Box
struct UWB_SeasonCalendar_Box_C_ExecuteUbergraph_WB_SeasonCalendar_Box_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
