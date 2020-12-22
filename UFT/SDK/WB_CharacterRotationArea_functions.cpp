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

// Function WB_CharacterRotationArea.WB_CharacterRotationArea_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWB_CharacterRotationArea_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterRotationArea.WB_CharacterRotationArea_C.OnMouseMove");

	UWB_CharacterRotationArea_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_CharacterRotationArea.WB_CharacterRotationArea_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_CharacterRotationArea_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterRotationArea.WB_CharacterRotationArea_C.Construct");

	UWB_CharacterRotationArea_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CharacterRotationArea.WB_CharacterRotationArea_C.ExecuteUbergraph_WB_CharacterRotationArea
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_CharacterRotationArea_C::ExecuteUbergraph_WB_CharacterRotationArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CharacterRotationArea.WB_CharacterRotationArea_C.ExecuteUbergraph_WB_CharacterRotationArea");

	UWB_CharacterRotationArea_C_ExecuteUbergraph_WB_CharacterRotationArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
