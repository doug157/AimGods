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

// Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMagicLeapHandMeshingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary");
		return ptr;
	}


	bool STATIC_DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	bool STATIC_DestroyClient();
	bool STATIC_CreateClient();
	bool STATIC_ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};

// Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UMagicLeapHandMeshingComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent");
		return ptr;
	}


	bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
