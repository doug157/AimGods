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

// Class VariantManagerContent.VariantSet
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UVariantSet : public UObject
{
public:
	struct FText                                       DisplayText;                                               // 0x0028(0x0018) (Deprecated, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PI7B[0x18];                                    // 0x0040(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bExpanded;                                                 // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5HLA[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UVariant*>                            Variants;                                                  // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.VariantSet");
		return ptr;
	}


	void SetDisplayText(const struct FText& NewDisplayText);
	class UVariant* GetVariantByName(const struct FString& VariantName);
	class UVariant* GetVariant(int VariantIndex);
	int GetNumVariants();
	struct FText GetDisplayText();
};

// Class VariantManagerContent.VariantObjectBinding
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UVariantObjectBinding : public UObject
{
public:
	struct FSoftObjectPath                             ObjectPtr;                                                 // 0x0028(0x0018) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TLazyObjectPtr<class UObject>                      LazyObjectPtr;                                             // 0x0040(0x001C) (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FR7H[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPropertyValue*>                      CapturedProperties;                                        // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FFunctionCaller>                     FunctionCallers;                                           // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.VariantObjectBinding");
		return ptr;
	}


};

// Class VariantManagerContent.Variant
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UVariant : public UObject
{
public:
	struct FText                                       DisplayText;                                               // 0x0028(0x0018) (Deprecated, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9JNO[0x18];                                    // 0x0040(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UVariantObjectBinding*>               ObjectBindings;                                            // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.Variant");
		return ptr;
	}


	void SwitchOn();
	void SetDisplayText(const struct FText& NewDisplayText);
	int GetNumActors();
	struct FText GetDisplayText();
	class AActor* GetActor(int ActorIndex);
};

// Class VariantManagerContent.SwitchActor
// 0x0020 (FullSize[0x0238] - InheritedSize[0x0218])
class ASwitchActor : public AActor
{
public:
	unsigned char                                      UnknownData_9EBZ[0x18];                                    // 0x0218(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             SceneComponent;                                            // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.SwitchActor");
		return ptr;
	}


	void SelectOption(int OptionIndex);
	int GetSelectedOption();
	TArray<class AActor*> GetOptions();
};

// Class VariantManagerContent.PropertyValue
// 0x0180 (FullSize[0x01A8] - InheritedSize[0x0028])
class UPropertyValue : public UObject
{
public:
	unsigned char                                      UnknownData_APT7[0x58];                                    // 0x0028(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UProperty*>                           Properties;                                                // 0x0080(0x0010) (ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
	TArray<int>                                        PropertyIndices;                                           // 0x0090(0x0010) (ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCapturedPropSegment>                CapturedPropSegments;                                      // 0x00A0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FString                                     FullDisplayString;                                         // 0x00B0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       PropertySetterName;                                        // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FString, struct FString>               PropertySetterParameterDefaults;                           // 0x00C8(0x0050) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bHasRecordedData;                                          // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SNDS[0x7];                                     // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      LeafPropertyClass;                                         // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<unsigned char>                              ValueBytes;                                                // 0x0128(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	EPropertyValueCategory                             PropCategory;                                              // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1JPK[0x6F];                                    // 0x0139(0x006F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValue");
		return ptr;
	}


	bool HasRecordedData();
	struct FText GetPropertyTooltip();
	struct FString GetFullDisplayString();
};

// Class VariantManagerContent.PropertyValueOption
// 0x0000 (FullSize[0x01A8] - InheritedSize[0x01A8])
class UPropertyValueOption : public UPropertyValue
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueOption");
		return ptr;
	}


};

// Class VariantManagerContent.PropertyValueMaterial
// 0x0000 (FullSize[0x01A8] - InheritedSize[0x01A8])
class UPropertyValueMaterial : public UPropertyValue
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueMaterial");
		return ptr;
	}


};

// Class VariantManagerContent.PropertyValueColor
// 0x0000 (FullSize[0x01A8] - InheritedSize[0x01A8])
class UPropertyValueColor : public UPropertyValue
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueColor");
		return ptr;
	}


};

// Class VariantManagerContent.PropertyValueVisibility
// 0x0000 (FullSize[0x01A8] - InheritedSize[0x01A8])
class UPropertyValueVisibility : public UPropertyValue
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueVisibility");
		return ptr;
	}


};

// Class VariantManagerContent.PropertyValueTransform
// 0x0000 (FullSize[0x01A8] - InheritedSize[0x01A8])
class UPropertyValueTransform : public UPropertyValue
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueTransform");
		return ptr;
	}


};

// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class ULevelVariantSetsFunctionDirector : public UObject
{
public:
	unsigned char                                      UnknownData_I9RW[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsFunctionDirector");
		return ptr;
	}


};

// Class VariantManagerContent.LevelVariantSetsActor
// 0x0018 (FullSize[0x0230] - InheritedSize[0x0218])
class ALevelVariantSetsActor : public AActor
{
public:
	struct FSoftObjectPath                             LevelVariantSets;                                          // 0x0218(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsActor");
		return ptr;
	}


	bool SwitchOnVariantByName(const struct FString& VariantSetName, const struct FString& VariantName);
	bool SwitchOnVariantByIndex(int VariantSetIndex, int VariantIndex);
	void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);
	class ULevelVariantSets* GetLevelVariantSets(bool bLoad);
};

// Class VariantManagerContent.LevelVariantSets
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class ULevelVariantSets : public UObject
{
public:
	class UBlueprintGeneratedClass*                    DirectorClass;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UVariantSet*>                         VariantSets;                                               // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TD43[0x50];                                    // 0x0040(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSets");
		return ptr;
	}


	class UVariantSet* GetVariantSetByName(const struct FString& VariantSetName);
	class UVariantSet* GetVariantSet(int VariantSetIndex);
	int GetNumVariantSets();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
