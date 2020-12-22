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

// Function WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_SeasonCalendar_Box_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C.PreConstruct");

	UWB_SeasonCalendar_Box_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_SeasonCalendar_Box_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C.Construct");

	UWB_SeasonCalendar_Box_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C.UpdateNumber
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NewNumber                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_SeasonCalendar_Box_C::UpdateNumber(const struct FText& NewNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C.UpdateNumber");

	UWB_SeasonCalendar_Box_C_UpdateNumber_Params params;
	params.NewNumber = NewNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C.ExecuteUbergraph_WB_SeasonCalendar_Box
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_SeasonCalendar_Box_C::ExecuteUbergraph_WB_SeasonCalendar_Box(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C.ExecuteUbergraph_WB_SeasonCalendar_Box");

	UWB_SeasonCalendar_Box_C_ExecuteUbergraph_WB_SeasonCalendar_Box_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
