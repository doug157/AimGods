#pragma once

class AG
{
public:
	static UFT::ABP_AGCharacter_C* Target;
	static UFT::APlayerController* GetPC();
	static UFT::AAGPlayerController* GetAGPC();
	static UFT::ABP_AGPlayerController_C* GetBPAAGPC();
	static UFT::UWorld* GetWorld();
	static UFT::UGameInstance* GetGameInstance();
	static void LockOnClosestTarget();
};