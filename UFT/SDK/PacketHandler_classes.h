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

// Class PacketHandler.PacketHandlerProfileConfig
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UPacketHandlerProfileConfig : public UObject
{
public:
	TArray<struct FString>                             Components;                                                // 0x0028(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PacketHandler.PacketHandlerProfileConfig");
		return ptr;
	}


};

// Class PacketHandler.HandlerComponentFactory
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHandlerComponentFactory : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PacketHandler.HandlerComponentFactory");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
