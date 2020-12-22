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

// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.BndEvt__Txt_UsernameToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UWB_SendFriendRequestDialog_C_BndEvt__Txt_UsernameToAdd_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.OnSendFriendRequest
struct UWB_SendFriendRequestDialog_C_OnSendFriendRequest_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                              Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.BndEvt__Button_140_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWB_SendFriendRequestDialog_C_BndEvt__Button_140_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.BndEvt__ButtonLeave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWB_SendFriendRequestDialog_C_BndEvt__ButtonLeave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.ExecuteUbergraph_WB_SendFriendRequestDialog
struct UWB_SendFriendRequestDialog_C_ExecuteUbergraph_WB_SendFriendRequestDialog_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.CloseWindow__DelegateSignature
struct UWB_SendFriendRequestDialog_C_CloseWindow__DelegateSignature_Params
{
};

// Function WB_SendFriendRequestDialog.WB_SendFriendRequestDialog_C.FriendSearchOperationDone__DelegateSignature
struct UWB_SendFriendRequestDialog_C_FriendSearchOperationDone__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
