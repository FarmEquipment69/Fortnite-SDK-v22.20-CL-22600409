// BlueprintGeneratedClass GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C
// Size: 0xa11 (Inherited: 0x960)
struct AGC_Athena_OutsideSafeZone_C : AFortGameplayCueNotifyLoop_OutsideSafeZone {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UPointLightComponent* Random Lighting Light; // 0x968(0x08)
	float LightningFlashTL_LERP_3FDEC95248645BE865DCD0840F99915A; // 0x970(0x04)
	enum class ETimelineDirection LightningFlashTL__Direction_3FDEC95248645BE865DCD0840F99915A; // 0x974(0x01)
	char pad_975[0x3]; // 0x975(0x03)
	struct UTimelineComponent* LightningFlashTL; // 0x978(0x08)
	struct USoundBase* Storm Sound; // 0x980(0x08)
	double LightningFlashDiameter; // 0x988(0x08)
	double LightningFlashHeight; // 0x990(0x08)
	struct FVector Lightning Spawn Location; // 0x998(0x18)
	double %ChanceOfLightningMesh; // 0x9b0(0x08)
	double Lightning Intensity; // 0x9b8(0x08)
	double LightningIntensityMin; // 0x9c0(0x08)
	double LightningIntensityMax; // 0x9c8(0x08)
	double LightningTimelinePlaySpeedMin; // 0x9d0(0x08)
	double LightningTimelinePlaySpeedMax; // 0x9d8(0x08)
	struct APlayerPawn_Athena_Generic_C* Player Pawn; // 0x9e0(0x08)
	double LightningFlashRepeatDelayMin; // 0x9e8(0x08)
	double LightningFlashRepeatDelayMax; // 0x9f0(0x08)
	int32_t Storm Stage; // 0x9f8(0x04)
	struct FGameplayTag StormAudioTag_Low; // 0x9fc(0x04)
	struct FGameplayTag StormAudioTag_Medium; // 0xa00(0x04)
	struct FGameplayTag StormAudioTag_High; // 0xa04(0x04)
	struct UAmbientAudioDataAsset* StormAudioBank; // 0xa08(0x08)
	bool StormEffectsEnabled; // 0xa10(0x01)

	void Random Lighting Flashes(); // Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.Random Lighting Flashes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Get Location in Circle XY(struct FVector& Location Local Space); // Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.Get Location in Circle XY // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void LightningFlashTL__FinishedFunc(); // Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.LightningFlashTL__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void LightningFlashTL__UpdateFunc(); // Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.LightningFlashTL__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void FlashTimeline(); // Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.FlashTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnStormEffectsEnabled(bool bEnabled); // Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnStormEffectsEnabled // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GC_Athena_OutsideSafeZone(int32_t EntryPoint); // Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.ExecuteUbergraph_GC_Athena_OutsideSafeZone // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

