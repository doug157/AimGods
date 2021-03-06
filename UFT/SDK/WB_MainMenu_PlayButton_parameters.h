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

// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.PartnerIsOutOfGame
struct UWB_MainMenu_PlayButton_C_PartnerIsOutOfGame_Params
{
	bool                                               bPartnerIsOutOfGame;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.Btn_Change_Status
struct UWB_MainMenu_PlayButton_C_Btn_Change_Status_Params
{
	TEnumAsByte<EMatchmakingStatus>                    CurrentStatus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsInParty;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsPartyLeader;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWB_MainMenu_PlayButton_C_BndEvt__Button_55_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWB_MainMenu_PlayButton_C_BndEvt__Button_55_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWB_MainMenu_PlayButton_C_BndEvt__Button_55_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.ChangeOfStatus
struct UWB_MainMenu_PlayButton_C_ChangeOfStatus_Params
{
	TEnumAsByte<EMatchmakingStatus>                    Status;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.Construct
struct UWB_MainMenu_PlayButton_C_Construct_Params
{
};

// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.OnPartyMemberInMatchStatusChangedWs
struct UWB_MainMenu_PlayButton_C_OnPartyMemberInMatchStatusChangedWs_Params
{
	struct FString                                     UserId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bIsInGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.ExecuteUbergraph_WB_MainMenu_PlayButton
struct UWB_MainMenu_PlayButton_C_ExecuteUbergraph_WB_MainMenu_PlayButton_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.LeaveParty__DelegateSignature
struct UWB_MainMenu_PlayButton_C_LeaveParty__DelegateSignature_Params
{
};

// Function WB_MainMenu_PlayButton.WB_MainMenu_PlayButton_C.Clicked__DelegateSignature
struct UWB_MainMenu_PlayButton_C_Clicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
