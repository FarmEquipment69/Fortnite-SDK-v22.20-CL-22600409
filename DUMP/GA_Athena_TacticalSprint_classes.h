// BlueprintGeneratedClass GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C
// Size: 0xea0 (Inherited: 0xb20)
struct UGA_Athena_TacticalSprint_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FActiveGameplayEffectHandle SprintGE; // 0xb28(0x08)
	struct AFortPlayerPawn* FortPlayerPawn; // 0xb30(0x08)
	struct FGameplayTag GC_SprintEnd; // 0xb38(0x04)
	struct FGameplayTag GC_Speedlines; // 0xb3c(0x04)
	struct FTimerHandle Timer_FullSpeedGC; // 0xb40(0x08)
	double CosmeticTimeTakenToFullSpeed; // 0xb48(0x08)
	struct FTimerHandle Timer_Acceleration; // 0xb50(0x08)
	double MinEnergyToActivate; // 0xb58(0x08)
	struct FGameplayTag EnergyUseIdentifier; // 0xb60(0x04)
	struct FGameplayTag GC_SprintAccelerate; // 0xb64(0x04)
	struct FScalableFloat HF_TacSprintEnabled; // 0xb68(0x28)
	struct FScalableFloat HF_AccelerationFrequency; // 0xb90(0x28)
	struct FScalableFloat HF_SafetyKillTimer; // 0xbb8(0x28)
	struct FGameplayTag GC_EnergyDrain; // 0xbe0(0x04)
	struct FGameplayTag GC_EnergyFullyDrained; // 0xbe4(0x04)
	struct FScalableFloat HF_EnergyCostOnStart; // 0xbe8(0x28)
	struct FScalableFloat HF_EnergyCostOnJump; // 0xc10(0x28)
	struct FScalableFloat HF_EnergyCostOnSlide; // 0xc38(0x28)
	bool IsJumping; // 0xc60(0x01)
	char pad_C61[0x7]; // 0xc61(0x07)
	struct FTimerHandle Timer_FallingTimeout; // 0xc68(0x08)
	bool InfiniteSprint; // 0xc70(0x01)
	char pad_C71[0x7]; // 0xc71(0x07)
	struct FTimerHandle Timer_SafetyKill; // 0xc78(0x08)
	bool DebuggingDisplayLogsOnScreen; // 0xc80(0x01)
	char pad_C81[0x7]; // 0xc81(0x07)
	struct UTacticalSprintControllerComponent_C* CachedTacticalSprintComponent; // 0xc88(0x08)
	struct FScalableFloat HF_TimeFallingAllowedBeforeCanceling; // 0xc90(0x28)
	struct UAbilityAsync_WaitGameplayEvent* WaitForPrimaryInputPress; // 0xcb8(0x08)
	struct FGameplayTagContainer TagSprintFailed; // 0xcc0(0x20)
	struct FGameplayTagContainer TagSprintFailed_LowEnergy; // 0xce0(0x20)
	struct FScalableFloat HF_SpeedMultiplier; // 0xd00(0x28)
	struct FScalableFloat HF_JumpHeightMultiplier; // 0xd28(0x28)
	struct FScalableFloat HF_EnergyCostPerSecond; // 0xd50(0x28)
	struct FScalableFloat HF_MaxEnergy; // 0xd78(0x28)
	struct UGameplayEffect* TacSprintGEClass; // 0xda0(0x08)
	double LevelForLookupOfShouldUseNewAccelMethod; // 0xda8(0x08)
	struct FScalableFloat HF_ShouldUseNewAccelMethod; // 0xdb0(0x28)
	double SingleStackSpeedMultiplier; // 0xdd8(0x08)
	double SingleStackJumpZMultiplier; // 0xde0(0x08)
	struct FActiveGameplayEffectHandle Sprint Accel GE; // 0xde8(0x08)
	struct FScalableFloat HF_UseGEModifForAcceleration; // 0xdf0(0x28)
	double CurrentSprintSpeedMultiplierMagnitude; // 0xe18(0x08)
	struct FTimerHandle TimerHandleForGEModif; // 0xe20(0x08)
	struct FScalableFloat HF_SpeedMultiplerMax; // 0xe28(0x28)
	double IterationSpeedIncrement; // 0xe50(0x08)
	struct FScalableFloat HF_JumpHeightMultiplierTotal; // 0xe58(0x28)
	struct FGameplayTagContainer Sprint Jumping Tag; // 0xe80(0x20)

	void HolsterWeapon(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.HolsterWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TryHolsterWeapon(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.TryHolsterWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UnbindOnEnteredEditMode(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.UnbindOnEnteredEditMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BindOnEnteredEditMode(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.BindOnEnteredEditMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ApplyStackOfSpeedAndJumpModifiers(double SingleStackMaxSpeedMultiplier, double SingleStackJumpZMultiplier, struct UGameplayEffect* GameplayEffectClass, double Duration, struct FActiveGameplayEffectHandle& GameplayEffectHandle); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.ApplyStackOfSpeedAndJumpModifiers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleFailedToSprint(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.HandleFailedToSprint // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetUseHighLocationToleranceForAcceleration(bool bShouldUseHighTolerance); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.SetUseHighLocationToleranceForAcceleration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UnbindOnReloadCancelingSprint(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.UnbindOnReloadCancelingSprint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BindOnReloadCancelingSprint(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.BindOnReloadCancelingSprint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FindFortPlayerPawnCached(struct AFortPlayerPawn*& FortPlayerPawn); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.FindFortPlayerPawnCached // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HasZeroEnergy(bool& Has Zero Energy); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.HasZeroEnergy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CheckMovementModeWhenEnergyDrained(bool& Not Jumping - End Immediately, bool& Other States - Need to End Sprint Now, bool& Is Airborne - Wait for no longer airborne, bool& Still Walking - Make sure jumping happens); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.CheckMovementModeWhenEnergyDrained // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void IsSprintJumping(bool& IsJumping); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.IsSprintJumping // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void BindToCheckIfFalling(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.BindToCheckIfFalling // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UnbindToFortPlayerPawnDied(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.UnbindToFortPlayerPawnDied // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void LogAndVisualLog(enum class ESprintLoggingVerbosityLevel Verbosity, struct FString& LogString); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.LogAndVisualLog // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BindToFortPlayerPawnDied(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.BindToFortPlayerPawnDied // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Register For Safety Kill(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.Register For Safety Kill // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PayEnergyCostOnSlide(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.PayEnergyCostOnSlide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleTutorialQuestUpdate(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.HandleTutorialQuestUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CostEnergyOnJump(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.CostEnergyOnJump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetTacticalSprintComponent(struct UTacticalSprintControllerComponent_C*& TacticalSprintComponent); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.GetTacticalSprintComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleSlidingStopped(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.HandleSlidingStopped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleSlidingStarted(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.HandleSlidingStarted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetTacticalSprintEnergyComponent(struct UFortComponent_Energy*& TacticalSprintEnergyComponent); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.GetTacticalSprintEnergyComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StopDrainingEnergy(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.StopDrainingEnergy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StartDrainingEnergy(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.StartDrainingEnergy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void NotifySprintEnded(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.NotifySprintEnded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NotifySprintStarted(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.NotifySprintStarted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SafetyKillTimer(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.SafetyKillTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Full Speed Reached(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.Full Speed Reached // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Accelerate(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.Accelerate // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnEnergyDrained(struct UFortComponent_Energy* EnergyComponent); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.OnEnergyDrained // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetUpTagBinds(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.SetUpTagBinds // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandlePawnJumped(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.HandlePawnJumped // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleMovementModeChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.HandleMovementModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CheckIfStillFalling(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.CheckIfStillFalling // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EndAbilityAtTopOfFrame(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.EndAbilityAtTopOfFrame // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EndAbilityAtTopOfNextFrame(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.EndAbilityAtTopOfNextFrame // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetInfiniteSprint(bool NewInfiniteSprint); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.SetInfiniteSprint // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetSlideCancellation(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.ResetSlideCancellation // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleMovementModeBecameSliding(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.HandleMovementModeBecameSliding // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupAircraftBinds(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.SetupAircraftBinds // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleEnteredAircraft(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.HandleEnteredAircraft // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ClearAircraftBinds(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.ClearAircraftBinds // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnFortPlayerPawnDied(struct AFortPlayerPawnAthena* FortPlayerPawnAthena); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.OnFortPlayerPawnDied // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Check if Jump Succeeded - Out of Energy(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.Check if Jump Succeeded - Out of Energy // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnReloadCancelingSprint(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.OnReloadCancelingSprint // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPlayerStartDBNO(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.OnPlayerStartDBNO // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ToggleAccelMode(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.ToggleAccelMode // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ApplySpeedAndJumpZIncreaseOverTime(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.ApplySpeedAndJumpZIncreaseOverTime // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnEnteredEditMode(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.OnEnteredEditMode // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void IncreaseGEValue(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.IncreaseGEValue // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StartGameplayEffectAtBaseValue(); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.StartGameplayEffectAtBaseValue // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandlePawnLanded(struct FHitResult& Hit); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.HandlePawnLanded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Athena_TacticalSprint(int32_t EntryPoint); // Function GA_Athena_TacticalSprint.GA_Athena_TacticalSprint_C.ExecuteUbergraph_GA_Athena_TacticalSprint // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

