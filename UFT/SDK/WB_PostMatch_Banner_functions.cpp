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

// Function WB_PostMatch_Banner.WB_PostMatch_Banner_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Victory_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_PostMatch_Banner_C::Initialize(bool Victory_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PostMatch_Banner.WB_PostMatch_Banner_C.Initialize");

	UWB_PostMatch_Banner_C_Initialize_Params params;
	params.Victory_ = Victory_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
