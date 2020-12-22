#include "framework.h"

typedef void(*tProcessEvent)(UFT::UObject*, UFT::UFunction*, void*);
typedef void(*tRequestExit)(bool);

tRequestExit rRequestExit = nullptr;
tProcessEvent rProcessEvent = nullptr;

void hProcessEvent(UFT::UObject* Object, UFT::UFunction* Function, void* Params)
{
    funcs::LogEvent(Function->GetFullName().c_str(), false, false);
    if (strcmp(Function->GetName().c_str(), "ReceiveDrawHUD") == 0)
    {
        Keybinds::Tick();
        if (Keybinds::IsKeyDown(VK_LMENU))
        {
            AG::LockOnClosestTarget();
        }
        else
        {
            if(AG::Target != nullptr) 
                AG::Target = nullptr;
        }
    }
    else if (strcmp(Function->GetFullName().c_str(), "Function AimGods.AGWeapon.ServerNotifyMiss") == 0)
        return;
    else if (strcmp(Function->GetFullName().c_str(), "Function BP_AGCharacter.BP_AGCharacter_C.ToggleFreezePlayer") == 0)
        return;
    else if (strcmp(Function->GetFullName().c_str(), "Function BP_AGCharacter.BP_AGCharacter_C.SetupPlayerCard") == 0)
    {
        // Send the server a fake username when the match starts so it's hard for people to report you
        if (AG::GetPC())
            AG::GetPC()->ServerChangeName(UFT::FString{ funcs::random_name().c_str() });
    }
    else if (strcmp(Function->GetFullName().c_str(), "Function AimGods.AGWeapon.ServerNotifyHit") == 0)
    {
        auto Args = (UFT::AAGWeapon_ServerNotifyHit_Params*)Params;
        for (auto i = 0; i < 50; i++) {
            rProcessEvent(Object, Function, Params);
        }
    }

	return rProcessEvent(Object, Function, Params);
}

void hRequestExit(bool Force)
{
    // This is so the game doesn't close automatically because EAC isn't open
    // Literally just do nothing when it tries to call this request.
	return;
}

void SetupKeybinds()
{
    // For testing crap...
    Keybinds::Set(VK_F1, false, [] {
        if (AG::GetPC()) {
            printf("%p %s\n", AG::GetBPAAGPC(), AG::GetBPAAGPC()->GetFullName().c_str());
            printf("%p %s\n", AG::GetBPAAGPC()->K2_GetPawn(), AG::GetBPAAGPC()->K2_GetPawn()->GetFullName().c_str());
        }
    });

    Keybinds::Set(VK_F2, false, [] {
        UFT::TArray<UFT::AActor*> OutActors;
        GetGameplayStatics().STATIC_GetAllActorsOfClass(AG::GetPC(), UFT::AActor::StaticClass(), &OutActors);
        for (auto i = 0; i < OutActors.Num(); i++) {
            printf("%s\n", OutActors[i]->GetFullName().c_str());
        }
    });
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	if (ul_reason_for_call == DLL_PROCESS_ATTACH)
	{
		AllocConsole();
		FILE* file = nullptr;
		freopen_s(&file, "CONOUT$", "w", stdout);
		ShowWindow(GetConsoleWindow(), SW_SHOW);

        rRequestExit = (tRequestExit)funcs::FindPattern(GetModuleHandleW(nullptr), reinterpret_cast<const unsigned char*>("\x48\x83\xEC\x28\x84\xC9\x74\x07"), "xxxxxxxx");
        rProcessEvent = (tProcessEvent)funcs::FindPattern(GetModuleHandleW(nullptr), reinterpret_cast<const unsigned char*>("\x40\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x81\xEC\xF0\x00\x00\x00\x00"), "xxxxxxxxxxxxxxxx????");

        UFT::InitSdk();
        
        SetupKeybinds();

        printf("%p %s\n", UFT::UObject::GObjects, "GUObjectArray");
        printf("%p %s\n", UFT::FName::GNames , "GNames");
		printf("%p %s\n", rRequestExit, "FGenericPlatformMisc::RequestExit");
        printf("%p %s\n", rProcessEvent, "UObject::ProcessEvent");

		if (DetourTransactionBegin() != NO_ERROR ||
			DetourUpdateThread(GetCurrentThread()) != NO_ERROR ||
			DetourAttach(&(LPVOID&)rRequestExit, (PVOID)hRequestExit) != NO_ERROR ||
            DetourAttach(&(LPVOID&)rProcessEvent, (PVOID)hProcessEvent) != NO_ERROR ||
			DetourTransactionCommit() != NO_ERROR)
			return FALSE;
		return TRUE;
	}
	else if (ul_reason_for_call == DLL_PROCESS_DETACH)
	{
        if (DetourTransactionBegin() != NO_ERROR ||
            DetourUpdateThread(GetCurrentThread()) != NO_ERROR ||
            DetourDetach(&(LPVOID&)rRequestExit, (PVOID)hRequestExit) != NO_ERROR ||
            DetourDetach(&(LPVOID&)rProcessEvent, (PVOID)hProcessEvent) != NO_ERROR ||
            DetourTransactionCommit() != NO_ERROR)
            return FALSE;
        return TRUE;
	}
	return TRUE;
}

