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

// Function WB_Gameplay.WB_Gameplay_C.Get_Health_Number
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_Gameplay_C::Get_Health_Number()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.Get_Health_Number");

	UWB_Gameplay_C_Get_Health_Number_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Gameplay.WB_Gameplay_C.Get_Health_Percentage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWB_Gameplay_C::Get_Health_Percentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.Get_Health_Percentage");

	UWB_Gameplay_C_Get_Health_Percentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Gameplay.WB_Gameplay_C.Get_Mana_Percentage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWB_Gameplay_C::Get_Mana_Percentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.Get_Mana_Percentage");

	UWB_Gameplay_C_Get_Mana_Percentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Gameplay.WB_Gameplay_C.GetDamageTextColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Was_Headshot_                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UWB_Gameplay_C::GetDamageTextColor(float Damage, bool Was_Headshot_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.GetDamageTextColor");

	UWB_Gameplay_C_GetDamageTextColor_Params params;
	params.Damage = Damage;
	params.Was_Headshot_ = Was_Headshot_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Gameplay.WB_Gameplay_C.RefreshHealth
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Gameplay_C::RefreshHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.RefreshHealth");

	UWB_Gameplay_C_RefreshHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.UpdateTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_Gameplay_C::UpdateTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.UpdateTimer");

	UWB_Gameplay_C_UpdateTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.UpdateScores
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_Gameplay_C::UpdateScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.UpdateScores");

	UWB_Gameplay_C_UpdateScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.Get Ammo Per Clip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_Gameplay_C::Get_Ammo_Per_Clip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.Get Ammo Per Clip");

	UWB_Gameplay_C_Get_Ammo_Per_Clip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Gameplay.WB_Gameplay_C.GetAmmoInClip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWB_Gameplay_C::GetAmmoInClip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.GetAmmoInClip");

	UWB_Gameplay_C_GetAmmoInClip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Gameplay.WB_Gameplay_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWB_Gameplay_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.OnMouseButtonDown");

	UWB_Gameplay_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_Gameplay.WB_Gameplay_C.OnAttributeChanged_992CD9B7462442386928C2AC0338BC67
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute      Attribute                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          OldValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Gameplay_C::OnAttributeChanged_992CD9B7462442386928C2AC0338BC67(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.OnAttributeChanged_992CD9B7462442386928C2AC0338BC67");

	UWB_Gameplay_C_OnAttributeChanged_992CD9B7462442386928C2AC0338BC67_Params params;
	params.Attribute = Attribute;
	params.NewValue = NewValue;
	params.OldValue = OldValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.OnGameplayEffectStackChange_55531E8B4ABD8149014A1D9B51CFA46E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EffectGameplayTag              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle Handle                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int                            NewStackCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OldStackCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Gameplay_C::OnGameplayEffectStackChange_55531E8B4ABD8149014A1D9B51CFA46E(const struct FGameplayTag& EffectGameplayTag, const struct FActiveGameplayEffectHandle& Handle, int NewStackCount, int OldStackCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.OnGameplayEffectStackChange_55531E8B4ABD8149014A1D9B51CFA46E");

	UWB_Gameplay_C_OnGameplayEffectStackChange_55531E8B4ABD8149014A1D9B51CFA46E_Params params;
	params.EffectGameplayTag = EffectGameplayTag;
	params.Handle = Handle;
	params.NewStackCount = NewStackCount;
	params.OldStackCount = OldStackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.On Health Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          OldValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Gameplay_C::On_Health_Changed(float Health, float OldValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.On Health Changed");

	UWB_Gameplay_C_On_Health_Changed_Params params;
	params.Health = Health;
	params.OldValue = OldValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.On Max Health Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Max_Health                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Gameplay_C::On_Max_Health_Changed(float Max_Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.On Max Health Changed");

	UWB_Gameplay_C_On_Max_Health_Changed_Params params;
	params.Max_Health = Max_Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_Gameplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.Construct");

	UWB_Gameplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.AddDamageIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 DmgLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Gameplay_C::AddDamageIndicator(const struct FVector& DmgLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.AddDamageIndicator");

	UWB_Gameplay_C_AddDamageIndicator_Params params;
	params.DmgLocation = DmgLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.ShowHitMarker
// (BlueprintCallable, BlueprintEvent)
void UWB_Gameplay_C::ShowHitMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.ShowHitMarker");

	UWB_Gameplay_C_ShowHitMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.SetTeamIcon
// (BlueprintCallable, BlueprintEvent)
void UWB_Gameplay_C::SetTeamIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.SetTeamIcon");

	UWB_Gameplay_C_SetTeamIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.On Gold Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OldAmount                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NewAmount                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Gameplay_C::On_Gold_Changed(int OldAmount, int NewAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.On Gold Changed");

	UWB_Gameplay_C_On_Gold_Changed_Params params;
	params.OldAmount = OldAmount;
	params.NewAmount = NewAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.Set Prompt Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Prompt                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Gameplay_C::Set_Prompt_Text(const struct FText& Prompt)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.Set Prompt Text");

	UWB_Gameplay_C_Set_Prompt_Text_Params params;
	params.Prompt = Prompt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.Bind GAS Attributes to UI
// (BlueprintCallable, BlueprintEvent)
void UWB_Gameplay_C::Bind_GAS_Attributes_to_UI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.Bind GAS Attributes to UI");

	UWB_Gameplay_C_Bind_GAS_Attributes_to_UI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.On Player Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Gameplay_C::On_Player_Destroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.On Player Destroyed");

	UWB_Gameplay_C_On_Player_Destroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.Begin Recall
// (BlueprintCallable, BlueprintEvent)
void UWB_Gameplay_C::Begin_Recall()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.Begin Recall");

	UWB_Gameplay_C_Begin_Recall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.End Recall
// (BlueprintCallable, BlueprintEvent)
void UWB_Gameplay_C::End_Recall()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.End Recall");

	UWB_Gameplay_C_End_Recall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Gameplay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.Tick");

	UWB_Gameplay_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.Welcome
// (BlueprintCallable, BlueprintEvent)
void UWB_Gameplay_C::Welcome()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.Welcome");

	UWB_Gameplay_C_Welcome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.On Gameplay Effect Added
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffect*         AddedEffect                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec     EffectSpec                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FActiveGameplayEffectHandle ActiveEffectHandle             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWB_Gameplay_C::On_Gameplay_Effect_Added(class UAbilitySystemComponent* AbilitySystemComponent, class UGameplayEffect* AddedEffect, const struct FGameplayEffectSpec& EffectSpec, const struct FActiveGameplayEffectHandle& ActiveEffectHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.On Gameplay Effect Added");

	UWB_Gameplay_C_On_Gameplay_Effect_Added_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.AddedEffect = AddedEffect;
	params.EffectSpec = EffectSpec;
	params.ActiveEffectHandle = ActiveEffectHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.On Gameplay Effect Removed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffect*         AddedEffect                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec     EffectSpec                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FActiveGameplayEffectHandle ActiveEffectHandle             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWB_Gameplay_C::On_Gameplay_Effect_Removed(class UAbilitySystemComponent* AbilitySystemComponent, class UGameplayEffect* AddedEffect, const struct FGameplayEffectSpec& EffectSpec, const struct FActiveGameplayEffectHandle& ActiveEffectHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.On Gameplay Effect Removed");

	UWB_Gameplay_C_On_Gameplay_Effect_Removed_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.AddedEffect = AddedEffect;
	params.EffectSpec = EffectSpec;
	params.ActiveEffectHandle = ActiveEffectHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.Setup Playercards
// (BlueprintCallable, BlueprintEvent)
void UWB_Gameplay_C::Setup_Playercards()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.Setup Playercards");

	UWB_Gameplay_C_Setup_Playercards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.Wait for Players
// (BlueprintCallable, BlueprintEvent)
void UWB_Gameplay_C::Wait_for_Players()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.Wait for Players");

	UWB_Gameplay_C_Wait_for_Players_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.BndEvt__WB_Countdown_K2Node_ComponentBoundEvent_0_ShowTime__DelegateSignature
// (BlueprintEvent)
void UWB_Gameplay_C::BndEvt__WB_Countdown_K2Node_ComponentBoundEvent_0_ShowTime__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.BndEvt__WB_Countdown_K2Node_ComponentBoundEvent_0_ShowTime__DelegateSignature");

	UWB_Gameplay_C_BndEvt__WB_Countdown_K2Node_ComponentBoundEvent_0_ShowTime__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.DisplayAbilityActivateErrorMessages
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   AbilityBlockedByTags           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_Gameplay_C::DisplayAbilityActivateErrorMessages(const struct FGameplayTagContainer& AbilityBlockedByTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.DisplayAbilityActivateErrorMessages");

	UWB_Gameplay_C_DisplayAbilityActivateErrorMessages_Params params;
	params.AbilityBlockedByTags = AbilityBlockedByTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_Gameplay.WB_Gameplay_C.ExecuteUbergraph_WB_Gameplay
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Gameplay_C::ExecuteUbergraph_WB_Gameplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Gameplay.WB_Gameplay_C.ExecuteUbergraph_WB_Gameplay");

	UWB_Gameplay_C_ExecuteUbergraph_WB_Gameplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
