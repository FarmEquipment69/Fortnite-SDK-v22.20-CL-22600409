// BlueprintGeneratedClass GCNL_Athena_Player_TacticalSprint_EnergyDrain.GCNL_Athena_Player_TacticalSprint_EnergyDrain_C
// Size: 0x998 (Inherited: 0x960)
struct AGCNL_Athena_Player_TacticalSprint_EnergyDrain_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	double FrequencyToCheckEnergy; // 0x968(0x08)
	struct TArray<struct UAudioComponent*> Audio Components; // 0x970(0x10)
	struct UTacticalSprintEnergyComponent_C* TacSprintComp; // 0x980(0x08)
	struct AActor* Pawn; // 0x988(0x08)
	double CurrentEnergyPercentage; // 0x990(0x08)

	void OnPlayerFootstep(); // Function GCNL_Athena_Player_TacticalSprint_EnergyDrain.GCNL_Athena_Player_TacticalSprint_EnergyDrain_C.OnPlayerFootstep // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BindToFootstepEvent(struct AActor* Pawn, bool  Unbind); // Function GCNL_Athena_Player_TacticalSprint_EnergyDrain.GCNL_Athena_Player_TacticalSprint_EnergyDrain_C.BindToFootstepEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_Player_TacticalSprint_EnergyDrain.GCNL_Athena_Player_TacticalSprint_EnergyDrain_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void UpdateFX(); // Function GCNL_Athena_Player_TacticalSprint_EnergyDrain.GCNL_Athena_Player_TacticalSprint_EnergyDrain_C.UpdateFX // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_Player_TacticalSprint_EnergyDrain.GCNL_Athena_Player_TacticalSprint_EnergyDrain_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Athena_Player_TacticalSprint_EnergyDrain(int32_t EntryPoint); // Function GCNL_Athena_Player_TacticalSprint_EnergyDrain.GCNL_Athena_Player_TacticalSprint_EnergyDrain_C.ExecuteUbergraph_GCNL_Athena_Player_TacticalSprint_EnergyDrain // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

