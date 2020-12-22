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

// Function ProfanityFilter.ProfanityFilterFunctionLibrary.FilterProfanity_String
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 inString                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  InMinimumSeverity              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UProfanityFilterFunctionLibrary::STATIC_FilterProfanity_String(const struct FString& inString, unsigned char InMinimumSeverity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfanityFilter.ProfanityFilterFunctionLibrary.FilterProfanity_String");

	UProfanityFilterFunctionLibrary_FilterProfanity_String_Params params;
	params.inString = inString;
	params.InMinimumSeverity = InMinimumSeverity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ProfanityFilter.ProfanityFilterFunctionLibrary.ContainsProfanity_Text
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm, NativeAccessSpecifierPublic)
// unsigned char                  InMinimumSeverity              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UProfanityFilterFunctionLibrary::STATIC_ContainsProfanity_Text(const struct FText& InText, unsigned char InMinimumSeverity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfanityFilter.ProfanityFilterFunctionLibrary.ContainsProfanity_Text");

	UProfanityFilterFunctionLibrary_ContainsProfanity_Text_Params params;
	params.InText = InText;
	params.InMinimumSeverity = InMinimumSeverity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ProfanityFilter.ProfanityFilterFunctionLibrary.ContainsProfanity_String
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 inString                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  InMinimumSeverity              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UProfanityFilterFunctionLibrary::STATIC_ContainsProfanity_String(const struct FString& inString, unsigned char InMinimumSeverity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfanityFilter.ProfanityFilterFunctionLibrary.ContainsProfanity_String");

	UProfanityFilterFunctionLibrary_ContainsProfanity_String_Params params;
	params.inString = inString;
	params.InMinimumSeverity = InMinimumSeverity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ProfanityFilter.ProfanityFilterFunctionLibrary.ContainsProfanity_Name
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  InMinimumSeverity              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UProfanityFilterFunctionLibrary::STATIC_ContainsProfanity_Name(const struct FName& InName, unsigned char InMinimumSeverity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfanityFilter.ProfanityFilterFunctionLibrary.ContainsProfanity_Name");

	UProfanityFilterFunctionLibrary_ContainsProfanity_Name_Params params;
	params.InName = InName;
	params.InMinimumSeverity = InMinimumSeverity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
