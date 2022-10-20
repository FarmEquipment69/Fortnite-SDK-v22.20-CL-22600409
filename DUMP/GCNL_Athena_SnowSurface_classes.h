// BlueprintGeneratedClass GCNL_Athena_SnowSurface.GCNL_Athena_SnowSurface_C
// Size: 0x998 (Inherited: 0x972)
struct AGCNL_Athena_SnowSurface_C : AGCNL_Athena_Surface_Parent_C {
	char pad_972[0x6]; // 0x972(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x978(0x08)
	struct UNiagaraComponent* FootStepFX; // 0x980(0x08)
	bool bNotValid; // 0x988(0x01)
	bool bReplayMode; // 0x989(0x01)
	char pad_98A[0x6]; // 0x98a(0x06)
	struct AFortReplaySpectatorAthena* ReplayController; // 0x990(0x08)

	void OnPlayerFootstep(); // Function GCNL_Athena_SnowSurface.GCNL_Athena_SnowSurface_C.OnPlayerFootstep // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoopingStartNiagara(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UNiagaraComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_SnowSurface.GCNL_Athena_SnowSurface_C.OnLoopingStartNiagara // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_SnowSurface.GCNL_Athena_SnowSurface_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_SnowSurface.GCNL_Athena_SnowSurface_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Athena_SnowSurface(int32_t EntryPoint); // Function GCNL_Athena_SnowSurface.GCNL_Athena_SnowSurface_C.ExecuteUbergraph_GCNL_Athena_SnowSurface // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

