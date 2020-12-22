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

// Function FL_TextManipulation.FL_TextManipulation_C.Truncate Text Box
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TextToTruncate                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            NumCharsToTruncateAt           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEditableTextBox*        Text_Box                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   TruncatedText                  (Parm, OutParm)
void UFL_TextManipulation_C::STATIC_Truncate_Text_Box(struct FText* TextToTruncate, int NumCharsToTruncateAt, class UEditableTextBox** Text_Box, class UObject* __WorldContext, struct FText* TruncatedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_TextManipulation.FL_TextManipulation_C.Truncate Text Box");

	UFL_TextManipulation_C_Truncate_Text_Box_Params params;
	params.NumCharsToTruncateAt = NumCharsToTruncateAt;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextToTruncate != nullptr)
		*TextToTruncate = params.TextToTruncate;
	if (Text_Box != nullptr)
		*Text_Box = params.Text_Box;
	if (TruncatedText != nullptr)
		*TruncatedText = params.TruncatedText;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
