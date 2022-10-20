// BlueprintGeneratedClass GCNL_Athena_Player_TacticalSprint_Speedlines.GCNL_Athena_Player_TacticalSprint_Speedlines_C
// Size: 0x989 (Inherited: 0x960)
struct AGCNL_Athena_Player_TacticalSprint_Speedlines_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	double TimeBetweenLoopUpdates; // 0x968(0x08)
	struct TArray<struct UNiagaraComponent*> Particle Components; // 0x970(0x10)
	struct ACharacter* TargetCharacter; // 0x980(0x08)
	bool IsLocallyViewed; // 0x988(0x01)

	void GetPercentageSprintEnergy(struct AActor* Energy Owning Actor, double& CurrentEnergyPercentage); // Function GCNL_Athena_Player_TacticalSprint_Speedlines.GCNL_Athena_Player_TacticalSprint_Speedlines_C.GetPercentageSprintEnergy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void OnLoopingStartNiagara(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UNiagaraComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_Player_TacticalSprint_Speedlines.GCNL_Athena_Player_TacticalSprint_Speedlines_C.OnLoopingStartNiagara // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void LoopUpdate(); // Function GCNL_Athena_Player_TacticalSprint_Speedlines.GCNL_Athena_Player_TacticalSprint_Speedlines_C.LoopUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MovementModeChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GCNL_Athena_Player_TacticalSprint_Speedlines.GCNL_Athena_Player_TacticalSprint_Speedlines_C.MovementModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_Player_TacticalSprint_Speedlines.GCNL_Athena_Player_TacticalSprint_Speedlines_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Athena_Player_TacticalSprint_Speedlines(int32_t EntryPoint); // Function GCNL_Athena_Player_TacticalSprint_Speedlines.GCNL_Athena_Player_TacticalSprint_Speedlines_C.ExecuteUbergraph_GCNL_Athena_Player_TacticalSprint_Speedlines // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

