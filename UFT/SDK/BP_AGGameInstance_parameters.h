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

// Function BP_AGGameInstance.BP_AGGameInstance_C.OnFailure_D7E6F33944FC88F0975CC29A0A147795
struct UBP_AGGameInstance_C_OnFailure_D7E6F33944FC88F0975CC29A0A147795_Params
{
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.OnSuccess_D7E6F33944FC88F0975CC29A0A147795
struct UBP_AGGameInstance_C_OnSuccess_D7E6F33944FC88F0975CC29A0A147795_Params
{
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowSettingsMenu
struct UBP_AGGameInstance_C_ShowSettingsMenu_Params
{
	class UWB_MainMenu_C*                              MainMenuWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.HandleNetworkError
struct UBP_AGGameInstance_C_HandleNetworkError_Params
{
	TEnumAsByte<ENetworkFailure>                       FailureType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsServer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowLoadingScreen
struct UBP_AGGameInstance_C_ShowLoadingScreen_Params
{
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.HandleTravelError
struct UBP_AGGameInstance_C_HandleTravelError_Params
{
	TEnumAsByte<ETravelFailure>                        FailureType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.DestroySessionCaller
struct UBP_AGGameInstance_C_DestroySessionCaller_Params
{
	class APlayerController*                           PlayerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowGameplayWidget
struct UBP_AGGameInstance_C_ShowGameplayWidget_Params
{
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowIngameMenu
struct UBP_AGGameInstance_C_ShowIngameMenu_Params
{
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowMainMenu
struct UBP_AGGameInstance_C_ShowMainMenu_Params
{
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowEndGameMenu
struct UBP_AGGameInstance_C_ShowEndGameMenu_Params
{
	bool                                               RedTeamWon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Position;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowPlayerScores
struct UBP_AGGameInstance_C_ShowPlayerScores_Params
{
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowErrorMessageMenu
struct UBP_AGGameInstance_C_ShowErrorMessageMenu_Params
{
	struct FString                                     ErrorMessage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.HidePlayerScores
struct UBP_AGGameInstance_C_HidePlayerScores_Params
{
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.CloseIngame Menu
struct UBP_AGGameInstance_C_CloseIngame_Menu_Params
{
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.SetVolume
struct UBP_AGGameInstance_C_SetVolume_Params
{
	float                                              AudioVolume;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundClass*                                 SoundClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.BPRemoveSettingsMenu
struct UBP_AGGameInstance_C_BPRemoveSettingsMenu_Params
{
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowLogin
struct UBP_AGGameInstance_C_ShowLogin_Params
{
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.LeaveCustomGame
struct UBP_AGGameInstance_C_LeaveCustomGame_Params
{
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.JoinCustomGame
struct UBP_AGGameInstance_C_JoinCustomGame_Params
{
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.ReceiveInit
struct UBP_AGGameInstance_C_ReceiveInit_Params
{
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.ExecuteUbergraph_BP_AGGameInstance
struct UBP_AGGameInstance_C_ExecuteUbergraph_BP_AGGameInstance_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGGameInstance.BP_AGGameInstance_C.InputBindingChanged__DelegateSignature
struct UBP_AGGameInstance_C_InputBindingChanged__DelegateSignature_Params
{
	struct FName                                       BindingName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        New_Key;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
