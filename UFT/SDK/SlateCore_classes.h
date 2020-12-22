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

// Class SlateCore.SlateWidgetStyleContainerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USlateWidgetStyleContainerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerInterface");
		return ptr;
	}


};

// Class SlateCore.SlateWidgetStyleContainerBase
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class USlateWidgetStyleContainerBase : public UObject
{
public:
	unsigned char                                      UnknownData_I2C8[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerBase");
		return ptr;
	}


};

// Class SlateCore.SlateWidgetStyleAsset
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class USlateWidgetStyleAsset : public UObject
{
public:
	class USlateWidgetStyleContainerBase*              CustomStyle;                                               // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleAsset");
		return ptr;
	}


};

// Class SlateCore.SlateTypes
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USlateTypes : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateTypes");
		return ptr;
	}


};

// Class SlateCore.FontProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFontProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.FontProviderInterface");
		return ptr;
	}


};

// Class SlateCore.FontFaceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFontFaceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.FontFaceInterface");
		return ptr;
	}


};

// Class SlateCore.FontBulkData
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class UFontBulkData : public UObject
{
public:
	unsigned char                                      UnknownData_2Q4G[0xB8];                                    // 0x0028(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.FontBulkData");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
