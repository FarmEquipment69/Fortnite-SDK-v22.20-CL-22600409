// BlueprintGeneratedClass GCNL_Athena_MultiInteract.GCNL_Athena_MultiInteract_C
// Size: 0x9e8 (Inherited: 0x960)
struct AGCNL_Athena_MultiInteract_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UAudioComponent* Audio; // 0x968(0x08)
	double CurrentPitch; // 0x970(0x08)
	double TargetPitch; // 0x978(0x08)
	struct TMap<int32_t, double> Pitch Map; // 0x980(0x50)
	double PreviousPitch; // 0x9d0(0x08)
	struct FTimerHandle TargetProgressHandle; // 0x9d8(0x08)
	struct APlayerPawn_Athena_C* Effect Causer Pawn; // 0x9e0(0x08)

	void OnApplicationGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_MultiInteract.GCNL_Athena_MultiInteract_C.OnApplicationGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_MultiInteract.GCNL_Athena_MultiInteract_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void CheckTargetProgress(); // Function GCNL_Athena_MultiInteract.GCNL_Athena_MultiInteract_C.CheckTargetProgress // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnActorCountChanged(int32_t InteractingActorCount, float MultiInteractMultiplier, float InteractingDuration); // Function GCNL_Athena_MultiInteract.GCNL_Athena_MultiInteract_C.OnActorCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Athena_MultiInteract(int32_t EntryPoint); // Function GCNL_Athena_MultiInteract.GCNL_Athena_MultiInteract_C.ExecuteUbergraph_GCNL_Athena_MultiInteract // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

