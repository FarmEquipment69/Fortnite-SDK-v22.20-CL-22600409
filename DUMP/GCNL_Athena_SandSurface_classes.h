// BlueprintGeneratedClass GCNL_Athena_SandSurface.GCNL_Athena_SandSurface_C
// Size: 0x998 (Inherited: 0x972)
struct AGCNL_Athena_SandSurface_C : AGCNL_Athena_Surface_Parent_C {
	char pad_972[0x6]; // 0x972(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x978(0x08)
	struct UNiagaraComponent* FootStepFX; // 0x980(0x08)
	bool bNotValid; // 0x988(0x01)
	bool bReplayMode; // 0x989(0x01)
	char pad_98A[0x6]; // 0x98a(0x06)
	struct AFortReplaySpectatorAthena* ReplayController; // 0x990(0x08)

	void OnPlayerFootstep(); // Function GCNL_Athena_SandSurface.GCNL_Athena_SandSurface_C.OnPlayerFootstep // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoopingStartNiagara(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UNiagaraComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_SandSurface.GCNL_Athena_SandSurface_C.OnLoopingStartNiagara // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Athena_SandSurface(int32_t EntryPoint); // Function GCNL_Athena_SandSurface.GCNL_Athena_SandSurface_C.ExecuteUbergraph_GCNL_Athena_SandSurface // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

