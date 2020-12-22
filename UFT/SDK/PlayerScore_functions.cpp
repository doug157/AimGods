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

// Function PlayerScore.PlayerScore_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UPlayerScore_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerScore.PlayerScore_C.Construct");

	UPlayerScore_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerScore.PlayerScore_C.ExecuteUbergraph_PlayerScore
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerScore_C::ExecuteUbergraph_PlayerScore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerScore.PlayerScore_C.ExecuteUbergraph_PlayerScore");

	UPlayerScore_C_ExecuteUbergraph_PlayerScore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
