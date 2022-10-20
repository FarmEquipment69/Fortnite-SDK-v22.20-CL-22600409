// BlueprintGeneratedClass GCNL_Zipline_Downhill.GCNL_Zipline_Downhill_C
// Size: 0x998 (Inherited: 0x960)
struct AGCNL_Zipline_Downhill_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x968(0x08)
	struct ULegacyCameraShake* matineeCamShake; // 0x970(0x08)
	double MinCamShakeAmp; // 0x978(0x08)
	double MaxCamShakeAmp; // 0x980(0x08)
	double MinCamShakeFreq; // 0x988(0x08)
	double MaxCamShakeFreq; // 0x990(0x08)

	void OnApplicationGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Zipline_Downhill.GCNL_Zipline_Downhill_C.OnApplicationGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Zipline_Downhill.GCNL_Zipline_Downhill_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Zipline_Downhill.GCNL_Zipline_Downhill_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void cameraShakeTimer(); // Function GCNL_Zipline_Downhill.GCNL_Zipline_Downhill_C.cameraShakeTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Zipline_Downhill(int32_t EntryPoint); // Function GCNL_Zipline_Downhill.GCNL_Zipline_Downhill_C.ExecuteUbergraph_GCNL_Zipline_Downhill // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

