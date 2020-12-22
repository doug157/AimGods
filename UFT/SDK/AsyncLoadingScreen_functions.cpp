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

// Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayTipTextIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            TipTextIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAsyncLoadingScreenLibrary::STATIC_SetDisplayTipTextIndex(int TipTextIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayTipTextIndex");

	UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Params params;
	params.TipTextIndex = TipTextIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayMovieIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            MovieIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAsyncLoadingScreenLibrary::STATIC_SetDisplayMovieIndex(int MovieIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayMovieIndex");

	UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Params params;
	params.MovieIndex = MovieIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayBackgroundIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            BackgroundIndex                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAsyncLoadingScreenLibrary::STATIC_SetDisplayBackgroundIndex(int BackgroundIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayBackgroundIndex");

	UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Params params;
	params.BackgroundIndex = BackgroundIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
