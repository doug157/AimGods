#pragma once

// Name: AimGods, Version: Beta 2

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
struct UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Params
{
	EMagicLeapIdentityError                            ResultCode;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMagicLeapIdentityAttribute>         AttributeValue;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
struct UMagicLeapIdentity_RequestAttributeValueAsync_Params
{
	TArray<EMagicLeapIdentityKey>                      RequestedAttributeList;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ResultDelegate;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	EMagicLeapIdentityError                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
struct UMagicLeapIdentity_RequestAttributeValue_Params
{
	TArray<EMagicLeapIdentityKey>                      RequestedAttributeList;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FMagicLeapIdentityAttribute>         RequestedAttributeValues;                                  // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	EMagicLeapIdentityError                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
struct UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Params
{
	EMagicLeapIdentityError                            ResultCode;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<EMagicLeapIdentityKey>                      AttributesUpdatedSuccessfully;                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
struct UMagicLeapIdentity_GetAllAvailableAttributesAsync_Params
{
	struct FScriptDelegate                             ResultDelegate;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
struct UMagicLeapIdentity_GetAllAvailableAttributes_Params
{
	TArray<EMagicLeapIdentityKey>                      AvailableAttributes;                                       // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	EMagicLeapIdentityError                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
struct UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Params
{
	EMagicLeapIdentityError                            ResultCode;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<EMagicLeapIdentityKey>                      AvailableAttributes;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
