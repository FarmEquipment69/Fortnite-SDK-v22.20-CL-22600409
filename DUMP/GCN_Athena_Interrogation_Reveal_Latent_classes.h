// BlueprintGeneratedClass GCN_Athena_Interrogation_Reveal_Latent.GCN_Athena_Interrogation_Reveal_Latent_C
// Size: 0x5c9 (Inherited: 0x528)
struct AGCN_Athena_Interrogation_Reveal_Latent_C : AFortGameplayCueNotify_BurstLatent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UPostProcessComponent* PostProcess; // 0x530(0x08)
	double SweepDuration; // 0x538(0x08)
	struct FTimerHandle SweepDelayHandle; // 0x540(0x08)
	double SweepRadius; // 0x548(0x08)
	struct FVector SourceObjectLocation; // 0x550(0x18)
	struct APlayerPawn_Athena_C* PlayerPawnAthena; // 0x568(0x08)
	double DelayBeforeSweep; // 0x570(0x08)
	struct FTimerHandle DelayBeforeSweepHandle; // 0x578(0x08)
	struct FVector ParticleRelativeLocation; // 0x580(0x18)
	struct USoundMix* RevealSoundMix; // 0x598(0x08)
	struct FScalableFloat StencilDuration; // 0x5a0(0x28)
	bool bShouldPlayParticleEffectOnHand; // 0x5c8(0x01)

	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCN_Athena_Interrogation_Reveal_Latent.GCN_Athena_Interrogation_Reveal_Latent_C.OnExecute // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BeginSweepFX(); // Function GCN_Athena_Interrogation_Reveal_Latent.GCN_Athena_Interrogation_Reveal_Latent_C.BeginSweepFX // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EndSweepFX(); // Function GCN_Athena_Interrogation_Reveal_Latent.GCN_Athena_Interrogation_Reveal_Latent_C.EndSweepFX // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function GCN_Athena_Interrogation_Reveal_Latent.GCN_Athena_Interrogation_Reveal_Latent_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PlayWorldSweep(); // Function GCN_Athena_Interrogation_Reveal_Latent.GCN_Athena_Interrogation_Reveal_Latent_C.PlayWorldSweep // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent(int32_t EntryPoint); // Function GCN_Athena_Interrogation_Reveal_Latent.GCN_Athena_Interrogation_Reveal_Latent_C.ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

