#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function WB_DamageNumber.WB_DamageNumber_C.Finished_C74A44EB49D394462E4FF3BFDD682116
struct UWB_DamageNumber_C_Finished_C74A44EB49D394462E4FF3BFDD682116_Params
{
};

// Function WB_DamageNumber.WB_DamageNumber_C.Finished_EAE840F2466551B3C6B96D96DEFF64E5
struct UWB_DamageNumber_C_Finished_EAE840F2466551B3C6B96D96DEFF64E5_Params
{
};

// Function WB_DamageNumber.WB_DamageNumber_C.Construct
struct UWB_DamageNumber_C_Construct_Params
{
};

// Function WB_DamageNumber.WB_DamageNumber_C.UpdateDamage
struct UWB_DamageNumber_C_UpdateDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDamageTextType                                    DamageTextType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  DebuffTexture;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GoldAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_DamageNumber.WB_DamageNumber_C.AddDebuffImage
struct UWB_DamageNumber_C_AddDebuffImage_Params
{
	class UImage*                                      DebuffImage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_DamageNumber.WB_DamageNumber_C.ExecuteUbergraph_WB_DamageNumber
struct UWB_DamageNumber_C_ExecuteUbergraph_WB_DamageNumber_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
