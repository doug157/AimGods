#pragma once

// Name: AimGods, Version: Beta 2


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct AdditionalCascades.AdditionalCascades
// 0x0060
struct FAdditionalCascades
{
	bool                                               GroundCheck_28_A6A012C24B35997C7699838357EE6D33;           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9ISZ[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EasyScale_11_67CA65DB47FC16694A0C129F80BAA58A;             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RU18[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform_25_E9077CB7454CBBFB01F9FAB68A3A1959;             // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	TArray<struct FSplinePoint>                        SplinePoints_3_9FEC5B1E442397E1BCAE7EA746E41A17;           // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              ActorstoIgnore_15_677CA1B446ED3E57BACA079B76EE1C71;        // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
