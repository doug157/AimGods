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

// Class ProfanityFilter.ProfanityFilterFunctionLibrary
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UProfanityFilterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
	unsigned char                                      UnknownData_5VX8[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProfanityFilter.ProfanityFilterFunctionLibrary");
		return ptr;
	}


	struct FString STATIC_FilterProfanity_String(const struct FString& inString, unsigned char InMinimumSeverity);
	bool STATIC_ContainsProfanity_Text(const struct FText& InText, unsigned char InMinimumSeverity);
	bool STATIC_ContainsProfanity_String(const struct FString& inString, unsigned char InMinimumSeverity);
	bool STATIC_ContainsProfanity_Name(const struct FName& InName, unsigned char InMinimumSeverity);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
