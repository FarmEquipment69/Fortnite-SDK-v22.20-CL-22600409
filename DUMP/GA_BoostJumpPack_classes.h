// BlueprintGeneratedClass GA_BoostJumpPack.GA_BoostJumpPack_C
// Size: 0xd74 (Inherited: 0xb40)
struct UGA_BoostJumpPack_C : UFortGameplayAbility_JumpBoostPack {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb40(0x08)
	double Jump Multiple; // 0xb48(0x08)
	struct FVector Basic Jump Z Adjust; // 0xb50(0x18)
	struct FVector FinalJumpHeight; // 0xb68(0x18)
	struct FGameplayEventData EventTriggerData; // 0xb80(0xb0)
	bool bJumpButtonHeld; // 0xc30(0x01)
	bool bHoverButtonHeld; // 0xc31(0x01)
	bool bAtApex; // 0xc32(0x01)
	char pad_C33[0x1]; // 0xc33(0x01)
	struct FActiveGameplayEffectHandle JetpackEffectHandle; // 0xc34(0x08)
	char pad_C3C[0x4]; // 0xc3c(0x04)
	struct AFortPlayerPawn* FortPlayerPawn; // 0xc40(0x08)
	double FuelFudge; // 0xc48(0x08)
	struct FActiveGameplayEffectHandle RegenEffectHandle; // 0xc50(0x08)
	bool bRegenEffectActive; // 0xc58(0x01)
	char pad_C59[0x7]; // 0xc59(0x07)
	struct FGameplayTagContainer BoostExecuteTags; // 0xc60(0x20)
	int32_t HoverButtonHeldCount; // 0xc80(0x04)
	char pad_C84[0x4]; // 0xc84(0x04)
	struct FGameplayTagContainer HoverExecuteTags; // 0xc88(0x20)
	int32_t JumpButtonHeldCount; // 0xca8(0x04)
	char pad_CAC[0x4]; // 0xcac(0x04)
	struct FGameplayTagContainer HoverReleaseTags; // 0xcb0(0x20)
	double TimeStartedHovering; // 0xcd0(0x08)
	double TimeStartedFalling; // 0xcd8(0x08)
	double EndHoverDelay; // 0xce0(0x08)
	double EndFallingDelay; // 0xce8(0x08)
	struct FGameplayTagContainer BoostReleaseTags; // 0xcf0(0x20)
	bool bHasDied; // 0xd10(0x01)
	char pad_D11[0x3]; // 0xd11(0x03)
	struct FGameplayTag BoostCue; // 0xd14(0x04)
	struct FGameplayTag BoostJumpPackCue; // 0xd18(0x04)
	char pad_D1C[0x4]; // 0xd1c(0x04)
	struct UGameplayEffect* JetpackInUseEffect; // 0xd20(0x08)
	bool TriggeredByJump; // 0xd28(0x01)
	char pad_D29[0x7]; // 0xd29(0x07)
	struct FGameplayTagContainer BlockExecuteTags; // 0xd30(0x20)
	struct UGameplayEffect* JetpackInUseEffect_Alt; // 0xd50(0x08)
	struct FGameplayTag HidingPropTag; // 0xd58(0x04)
	struct FGameplayTag ZiplineTag; // 0xd5c(0x04)
	struct FGameplayTag GliderRedeployTag; // 0xd60(0x04)
	struct FGameplayTag InitialBoostCue; // 0xd64(0x04)
	bool bFirstBoost; // 0xd68(0x01)
	char pad_D69[0x3]; // 0xd69(0x03)
	struct FGameplayTag BoostEndCue; // 0xd6c(0x04)
	struct FGameplayTag BoostOutOfFuelEndCue; // 0xd70(0x04)

	double GetReserveFuel(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.GetReserveFuel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void HandleBoostEnded(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleBoostEnded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleJetpackInitialBoost(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleJetpackInitialBoost // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool NotInHidingSpot(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.NotInHidingSpot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void Handle Jetpack Equipped(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Handle Jetpack Equipped // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool Reasons To Reset on Transition(struct FGameplayTag tag); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Reasons To Reset on Transition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	struct AFortPlayerPawn* Get Player Pawn(struct UObject* Object); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Get Player Pawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	bool IsCurrentlyDead(struct FGameplayTag TagOne); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.IsCurrentlyDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void Reengage Falling Movement(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Reengage Falling Movement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Reengage Hovering Movement(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Reengage Hovering Movement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SavePlayerPawn(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.SavePlayerPawn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnAbilityCanceled(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnAbilityCanceled // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnFuelIsEmpty(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnFuelIsEmpty // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnFuelIsFull(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnFuelIsFull // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Reset Toggle Input State(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Reset Toggle Input State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ProcessTriggerData(struct FGameplayTag TagOne); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.ProcessTriggerData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Stop Regen Effect(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Stop Regen Effect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Start Regen Effect(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Start Regen Effect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Consider Stopping Regen Effect(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Consider Stopping Regen Effect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Consider Starting Regen Effect(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Consider Starting Regen Effect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool IsBoostAllowed(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.IsBoostAllowed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.K2_OnEndAbility // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.K2_ShouldAbilityRespondToEvent // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void GetMaxFuel(double& MaxFuel); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.GetMaxFuel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void GetFuel(double& Fuel); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.GetFuel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void Setup PlayerPawn(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Setup PlayerPawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool IsUsingJetpackEffectActive(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.IsUsingJetpackEffectActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleCurrentBoostStateChanged(enum class EJumpBoostPackState PreviousState, enum class EJumpBoostPackState CurrentState); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleCurrentBoostStateChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetCurrentBoostState(enum class EJumpBoostPackState NewState); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.SetCurrentBoostState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PotentiallyEndHovering(bool bForceEndHovering); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.PotentiallyEndHovering // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Setup Notify at Apex(bool bNotifyApex); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Setup Notify at Apex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleIdle(bool bForceEndHovering); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleIdle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleFalling(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleFalling // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleHovering(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleHovering // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetTransitionVariables(bool bForceEndHovering); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.ResetTransitionVariables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TransitionFromFalling(enum class Enum_BoostJumpStates& TargetBoostState); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromFalling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TransitionFromHovering(enum class Enum_BoostJumpStates& TargetBoostState); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromHovering // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TransitionFromBoost(enum class Enum_BoostJumpStates& TargetBoostState); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromBoost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TransitionFromIdle(enum class Enum_BoostJumpStates& TargetBoostState); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromIdle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void ProcessAbilityStateMachine(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.ProcessAbilityStateMachine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DetermineStateToTransitionTo(enum class Enum_BoostJumpStates& BoostState); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.DetermineStateToTransitionTo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupTransitionVariables(struct FGameplayTag InTag); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.SetupTransitionVariables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleBoostJump(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleBoostJump // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetJumpHeight(struct AFortPlayerPawn* Pawn, struct AFortPlayerPawn*& Pawn Out, struct FVector& Jump Height); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.SetJumpHeight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_A54C58044C5CE8F3DABC60A214FC45E0(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Added_A54C58044C5CE8F3DABC60A214FC45E0 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_B611282348ECFDA3CD120D87734E357C(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Added_B611282348ECFDA3CD120D87734E357C // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_D3A68EA84FC920CD9E2949BE05D3A5AC(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Added_D3A68EA84FC920CD9E2949BE05D3A5AC // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_F6D39ED5491065B2594D37A44C404CA7(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Added_F6D39ED5491065B2594D37A44C404CA7 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPawnLanded(struct FHitResult& Hit); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnPawnLanded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void On Reached Jump Apex(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.On Reached Jump Apex // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnCurrentStateChanged(enum class EJumpBoostPackState InPreviousState, enum class EJumpBoostPackState InCurrentState); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnCurrentStateChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void Delay_ProcessAbilityStateMachine(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Delay_ProcessAbilityStateMachine // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSavedPawnChanged (struct AFortPlayerPawn* PreviousPawn, struct AFortPlayerPawn* NewPawn); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnSavedPawnChanged  // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnEnterVehicle(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnEnterVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_BoostJumpPack(int32_t EntryPoint); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.ExecuteUbergraph_GA_BoostJumpPack // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

