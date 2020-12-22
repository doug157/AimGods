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

// Function BP_AGCharacter.BP_AGCharacter_C.CheckAndSetupBladeStormCachables
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AGCharacter_C::CheckAndSetupBladeStormCachables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.CheckAndSetupBladeStormCachables");

	ABP_AGCharacter_C_CheckAndSetupBladeStormCachables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.TransformCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ToSheep_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AGCharacter_C::TransformCharacter(bool ToSheep_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.TransformCharacter");

	ABP_AGCharacter_C_TransformCharacter_Params params;
	params.ToSheep_ = ToSheep_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.CheckThornsGE
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAGAbilitySystemComponent* SourceASC                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::CheckThornsGE(class UAGAbilitySystemComponent* SourceASC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.CheckThornsGE");

	ABP_AGCharacter_C_CheckThornsGE_Params params;
	params.SourceASC = SourceASC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.CheckFearGE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MitigatedDamage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::CheckFearGE(float MitigatedDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.CheckFearGE");

	ABP_AGCharacter_C_CheckFearGE_Params params;
	params.MitigatedDamage = MitigatedDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.Check Double Strikes
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MitigatedDamage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGAbilitySystemComponent* SourceASC                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer   GEAssetTags                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_AGCharacter_C::Check_Double_Strikes(float MitigatedDamage, class UAGAbilitySystemComponent* SourceASC, const struct FGameplayTagContainer& GEAssetTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.Check Double Strikes");

	ABP_AGCharacter_C_Check_Double_Strikes_Params params;
	params.MitigatedDamage = MitigatedDamage;
	params.SourceASC = SourceASC;
	params.GEAssetTags = GEAssetTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.Check Voodoo GE
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MitigatedDamage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGAbilitySystemComponent* SourceASC                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer   GEAssetTags                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_AGCharacter_C::Check_Voodoo_GE(float MitigatedDamage, class UAGAbilitySystemComponent* SourceASC, const struct FGameplayTagContainer& GEAssetTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.Check Voodoo GE");

	ABP_AGCharacter_C_Check_Voodoo_GE_Params params;
	params.MitigatedDamage = MitigatedDamage;
	params.SourceASC = SourceASC;
	params.GEAssetTags = GEAssetTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.OnRep_IsShopOpen?
// (BlueprintCallable, BlueprintEvent)
void ABP_AGCharacter_C::OnRep_IsShopOpen_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.OnRep_IsShopOpen?");

	ABP_AGCharacter_C_OnRep_IsShopOpen__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.OnRep_ShopActor
// (HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AGCharacter_C::OnRep_ShopActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.OnRep_ShopActor");

	ABP_AGCharacter_C_OnRep_ShopActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.CheckTarget
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AGCharacter_C::CheckTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.CheckTarget");

	ABP_AGCharacter_C_CheckTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AGCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.UserConstructionScript");

	ABP_AGCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.OnWalkDurationEnded_838EB2624758B39CE502B0902B84DDA5
// (BlueprintCallable, BlueprintEvent)
void ABP_AGCharacter_C::OnWalkDurationEnded_838EB2624758B39CE502B0902B84DDA5()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.OnWalkDurationEnded_838EB2624758B39CE502B0902B84DDA5");

	ABP_AGCharacter_C_OnWalkDurationEnded_838EB2624758B39CE502B0902B84DDA5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.InpActEvt_Chat_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_AGCharacter_C::InpActEvt_Chat_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.InpActEvt_Chat_K2Node_InputActionEvent_4");

	ABP_AGCharacter_C_InpActEvt_Chat_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.InpActEvt_GlobalChat_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_AGCharacter_C::InpActEvt_GlobalChat_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.InpActEvt_GlobalChat_K2Node_InputActionEvent_3");

	ABP_AGCharacter_C_InpActEvt_GlobalChat_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.InpActEvt_TeamChat_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_AGCharacter_C::InpActEvt_TeamChat_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.InpActEvt_TeamChat_K2Node_InputActionEvent_2");

	ABP_AGCharacter_C_InpActEvt_TeamChat_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.InpActEvt_OpenShop_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_AGCharacter_C::InpActEvt_OpenShop_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.InpActEvt_OpenShop_K2Node_InputActionEvent_1");

	ABP_AGCharacter_C_InpActEvt_OpenShop_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.OnOwnedTagChanged_5045B434458AD3342FE0E28A8E50A74A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            OwningTag                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::OnOwnedTagChanged_5045B434458AD3342FE0E28A8E50A74A(const struct FGameplayTag& OwningTag, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.OnOwnedTagChanged_5045B434458AD3342FE0E28A8E50A74A");

	ABP_AGCharacter_C_OnOwnedTagChanged_5045B434458AD3342FE0E28A8E50A74A_Params params;
	params.OwningTag = OwningTag;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.OnWalkDurationEnded_5B25C4B5425B83A7551F9B8154A928F7
// (BlueprintCallable, BlueprintEvent)
void ABP_AGCharacter_C::OnWalkDurationEnded_5B25C4B5425B83A7551F9B8154A928F7()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.OnWalkDurationEnded_5B25C4B5425B83A7551F9B8154A928F7");

	ABP_AGCharacter_C_OnWalkDurationEnded_5B25C4B5425B83A7551F9B8154A928F7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.OnNotifyEnd_FCB6966347A9D5B8B4E78184124B6512
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::OnNotifyEnd_FCB6966347A9D5B8B4E78184124B6512(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.OnNotifyEnd_FCB6966347A9D5B8B4E78184124B6512");

	ABP_AGCharacter_C_OnNotifyEnd_FCB6966347A9D5B8B4E78184124B6512_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.OnNotifyBegin_FCB6966347A9D5B8B4E78184124B6512
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::OnNotifyBegin_FCB6966347A9D5B8B4E78184124B6512(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.OnNotifyBegin_FCB6966347A9D5B8B4E78184124B6512");

	ABP_AGCharacter_C_OnNotifyBegin_FCB6966347A9D5B8B4E78184124B6512_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.OnInterrupted_FCB6966347A9D5B8B4E78184124B6512
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::OnInterrupted_FCB6966347A9D5B8B4E78184124B6512(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.OnInterrupted_FCB6966347A9D5B8B4E78184124B6512");

	ABP_AGCharacter_C_OnInterrupted_FCB6966347A9D5B8B4E78184124B6512_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.OnBlendOut_FCB6966347A9D5B8B4E78184124B6512
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::OnBlendOut_FCB6966347A9D5B8B4E78184124B6512(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.OnBlendOut_FCB6966347A9D5B8B4E78184124B6512");

	ABP_AGCharacter_C_OnBlendOut_FCB6966347A9D5B8B4E78184124B6512_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.OnCompleted_FCB6966347A9D5B8B4E78184124B6512
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::OnCompleted_FCB6966347A9D5B8B4E78184124B6512(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.OnCompleted_FCB6966347A9D5B8B4E78184124B6512");

	ABP_AGCharacter_C_OnCompleted_FCB6966347A9D5B8B4E78184124B6512_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.OnIceBlockTagChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::OnIceBlockTagChanged(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.OnIceBlockTagChanged");

	ABP_AGCharacter_C_OnIceBlockTagChanged_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.ToggleFreezePlayer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldFreeze                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AGCharacter_C::ToggleFreezePlayer(bool ShouldFreeze)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.ToggleFreezePlayer");

	ABP_AGCharacter_C_ToggleFreezePlayer_Params params;
	params.ShouldFreeze = ShouldFreeze;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.OnStunTagChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::OnStunTagChanged(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.OnStunTagChanged");

	ABP_AGCharacter_C_OnStunTagChanged_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.OnFearTagChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::OnFearTagChanged(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.OnFearTagChanged");

	ABP_AGCharacter_C_OnFearTagChanged_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.OnRootTagChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::OnRootTagChanged(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.OnRootTagChanged");

	ABP_AGCharacter_C_OnRootTagChanged_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.Client_WalkDiagonal
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ABP_AGCharacter_C::Client_WalkDiagonal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.Client_WalkDiagonal");

	ABP_AGCharacter_C_Client_WalkDiagonal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.Client_StopDiagonalWalk
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ABP_AGCharacter_C::Client_StopDiagonalWalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.Client_StopDiagonalWalk");

	ABP_AGCharacter_C_Client_StopDiagonalWalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.Multicast_OnSheepTagChanged
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::Multicast_OnSheepTagChanged(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.Multicast_OnSheepTagChanged");

	ABP_AGCharacter_C_Multicast_OnSheepTagChanged_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.OnBladeStormTagChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::OnBladeStormTagChanged(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.OnBladeStormTagChanged");

	ABP_AGCharacter_C_OnBladeStormTagChanged_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_AGCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.ReceiveBeginPlay");

	ABP_AGCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.BPSendInfoToKillFeed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             KillerPC                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAGCharacter*            DeadActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::BPSendInfoToKillFeed(class AController* KillerPC, class AAGCharacter* DeadActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.BPSendInfoToKillFeed");

	ABP_AGCharacter_C_BPSendInfoToKillFeed_Params params;
	params.KillerPC = KillerPC;
	params.DeadActor = DeadActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.ShowGameplayUI
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::ShowGameplayUI(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.ShowGameplayUI");

	ABP_AGCharacter_C_ShowGameplayUI_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.ReceivePossessed");

	ABP_AGCharacter_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.BPShowHitIndicator
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 DamagerLocation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::BPShowHitIndicator(const struct FVector& DamagerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.BPShowHitIndicator");

	ABP_AGCharacter_C_BPShowHitIndicator_Params params;
	params.DamagerLocation = DamagerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.Server Open Shop
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_AGCharacter_C::Server_Open_Shop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.Server Open Shop");

	ABP_AGCharacter_C_Server_Open_Shop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.Close Shop
// (BlueprintCallable, BlueprintEvent)
void ABP_AGCharacter_C::Close_Shop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.Close Shop");

	ABP_AGCharacter_C_Close_Shop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.Server Close Shop
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_AGCharacter_C::Server_Close_Shop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.Server Close Shop");

	ABP_AGCharacter_C_Server_Close_Shop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.CheatOpenShop
// (Event, Public, BlueprintEvent)
void ABP_AGCharacter_C::CheatOpenShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.CheatOpenShop");

	ABP_AGCharacter_C_CheatOpenShop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.Server_CheatGold
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Gold                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::Server_CheatGold(int Gold)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.Server_CheatGold");

	ABP_AGCharacter_C_Server_CheatGold_Params params;
	params.Gold = Gold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.CheatGold
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            Gold                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::CheatGold(int Gold)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.CheatGold");

	ABP_AGCharacter_C_CheatGold_Params params;
	params.Gold = Gold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.SimulatedProxies_SetVanishVisibility
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AGCharacter_C::SimulatedProxies_SetVanishVisibility(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.SimulatedProxies_SetVanishVisibility");

	ABP_AGCharacter_C_SimulatedProxies_SetVanishVisibility_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.SetVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AGCharacter_C::SetVisibility(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.SetVisibility");

	ABP_AGCharacter_C_SetVisibility_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.Multicast_SetVisibility
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AGCharacter_C::Multicast_SetVisibility(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.Multicast_SetVisibility");

	ABP_AGCharacter_C_Multicast_SetVisibility_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.Server_RemoveGameplayCueDelay
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag            GameplayCueTag                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::Server_RemoveGameplayCueDelay(float Time, const struct FGameplayTag& GameplayCueTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.Server_RemoveGameplayCueDelay");

	ABP_AGCharacter_C_Server_RemoveGameplayCueDelay_Params params;
	params.Time = Time;
	params.GameplayCueTag = GameplayCueTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.BPOnDeath
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAGPlayerState*          Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::BPOnDeath(class AAGPlayerState* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.BPOnDeath");

	ABP_AGCharacter_C_BPOnDeath_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.OnAbilitySystemComponentInitialized
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::OnAbilitySystemComponentInitialized(class UAbilitySystemComponent* AbilitySystemComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.OnAbilitySystemComponentInitialized");

	ABP_AGCharacter_C_OnAbilitySystemComponentInitialized_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.ReceivedDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAGAbilitySystemComponent* SourceASC                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MitigatedDamage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer   GEAssetTags                    (BlueprintVisible, BlueprintReadOnly, Parm)
void ABP_AGCharacter_C::ReceivedDamage(class UAGAbilitySystemComponent* SourceASC, float MitigatedDamage, const struct FGameplayTagContainer& GEAssetTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.ReceivedDamage");

	ABP_AGCharacter_C_ReceivedDamage_Params params;
	params.SourceASC = SourceASC;
	params.MitigatedDamage = MitigatedDamage;
	params.GEAssetTags = GEAssetTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.Client_ChargeWalkToDestination
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 WorldDirection                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxAcceleration                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::Client_ChargeWalkToDestination(float Duration, const struct FVector& WorldDirection, float MaxAcceleration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.Client_ChargeWalkToDestination");

	ABP_AGCharacter_C_Client_ChargeWalkToDestination_Params params;
	params.Duration = Duration;
	params.WorldDirection = WorldDirection;
	params.MaxAcceleration = MaxAcceleration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.Server_SetMaxAcceleration
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MaxAcceleration                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::Server_SetMaxAcceleration(float MaxAcceleration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.Server_SetMaxAcceleration");

	ABP_AGCharacter_C_Server_SetMaxAcceleration_Params params;
	params.MaxAcceleration = MaxAcceleration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.OnLanded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_AGCharacter_C::OnLanded(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.OnLanded");

	ABP_AGCharacter_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.OnJumped
// (Event, Public, BlueprintEvent)
void ABP_AGCharacter_C::OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.OnJumped");

	ABP_AGCharacter_C_OnJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.SetupPlayerCard
// (Event, Protected, BlueprintEvent)
void ABP_AGCharacter_C::SetupPlayerCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.SetupPlayerCard");

	ABP_AGCharacter_C_SetupPlayerCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.K2_OnEndCrouch
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          HalfHeightAdjust               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ScaledHalfHeightAdjust         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.K2_OnEndCrouch");

	ABP_AGCharacter_C_K2_OnEndCrouch_Params params;
	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.K2_OnStartCrouch
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          HalfHeightAdjust               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ScaledHalfHeightAdjust         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.K2_OnStartCrouch");

	ABP_AGCharacter_C_K2_OnStartCrouch_Params params;
	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.ExecuteUbergraph_BP_AGCharacter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AGCharacter_C::ExecuteUbergraph_BP_AGCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.ExecuteUbergraph_BP_AGCharacter");

	ABP_AGCharacter_C_ExecuteUbergraph_BP_AGCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AGCharacter.BP_AGCharacter_C.OnCharacterMeshVisibilityChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AGCharacter_C::OnCharacterMeshVisibilityChanged__DelegateSignature(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AGCharacter.BP_AGCharacter_C.OnCharacterMeshVisibilityChanged__DelegateSignature");

	ABP_AGCharacter_C_OnCharacterMeshVisibilityChanged__DelegateSignature_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
