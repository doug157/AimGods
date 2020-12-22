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

// Class MagicLeapSecureStorage.MagicLeapSecureStorage
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMagicLeapSecureStorage : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapSecureStorage.MagicLeapSecureStorage");
		return ptr;
	}


	bool STATIC_PutSecureVector(const struct FString& Key, const struct FVector& DataToStore);
	bool STATIC_PutSecureTransform(const struct FString& Key, const struct FTransform& DataToStore);
	bool STATIC_PutSecureString(const struct FString& Key, const struct FString& DataToStore);
	bool STATIC_PutSecureSaveGame(const struct FString& Key, class USaveGame* ObjectToStore);
	bool STATIC_PutSecureRotator(const struct FString& Key, const struct FRotator& DataToStore);
	bool STATIC_PutSecureInt64(const struct FString& Key, int64_t DataToStore);
	bool STATIC_PutSecureInt(const struct FString& Key, int DataToStore);
	bool STATIC_PutSecureFloat(const struct FString& Key, float DataToStore);
	bool STATIC_PutSecureByte(const struct FString& Key, unsigned char DataToStore);
	bool STATIC_PutSecureBool(const struct FString& Key, bool DataToStore);
	bool STATIC_PutSecureArray(const struct FString& Key, TArray<int> DataToStore);
	bool STATIC_GetSecureVector(const struct FString& Key, struct FVector* DataToRetrieve);
	bool STATIC_GetSecureTransform(const struct FString& Key, struct FTransform* DataToRetrieve);
	bool STATIC_GetSecureString(const struct FString& Key, struct FString* DataToRetrieve);
	bool STATIC_GetSecureSaveGame(const struct FString& Key, class USaveGame** ObjectToRetrieve);
	bool STATIC_GetSecureRotator(const struct FString& Key, struct FRotator* DataToRetrieve);
	bool STATIC_GetSecureInt64(const struct FString& Key, int64_t* DataToRetrieve);
	bool STATIC_GetSecureInt(const struct FString& Key, int* DataToRetrieve);
	bool STATIC_GetSecureFloat(const struct FString& Key, float* DataToRetrieve);
	bool STATIC_GetSecureByte(const struct FString& Key, unsigned char* DataToRetrieve);
	bool STATIC_GetSecureBool(const struct FString& Key, bool* DataToRetrieve);
	bool STATIC_GetSecureArray(const struct FString& Key, TArray<int>* DataToRetrieve);
	bool STATIC_DeleteSecureData(const struct FString& Key);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
