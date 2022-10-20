// BlueprintGeneratedClass GCNL_Athena_Tether.GCNL_Athena_Tether_C
// Size: 0x9e8 (Inherited: 0x960)
struct AGCNL_Athena_Tether_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UFortLayeredAudioComponent* FortLayeredAudio; // 0x968(0x08)
	struct UNiagaraComponent* LandFX; // 0x970(0x08)
	struct UNiagaraComponent* WaterFX; // 0x978(0x08)
	struct UStaticMeshComponent* RightSki; // 0x980(0x08)
	struct UStaticMeshComponent* LeftSki; // 0x988(0x08)
	float ScaleInSkis_SkiScalar_93783D4A4F91BF9F887B16977978DDB4; // 0x990(0x04)
	enum class ETimelineDirection ScaleInSkis__Direction_93783D4A4F91BF9F887B16977978DDB4; // 0x994(0x01)
	char pad_995[0x3]; // 0x995(0x03)
	struct UTimelineComponent* ScaleInSkis; // 0x998(0x08)
	struct AFortPlayerPawn* OwningFPP; // 0x9a0(0x08)
	bool IsInWater; // 0x9a8(0x01)
	char pad_9A9[0x7]; // 0x9a9(0x07)
	double NormalizedSpeed; // 0x9b0(0x08)
	double TurnSpeed; // 0x9b8(0x08)
	double ForceFeedbackIntensity; // 0x9c0(0x08)
	struct FTimerHandle ScaleInSkisTimerHandle; // 0x9c8(0x08)
	double SkiScaleInDelay; // 0x9d0(0x08)
	struct TScriptInterface<ICameraLensEffectInterface> CameraLensEffectInterface; // 0x9d8(0x10)

	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.WhileActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateAudio(int32_t Surface); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.UpdateAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ScaleInSkis__FinishedFunc(); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkis__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void ScaleInSkis__UpdateFunc(); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkis__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(float DeltaSeconds); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnApplication(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnApplication // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature(struct UAudioComponent* AudioComponent, struct FName ParameterName, int32_t OneshotIndex); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void StartFF(); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.StartFF // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateFF(); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.UpdateFF // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StopFF(); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.StopFF // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitializeTetherGCNL(struct UObject* Object); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.InitializeTetherGCNL // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ScaleInSkisForPlayer(); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkisForPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Athena_Tether(int32_t EntryPoint); // Function GCNL_Athena_Tether.GCNL_Athena_Tether_C.ExecuteUbergraph_GCNL_Athena_Tether // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

