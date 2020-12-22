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

// Function WB_PartyRow.WB_PartyRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_PartyRow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyRow.WB_PartyRow_C.Construct");

	UWB_PartyRow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyRow.WB_PartyRow_C.OnPartyDisbandedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PartyId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWB_PartyRow_C::OnPartyDisbandedWs(const struct FString& PartyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyRow.WB_PartyRow_C.OnPartyDisbandedWs");

	UWB_PartyRow_C_OnPartyDisbandedWs_Params params;
	params.PartyId = PartyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyRow.WB_PartyRow_C.BndEvt__KickPartyMember_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWB_PartyRow_C::BndEvt__KickPartyMember_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyRow.WB_PartyRow_C.BndEvt__KickPartyMember_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWB_PartyRow_C_BndEvt__KickPartyMember_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PartyRow.WB_PartyRow_C.ExecuteUbergraph_WB_PartyRow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PartyRow_C::ExecuteUbergraph_WB_PartyRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PartyRow.WB_PartyRow_C.ExecuteUbergraph_WB_PartyRow");

	UWB_PartyRow_C_ExecuteUbergraph_WB_PartyRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
