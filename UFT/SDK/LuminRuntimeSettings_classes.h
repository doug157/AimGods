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
// Classes
//---------------------------------------------------------------------------

// Class LuminRuntimeSettings.LuminRuntimeSettings
// 0x0100 (FullSize[0x0128] - InheritedSize[0x0028])
class ULuminRuntimeSettings : public UObject
{
public:
	struct FString                                     PackageName;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ApplicationDisplayName;                                    // 0x0038(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsScreensApp;                                             // 0x0048(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELuminFrameTimingHint                              FrameTimingHint;                                           // 0x0049(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bProtectedContent;                                         // 0x004A(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseMobileRendering;                                       // 0x004B(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseVulkan;                                                // 0x004C(0x0001) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_17NR[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFilePath                                   Certificate;                                               // 0x0050(0x0010) (Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
	struct FDirectoryPath                              IconModelPath;                                             // 0x0060(0x0010) (Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
	struct FDirectoryPath                              IconPortalPath;                                            // 0x0070(0x0010) (Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
	int                                                VersionCode;                                               // 0x0080(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinimumAPILevel;                                           // 0x0084(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<ELuminPrivilege>                            AppPrivileges;                                             // 0x0088(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
	TArray<struct FLuminComponentSubElement>           ExtraComponentSubElements;                                 // 0x0098(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
	TArray<struct FLuminComponentElement>              ExtraComponentElements;                                    // 0x00A8(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
	struct FString                                     SpatializationPlugin;                                      // 0x00B8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReverbPlugin;                                              // 0x00C8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OcclusionPlugin;                                           // 0x00D8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SoundCueCookQualityIndex;                                  // 0x00E8(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveDebugInfo;                                          // 0x00EC(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DIX6[0x3];                                     // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDirectoryPath                              VulkanValidationLayerLibs;                                 // 0x00F0(0x0010) (Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
	bool                                               bFrameVignette;                                            // 0x0100(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G5RV[0x27];                                    // 0x0101(0x0027) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LuminRuntimeSettings.LuminRuntimeSettings");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
