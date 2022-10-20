// BlueprintGeneratedClass GCNL_Athena_Player_Sliding_CameraShake.GCNL_Athena_Player_Sliding_CameraShake_C
// Size: 0x9e1 (Inherited: 0x960)
struct AGCNL_Athena_Player_Sliding_CameraShake_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UPostProcessComponent* PostProcess; // 0x968(0x08)
	float Timeline_0_BlendWeight_11D30796436EDF3C6112C3BD3BA47DBC; // 0x970(0x04)
	enum class ETimelineDirection Timeline_0__Direction_11D30796436EDF3C6112C3BD3BA47DBC; // 0x974(0x01)
	char pad_975[0x3]; // 0x975(0x03)
	struct UTimelineComponent* ; // 0x978(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x980(0x08)
	struct ULegacyCameraShake* matineeCamShake; // 0x988(0x08)
	double MinCamShakeAmp; // 0x990(0x08)
	double MaxCamShakeAmp; // 0x998(0x08)
	double MinCamShakeFreq; // 0x9a0(0x08)
	double MaxCamShakeFreq; // 0x9a8(0x08)
	struct FScalableFloat MaxSlideSpeed; // 0x9b0(0x28)
	double CameraShakeSpeed; // 0x9d8(0x08)
	bool bIsSuperHigh; // 0x9e0(0x01)

	void Timeline_0__FinishedFunc(); // Function GCNL_Athena_Player_Sliding_CameraShake.GCNL_Athena_Player_Sliding_CameraShake_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_0__UpdateFunc(); // Function GCNL_Athena_Player_Sliding_CameraShake.GCNL_Athena_Player_Sliding_CameraShake_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_Player_Sliding_CameraShake.GCNL_Athena_Player_Sliding_CameraShake_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_Player_Sliding_CameraShake.GCNL_Athena_Player_Sliding_CameraShake_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void cameraShakeTimer(); // Function GCNL_Athena_Player_Sliding_CameraShake.GCNL_Athena_Player_Sliding_CameraShake_C.cameraShakeTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnApplicationGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_Player_Sliding_CameraShake.GCNL_Athena_Player_Sliding_CameraShake_C.OnApplicationGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake(int32_t EntryPoint); // Function GCNL_Athena_Player_Sliding_CameraShake.GCNL_Athena_Player_Sliding_CameraShake_C.ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

