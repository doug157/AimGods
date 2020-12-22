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

// Function WB_DamageNumber.WB_DamageNumber_C.Finished_C74A44EB49D394462E4FF3BFDD682116
// (BlueprintCallable, BlueprintEvent)
void UWB_DamageNumber_C::Finished_C74A44EB49D394462E4FF3BFDD682116()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_DamageNumber.WB_DamageNumber_C.Finished_C74A44EB49D394462E4FF3BFDD682116");

	UWB_DamageNumber_C_Finished_C74A44EB49D394462E4FF3BFDD682116_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_DamageNumber.WB_DamageNumber_C.Finished_EAE840F2466551B3C6B96D96DEFF64E5
// (BlueprintCallable, BlueprintEvent)
void UWB_DamageNumber_C::Finished_EAE840F2466551B3C6B96D96DEFF64E5()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_DamageNumber.WB_DamageNumber_C.Finished_EAE840F2466551B3C6B96D96DEFF64E5");

	UWB_DamageNumber_C_Finished_EAE840F2466551B3C6B96D96DEFF64E5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_DamageNumber.WB_DamageNumber_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_DamageNumber_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_DamageNumber.WB_DamageNumber_C.Construct");

	UWB_DamageNumber_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_DamageNumber.WB_DamageNumber_C.UpdateDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDamageTextType                DamageTextType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              DebuffTexture                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            GoldAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_DamageNumber_C::UpdateDamage(float Damage, EDamageTextType DamageTextType, class UTexture2D* DebuffTexture, int GoldAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_DamageNumber.WB_DamageNumber_C.UpdateDamage");

	UWB_DamageNumber_C_UpdateDamage_Params params;
	params.Damage = Damage;
	params.DamageTextType = DamageTextType;
	params.DebuffTexture = DebuffTexture;
	params.GoldAmount = GoldAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_DamageNumber.WB_DamageNumber_C.AddDebuffImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  DebuffImage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_DamageNumber_C::AddDebuffImage(class UImage* DebuffImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_DamageNumber.WB_DamageNumber_C.AddDebuffImage");

	UWB_DamageNumber_C_AddDebuffImage_Params params;
	params.DebuffImage = DebuffImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_DamageNumber.WB_DamageNumber_C.ExecuteUbergraph_WB_DamageNumber
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_DamageNumber_C::ExecuteUbergraph_WB_DamageNumber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_DamageNumber.WB_DamageNumber_C.ExecuteUbergraph_WB_DamageNumber");

	UWB_DamageNumber_C_ExecuteUbergraph_WB_DamageNumber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
