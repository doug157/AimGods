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

// Function BP_AGCharacter.BP_AGCharacter_C.CheckAndSetupBladeStormCachables
struct ABP_AGCharacter_C_CheckAndSetupBladeStormCachables_Params
{
};

// Function BP_AGCharacter.BP_AGCharacter_C.TransformCharacter
struct ABP_AGCharacter_C_TransformCharacter_Params
{
	bool                                               ToSheep_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AGCharacter.BP_AGCharacter_C.CheckThornsGE
struct ABP_AGCharacter_C_CheckThornsGE_Params
{
	class UAGAbilitySystemComponent*                   SourceASC;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.CheckFearGE
struct ABP_AGCharacter_C_CheckFearGE_Params
{
	float                                              MitigatedDamage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.Check Double Strikes
struct ABP_AGCharacter_C_Check_Double_Strikes_Params
{
	float                                              MitigatedDamage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAGAbilitySystemComponent*                   SourceASC;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                       GEAssetTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_AGCharacter.BP_AGCharacter_C.Check Voodoo GE
struct ABP_AGCharacter_C_Check_Voodoo_GE_Params
{
	float                                              MitigatedDamage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAGAbilitySystemComponent*                   SourceASC;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                       GEAssetTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_AGCharacter.BP_AGCharacter_C.OnRep_IsShopOpen?
struct ABP_AGCharacter_C_OnRep_IsShopOpen__Params
{
};

// Function BP_AGCharacter.BP_AGCharacter_C.OnRep_ShopActor
struct ABP_AGCharacter_C_OnRep_ShopActor_Params
{
};

// Function BP_AGCharacter.BP_AGCharacter_C.CheckTarget
struct ABP_AGCharacter_C_CheckTarget_Params
{
};

// Function BP_AGCharacter.BP_AGCharacter_C.UserConstructionScript
struct ABP_AGCharacter_C_UserConstructionScript_Params
{
};

// Function BP_AGCharacter.BP_AGCharacter_C.OnWalkDurationEnded_838EB2624758B39CE502B0902B84DDA5
struct ABP_AGCharacter_C_OnWalkDurationEnded_838EB2624758B39CE502B0902B84DDA5_Params
{
};

// Function BP_AGCharacter.BP_AGCharacter_C.InpActEvt_Chat_K2Node_InputActionEvent_4
struct ABP_AGCharacter_C_InpActEvt_Chat_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.InpActEvt_GlobalChat_K2Node_InputActionEvent_3
struct ABP_AGCharacter_C_InpActEvt_GlobalChat_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.InpActEvt_TeamChat_K2Node_InputActionEvent_2
struct ABP_AGCharacter_C_InpActEvt_TeamChat_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.InpActEvt_OpenShop_K2Node_InputActionEvent_1
struct ABP_AGCharacter_C_InpActEvt_OpenShop_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.OnOwnedTagChanged_5045B434458AD3342FE0E28A8E50A74A
struct ABP_AGCharacter_C_OnOwnedTagChanged_5045B434458AD3342FE0E28A8E50A74A_Params
{
	struct FGameplayTag                                OwningTag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int                                                Amount;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.OnWalkDurationEnded_5B25C4B5425B83A7551F9B8154A928F7
struct ABP_AGCharacter_C_OnWalkDurationEnded_5B25C4B5425B83A7551F9B8154A928F7_Params
{
};

// Function BP_AGCharacter.BP_AGCharacter_C.OnNotifyEnd_FCB6966347A9D5B8B4E78184124B6512
struct ABP_AGCharacter_C_OnNotifyEnd_FCB6966347A9D5B8B4E78184124B6512_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.OnNotifyBegin_FCB6966347A9D5B8B4E78184124B6512
struct ABP_AGCharacter_C_OnNotifyBegin_FCB6966347A9D5B8B4E78184124B6512_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.OnInterrupted_FCB6966347A9D5B8B4E78184124B6512
struct ABP_AGCharacter_C_OnInterrupted_FCB6966347A9D5B8B4E78184124B6512_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.OnBlendOut_FCB6966347A9D5B8B4E78184124B6512
struct ABP_AGCharacter_C_OnBlendOut_FCB6966347A9D5B8B4E78184124B6512_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.OnCompleted_FCB6966347A9D5B8B4E78184124B6512
struct ABP_AGCharacter_C_OnCompleted_FCB6966347A9D5B8B4E78184124B6512_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.OnIceBlockTagChanged
struct ABP_AGCharacter_C_OnIceBlockTagChanged_Params
{
	int                                                Amount;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.ToggleFreezePlayer
struct ABP_AGCharacter_C_ToggleFreezePlayer_Params
{
	bool                                               ShouldFreeze;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AGCharacter.BP_AGCharacter_C.OnStunTagChanged
struct ABP_AGCharacter_C_OnStunTagChanged_Params
{
	int                                                Amount;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.OnFearTagChanged
struct ABP_AGCharacter_C_OnFearTagChanged_Params
{
	int                                                Amount;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.OnRootTagChanged
struct ABP_AGCharacter_C_OnRootTagChanged_Params
{
	int                                                Amount;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.Client_WalkDiagonal
struct ABP_AGCharacter_C_Client_WalkDiagonal_Params
{
};

// Function BP_AGCharacter.BP_AGCharacter_C.Client_StopDiagonalWalk
struct ABP_AGCharacter_C_Client_StopDiagonalWalk_Params
{
};

// Function BP_AGCharacter.BP_AGCharacter_C.Multicast_OnSheepTagChanged
struct ABP_AGCharacter_C_Multicast_OnSheepTagChanged_Params
{
	int                                                Amount;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.OnBladeStormTagChanged
struct ABP_AGCharacter_C_OnBladeStormTagChanged_Params
{
	int                                                Amount;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.ReceiveBeginPlay
struct ABP_AGCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_AGCharacter.BP_AGCharacter_C.BPSendInfoToKillFeed
struct ABP_AGCharacter_C_BPSendInfoToKillFeed_Params
{
	class AController*                                 KillerPC;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAGCharacter*                                DeadActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.ShowGameplayUI
struct ABP_AGCharacter_C_ShowGameplayUI_Params
{
	class APlayerController*                           Controller;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.ReceivePossessed
struct ABP_AGCharacter_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.BPShowHitIndicator
struct ABP_AGCharacter_C_BPShowHitIndicator_Params
{
	struct FVector                                     DamagerLocation;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.Server Open Shop
struct ABP_AGCharacter_C_Server_Open_Shop_Params
{
};

// Function BP_AGCharacter.BP_AGCharacter_C.Close Shop
struct ABP_AGCharacter_C_Close_Shop_Params
{
};

// Function BP_AGCharacter.BP_AGCharacter_C.Server Close Shop
struct ABP_AGCharacter_C_Server_Close_Shop_Params
{
};

// Function BP_AGCharacter.BP_AGCharacter_C.CheatOpenShop
struct ABP_AGCharacter_C_CheatOpenShop_Params
{
};

// Function BP_AGCharacter.BP_AGCharacter_C.Server_CheatGold
struct ABP_AGCharacter_C_Server_CheatGold_Params
{
	int                                                Gold;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.CheatGold
struct ABP_AGCharacter_C_CheatGold_Params
{
	int                                                Gold;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.SimulatedProxies_SetVanishVisibility
struct ABP_AGCharacter_C_SimulatedProxies_SetVanishVisibility_Params
{
	bool                                               IsVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AGCharacter.BP_AGCharacter_C.SetVisibility
struct ABP_AGCharacter_C_SetVisibility_Params
{
	bool                                               IsVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AGCharacter.BP_AGCharacter_C.Multicast_SetVisibility
struct ABP_AGCharacter_C_Multicast_SetVisibility_Params
{
	bool                                               IsVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AGCharacter.BP_AGCharacter_C.Server_RemoveGameplayCueDelay
struct ABP_AGCharacter_C_Server_RemoveGameplayCueDelay_Params
{
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                GameplayCueTag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.BPOnDeath
struct ABP_AGCharacter_C_BPOnDeath_Params
{
	class AAGPlayerState*                              Killer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.OnAbilitySystemComponentInitialized
struct ABP_AGCharacter_C_OnAbilitySystemComponentInitialized_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.ReceivedDamage
struct ABP_AGCharacter_C_ReceivedDamage_Params
{
	class UAGAbilitySystemComponent*                   SourceASC;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MitigatedDamage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                       GEAssetTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_AGCharacter.BP_AGCharacter_C.Client_ChargeWalkToDestination
struct ABP_AGCharacter_C_Client_ChargeWalkToDestination_Params
{
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     WorldDirection;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxAcceleration;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.Server_SetMaxAcceleration
struct ABP_AGCharacter_C_Server_SetMaxAcceleration_Params
{
	float                                              MaxAcceleration;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.OnLanded
struct ABP_AGCharacter_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_AGCharacter.BP_AGCharacter_C.OnJumped
struct ABP_AGCharacter_C_OnJumped_Params
{
};

// Function BP_AGCharacter.BP_AGCharacter_C.SetupPlayerCard
struct ABP_AGCharacter_C_SetupPlayerCard_Params
{
};

// Function BP_AGCharacter.BP_AGCharacter_C.K2_OnEndCrouch
struct ABP_AGCharacter_C_K2_OnEndCrouch_Params
{
	float                                              HalfHeightAdjust;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScaledHalfHeightAdjust;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.K2_OnStartCrouch
struct ABP_AGCharacter_C_K2_OnStartCrouch_Params
{
	float                                              HalfHeightAdjust;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScaledHalfHeightAdjust;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.ExecuteUbergraph_BP_AGCharacter
struct ABP_AGCharacter_C_ExecuteUbergraph_BP_AGCharacter_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AGCharacter.BP_AGCharacter_C.OnCharacterMeshVisibilityChanged__DelegateSignature
struct ABP_AGCharacter_C_OnCharacterMeshVisibilityChanged__DelegateSignature_Params
{
	bool                                               IsVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
