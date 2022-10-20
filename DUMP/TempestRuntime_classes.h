// Class TempestRuntime.FortAIControllerComponent_Tempest
// Size: 0xb8 (Inherited: 0xa0)
struct UFortAIControllerComponent_Tempest : UFortControllerComponent {
	struct UFortTimeOfDayWeatherComponent* WeatherComponent; // 0xa0(0x08)
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class TempestRuntime.FortCheatManager_Tempest
// Size: 0x28 (Inherited: 0x28)
struct UFortCheatManager_Tempest : UChildCheatManager {

	void EndTempestStorm(struct FString StormName); // Function TempestRuntime.FortCheatManager_Tempest.EndTempestStorm // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x5c90b24
};

// Class TempestRuntime.TempestMovementComponent
// Size: 0x1b0 (Inherited: 0xa0)
struct UTempestMovementComponent : UGameFrameworkComponent {
	struct FTempestReplicatedMovementData MovementData; // 0xa0(0x50)
	struct FMulticastInlineDelegate OnTempestMovementStuck; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnTempestSafeZoneStateChanged; // 0x100(0x10)
	enum class ETempestMovementMode MovementMode; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct UEnvQuery* FindNextMovementLocationQuery; // 0x118(0x08)
	struct AFortAthenaPatrolPath* MovementPath; // 0x120(0x08)
	struct FScalableFloat MovementSpeed; // 0x128(0x28)
	struct FScalableFloat RotationSpeed; // 0x150(0x28)
	char bShouldIgnoreZMovement : 1; // 0x178(0x01)
	char bFloatOnWater : 1; // 0x178(0x01)
	char pad_178_2 : 6; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct FScalableFloat WaterTraceZOffset; // 0x180(0x28)
	char pad_1A8[0x8]; // 0x1a8(0x08)

	void OnRep_MovementData(); // Function TempestRuntime.TempestMovementComponent.OnRep_MovementData // (Final|Native|Private|Const) // @ game+0x68588fc
};

// Class TempestRuntime.TempestStateMachineComponent
// Size: 0x170 (Inherited: 0xa0)
struct UTempestStateMachineComponent : UGameFrameworkComponent {
	bool bDestroyOnCompletion; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FScalableFloat FormationDuration; // 0xa8(0x28)
	struct FScalableFloat ActiveDuration; // 0xd0(0x28)
	struct FScalableFloat DissipationDuration; // 0xf8(0x28)
	struct FTempestStateInfo CurrentStateInfo; // 0x120(0x0c)
	char pad_12C[0x1c]; // 0x12c(0x1c)
	struct FMulticastInlineDelegate OnTempestStateChangedDelegate; // 0x148(0x10)
	char pad_158[0x18]; // 0x158(0x18)

	void OnRep_CurrentStateInfo(); // Function TempestRuntime.TempestStateMachineComponent.OnRep_CurrentStateInfo // (Final|Native|Private) // @ game+0x68588bc
	struct FTempestStateInfo GetCurrentStateInfo(); // Function TempestRuntime.TempestStateMachineComponent.GetCurrentStateInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6858894
	float GetCurrentStateCompletionPercentage(); // Function TempestRuntime.TempestStateMachineComponent.GetCurrentStateCompletionPercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x685886c
	enum class ETempestState GetCurrentState(); // Function TempestRuntime.TempestStateMachineComponent.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6858854
	void ForceDissipate(struct FString InDissipationReason); // Function TempestRuntime.TempestStateMachineComponent.ForceDissipate // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x68586a0
};

