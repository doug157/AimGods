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
// Enums
//---------------------------------------------------------------------------

// Enum MagicLeapPlanes.EMagicLeapPlaneQueryFlags
enum class EMagicLeapPlaneQueryFlags : uint8_t
{
	Vertical                       = 0,
	Horizontal                     = 1,
	Arbitrary                      = 2,
	OrientToGravity                = 3,
	PreferInner                    = 4,
	Ceiling                        = 5,
	Floor                          = 6,
	Wall                           = 7,
	Polygons                       = 8,
	MAX                            = 9,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundaries
// 0x0020
struct FMagicLeapPlaneBoundaries
{
	struct FGuid                                       ID;                                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMagicLeapPlaneBoundary>             Boundaries;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct MagicLeapPlanes.MagicLeapPolygon
// 0x0010
struct FMagicLeapPolygon
{
	TArray<struct FVector>                             Vertices;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundary
// 0x0020
struct FMagicLeapPlaneBoundary
{
	struct FMagicLeapPolygon                           Polygon;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FMagicLeapPolygon>                   Holes;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct MagicLeapPlanes.MagicLeapPlanesQuery
// 0x0050
struct FMagicLeapPlanesQuery
{
	TArray<EMagicLeapPlaneQueryFlags>                  Flags;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UBoxComponent*                               SearchVolume;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxResults;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinHoleLength;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinPlaneArea;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SearchVolumePosition;                                      // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                       SearchVolumeOrientation;                                   // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     SearchVolumeExtents;                                       // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_URZ9[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct MagicLeapPlanes.MagicLeapPlaneResult
// 0x0050
struct FMagicLeapPlaneResult
{
	struct FVector                                     PlanePosition;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    PlaneOrientation;                                          // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    ContentOrientation;                                        // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   PlaneDimensions;                                           // 0x0024(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QLL4[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<EMagicLeapPlaneQueryFlags>                  PlaneFlags;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                       ID;                                                        // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
