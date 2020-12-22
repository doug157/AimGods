#include "framework.h"

UFT::ABP_AGCharacter_C* AG::Target = nullptr;

UFT::APlayerController* AG::GetPC()
{
	UFT::UGameInstance* const GameInstance = GetGameInstance();
	if (GameInstance && GameInstance->LocalPlayers[0]) 
		return GameInstance->LocalPlayers[0]->PlayerController;
	return nullptr;
}

UFT::AAGPlayerController* AG::GetAGPC()
{
	UFT::APlayerController* const PC = GetPC();
	if (PC) return (UFT::AAGPlayerController*)PC;
	return nullptr;
}

UFT::ABP_AGPlayerController_C* AG::GetBPAAGPC()
{
	UFT::APlayerController* const PC = GetPC();
	if (PC) return (UFT::ABP_AGPlayerController_C*)PC;
	return nullptr;
}

UFT::UWorld* AG::GetWorld()
{
	return *reinterpret_cast<UFT::UWorld**>(reinterpret_cast<unsigned char*>(GetModuleHandleW(nullptr)) + 0x38E9B78);
}

UFT::UGameInstance* AG::GetGameInstance()
{
	UFT::UWorld* const World = GetWorld();
	if (World) return World->OwningGameInstance;
	return nullptr;
}

void AG::LockOnClosestTarget()
{
	if (!GetBPAAGPC() || !GetBPAAGPC()->K2_GetPawn())
		return;

	if (!Target) {
		Target = nullptr;
		UFT::TArray<UFT::AActor*> Actors;
		GetGameplayStatics().STATIC_GetAllActorsOfClass(GetPC(), UFT::ABP_AGCharacter_C::StaticClass(), &Actors);
		for (int i = 0; i < Actors.Num(); i++)
		{
			if (Actors[i] && !((UFT::ABP_AGCharacter_C*)Actors[i])->IsLocallyControlled())
			{
				if (!Target)
				{
					Target = (UFT::ABP_AGCharacter_C*)Actors[i];
				}
				else
				{
					UFT::FVector CamLoc;
					UFT::FRotator CamRot;
					GetBPAAGPC()->GetActorEyesViewPoint(&CamLoc, &CamRot);
					auto Rot1 = GetKismetMathLibrary().STATIC_FindLookAtRotation(CamLoc, Target->K2_GetActorLocation());
					auto Rot2 = GetKismetMathLibrary().STATIC_FindLookAtRotation(CamLoc, Actors[i]->K2_GetActorLocation());
					auto DotProd1 = GetKismetMathLibrary().STATIC_Dot_VectorVector(GetKismetMathLibrary().STATIC_Conv_RotatorToVector(Rot1), GetKismetMathLibrary().STATIC_Conv_RotatorToVector(CamRot));
					auto DotProd2 = GetKismetMathLibrary().STATIC_Dot_VectorVector(GetKismetMathLibrary().STATIC_Conv_RotatorToVector(Rot2), GetKismetMathLibrary().STATIC_Conv_RotatorToVector(CamRot));
					if (DotProd2 > DotProd1) Target = (UFT::ABP_AGCharacter_C*)Actors[i];
				}
			}
		}
	}

	if (Target && IS_VALID(Target))
	{
		UFT::FVector CamLoc;
		UFT::FRotator CamRot;
		GetBPAAGPC()->GetActorEyesViewPoint(&CamLoc, &CamRot);
		auto TargetLoc = Target->K2_GetActorLocation();
		auto LookAtRot = GetKismetMathLibrary().STATIC_FindLookAtRotation(CamLoc, TargetLoc);
		GetPC()->SetControlRotation(LookAtRot);
	}
	else
	{
		Target = nullptr;
	}
}