// BlueprintGeneratedClass GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C
// Size: 0x9c0 (Inherited: 0x960)
struct AGCNL_Ascender_Ascent_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x968(0x08)
	double MinCamShakeAmp; // 0x970(0x08)
	double MaxCamShakeAmp; // 0x978(0x08)
	double MinCamShakeFreq; // 0x980(0x08)
	double MaxCamShakeFreq; // 0x988(0x08)
	struct ULegacyCameraShake* matineeCamShake; // 0x990(0x08)
	struct FScalableFloat MaxAscenderSpeed; // 0x998(0x28)

	void OnApplicationGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.OnApplicationGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void cameraShakeTimer(); // Function GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.cameraShakeTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Ascender_Ascent(int32_t EntryPoint); // Function GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.ExecuteUbergraph_GCNL_Ascender_Ascent // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

