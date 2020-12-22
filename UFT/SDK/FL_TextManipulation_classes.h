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

// BlueprintGeneratedClass FL_TextManipulation.FL_TextManipulation_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFL_TextManipulation_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FL_TextManipulation.FL_TextManipulation_C");
		return ptr;
	}


	void STATIC_Truncate_Text_Box(struct FText* TextToTruncate, int NumCharsToTruncateAt, class UEditableTextBox** Text_Box, class UObject* __WorldContext, struct FText* TruncatedText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
