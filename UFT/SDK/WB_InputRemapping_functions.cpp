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

// Function WB_InputRemapping.WB_InputRemapping_C.Check_IfOddOrEven
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_InputRemapping_C::Check_IfOddOrEven()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputRemapping.WB_InputRemapping_C.Check_IfOddOrEven");

	UWB_InputRemapping_C_Check_IfOddOrEven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputRemapping.WB_InputRemapping_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWB_InputRemapping_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputRemapping.WB_InputRemapping_C.OnPreviewKeyDown");

	UWB_InputRemapping_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_InputRemapping.WB_InputRemapping_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWB_InputRemapping_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputRemapping.WB_InputRemapping_C.OnMouseButtonUp");

	UWB_InputRemapping_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_InputRemapping.WB_InputRemapping_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_InputRemapping_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputRemapping.WB_InputRemapping_C.Construct");

	UWB_InputRemapping_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputRemapping.WB_InputRemapping_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_InputRemapping_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputRemapping.WB_InputRemapping_C.OnMouseLeave");

	UWB_InputRemapping_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputRemapping.WB_InputRemapping_C.Remap Action
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    New_Key                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_InputRemapping_C::Remap_Action(const struct FKey& New_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputRemapping.WB_InputRemapping_C.Remap Action");

	UWB_InputRemapping_C_Remap_Action_Params params;
	params.New_Key = New_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputRemapping.WB_InputRemapping_C.Unbind Action
// (BlueprintCallable, BlueprintEvent)
void UWB_InputRemapping_C::Unbind_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputRemapping.WB_InputRemapping_C.Unbind Action");

	UWB_InputRemapping_C_Unbind_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputRemapping.WB_InputRemapping_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_InputRemapping_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputRemapping.WB_InputRemapping_C.PreConstruct");

	UWB_InputRemapping_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputRemapping.WB_InputRemapping_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_InputRemapping_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputRemapping.WB_InputRemapping_C.OnMouseEnter");

	UWB_InputRemapping_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_InputRemapping.WB_InputRemapping_C.ExecuteUbergraph_WB_InputRemapping
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_InputRemapping_C::ExecuteUbergraph_WB_InputRemapping(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_InputRemapping.WB_InputRemapping_C.ExecuteUbergraph_WB_InputRemapping");

	UWB_InputRemapping_C_ExecuteUbergraph_WB_InputRemapping_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
