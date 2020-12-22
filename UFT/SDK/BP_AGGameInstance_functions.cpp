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

// Function BP_AGGameInstance.BP_AGGameInstance_C.OnFailure_D7E6F33944FC88F0975CC29A0A147795
// (BlueprintCallable, BlueprintEvent)
void UBP_AGGameInstance_C::OnFailure_D7E6F33944FC88F0975CC29A0A147795()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.OnFailure_D7E6F33944FC88F0975CC29A0A147795");

	UBP_AGGameInstance_C_OnFailure_D7E6F33944FC88F0975CC29A0A147795_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.OnSuccess_D7E6F33944FC88F0975CC29A0A147795
// (BlueprintCallable, BlueprintEvent)
void UBP_AGGameInstance_C::OnSuccess_D7E6F33944FC88F0975CC29A0A147795()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.OnSuccess_D7E6F33944FC88F0975CC29A0A147795");

	UBP_AGGameInstance_C_OnSuccess_D7E6F33944FC88F0975CC29A0A147795_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowSettingsMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_MainMenu_C*          MainMenuWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AGGameInstance_C::ShowSettingsMenu(class UWB_MainMenu_C* MainMenuWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.ShowSettingsMenu");

	UBP_AGGameInstance_C_ShowSettingsMenu_Params params;
	params.MainMenuWidget = MainMenuWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.HandleNetworkError
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENetworkFailure>   FailureType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsServer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_AGGameInstance_C::HandleNetworkError(TEnumAsByte<ENetworkFailure> FailureType, bool bIsServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.HandleNetworkError");

	UBP_AGGameInstance_C_HandleNetworkError_Params params;
	params.FailureType = FailureType;
	params.bIsServer = bIsServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowLoadingScreen
// (BlueprintCallable, BlueprintEvent)
void UBP_AGGameInstance_C::ShowLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.ShowLoadingScreen");

	UBP_AGGameInstance_C_ShowLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.HandleTravelError
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETravelFailure>    FailureType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AGGameInstance_C::HandleTravelError(TEnumAsByte<ETravelFailure> FailureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.HandleTravelError");

	UBP_AGGameInstance_C_HandleTravelError_Params params;
	params.FailureType = FailureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.DestroySessionCaller
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AGGameInstance_C::DestroySessionCaller(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.DestroySessionCaller");

	UBP_AGGameInstance_C_DestroySessionCaller_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowGameplayWidget
// (BlueprintCallable, BlueprintEvent)
void UBP_AGGameInstance_C::ShowGameplayWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.ShowGameplayWidget");

	UBP_AGGameInstance_C_ShowGameplayWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowIngameMenu
// (BlueprintCallable, BlueprintEvent)
void UBP_AGGameInstance_C::ShowIngameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.ShowIngameMenu");

	UBP_AGGameInstance_C_ShowIngameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowMainMenu
// (BlueprintCallable, BlueprintEvent)
void UBP_AGGameInstance_C::ShowMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.ShowMainMenu");

	UBP_AGGameInstance_C_ShowMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowEndGameMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RedTeamWon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AGGameInstance_C::ShowEndGameMenu(bool RedTeamWon, int Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.ShowEndGameMenu");

	UBP_AGGameInstance_C_ShowEndGameMenu_Params params;
	params.RedTeamWon = RedTeamWon;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowPlayerScores
// (BlueprintCallable, BlueprintEvent)
void UBP_AGGameInstance_C::ShowPlayerScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.ShowPlayerScores");

	UBP_AGGameInstance_C_ShowPlayerScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowErrorMessageMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ErrorMessage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_AGGameInstance_C::ShowErrorMessageMenu(const struct FString& ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.ShowErrorMessageMenu");

	UBP_AGGameInstance_C_ShowErrorMessageMenu_Params params;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.HidePlayerScores
// (BlueprintCallable, BlueprintEvent)
void UBP_AGGameInstance_C::HidePlayerScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.HidePlayerScores");

	UBP_AGGameInstance_C_HidePlayerScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.CloseIngame Menu
// (BlueprintCallable, BlueprintEvent)
void UBP_AGGameInstance_C::CloseIngame_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.CloseIngame Menu");

	UBP_AGGameInstance_C_CloseIngame_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.SetVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AudioVolume                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundClass*             SoundClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AGGameInstance_C::SetVolume(float AudioVolume, class USoundClass* SoundClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.SetVolume");

	UBP_AGGameInstance_C_SetVolume_Params params;
	params.AudioVolume = AudioVolume;
	params.SoundClass = SoundClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.BPRemoveSettingsMenu
// (Event, Public, BlueprintEvent)
void UBP_AGGameInstance_C::BPRemoveSettingsMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.BPRemoveSettingsMenu");

	UBP_AGGameInstance_C_BPRemoveSettingsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowLogin
// (BlueprintCallable, BlueprintEvent)
void UBP_AGGameInstance_C::ShowLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.ShowLogin");

	UBP_AGGameInstance_C_ShowLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.LeaveCustomGame
// (BlueprintCallable, BlueprintEvent)
void UBP_AGGameInstance_C::LeaveCustomGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.LeaveCustomGame");

	UBP_AGGameInstance_C_LeaveCustomGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.JoinCustomGame
// (BlueprintCallable, BlueprintEvent)
void UBP_AGGameInstance_C::JoinCustomGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.JoinCustomGame");

	UBP_AGGameInstance_C_JoinCustomGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
void UBP_AGGameInstance_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.ReceiveInit");

	UBP_AGGameInstance_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ExecuteUbergraph_BP_AGGameInstance
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AGGameInstance_C::ExecuteUbergraph_BP_AGGameInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.ExecuteUbergraph_BP_AGGameInstance");

	UBP_AGGameInstance_C_ExecuteUbergraph_BP_AGGameInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.InputBindingChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   BindingName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                    New_Key                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBP_AGGameInstance_C::InputBindingChanged__DelegateSignature(const struct FName& BindingName, const struct FKey& New_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGGameInstance.BP_AGGameInstance_C.InputBindingChanged__DelegateSignature");

	UBP_AGGameInstance_C_InputBindingChanged__DelegateSignature_Params params;
	params.BindingName = BindingName;
	params.New_Key = New_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
