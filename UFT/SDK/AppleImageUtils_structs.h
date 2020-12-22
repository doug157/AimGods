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

// Enum AppleImageUtils.EAppleTextureType
enum class EAppleTextureType : uint8_t
{
	Unknown                        = 0,
	Image                          = 1,
	PixelBuffer                    = 2,
	Surface                        = 3,
	MetalTexture                   = 4,
	MAX                            = 5,

};

// Enum AppleImageUtils.ETextureRotationDirection
enum class ETextureRotationDirection : uint8_t
{
	None                           = 0,
	Left                           = 1,
	Right                          = 2,
	Down                           = 3,
	MAX                            = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult
// 0x0020
struct FAppleImageUtilsImageConversionResult
{
	struct FString                                     Error;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ImageData;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
