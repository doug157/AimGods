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

// Function KillFeedText.KillFeedText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UKillFeedText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillFeedText.KillFeedText_C.Construct");

	UKillFeedText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function KillFeedText.KillFeedText_C.SetNamesColor
// (BlueprintCallable, BlueprintEvent)
void UKillFeedText_C::SetNamesColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillFeedText.KillFeedText_C.SetNamesColor");

	UKillFeedText_C_SetNamesColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function KillFeedText.KillFeedText_C.ExecuteUbergraph_KillFeedText
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKillFeedText_C::ExecuteUbergraph_KillFeedText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillFeedText.KillFeedText_C.ExecuteUbergraph_KillFeedText");

	UKillFeedText_C_ExecuteUbergraph_KillFeedText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
