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

// Class AsyncLoadingScreen.LoadingScreenSettings
// 0x0AC8 (FullSize[0x0B00] - InheritedSize[0x0038])
class ULoadingScreenSettings : public UDeveloperSettings
{
public:
	struct FALoadingScreenSettings                     StartupLoadingScreen;                                      // 0x0038(0x0330) (Edit, Config, NativeAccessSpecifierPublic)
	struct FALoadingScreenSettings                     DefaultLoadingScreen;                                      // 0x0368(0x0330) (Edit, Config, NativeAccessSpecifierPublic)
	struct FClassicLayoutSettings                      Classic;                                                   // 0x0698(0x00A8) (Edit, Config, NativeAccessSpecifierPublic)
	struct FCenterLayoutSettings                       Center;                                                    // 0x0740(0x00A0) (Edit, Config, NativeAccessSpecifierPublic)
	struct FLetterboxLayoutSettings                    Letterbox;                                                 // 0x07E0(0x0138) (Edit, Config, NativeAccessSpecifierPublic)
	struct FSidebarLayoutSettings                      Sidebar;                                                   // 0x0918(0x00B0) (Edit, Config, NativeAccessSpecifierPublic)
	struct FDualSidebarLayoutSettings                  DualSidebar;                                               // 0x09C8(0x0138) (Edit, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AsyncLoadingScreen.LoadingScreenSettings");
		return ptr;
	}


};

// Class AsyncLoadingScreen.AsyncLoadingScreenLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAsyncLoadingScreenLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AsyncLoadingScreen.AsyncLoadingScreenLibrary");
		return ptr;
	}


	void STATIC_SetDisplayTipTextIndex(int TipTextIndex);
	void STATIC_SetDisplayMovieIndex(int MovieIndex);
	void STATIC_SetDisplayBackgroundIndex(int BackgroundIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
