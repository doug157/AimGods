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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WebBrowser.WebJSCallbackBase
// 0x0020
struct FWebJSCallbackBase
{
	unsigned char                                      UnknownData_JTKA[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};
// ScriptStruct WebBrowser.WebJSFunction
// 0x0000 (0x0020 - 0x0020)
struct FWebJSFunction : public FWebJSCallbackBase
{

};
// ScriptStruct WebBrowser.WebJSResponse
// 0x0000 (0x0020 - 0x0020)
struct FWebJSResponse : public FWebJSCallbackBase
{

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
