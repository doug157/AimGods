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
// Functions
//---------------------------------------------------------------------------

// Function BP_ButtonManager_Functions.BP_ButtonManager_Functions_C.GetButtonManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWB_Button_Base_C*       ButtonWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UBPi_ButtonManager_C> ButtonManager                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ButtonManager_Functions_C::STATIC_GetButtonManager(class UWB_Button_Base_C* ButtonWidget, class UObject* __WorldContext, TScriptInterface<class UBPi_ButtonManager_C>* ButtonManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ButtonManager_Functions.BP_ButtonManager_Functions_C.GetButtonManager");

	UBP_ButtonManager_Functions_C_GetButtonManager_Params params;
	params.ButtonWidget = ButtonWidget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ButtonManager != nullptr)
		*ButtonManager = params.ButtonManager;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
