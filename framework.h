#pragma once

#define WIN32_LEAN_AND_MEAN

#include <SDK.h>
#include <windows.h>
#include <detours.h>
#include <stdint.h>
#include <vector>
#include <algorithm>
#include <vector>
#include <functional>
#include <Psapi.h>
#include <iostream>
#include <chrono>
#include <mutex>
#include <random>
#include "AG.h"
#include "Keybinds.h"
#include "funcs.h"

static __forceinline UFT::UGameplayStatics& GetGameplayStatics() { return *(UFT::UGameplayStatics*)UFT::UGameplayStatics::StaticClass(); };
static __forceinline UFT::UKismetMathLibrary& GetKismetMathLibrary() { return *(UFT::UKismetMathLibrary*)UFT::UKismetMathLibrary::StaticClass(); };
static __forceinline UFT::UKismetSystemLibrary& GetKismetSystemLibrary() { return *(UFT::UKismetSystemLibrary*)UFT::UKismetSystemLibrary::StaticClass(); };

#define IS_VALID(Actor) GetKismetSystemLibrary().STATIC_IsValid(Actor)