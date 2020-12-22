// Name: AimGods, Version: Beta 2

#include "../SDK.h"
#include <iostream>
#include <sstream>

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/



namespace UFT
{


GNAME_TYPE* FName::GNames = nullptr;
TUObjectArray* UObject::GObjects = nullptr;

//---------------------------------------------------------------------------
bool InitSdk(const std::string& moduleName, const size_t gObjectsOffset, const size_t gNamesOffset)
{
	auto mBaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandleA(moduleName.c_str()));

	if (mBaseAddress == 0x00)
		return false;
	
	UObject::GObjects = reinterpret_cast<UFT::TUObjectArray*>(mBaseAddress + gObjectsOffset);
	FName::GNames = reinterpret_cast<UFT::GNAME_TYPE*>(mBaseAddress + gNamesOffset);

	return true;
}
bool InitSdk()
{
	return InitSdk("AimGods-Win64-Shipping.exe", 0x3801E50, 0x37EA780);
}
//---------------------------------------------------------------------------
#ifdef UE4
bool FWeakObjectPtr::IsValid() const
{
	if (ObjectSerialNumber == 0)
	{
		return false;
	}
	if (ObjectIndex < 0)
	{
		return false;
	}
	auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
	if (!ObjectItem)
	{
		return false;
	}
	if (!SerialNumbersMatch(ObjectItem))
	{
		return false;
	}
	return !(ObjectItem->IsUnreachable() || ObjectItem->IsPendingKill());
}
//---------------------------------------------------------------------------
UObject* FWeakObjectPtr::Get() const
{
	if (IsValid())
	{
		auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
		if (ObjectItem)
		{
			return ObjectItem->Object;
		}
	}
	return nullptr;
}
#endif
//---------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

