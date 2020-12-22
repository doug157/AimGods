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

// Function WB_KillingSpreeMessage.WB_KillingSpreeMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_KillingSpreeMessage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KillingSpreeMessage.WB_KillingSpreeMessage_C.Construct");

	UWB_KillingSpreeMessage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_KillingSpreeMessage.WB_KillingSpreeMessage_C.ExecuteUbergraph_WB_KillingSpreeMessage
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_KillingSpreeMessage_C::ExecuteUbergraph_WB_KillingSpreeMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_KillingSpreeMessage.WB_KillingSpreeMessage_C.ExecuteUbergraph_WB_KillingSpreeMessage");

	UWB_KillingSpreeMessage_C_ExecuteUbergraph_WB_KillingSpreeMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
