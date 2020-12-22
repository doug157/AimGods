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

// Function ChatWindow.ChatWindow_C.OnKeyDown
struct UChatWindow_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ChatWindow.ChatWindow_C.OnMouseButtonUp
struct UChatWindow_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ChatWindow.ChatWindow_C.OnMouseButtonDown
struct UChatWindow_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ChatWindow.ChatWindow_C.SetTextToSend
struct UChatWindow_C_SetTextToSend_Params
{
	bool                                               bTeamChat;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Sender;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Msg;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       TexToSend;                                                 // (Parm, OutParm)
};

// Function ChatWindow.ChatWindow_C.BndEvt__ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UChatWindow_C_BndEvt__ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChatWindow.ChatWindow_C.UpdateChatWindow
struct UChatWindow_C_UpdateChatWindow_Params
{
	struct FText                                       Sender;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Msg;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bTeamChat;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChatWindow.ChatWindow_C.FadeChatWindow
struct UChatWindow_C_FadeChatWindow_Params
{
};

// Function ChatWindow.ChatWindow_C.ShowChat
struct UChatWindow_C_ShowChat_Params
{
};

// Function ChatWindow.ChatWindow_C.Construct
struct UChatWindow_C_Construct_Params
{
};

// Function ChatWindow.ChatWindow_C.InitChatEntry
struct UChatWindow_C_InitChatEntry_Params
{
};

// Function ChatWindow.ChatWindow_C.ResetKeyboardFocus
struct UChatWindow_C_ResetKeyboardFocus_Params
{
};

// Function ChatWindow.ChatWindow_C.BndEvt__ChatEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
struct UChatWindow_C_BndEvt__ChatEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChatWindow.ChatWindow_C.ExecuteUbergraph_ChatWindow
struct UChatWindow_C_ExecuteUbergraph_ChatWindow_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
