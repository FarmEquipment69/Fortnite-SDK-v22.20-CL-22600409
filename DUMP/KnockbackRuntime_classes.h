// Class KnockbackRuntime.FortAthenaMutator_Knockback
// Size: 0x570 (Inherited: 0x330)
struct AFortAthenaMutator_Knockback : AFortAthenaMutator {
	bool bStorePlayerKnockbackData; // 0x330(0x01)
	bool bReplicatePlayerKnockbackData; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)
	struct FMulticastInlineDelegate OnPlayerKnockbackDataChanged; // 0x338(0x10)
	struct FKnockbackMutatorDataArray AllPlayersKnockbackData; // 0x348(0x120)
	struct FScalableFloat bDisplayKnockbackDamageNumbersAsPercentage; // 0x468(0x28)
	struct FScalableFloat ConvertToKnockbackDamageMultiplier; // 0x490(0x28)
	struct FScalableFloat PercentDamageLowMaxThreshold; // 0x4b8(0x28)
	struct FScalableFloat PercentDamageMediumMaxThreshold; // 0x4e0(0x28)
	float KnockbackMultiplierInitialValue; // 0x508(0x04)
	char pad_50C[0x64]; // 0x50c(0x64)

	void SetPlayersShouldBreakThroughStructures(bool bActive, struct AFortPlayerPawn* PlayerPawn); // Function KnockbackRuntime.FortAthenaMutator_Knockback.SetPlayersShouldBreakThroughStructures // (Final|Native|Public|BlueprintCallable) // @ game+0x68836d0
	void HandleBlockedCharacterMovement(struct FHitResult& InOutImpact, struct AFortPawn* FortPawn); // Function KnockbackRuntime.FortAthenaMutator_Knockback.HandleBlockedCharacterMovement // (Final|Native|Private|HasOutParms) // @ game+0x688355c
	float GetPercentDamageMediumMaxThreshold(); // Function KnockbackRuntime.FortAthenaMutator_Knockback.GetPercentDamageMediumMaxThreshold // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6883528
	float GetPercentDamageLowMaxThreshold(); // Function KnockbackRuntime.FortAthenaMutator_Knockback.GetPercentDamageLowMaxThreshold // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68834f4
	float GetKnockbackMultiplierInitialValue(); // Function KnockbackRuntime.FortAthenaMutator_Knockback.GetKnockbackMultiplierInitialValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68834dc
	struct TArray<struct FKnockbackMutatorData> GetAllPlayersKnockbackData(); // Function KnockbackRuntime.FortAthenaMutator_Knockback.GetAllPlayersKnockbackData // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x6883438
};

// Class KnockbackRuntime.FortGameplayAbility_KnockbackMutator
// Size: 0xb30 (Inherited: 0xb20)
struct UFortGameplayAbility_KnockbackMutator : UFortGameplayAbility {
	struct AFortAthenaMutator_Knockback* CachedMutator; // 0xb20(0x08)
	struct AFortAthenaMutator_Knockback* MutatorClassToGet; // 0xb28(0x08)

	void SaveKnockbackData(struct FKnockbackMutatorData& InKnockbackData); // Function KnockbackRuntime.FortGameplayAbility_KnockbackMutator.SaveKnockbackData // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x6883650
	struct AFortAthenaMutator_Knockback* GetCachedMutator(); // Function KnockbackRuntime.FortGameplayAbility_KnockbackMutator.GetCachedMutator // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x68834b8
};

