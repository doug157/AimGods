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

// Function WC_DamageText.WC_DamageText_C.SetDamageText
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageTextType                DamageTextType                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            GoldAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              DebuffIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWC_DamageText_C::SetDamageText(float Damage, EDamageTextType DamageTextType, int GoldAmount, class UTexture2D* DebuffIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WC_DamageText.WC_DamageText_C.SetDamageText");

	UWC_DamageText_C_SetDamageText_Params params;
	params.Damage = Damage;
	params.DamageTextType = DamageTextType;
	params.GoldAmount = GoldAmount;
	params.DebuffIcon = DebuffIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WC_DamageText.WC_DamageText_C.AddDebuffIcon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  DebuffImage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWC_DamageText_C::AddDebuffIcon(class UImage* DebuffImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WC_DamageText.WC_DamageText_C.AddDebuffIcon");

	UWC_DamageText_C_AddDebuffIcon_Params params;
	params.DebuffImage = DebuffImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WC_DamageText.WC_DamageText_C.ExecuteUbergraph_WC_DamageText
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWC_DamageText_C::ExecuteUbergraph_WC_DamageText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WC_DamageText.WC_DamageText_C.ExecuteUbergraph_WC_DamageText");

	UWC_DamageText_C_ExecuteUbergraph_WC_DamageText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
