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

// Class CoreUObject.Object
// 0x0028
class UObject
{
public:
	static class TUObjectArray*                        GObjects;                                                  // 0x0000(0x0008)
	void*                                              VfTable;                                                   // 0x0000(0x0008) NOT AUTO-GENERATED PROPERTY
	int32_t                                            Flags;                                                     // 0x0008(0x0004) NOT AUTO-GENERATED PROPERTY
	int32_t                                            InternalIndex;                                             // 0x000C(0x0004) NOT AUTO-GENERATED PROPERTY
	class UClass*                                      Class;                                                     // 0x0010(0x0008) NOT AUTO-GENERATED PROPERTY
	FName                                              Name;                                                      // 0x0018(0x0008) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     Outer;                                                     // 0x0020(0x0008) NOT AUTO-GENERATED PROPERTY


	static inline TUObjectArray& GetGlobalObjects()
	{
		return *GObjects;
	}

	std::string GetName() const;

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}
	
			if (object->GetFullName() == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static T* FindObject()
	{
		auto v = T::StaticClass();
		for (int i = 0; i < UFT::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = UFT::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static std::vector<T*> FindObjects(const std::string& name)
	{
		std::vector<T*> ret;
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->GetFullName() == name)
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	template<typename T>
	static std::vector<T*> FindObjects()
	{
		std::vector<T*> ret;
		auto v = T::StaticClass();
		for (int i = 0; i < UFT::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = UFT::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Object");
		return ptr;
	}

	inline void ProcessEvent(class UFunction* function, void* parms)
	{
		// return;
		GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, 66)(this, function, parms);
	}


	void ExecuteUbergraph(int EntryPoint);
};

// Class CoreUObject.Field
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UField : public UObject
{
public:
	class UField*                                      Next;                                                      // 0x0028(0x0008) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Field");
		return ptr;
	}


};

// Class CoreUObject.Struct
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UStruct : public UField, public FStructBaseChain
{
public:
	class UStruct*                                     SuperField;                                                // 0x0040(0x0008) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                  // 0x0048(0x0008) NOT AUTO-GENERATED PROPERTY
	int32_t                                            PropertySize;                                              // 0x0050(0x0004) NOT AUTO-GENERATED PROPERTY
	int32_t                                            MinAlignment;                                              // 0x0054(0x0004) NOT AUTO-GENERATED PROPERTY
	TArray<uint8_t>                                    Script;                                                    // 0x0058(0x0010) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   PropertyLink;                                              // 0x0068(0x0008) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   RefLink;                                                   // 0x0070(0x0008) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   DestructorLink;                                            // 0x0078(0x0008) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   PostConstructLink;                                         // 0x0080(0x0008) NOT AUTO-GENERATED PROPERTY
	TArray<UObject*>                                   ScriptObjectReferences;                                    // 0x0088(0x0010) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Struct");
		return ptr;
	}


};

// Class CoreUObject.Class
// 0x0178 (FullSize[0x0210] - InheritedSize[0x0098])
class UClass : public UStruct
{
public:
	unsigned char                                      UnknownData_AXOD[0x178];                                   // 0x0098(0x0178) MISSED OFFSET (PADDING)


template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Class");
		return ptr;
	}

	inline UObject* CreateDefaultObject()
	{
		return nullptr;
		//GetVFunction<UObject*(*)(UClass*)>(this, /*FUNC_INDEX*/)(this);
	}


};

// Class CoreUObject.Property
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData_4VI5[0x40];                                    // 0x0030(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Property");
		return ptr;
	}


};

// Class CoreUObject.SetProperty
// 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
class USetProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_JFER[0x20];                                    // 0x0070(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.SetProperty");
		return ptr;
	}


};

// Class CoreUObject.NameProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UNameProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.NameProperty");
		return ptr;
	}


};

// Class CoreUObject.MulticastDelegateProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UMulticastDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_GUZT[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MulticastDelegateProperty");
		return ptr;
	}


};

// Class CoreUObject.MulticastSparseDelegateProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MulticastSparseDelegateProperty");
		return ptr;
	}


};

// Class CoreUObject.MulticastInlineDelegateProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MulticastInlineDelegateProperty");
		return ptr;
	}


};

// Class CoreUObject.MapProperty
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_ZIC8[0x28];                                    // 0x0070(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MapProperty");
		return ptr;
	}


};

// Class CoreUObject.ObjectPropertyBase
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UObjectPropertyBase : public UProperty
{
public:
	unsigned char                                      UnknownData_XUOX[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ObjectPropertyBase");
		return ptr;
	}


};

// Class CoreUObject.LazyObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class ULazyObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.LazyObjectProperty");
		return ptr;
	}


};

// Class CoreUObject.InterfaceProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_W0QR[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.InterfaceProperty");
		return ptr;
	}


};

// Class CoreUObject.NumericProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UNumericProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.NumericProperty");
		return ptr;
	}


};

// Class CoreUObject.Int8Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UInt8Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Int8Property");
		return ptr;
	}


};

// Class CoreUObject.Int64Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UInt64Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Int64Property");
		return ptr;
	}


};

// Class CoreUObject.Int16Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UInt16Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Int16Property");
		return ptr;
	}


};

// Class CoreUObject.IntProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UIntProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.IntProperty");
		return ptr;
	}


};

// Class CoreUObject.FloatProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UFloatProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.FloatProperty");
		return ptr;
	}


};

// Class CoreUObject.DoubleProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UDoubleProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.DoubleProperty");
		return ptr;
	}


};

// Class CoreUObject.DelegateProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_HGX0[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.DelegateProperty");
		return ptr;
	}


};

// Class CoreUObject.ObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ObjectProperty");
		return ptr;
	}


};

// Class CoreUObject.ClassProperty
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData_U84D[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ClassProperty");
		return ptr;
	}


};

// Class CoreUObject.ByteProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UByteProperty : public UNumericProperty
{
public:
	unsigned char                                      UnknownData_21YX[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ByteProperty");
		return ptr;
	}


};

// Class CoreUObject.BoolProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_39YR[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.BoolProperty");
		return ptr;
	}


};

// Class CoreUObject.ArrayProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_UOQK[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ArrayProperty");
		return ptr;
	}


};

// Class CoreUObject.ObjectRedirector
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData_5SIJ[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ObjectRedirector");
		return ptr;
	}


};

// Class CoreUObject.MetaData
// 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData_RUQ5[0xA0];                                    // 0x0028(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MetaData");
		return ptr;
	}


};

// Class CoreUObject.Function
// 0x0030 (FullSize[0x00C8] - InheritedSize[0x0098])
class UFunction : public UStruct
{
public:
	int32_t                                            FunctionFlags;                                             // 0x0098(0x0004) NOT AUTO-GENERATED PROPERTY
	uint8_t                                            NumParms;                                                  // 0x009C(0x0001) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_QB5LN5TKFI[0x01];                                      // 0x009D(0x0001) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           ParmsSize;                                                 // 0x009E(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           ReturnValueOffset;                                         // 0x00A0(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           RPCId;                                                     // 0x00A2(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           RPCResponseId;                                             // 0x00A4(0x0002) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_RC3O647S94[0x02];                                      // 0x00A6(0x0002) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   FirstPropertyToInit;                                       // 0x00A8(0x0008) NOT AUTO-GENERATED PROPERTY
	class UFunction*                                   EventGraphFunction;                                        // 0x00B0(0x0008) NOT AUTO-GENERATED PROPERTY
	int32_t                                            EventGraphCallOffset;                                      // 0x00B8(0x0004) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_KU5DNOPI13[0x04];                                      // 0x00BC(0x0004) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                      // 0x00C0(0x0008) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Function");
		return ptr;
	}


};

// Class CoreUObject.LinkerPlaceholderFunction
// 0x01B8 (FullSize[0x0280] - InheritedSize[0x00C8])
class ULinkerPlaceholderFunction : public UFunction
{
public:
	unsigned char                                      UnknownData_P10K[0x1B8];                                   // 0x00C8(0x01B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderFunction");
		return ptr;
	}


};

// Class CoreUObject.LinkerPlaceholderExportObject
// 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
class ULinkerPlaceholderExportObject : public UObject
{
public:
	unsigned char                                      UnknownData_Q7CM[0xC8];                                    // 0x0028(0x00C8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderExportObject");
		return ptr;
	}


};

// Class CoreUObject.LinkerPlaceholderClass
// 0x01B8 (FullSize[0x03C8] - InheritedSize[0x0210])
class ULinkerPlaceholderClass : public UClass
{
public:
	unsigned char                                      UnknownData_O2IL[0x1B8];                                   // 0x0210(0x01B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderClass");
		return ptr;
	}


};

// Class CoreUObject.EnumProperty
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UEnumProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_ITBG[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.EnumProperty");
		return ptr;
	}


};

// Class CoreUObject.Enum
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData_1CVE[0x30];                                    // 0x0030(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Enum");
		return ptr;
	}


};

// Class CoreUObject.PackageMap
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData_BJIH[0xB8];                                    // 0x0028(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.PackageMap");
		return ptr;
	}


};

// Class CoreUObject.DynamicClass
// 0x0080 (FullSize[0x0290] - InheritedSize[0x0210])
class UDynamicClass : public UClass
{
public:
	unsigned char                                      UnknownData_D1MP[0x80];                                    // 0x0210(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.DynamicClass");
		return ptr;
	}


};

// Class CoreUObject.DelegateFunction
// 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
class UDelegateFunction : public UFunction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.DelegateFunction");
		return ptr;
	}


};

// Class CoreUObject.SparseDelegateFunction
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class USparseDelegateFunction : public UDelegateFunction
{
public:
	unsigned char                                      UnknownData_P01F[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.SparseDelegateFunction");
		return ptr;
	}


};

// Class CoreUObject.Package
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData_HGAI[0x68];                                    // 0x0028(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Package");
		return ptr;
	}


};

// Class CoreUObject.ScriptStruct
// 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData_C4XC[0x10];                                    // 0x0098(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ScriptStruct");
		return ptr;
	}


};

// Class CoreUObject.TextBuffer
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData_KD5B[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.TextBuffer");
		return ptr;
	}


};

// Class CoreUObject.GCObjectReferencer
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UGCObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData_NAHC[0x48];                                    // 0x0028(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.GCObjectReferencer");
		return ptr;
	}


};

// Class CoreUObject.Interface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInterface : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Interface");
		return ptr;
	}


};

// Class CoreUObject.TextProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UTextProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.TextProperty");
		return ptr;
	}


};

// Class CoreUObject.WeakObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UWeakObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.WeakObjectProperty");
		return ptr;
	}


};

// Class CoreUObject.UInt64Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UUInt64Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.UInt64Property");
		return ptr;
	}


};

// Class CoreUObject.UInt32Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UUInt32Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.UInt32Property");
		return ptr;
	}


};

// Class CoreUObject.UInt16Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UUInt16Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.UInt16Property");
		return ptr;
	}


};

// Class CoreUObject.StructProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_GH5I[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.StructProperty");
		return ptr;
	}


};

// Class CoreUObject.StrProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UStrProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.StrProperty");
		return ptr;
	}


};

// Class CoreUObject.SoftObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class USoftObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.SoftObjectProperty");
		return ptr;
	}


};

// Class CoreUObject.SoftClassProperty
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class USoftClassProperty : public USoftObjectProperty
{
public:
	unsigned char                                      UnknownData_IF9W[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.SoftClassProperty");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif