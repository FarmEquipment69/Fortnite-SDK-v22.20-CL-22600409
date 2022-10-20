// BlueprintGeneratedClass GCNL_Ascender_Descent.GCNL_Ascender_Descent_C
// Size: 0x988 (Inherited: 0x960)
struct AGCNL_Ascender_Descent_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct FTimerHandle SoundVisualizerHandle; // 0x968(0x08)
	struct AActor* My Target; // 0x970(0x08)
	struct UAudioComponent* AudioComponent; // 0x978(0x08)
	struct UTexture* Override Icon; // 0x980(0x08)

	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void VisualizeAudio(); // Function GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.VisualizeAudio // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Ascender_Descent(int32_t EntryPoint); // Function GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.ExecuteUbergraph_GCNL_Ascender_Descent // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

