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

// Function AimGods.WebSocketManager.UpdateInMatchStatus
struct UWebSocketManager_UpdateInMatchStatus_Params
{
	bool                                               bIsInMatch;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.WebSocketManager.SendMessageToWebSocketApi
struct UWebSocketManager_SendMessageToWebSocketApi_Params
{
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.WebSocketManager.SendLatencyUpdate
struct UWebSocketManager_SendLatencyUpdate_Params
{
	TArray<struct FRegionLatency>                      RegionLatencies;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.WebSocketManager.SendHeartbeat
struct UWebSocketManager_SendHeartbeat_Params
{
};

// Function AimGods.WebSocketManager.SendChatMessage
struct UWebSocketManager_SendChatMessage_Params
{
	struct FString                                     ToUserId;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MessageText;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.WebSocketManager.Reconnect
struct UWebSocketManager_Reconnect_Params
{
};

// Function AimGods.WebSocketManager.OpenConnection
struct UWebSocketManager_OpenConnection_Params
{
};

// Function AimGods.WebSocketManager.OnWebSocketConnectionClosed
struct UWebSocketManager_OnWebSocketConnectionClosed_Params
{
	int                                                StatusCode;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Reason;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWasClean;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.WebSocketManager.OnReceivedWebSocketApiMessage
struct UWebSocketManager_OnReceivedWebSocketApiMessage_Params
{
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.WebSocketManager.OnConnectToWebSocketApiError
struct UWebSocketManager_OnConnectToWebSocketApiError_Params
{
	struct FString                                     Error;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.WebSocketManager.OnConnectToWebSocketApi
struct UWebSocketManager_OnConnectToWebSocketApi_Params
{
};

// Function AimGods.WebSocketManager.CloseWebSocketConnection
struct UWebSocketManager_CloseWebSocketConnection_Params
{
};

// Function AimGods.GameLiftClientUtils.StopMatchmaking
struct UGameLiftClientUtils_StopMatchmaking_Params
{
};

// Function AimGods.GameLiftClientUtils.StartMatchmaking
struct UGameLiftClientUtils_StartMatchmaking_Params
{
};

// Function AimGods.GameLiftClientUtils.StartGameSessionPlacement
struct UGameLiftClientUtils_StartGameSessionPlacement_Params
{
};

// Function AimGods.GameLiftClientUtils.SetLastPotentialMatchCreatedTime
struct UGameLiftClientUtils_SetLastPotentialMatchCreatedTime_Params
{
	struct FString                                     Time;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.GameLiftClientUtils.SetLastMatchmakingSearchingTime
struct UGameLiftClientUtils_SetLastMatchmakingSearchingTime_Params
{
	struct FString                                     Time;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.GameLiftClientUtils.ResetTicket
struct UGameLiftClientUtils_ResetTicket_Params
{
};

// Function AimGods.GameLiftClientUtils.ResetPlacement
struct UGameLiftClientUtils_ResetPlacement_Params
{
};

// Function AimGods.GameLiftClientUtils.PollMatchmaking
struct UGameLiftClientUtils_PollMatchmaking_Params
{
};

// Function AimGods.GameLiftClientUtils.NewLastPotentialMatchCreatedTimeIsGreater
struct UGameLiftClientUtils_NewLastPotentialMatchCreatedTimeIsGreater_Params
{
	struct FString                                     Time;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.GameLiftClientUtils.NewLastMatchmakingSearchingTimeIsGreater
struct UGameLiftClientUtils_NewLastMatchmakingSearchingTimeIsGreater_Params
{
	struct FString                                     Time;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.GameLiftClientUtils.GetResponseTime
struct UGameLiftClientUtils_GetResponseTime_Params
{
	struct FString                                     Region;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.GameLiftClientUtils.DescribeGameSessionPlacement
struct UGameLiftClientUtils_DescribeGameSessionPlacement_Params
{
};

// Function AimGods.GameLiftClientUtils.AcceptMatch
struct UGameLiftClientUtils_AcceptMatch_Params
{
	struct FString                                     AcceptanceType;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.FriendsLibrary.UnblockPlayer
struct UFriendsLibrary_UnblockPlayer_Params
{
	struct FString                                     UsernameToUnblock;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.FriendsLibrary.SendFriendRequest
struct UFriendsLibrary_SendFriendRequest_Params
{
	struct FString                                     Username;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.FriendsLibrary.RemoveFriend
struct UFriendsLibrary_RemoveFriend_Params
{
	struct FString                                     FriendId;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.FriendsLibrary.GetPendingOutgoingFriendRequests
struct UFriendsLibrary_GetPendingOutgoingFriendRequests_Params
{
};

// Function AimGods.FriendsLibrary.GetPendingIncomingFriendRequests
struct UFriendsLibrary_GetPendingIncomingFriendRequests_Params
{
};

// Function AimGods.FriendsLibrary.GetFriendsList
struct UFriendsLibrary_GetFriendsList_Params
{
};

// Function AimGods.FriendsLibrary.GetFriendNameByPlayerId
struct UFriendsLibrary_GetFriendNameByPlayerId_Params
{
	struct FString                                     PlayerId;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.FriendsLibrary.GetBlockedPlayers
struct UFriendsLibrary_GetBlockedPlayers_Params
{
};

// Function AimGods.FriendsLibrary.CancelOutgoingFriendshipRequest
struct UFriendsLibrary_CancelOutgoingFriendshipRequest_Params
{
	struct FString                                     RequestId;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.FriendsLibrary.BlockPlayer
struct UFriendsLibrary_BlockPlayer_Params
{
	struct FString                                     Username;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.FriendsLibrary.AcceptFriendRequest
struct UFriendsLibrary_AcceptFriendRequest_Params
{
	struct FString                                     Username;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.EacSubsystem.SendPlayerReport
struct UEacSubsystem_SendPlayerReport_Params
{
	struct FString                                     ReportedPlayerGUID;                                        // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReportingPlayerGUID;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EFPlayerReportCategory>                ReportCategoryID;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReportDescription;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AwsHttpRequestLibrary.SetAuthDetails
struct UAwsHttpRequestLibrary_SetAuthDetails_Params
{
	struct FString                                     ID;                                                        // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Access;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Refresh;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RefreshExpiresIn;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AwsHttpRequestLibrary.IsLoggedIn
struct UAwsHttpRequestLibrary_IsLoggedIn_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AsyncTaskWalkInDirection.WalkInDirectionAndWait
struct UAsyncTaskWalkInDirection_WalkInDirectionAndWait_Params
{
	class APawn*                                       PawnToMove;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldDirection;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScaleValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAsyncTaskWalkInDirection*                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AsyncTaskWalkInDirection.EndTask
struct UAsyncTaskWalkInDirection_EndTask_Params
{
};

// Function AimGods.AsyncTaskOwnedTagChanged.ListenForOwnedTagChange
struct UAsyncTaskOwnedTagChanged_ListenForOwnedTagChange_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       OwnedTags;                                                 // (Parm, NativeAccessSpecifierPublic)
	class UAsyncTaskOwnedTagChanged*                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AsyncTaskOwnedTagChanged.EndTask
struct UAsyncTaskOwnedTagChanged_EndTask_Params
{
};

// Function AimGods.AsyncTaskEffectStackChanged.ListenForGameplayEffectStackChange
struct UAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                EffectGameplayTag;                                         // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAsyncTaskEffectStackChanged*                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AsyncTaskEffectStackChanged.EndTask
struct UAsyncTaskEffectStackChanged_EndTask_Params
{
};

// Function AimGods.AsyncTaskCooldownChanged.ListenForCooldownChange
struct UAsyncTaskCooldownChanged_ListenForCooldownChange_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       CooldownTags;                                              // (Parm, NativeAccessSpecifierPublic)
	bool                                               UseServerCooldown;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAsyncTaskCooldownChanged*                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AsyncTaskCooldownChanged.EndTask
struct UAsyncTaskCooldownChanged_EndTask_Params
{
};

// Function AimGods.AsyncTaskAttributeChanged.ListenForAttributesChange
struct UAsyncTaskAttributeChanged_ListenForAttributesChange_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayAttribute>                  Attributes;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UAsyncTaskAttributeChanged*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AsyncTaskAttributeChanged.ListenForAttributeChange
struct UAsyncTaskAttributeChanged_ListenForAttributeChange_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          Attribute;                                                 // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAsyncTaskAttributeChanged*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AsyncTaskAttributeChanged.EndTask
struct UAsyncTaskAttributeChanged_EndTask_Params
{
};

// Function AimGods.AGWeapon.ServerNotifyMiss
struct AAGWeapon_ServerNotifyMiss_Params
{
	struct FHitResult                                  Impact;                                                    // (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGWeapon.ServerNotifyHit
struct AAGWeapon_ServerNotifyHit_Params
{
	struct FHitResult                                  Impact;                                                    // (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGWeapon.RegenAmmo
struct AAGWeapon_RegenAmmo_Params
{
};

// Function AimGods.AGWeapon.OnRep_HitNotify
struct AAGWeapon_OnRep_HitNotify_Params
{
};

// Function AimGods.AGTowerTarget.OnHealthModified
struct AAGTowerTarget_OnHealthModified_Params
{
	float                                              NewHealth;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OldHealth;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGTowerBase.SpawnTarget
struct AAGTowerBase_SpawnTarget_Params
{
};

// Function AimGods.AGTowerBase.ShootPlayer
struct AAGTowerBase_ShootPlayer_Params
{
	class AAGCharacterBase*                            Character;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGTowerBase.ShootBestTarget
struct AAGTowerBase_ShootBestTarget_Params
{
};

// Function AimGods.AGTowerBase.SetTowerGlow
struct AAGTowerBase_SetTowerGlow_Params
{
	bool                                               bNewEnabled;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGTowerBase.RespawnMissingTargets
struct AAGTowerBase_RespawnMissingTargets_Params
{
};

// Function AimGods.AGTowerBase.OnRep_bShieldEnabled
struct AAGTowerBase_OnRep_bShieldEnabled_Params
{
};

// Function AimGods.AGTowerBase.OnRep_bIsDestroyed
struct AAGTowerBase_OnRep_bIsDestroyed_Params
{
};

// Function AimGods.AGTowerBase.OnDeath
struct AAGTowerBase_OnDeath_Params
{
	class AActor*                                      KilledActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGTowerBase.EnemyLeftAggroRadius
struct AAGTowerBase_EnemyLeftAggroRadius_Params
{
	class AActor*                                      EnemyActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGTowerBase.EnemyEnteredAggroRadius
struct AAGTowerBase_EnemyEnteredAggroRadius_Params
{
	class AActor*                                      EnemyActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGTowerBase.BPPlayTowerDestroyedEffects
struct AAGTowerBase_BPPlayTowerDestroyedEffects_Params
{
};

// Function AimGods.AGStatsSubsystem.GetTimeLeftInCurrentSeason
struct UAGStatsSubsystem_GetTimeLeftInCurrentSeason_Params
{
	struct FDateTime                                   CurrentSeasonEndDateTime;                                  // (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGStatsSubsystem.GetSeasonInfo
struct UAGStatsSubsystem_GetSeasonInfo_Params
{
};

// Function AimGods.AGStatsSubsystem.GetPreviousPlayerStatsFromServer
struct UAGStatsSubsystem_GetPreviousPlayerStatsFromServer_Params
{
};

// Function AimGods.AGStatsSubsystem.GetPlayerStatsFromServer
struct UAGStatsSubsystem_GetPlayerStatsFromServer_Params
{
};

// Function AimGods.AGStatics.ReplaceTableReferenceStringsWithCorrespondingValue
struct UAGStatics_ReplaceTableReferenceStringsWithCorrespondingValue_Params
{
	class UCurveTable*                                 CurveTable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Text;                                                      // (Parm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGStatics.RemoveAllLowercase
struct UAGStatics_RemoveAllLowercase_Params
{
	struct FString                                     inString;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGStatics.IsSameTeam
struct UAGStatics_IsSameTeam_Params
{
	class AActor*                                      ActorA;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ActorB;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGStatics.IsRedTeam
struct UAGStatics_IsRedTeam_Params
{
	class AActor*                                      TestActor;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGStatics.IsEffectSpecHandleValid
struct UAGStatics_IsEffectSpecHandleValid_Params
{
	struct FGameplayEffectSpecHandle                   EffectSpecHandle;                                          // (Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGStatics.IsChargeEffect
struct UAGStatics_IsChargeEffect_Params
{
	class UGameplayEffect*                             GameplayEffect;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGStatics.GetHandleFromAbilitySpec
struct UAGStatics_GetHandleFromAbilitySpec_Params
{
	struct FGameplayAbilitySpec                        AbilitySpec;                                               // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecHandle                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGStatics.GetGameDefaultMapName
struct UAGStatics_GetGameDefaultMapName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGStatics.GetEffectSpecDuration
struct UAGStatics_GetEffectSpecDuration_Params
{
	struct FGameplayEffectSpec                         EffectSpec;                                                // (Parm, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGStatics.GetCurrentTowerForTeam
struct UAGStatics_GetCurrentTowerForTeam_Params
{
	class UWorld*                                      World;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsRedTeam;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAGTowerBase*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGStatics.GetAbilityActivationBlockedTags
struct UAGStatics_GetAbilityActivationBlockedTags_Params
{
	struct FGameplayAbilitySpec                        AbilitySpec;                                               // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGStatics.DrawDebugSphereShippingIncluded
struct UAGStatics_DrawDebugSphereShippingIncluded_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Center;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Segments;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LineColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Thickness;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerState.TrySwapAbilities
struct AAGPlayerState_TrySwapAbilities_Params
{
	EAGAbilityInputID                                  AbilityA;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAGAbilityInputID                                  AbilityB;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerState.TryBuyAbility
struct AAGPlayerState_TryBuyAbility_Params
{
	class UClass*                                      AbilityToBuy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerState.Suicide
struct AAGPlayerState_Suicide_Params
{
};

// Function AimGods.AGPlayerState.ServerTrySwapAbilities
struct AAGPlayerState_ServerTrySwapAbilities_Params
{
	EAGAbilityInputID                                  AbilityA;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAGAbilityInputID                                  AbilityB;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerState.ServerTryBuyAbility
struct AAGPlayerState_ServerTryBuyAbility_Params
{
	class UClass*                                      AbilityToBuy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerState.ResetScore
struct AAGPlayerState_ResetScore_Params
{
};

// Function AimGods.AGPlayerState.OnRep_ReplicatedPurchasedAbilities
struct AAGPlayerState_OnRep_ReplicatedPurchasedAbilities_Params
{
};

// Function AimGods.AGPlayerState.OnRep_Gold
struct AAGPlayerState_OnRep_Gold_Params
{
	int                                                OldGold;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerState.OnRep_ConnectedGameSessionId
struct AAGPlayerState_OnRep_ConnectedGameSessionId_Params
{
	struct FString                                     OldGameSessionId;                                          // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerState.OnRep_ConnectedFleetId
struct AAGPlayerState_OnRep_ConnectedFleetId_Params
{
	struct FString                                     OldFleetId;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerState.OnMainMenuStatsReceived
struct AAGPlayerState_OnMainMenuStatsReceived_Params
{
	bool                                               Success;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsError                                 StatError;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameStatsPayload                           ReceivedGameStats;                                         // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerState.OnEndGameStatsReceived
struct AAGPlayerState_OnEndGameStatsReceived_Params
{
	bool                                               Success;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsError                                 StatError;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FGameStatsPayload>                   ReceivedGameStats;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerState.OnCustomGameEndReceieved
struct AAGPlayerState_OnCustomGameEndReceieved_Params
{
};

// Function AimGods.AGPlayerState.GetUniqueIdAsString
struct AAGPlayerState_GetUniqueIdAsString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerState.GetEndGameStatsByPlayerId
struct AAGPlayerState_GetEndGameStatsByPlayerId_Params
{
	struct FString                                     InPlayerId;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameStatsPayload                           ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerState.ClientShowScore
struct AAGPlayerState_ClientShowScore_Params
{
	float                                              Points;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Text;                                                      // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerState.BPShowScore
struct AAGPlayerState_BPShowScore_Params
{
	float                                              Points;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerState.BPShowDebuffIcon
struct AAGPlayerState_BPShowDebuffIcon_Params
{
	class UAGGameplayEffect*                           AppliedEffect;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerState.AwardGold
struct AAGPlayerState_AwardGold_Params
{
	int                                                Amount;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerState.AddScorePoints
struct AAGPlayerState_AddScorePoints_Params
{
	float                                              Points;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Reason;                                                    // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerState.AddHealing
struct AAGPlayerState_AddHealing_Params
{
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerState.AddDeath
struct AAGPlayerState_AddDeath_Params
{
};

// Function AimGods.AGPlayerState.AddDamageTaken
struct AAGPlayerState_AddDamageTaken_Params
{
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerState.AddDamage
struct AAGPlayerState_AddDamage_Params
{
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerController.SuicidePoints
struct AAGPlayerController_SuicidePoints_Params
{
};

// Function AimGods.AGPlayerController.ShowRespawnScreen
struct AAGPlayerController_ShowRespawnScreen_Params
{
	float                                              RespawnTimer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerController.ShowDamageNumber
struct AAGPlayerController_ShowDamageNumber_Params
{
	class AAGCharacterBase*                            Avatar;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAGDamageNumber                             DamageNumber;                                              // (Parm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerController.ServerSetIsPlaying
struct AAGPlayerController_ServerSetIsPlaying_Params
{
	bool                                               bCond;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerController.ServerAddToReadyToSpawnList
struct AAGPlayerController_ServerAddToReadyToSpawnList_Params
{
	class APlayerController*                           ReadyPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerController.ReportPlayer
struct AAGPlayerController_ReportPlayer_Params
{
	struct FString                                     PlayerToReport;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReportCategory;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerController.OnGameOver
struct AAGPlayerController_OnGameOver_Params
{
	class AActor*                                      InstigatorPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWonGame;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerController.LoadSoundSettings
struct AAGPlayerController_LoadSoundSettings_Params
{
};

// Function AimGods.AGPlayerController.LoadInputSettings
struct AAGPlayerController_LoadInputSettings_Params
{
};

// Function AimGods.AGPlayerController.KillPawn
struct AAGPlayerController_KillPawn_Params
{
};

// Function AimGods.AGPlayerController.GetTimeLeft
struct AAGPlayerController_GetTimeLeft_Params
{
};

// Function AimGods.AGPlayerController.GetTime
struct AAGPlayerController_GetTime_Params
{
};

// Function AimGods.AGPlayerController.GetPlayerName
struct AAGPlayerController_GetPlayerName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerController.ClientUpdateJoinInProgressTime
struct AAGPlayerController_ClientUpdateJoinInProgressTime_Params
{
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerController.ClientShowRespawnScreen
struct AAGPlayerController_ClientShowRespawnScreen_Params
{
	float                                              RespawnTimer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerController.BPUpdateHealth
struct AAGPlayerController_BPUpdateHealth_Params
{
};

// Function AimGods.AGPlayerController.BPShowDamageText
struct AAGPlayerController_BPShowDamageText_Params
{
	float                                              DamageToDo;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWasHeadshot;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWasImmune;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPlayerController.BPKicked
struct AAGPlayerController_BPKicked_Params
{
};

// Function AimGods.AGPlayerController.BPCloseWidgets
struct AAGPlayerController_BPCloseWidgets_Params
{
};

// Function AimGods.AGPlayerController.BPCloseCharacterSelection
struct AAGPlayerController_BPCloseCharacterSelection_Params
{
};

// Function AimGods.AGPlayerController.AddDamageNumber
struct AAGPlayerController_AddDamageNumber_Params
{
	float                                              DamageAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      TargetCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDamageTextType                                    DamageTextType;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                          EffectIcons;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPartySubsystem.SendPartyInvite
struct UAGPartySubsystem_SendPartyInvite_Params
{
	struct FString                                     PlayerId;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPartySubsystem.LeaveCurrentParty
struct UAGPartySubsystem_LeaveCurrentParty_Params
{
};

// Function AimGods.AGPartySubsystem.IsPartyLeader
struct UAGPartySubsystem_IsPartyLeader_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPartySubsystem.IsInParty
struct UAGPartySubsystem_IsInParty_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPartySubsystem.GetPartyInvites
struct UAGPartySubsystem_GetPartyInvites_Params
{
};

// Function AimGods.AGPartySubsystem.GetCurrentParty
struct UAGPartySubsystem_GetCurrentParty_Params
{
};

// Function AimGods.AGPartySubsystem.CancelPartyInvite
struct UAGPartySubsystem_CancelPartyInvite_Params
{
	struct FString                                     PartyInviteId;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGPartySubsystem.AcceptPartyInvite
struct UAGPartySubsystem_AcceptPartyInvite_Params
{
	struct FString                                     PartyInviteId;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGNewsFeedSubsystem.GetNewsFeedForCurrentPlayer
struct UAGNewsFeedSubsystem_GetNewsFeedForCurrentPlayer_Params
{
};

// Function AimGods.AGNewsFeedSubsystem.CreateNewsFeedTest
struct UAGNewsFeedSubsystem_CreateNewsFeedTest_Params
{
};

// Function AimGods.AGHealthComponent.OnRep_HP
struct UAGHealthComponent_OnRep_HP_Params
{
	float                                              OldHP;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGhost.Server_SendGhostPCToTeammate
struct AAGGhost_Server_SendGhostPCToTeammate_Params
{
};

// Function AimGods.AGGhost.Server_RemoveGhostPCFromTeammate
struct AAGGhost_Server_RemoveGhostPCFromTeammate_Params
{
};

// Function AimGods.AGGhost.BPOnSpectateModeChanged
struct AAGGhost_BPOnSpectateModeChanged_Params
{
	bool                                               bFreeMode;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameState.OnRep_PrematchTimeRemaining
struct AAGGameState_OnRep_PrematchTimeRemaining_Params
{
};

// Function AimGods.AGGameState.OnRep_MatchTimeSeconds
struct AAGGameState_OnRep_MatchTimeSeconds_Params
{
};

// Function AimGods.AGGameState.OnRep_bIsPostMatch
struct AAGGameState_OnRep_bIsPostMatch_Params
{
};

// Function AimGods.AGGameState.OnEndGameStatsReceived
struct AAGGameState_OnEndGameStatsReceived_Params
{
	bool                                               Success;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatsError                                 StatError;                                                 // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FGameStatsPayload>                   EndGameStats;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameState.OnCustomGameEnded
struct AAGGameState_OnCustomGameEnded_Params
{
};

// Function AimGods.AGGameState.IncrementMatchTimer
struct AAGGameState_IncrementMatchTimer_Params
{
};

// Function AimGods.AGGameState.GetTeam
struct AAGGameState_GetTeam_Params
{
	bool                                               bRedTeam;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AAGPlayerController*>                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameState.GetBaseLocation
struct AAGGameState_GetBaseLocation_Params
{
	bool                                               bIsRedTeam;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameState.EndGame
struct AAGGameState_EndGame_Params
{
};

// Function AimGods.AGGameState.CheckElapsedTime
struct AAGGameState_CheckElapsedTime_Params
{
};

// Function AimGods.AGGameState.AddTeamPoints
struct AAGGameState_AddTeamPoints_Params
{
	bool                                               bOnBlueTeam;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameState.AddPlayerToReadyList
struct AAGGameState_AddPlayerToReadyList_Params
{
	class APlayerController*                           ReadyPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameplayCueNotify_Actor.GetNumberOfSameActiveGameplayCues
struct AAGGameplayCueNotify_Actor_GetNumberOfSameActiveGameplayCues_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameplayAbility.GetActivationBlockedTags
struct UAGGameplayAbility_GetActivationBlockedTags_Params
{
	struct FGameplayTagContainer                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameModeTest.RespondToOnActorKilled
struct AAGGameModeTest_RespondToOnActorKilled_Params
{
	class AActor*                                      VictimActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      KillerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 KillerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameModeTest.OnGameOver
struct AAGGameModeTest_OnGameOver_Params
{
	class AActor*                                      InstigatorPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWonGame;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameliftSubsystem.UpdatePlayersInMatchStatus
struct UAGGameliftSubsystem_UpdatePlayersInMatchStatus_Params
{
	struct FString                                     PlayerId;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayerIsInMatch;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameliftSubsystem.StartMatchmaking
struct UAGGameliftSubsystem_StartMatchmaking_Params
{
};

// Function AimGods.AGGameliftSubsystem.StartCustomGame
struct UAGGameliftSubsystem_StartCustomGame_Params
{
};

// Function AimGods.AGGameliftSubsystem.ResetMatchmaking
struct UAGGameliftSubsystem_ResetMatchmaking_Params
{
};

// Function AimGods.AGGameliftSubsystem.JoinMatch
struct UAGGameliftSubsystem_JoinMatch_Params
{
};

// Function AimGods.AGGameliftSubsystem.GetMatchmakingTicket
struct UAGGameliftSubsystem_GetMatchmakingTicket_Params
{
};

// Function AimGods.AGGameliftSubsystem.CancelMatchmaking
struct UAGGameliftSubsystem_CancelMatchmaking_Params
{
};

// Function AimGods.AGGameliftSubsystem.AcceptMatch
struct UAGGameliftSubsystem_AcceptMatch_Params
{
	bool                                               bDidAccept;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameInstance.SwapAbilities
struct UAGGameInstance_SwapAbilities_Params
{
	EAGAbilityInputID                                  SlotA;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAGAbilityInputID                                  SlotB;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSaveToDisk;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameInstance.SetUserInfo
struct UAGGameInstance_SetUserInfo_Params
{
	struct FString                                     InUsername;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InUserId;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameInstance.SetAbility
struct UAGGameInstance_SetAbility_Params
{
	EAGAbilityInputID                                  Slot;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Ability;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSaveToDisk;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameInstance.SaveGame
struct UAGGameInstance_SaveGame_Params
{
};

// Function AimGods.AGGameInstance.LoadGame
struct UAGGameInstance_LoadGame_Params
{
};

// Function AimGods.AGGameInstance.HandleDowntimeNotification
struct UAGGameInstance_HandleDowntimeNotification_Params
{
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasStarted;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameInstance.ExitGame
struct UAGGameInstance_ExitGame_Params
{
};

// Function AimGods.AGGameInstance.BPRemoveSettingsMenu
struct UAGGameInstance_BPRemoveSettingsMenu_Params
{
};

// Function AimGods.AGDamageTextWidgetComponent.SetDamageText
struct UAGDamageTextWidgetComponent_SetDamageText_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDamageTextType                                    DamageTextType;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GoldAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  DebuffIcon;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGDamageTextWidgetComponent.AddDebuffIcon
struct UAGDamageTextWidgetComponent_AddDebuffIcon_Params
{
	class UImage*                                      DebuffImage;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCustomGameSubsystem.StartCustomLobbyGameSessionPlacement
struct UAGCustomGameSubsystem_StartCustomLobbyGameSessionPlacement_Params
{
};

// Function AimGods.AGCustomGameSubsystem.SetPlayerIsReady
struct UAGCustomGameSubsystem_SetPlayerIsReady_Params
{
	bool                                               bIsReady;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCustomGameSubsystem.SendCustomGameInvite
struct UAGCustomGameSubsystem_SendCustomGameInvite_Params
{
	struct FString                                     PlayerId;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCustomGameSubsystem.LeaveCurrentGame
struct UAGCustomGameSubsystem_LeaveCurrentGame_Params
{
};

// Function AimGods.AGCustomGameSubsystem.KickPlayer
struct UAGCustomGameSubsystem_KickPlayer_Params
{
	struct FString                                     PlayerId;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCustomGameSubsystem.GetIsReady
struct UAGCustomGameSubsystem_GetIsReady_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCustomGameSubsystem.GetIsLeader
struct UAGCustomGameSubsystem_GetIsLeader_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCustomGameSubsystem.GetIncomingInvites
struct UAGCustomGameSubsystem_GetIncomingInvites_Params
{
};

// Function AimGods.AGCustomGameSubsystem.GetCurrentGame
struct UAGCustomGameSubsystem_GetCurrentGame_Params
{
};

// Function AimGods.AGCustomGameSubsystem.DescribeGameSessionPlacement
struct UAGCustomGameSubsystem_DescribeGameSessionPlacement_Params
{
};

// Function AimGods.AGCustomGameSubsystem.CreateCustomGame
struct UAGCustomGameSubsystem_CreateCustomGame_Params
{
};

// Function AimGods.AGCustomGameSubsystem.ChangeTeam
struct UAGCustomGameSubsystem_ChangeTeam_Params
{
	TEnumAsByte<EFCustomGameTeam>                      NewTeam;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCustomGameSubsystem.CancelOutgoingInvite
struct UAGCustomGameSubsystem_CancelOutgoingInvite_Params
{
	struct FString                                     InviteId;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCustomGameSubsystem.CancelInvite
struct UAGCustomGameSubsystem_CancelInvite_Params
{
	struct FString                                     InviteId;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCustomGameSubsystem.CancelIncomingInvite
struct UAGCustomGameSubsystem_CancelIncomingInvite_Params
{
	struct FString                                     InviteId;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCustomGameSubsystem.AllPlayersReady
struct UAGCustomGameSubsystem_AllPlayersReady_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCustomGameSubsystem.AcceptInvite
struct UAGCustomGameSubsystem_AcceptInvite_Params
{
	struct FString                                     InviteId;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameMode.TerminateGame
struct AAGGameMode_TerminateGame_Params
{
};

// Function AimGods.AGGameMode.SpawnMinions
struct AAGGameMode_SpawnMinions_Params
{
};

// Function AimGods.AGGameMode.ResetSpawns
struct AAGGameMode_ResetSpawns_Params
{
};

// Function AimGods.AGGameMode.QuitIfNotInEditor
struct AAGGameMode_QuitIfNotInEditor_Params
{
};

// Function AimGods.AGGameMode.QueueEndGame
struct AAGGameMode_QueueEndGame_Params
{
	bool                                               bGameEndedEarly;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bServerShutdownEarly;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameMode.OnServerToBeTerminated
struct AAGGameMode_OnServerToBeTerminated_Params
{
};

// Function AimGods.AGGameMode.OnServerHealthCheck
struct AAGGameMode_OnServerHealthCheck_Params
{
};

// Function AimGods.AGGameMode.Logout
struct AAGGameMode_Logout_Params
{
	class AController*                                 Exiting;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameMode.KickAllPlayers
struct AAGGameMode_KickAllPlayers_Params
{
};

// Function AimGods.AGGameMode.InitPlayerSpawns
struct AAGGameMode_InitPlayerSpawns_Params
{
};

// Function AimGods.AGGameMode.HandleRageQuit
struct AAGGameMode_HandleRageQuit_Params
{
	class AController*                                 Exiting;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameMode.GetMinionPlayerStarts
struct AAGGameMode_GetMinionPlayerStarts_Params
{
	bool                                               bIsRedTeam;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AAGMinionPlayerStart*>                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameMode.EndGameQueueExpired
struct AAGGameMode_EndGameQueueExpired_Params
{
};

// Function AimGods.AGGameMode.EndGame
struct AAGGameMode_EndGame_Params
{
	bool                                               bRedTeamWon;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameMode.CheckIfPlayersJoined
struct AAGGameMode_CheckIfPlayersJoined_Params
{
};

// Function AimGods.AGGameMode.CheckIfGameSessionActivated
struct AAGGameMode_CheckIfGameSessionActivated_Params
{
};

// Function AimGods.AGGameMode.AutoWin
struct AAGGameMode_AutoWin_Params
{
};

// Function AimGods.AGGameMode.ApplyRespawnMultipliers
struct AAGGameMode_ApplyRespawnMultipliers_Params
{
};

// Function AimGods.AGGameMode.AddToDamageTaken
struct AAGGameMode_AddToDamageTaken_Params
{
	class AActor*                                      DamagedActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageDone;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGGameMode.AddToDamageDone
struct AAGGameMode_AddToDamageDone_Params
{
	class AAGPlayerState*                              InPlayerState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageDone;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCheatManager.Cheat.OpenShop
struct UAGCheatManager_Cheat_OpenShop_Params
{
};

// Function AimGods.AGCheatManager.Cheat.Gold
struct UAGCheatManager_Cheat_Gold_Params
{
	int                                                Gold;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGChatSubsystem.ShowChatBox
struct UAGChatSubsystem_ShowChatBox_Params
{
	struct FString                                     OtherPlayerId;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OtherPlayerUsername;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGChatSubsystem.SendChatMessage
struct UAGChatSubsystem_SendChatMessage_Params
{
	struct FString                                     ToUserId;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MessageText;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGChatSubsystem.GetChatConversationsFromServer
struct UAGChatSubsystem_GetChatConversationsFromServer_Params
{
};

// Function AimGods.AGChatSubsystem.GetChatConversationById
struct UAGChatSubsystem_GetChatConversationById_Params
{
	struct FString                                     ChatConversationId;                                        // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChatConversation                           ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGChatSubsystem.CreateChatMessage
struct UAGChatSubsystem_CreateChatMessage_Params
{
	struct FString                                     FromUserId;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FromUsername;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            MessageTimeStamp;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MessageText;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChatMessage                                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCharacterMovementComponent.SetSlowWalking
struct UAGCharacterMovementComponent_SetSlowWalking_Params
{
	bool                                               bSlowWalk;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCharacterBase.SetCanMove
struct AAGCharacterBase_SetCanMove_Params
{
	bool                                               CanMove;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCharacterBase.Server_ShowDamageNumberOnSpectators
struct AAGCharacterBase_Server_ShowDamageNumberOnSpectators_Params
{
	class AAGCharacterBase*                            DamagedCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAGDamageNumber                             DamageNumber;                                              // (Parm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCharacterBase.IsDead
struct AAGCharacterBase_IsDead_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCharacterBase.IsAlive
struct AAGCharacterBase_IsAlive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCharacterBase.GetMoveSpeed
struct AAGCharacterBase_GetMoveSpeed_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCharacter.StunTagChanged
struct AAGCharacter_StunTagChanged_Params
{
	struct FGameplayTag                                CallbackTag;                                               // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewCount;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCharacter.SpawnWeapon
struct AAGCharacter_SpawnWeapon_Params
{
};

// Function AimGods.AGCharacter.ShowHitIndicator
struct AAGCharacter_ShowHitIndicator_Params
{
	struct FVector                                     DamagerLocation;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCharacter.SetupPlayerCard
struct AAGCharacter_SetupPlayerCard_Params
{
};

// Function AimGods.AGCharacter.SetLastImpact
struct AAGCharacter_SetLastImpact_Params
{
	struct FVector                                     Point;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCharacter.ServerReload
struct AAGCharacter_ServerReload_Params
{
};

// Function AimGods.AGCharacter.ServerGrantLoadoutAbilities
struct AAGCharacter_ServerGrantLoadoutAbilities_Params
{
	TArray<struct FLoadoutAbility>                     LoadoutAbilities;                                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCharacter.ServerEndWalk
struct AAGCharacter_ServerEndWalk_Params
{
};

// Function AimGods.AGCharacter.ServerBeginWalk
struct AAGCharacter_ServerBeginWalk_Params
{
};

// Function AimGods.AGCharacter.Play3PReloadEffects
struct AAGCharacter_Play3PReloadEffects_Params
{
};

// Function AimGods.AGCharacter.OnRep_DeathInfo
struct AAGCharacter_OnRep_DeathInfo_Params
{
};

// Function AimGods.AGCharacter.OnRep_bIsDead
struct AAGCharacter_OnRep_bIsDead_Params
{
};

// Function AimGods.AGCharacter.OnDeath
struct AAGCharacter_OnDeath_Params
{
	class AActor*                                      KilledActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 KillerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCharacter.HandleLocalDeath
struct AAGCharacter_HandleLocalDeath_Params
{
};

// Function AimGods.AGCharacter.Fire
struct AAGCharacter_Fire_Params
{
};

// Function AimGods.AGCharacter.EndCrouch
struct AAGCharacter_EndCrouch_Params
{
};

// Function AimGods.AGCharacter.CheatOpenShop
struct AAGCharacter_CheatOpenShop_Params
{
};

// Function AimGods.AGCharacter.CheatGold
struct AAGCharacter_CheatGold_Params
{
	int                                                Gold;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCharacter.BPUpdateKillFeed
struct AAGCharacter_BPUpdateKillFeed_Params
{
	class AAGPlayerState*                              KillerPC;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAGCharacter*                                DeadActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCharacter.BPShowHitIndicator
struct AAGCharacter_BPShowHitIndicator_Params
{
	struct FVector                                     DamagerLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCharacter.BPShowGameplayUI
struct AAGCharacter_BPShowGameplayUI_Params
{
	class AAGPlayerController*                         NewController;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCharacter.BPShowDamageDirection
struct AAGCharacter_BPShowDamageDirection_Params
{
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCharacter.BPSendInfoToKillFeed
struct AAGCharacter_BPSendInfoToKillFeed_Params
{
	class AController*                                 KillerPC;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAGCharacter*                                DeadActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGCharacter.BPOnDeath
struct AAGCharacter_BPOnDeath_Params
{
	class AAGPlayerState*                              Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAuthSubsystem.Login
struct UAGAuthSubsystem_Login_Params
{
	struct FString                                     Username;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAuthSubsystem.GetUserInfo
struct UAGAuthSubsystem_GetUserInfo_Params
{
};

// Function AimGods.AGAuthSubsystem.ForceLogin
struct UAGAuthSubsystem_ForceLogin_Params
{
	struct FString                                     Username;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAuthSubsystem.AutoRefreshToken
struct UAGAuthSubsystem_AutoRefreshToken_Params
{
};

// Function AimGods.AGAttributeSetPlayer.OnRep_TimeBetweenShots
struct UAGAttributeSetPlayer_OnRep_TimeBetweenShots_Params
{
	struct FGameplayAttributeData                      OldTimeBetweenShots;                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAttributeSetPlayer.OnRep_HeadshotDamageMultiplier
struct UAGAttributeSetPlayer_OnRep_HeadshotDamageMultiplier_Params
{
	struct FGameplayAttributeData                      OldHeadshotDamageMultiplier;                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAttributeSetPlayer.OnRep_Gold
struct UAGAttributeSetPlayer_OnRep_Gold_Params
{
	struct FGameplayAttributeData                      OldGold;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAttributes.OnRep_MoveSpeed
struct UAGAttributes_OnRep_MoveSpeed_Params
{
	struct FGameplayAttributeData                      OldMoveSpeed;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAttributes.OnRep_MaxHealth
struct UAGAttributes_OnRep_MaxHealth_Params
{
	struct FGameplayAttributeData                      OldMaxHealth;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAttributes.OnRep_Lifesteal
struct UAGAttributes_OnRep_Lifesteal_Params
{
	struct FGameplayAttributeData                      OldLifesteal;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAttributes.OnRep_IncomingHealMultiplier
struct UAGAttributes_OnRep_IncomingHealMultiplier_Params
{
	struct FGameplayAttributeData                      OldIncomingHealMultiplier;                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAttributes.OnRep_HealthRegeneration
struct UAGAttributes_OnRep_HealthRegeneration_Params
{
	struct FGameplayAttributeData                      OldHealthRegeneration;                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAttributes.OnRep_Health
struct UAGAttributes_OnRep_Health_Params
{
	struct FGameplayAttributeData                      OldHealth;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAttributes.OnRep_HeadshotDefense
struct UAGAttributes_OnRep_HeadshotDefense_Params
{
	struct FGameplayAttributeData                      OldHeadshotDefense;                                        // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAttributes.OnRep_HeadshotDamageMultiplier
struct UAGAttributes_OnRep_HeadshotDamageMultiplier_Params
{
	struct FGameplayAttributeData                      OldHeadshotDamageMultiplier;                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAttributes.OnRep_DelayBetweenShots
struct UAGAttributes_OnRep_DelayBetweenShots_Params
{
	struct FGameplayAttributeData                      OldDelayBetweenShots;                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAttributes.OnRep_Defense
struct UAGAttributes_OnRep_Defense_Params
{
	struct FGameplayAttributeData                      OldDefense;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAttributes.OnRep_AttackPower
struct UAGAttributes_OnRep_AttackPower_Params
{
	struct FGameplayAttributeData                      OldAttackPower;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAIController.GetTowerToAttack
struct AAGAIController_GetTowerToAttack_Params
{
	class AAGTowerBase*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAIController.FindTarget
struct AAGAIController_FindTarget_Params
{
};

// Function AimGods.AGAIController.EnemyLeftAggroRadius
struct AAGAIController_EnemyLeftAggroRadius_Params
{
	class AActor*                                      EnemyActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAIController.EnemyEnteredAggroRadius
struct AAGAIController_EnemyEnteredAggroRadius_Params
{
	class AActor*                                      EnemADetourCrowdAIControlleryActor;                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAICharacter.ShootTarget
struct AAGAICharacter_ShootTarget_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAICharacter.OnRep_Killer
struct AAGAICharacter_OnRep_Killer_Params
{
};

// Function AimGods.AGAICharacter.EnemyLeftAggroRadius
struct AAGAICharacter_EnemyLeftAggroRadius_Params
{
	class AActor*                                      EnemyActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAICharacter.EnemyEnteredAggroRadius
struct AAGAICharacter_EnemyEnteredAggroRadius_Params
{
	class AActor*                                      EnemyActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAICharacter.BPHandleDeath
struct AAGAICharacter_BPHandleDeath_Params
{
	class AActor*                                      KillerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAICharacter.ActivateShieldFX
struct AAGAICharacter_ActivateShieldFX_Params
{
	bool                                               bEnableFX;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAggroSphereComponent.GetAggroActors
struct UAGAggroSphereComponent_GetAggroActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAggroSphereComponent.ActorLeftAggroRadius
struct UAGAggroSphereComponent_ActorLeftAggroRadius_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAggroSphereComponent.ActorEnteredAggroRadius
struct UAGAggroSphereComponent_ActorEnteredAggroRadius_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAggroSphereComponent.ActorDiedInAggroRadius
struct UAGAggroSphereComponent_ActorDiedInAggroRadius_Params
{
	class AActor*                                      KilledActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAbilitySystemComponent.RemoveActiveEffectsByAssetTags
struct UAGAbilitySystemComponent_RemoveActiveEffectsByAssetTags_Params
{
	struct FGameplayTagContainer                       GameplayCueTag;                                            // (Parm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAbilitySystemComponent.OnActiveGameplayEffectRemoved
struct UAGAbilitySystemComponent_OnActiveGameplayEffectRemoved_Params
{
	struct FActiveGameplayEffect                       RemovedEffect;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAbilitySystemComponent.OnActiveGameplayEffectAddedToSelf
struct UAGAbilitySystemComponent_OnActiveGameplayEffectAddedToSelf_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpec                         EffectSpec;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle                 EffectHandle;                                              // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAbilitySystemComponent.GetActionNamePairedWithAbilityTag
struct UAGAbilitySystemComponent_GetActionNamePairedWithAbilityTag_Params
{
	struct FGameplayTag                                AbilityTag;                                                // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAbilitySystemComponent.CancelAbility
struct UAGAbilitySystemComponent_CancelAbility_Params
{
	struct FGameplayTag                                AbilityTag;                                                // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAbilitySystemComponent.BP_RemoveLooseGameplayTag
struct UAGAbilitySystemComponent_BP_RemoveLooseGameplayTag_Params
{
	struct FGameplayTag                                GameplayCueTag;                                            // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAbilitySystemComponent.BP_RemoveGameplayCue
struct UAGAbilitySystemComponent_BP_RemoveGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                            // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAbilitySystemComponent.BP_RemoveAllGameplayCues
struct UAGAbilitySystemComponent_BP_RemoveAllGameplayCues_Params
{
};

// Function AimGods.AGAbilitySystemComponent.BP_GetGameplayEffectRemainingDuration
struct UAGAbilitySystemComponent_BP_GetGameplayEffectRemainingDuration_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAbilitySystemComponent.BP_GetBlockedAbilityTags
struct UAGAbilitySystemComponent_BP_GetBlockedAbilityTags_Params
{
	struct FGameplayTagContainer                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAbilitySystemComponent.BP_FindAbilitySpecFromClass
struct UAGAbilitySystemComponent_BP_FindAbilitySpecFromClass_Params
{
	class UClass*                                      InAbilityClass;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpec                        ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAbilitySystemComponent.BP_ExecuteGameplayCue
struct UAGAbilitySystemComponent_BP_ExecuteGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                            // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      EffectParameters;                                          // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AimGods.AGAbilitySystemComponent.BP_AddGameplayCue
struct UAGAbilitySystemComponent_BP_AddGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                            // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      EffectParameters;                                          // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
