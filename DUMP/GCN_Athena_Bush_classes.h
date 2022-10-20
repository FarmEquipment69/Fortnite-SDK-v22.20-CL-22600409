// BlueprintGeneratedClass GCN_Athena_Bush.GCN_Athena_Bush_C
// Size: 0x9f0 (Inherited: 0x960)
struct AGCN_Athena_Bush_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UStaticMeshComponent* OwningPlayer_BushMesh; // 0x968(0x08)
	struct UArrowComponent* Arrow2; // 0x970(0x08)
	struct UArrowComponent* Arrow1; // 0x978(0x08)
	struct UStaticMeshComponent* BushMesh; // 0x980(0x08)
	struct UArrowComponent* Arrow; // 0x988(0x08)
	struct UParticleSystemComponent* Trail_Leaves; // 0x990(0x08)
	float OpacityFade_OpacityFadeOut_B989988545DAA0B2E69D77AE069A4437; // 0x998(0x04)
	enum class ETimelineDirection OpacityFade__Direction_B989988545DAA0B2E69D77AE069A4437; // 0x99c(0x01)
	char pad_99D[0x3]; // 0x99d(0x03)
	struct UTimelineComponent* OpacityFade; // 0x9a0(0x08)
	struct AActor* PlayerPawn; // 0x9a8(0x08)
	struct UMaterialInstanceDynamic* MID_Bush; // 0x9b0(0x08)
	bool IsActive; // 0x9b8(0x01)
	char pad_9B9[0x7]; // 0x9b9(0x07)
	struct UMaterialInstanceDynamic* MID_OwningClientBush; // 0x9c0(0x08)
	struct FCurveTableRowHandle ClientBushOpacity; // 0x9c8(0x10)
	double TargetOpacity; // 0x9d8(0x08)
	struct UParticleSystem* BushDestructionVFX; // 0x9e0(0x08)
	struct USoundBase* BushDestructionSFX; // 0x9e8(0x08)

	void OpacityFade__FinishedFunc(); // Function GCN_Athena_Bush.GCN_Athena_Bush_C.OpacityFade__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void OpacityFade__UpdateFunc(); // Function GCN_Athena_Bush.GCN_Athena_Bush_C.OpacityFade__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void On Player Step(); // Function GCN_Athena_Bush.GCN_Athena_Bush_C.On Player Step // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCN_Athena_Bush.GCN_Athena_Bush_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Athena_Bush.GCN_Athena_Bush_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(float DeltaSeconds); // Function GCN_Athena_Bush.GCN_Athena_Bush_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCN_Athena_Bush(int32_t EntryPoint); // Function GCN_Athena_Bush.GCN_Athena_Bush_C.ExecuteUbergraph_GCN_Athena_Bush // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

