// Class TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint
// Size: 0x1a8 (Inherited: 0xa0)
struct UFortPlayerControllerComponent_TacticalSprint : UControllerComponent {
	char pad_A0[0x18]; // 0xa0(0x18)
	struct AFortPlayerPawn* CurrentBoundPlayerPawn; // 0xb8(0x08)
	char bTacticalSprintEnabled : 1; // 0xc0(0x01)
	char bWantsToTacticalSprint : 1; // 0xc0(0x01)
	char bHandlingMoveForward : 1; // 0xc0(0x01)
	char bIsSprinting : 1; // 0xc0(0x01)
	char bWasInBuildMode : 1; // 0xc0(0x01)
	char bFireAnalyticsEventOnEndPlay : 1; // 0xc0(0x01)
	char pad_C0_6 : 2; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	struct FGameplayTag TacticalSprintAbilityGameplayTag; // 0xc4(0x04)
	struct FGameplayTag DisableTacticalSprintAbilityGameplayTag; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FScalableFloat TacticalSprintEnabled; // 0xd0(0x28)
	struct FScalableFloat TacticalSprintToggleGracePeriod; // 0xf8(0x28)
	struct FMulticastInlineDelegate OnTacticalSprintStarted; // 0x120(0x10)
	struct FMulticastInlineDelegate OnTacticalSprintEnded; // 0x130(0x10)
	struct FMulticastInlineDelegate OnFailedToSprint; // 0x140(0x10)
	struct FTimerHandle StopWantingToSprintTimerReceipt; // 0x150(0x08)
	char pad_158[0x48]; // 0x158(0x48)
	struct UInputComponent* InputComponent; // 0x1a0(0x08)

	void SetIsSprinting(bool bNewIsSprinting); // Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.SetIsSprinting // (Final|Native|Public|BlueprintCallable) // @ game+0x672a964
	void OnWeaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PreviousWeapon); // Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnWeaponEquipped // (Final|Native|Private) // @ game+0x672a8a0
	void OnPawnChanged(struct AFortPawn* InPawn); // Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPawnChanged // (Final|Native|Private) // @ game+0x672a804
	void OnMovementModeChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMovementModeChanged // (Final|Native|Private) // @ game+0x672a708
	void OnAutoRunChanged(bool bAutoRunIsOn); // Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnAutoRunChanged // (Final|Native|Private) // @ game+0x672a688
	void LogAndVisualLog(struct UObject* LoggingSource, enum class ESprintLoggingVerbosityLevel Verbosity, struct FString& LogString); // Function TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.LogAndVisualLog // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x672a4d0
};

