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

// Function WB_PlayerScores.WB_PlayerScores_C.SortPlayerArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_AGPlayerState_C*> Input                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class ABP_AGPlayerState_C*> Output                         (Parm, OutParm, ZeroConstructor)
void UWB_PlayerScores_C::SortPlayerArray(TArray<class ABP_AGPlayerState_C*>* Input, TArray<class ABP_AGPlayerState_C*>* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerScores.WB_PlayerScores_C.SortPlayerArray");

	UWB_PlayerScores_C_SortPlayerArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Input != nullptr)
		*Input = params.Input;
	if (Output != nullptr)
		*Output = params.Output;

}


// Function WB_PlayerScores.WB_PlayerScores_C.D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*              ScrollBox                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_AGPlayerState_C*> PlayerArray                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWB_PlayerScores_C::D(class UScrollBox* ScrollBox, TArray<class ABP_AGPlayerState_C*> PlayerArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerScores.WB_PlayerScores_C.D");

	UWB_PlayerScores_C_D_Params params;
	params.ScrollBox = ScrollBox;
	params.PlayerArray = PlayerArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerScores.WB_PlayerScores_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_PlayerScores_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerScores.WB_PlayerScores_C.Construct");

	UWB_PlayerScores_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerScores.WB_PlayerScores_C.CreatePlayerList
// (BlueprintCallable, BlueprintEvent)
void UWB_PlayerScores_C::CreatePlayerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerScores.WB_PlayerScores_C.CreatePlayerList");

	UWB_PlayerScores_C_CreatePlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_PlayerScores.WB_PlayerScores_C.ExecuteUbergraph_WB_PlayerScores
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_PlayerScores_C::ExecuteUbergraph_WB_PlayerScores(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PlayerScores.WB_PlayerScores_C.ExecuteUbergraph_WB_PlayerScores");

	UWB_PlayerScores_C_ExecuteUbergraph_WB_PlayerScores_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
