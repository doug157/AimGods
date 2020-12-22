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

// Function WB_FriendRow.WB_FriendRow_C.Check_Online
struct UWB_FriendRow_C_Check_Online_Params
{
	bool                                               Online_;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_FriendRow.WB_FriendRow_C.BndEvt__AddToParty_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWB_FriendRow_C_BndEvt__AddToParty_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_FriendRow.WB_FriendRow_C.BndEvt__Btn_Row_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWB_FriendRow_C_BndEvt__Btn_Row_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_FriendRow.WB_FriendRow_C.OnMessageReceived
struct UWB_FriendRow_C_OnMessageReceived_Params
{
	struct FString                                     OtherPlayerId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     OtherPlayerUsername;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ChatConversationId;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SenderPlayerId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_FriendRow.WB_FriendRow_C.OnRemoveFriend
struct UWB_FriendRow_C_OnRemoveFriend_Params
{
	bool                                               Success;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Response;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FAGFriendError                              Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_FriendRow.WB_FriendRow_C.BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWB_FriendRow_C_BndEvt__Button_144_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_FriendRow.WB_FriendRow_C.BndEvt__Btn_AddToCustomGame_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UWB_FriendRow_C_BndEvt__Btn_AddToCustomGame_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_FriendRow.WB_FriendRow_C.BndEvt__Btn_BlockPlayer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWB_FriendRow_C_BndEvt__Btn_BlockPlayer_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_FriendRow.WB_FriendRow_C.Construct
struct UWB_FriendRow_C_Construct_Params
{
};

// Function WB_FriendRow.WB_FriendRow_C.BndEvt__ForgiveFriend_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UWB_FriendRow_C_BndEvt__ForgiveFriend_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_FriendRow.WB_FriendRow_C.ExecuteUbergraph_WB_FriendRow
struct UWB_FriendRow_C_ExecuteUbergraph_WB_FriendRow_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
