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

// Function WB_OutgoingPartyInvite.WB_OutgoingPartyInvite_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_OutgoingPartyInvite_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_OutgoingPartyInvite.WB_OutgoingPartyInvite_C.Construct");

	UWB_OutgoingPartyInvite_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_OutgoingPartyInvite.WB_OutgoingPartyInvite_C.BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_OutgoingPartyInvite_C::BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_OutgoingPartyInvite.WB_OutgoingPartyInvite_C.BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWB_OutgoingPartyInvite_C_BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_OutgoingPartyInvite.WB_OutgoingPartyInvite_C.ExecuteUbergraph_WB_OutgoingPartyInvite
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_OutgoingPartyInvite_C::ExecuteUbergraph_WB_OutgoingPartyInvite(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_OutgoingPartyInvite.WB_OutgoingPartyInvite_C.ExecuteUbergraph_WB_OutgoingPartyInvite");

	UWB_OutgoingPartyInvite_C_ExecuteUbergraph_WB_OutgoingPartyInvite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
