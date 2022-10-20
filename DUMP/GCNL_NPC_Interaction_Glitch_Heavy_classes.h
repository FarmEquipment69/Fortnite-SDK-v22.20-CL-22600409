// BlueprintGeneratedClass GCNL_NPC_Interaction_Glitch_Heavy.GCNL_NPC_Interaction_Glitch_Heavy_C
// Size: 0xa10 (Inherited: 0x960)
struct AGCNL_NPC_Interaction_Glitch_Heavy_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UAudioComponent* SpawnAudio; // 0x968(0x08)
	struct APlayerPawn_Athena_C* Pawn; // 0x970(0x08)
	struct TSet<struct USkeletalMeshComponent*> HeavyGlitchContainer; // 0x978(0x50)
	struct TArray<struct USkeletalMeshComponent*> HeavyGlitchSKmeshes; // 0x9c8(0x10)
	struct UMaterialInterface* GlitchMaterial; // 0x9d8(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> PlaceHolderMID; // 0x9e0(0x10)
	struct FTimerHandle InitializeTimer; // 0x9f0(0x08)
	struct USoundBase* SpawnSound; // 0x9f8(0x08)
	struct FDelegateHandleController Delegate Handle Controller; // 0xa00(0x10)

	void OnLoopingStartNiagara(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UNiagaraComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_NPC_Interaction_Glitch_Heavy.GCNL_NPC_Interaction_Glitch_Heavy_C.OnLoopingStartNiagara // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_NPC_Interaction_Glitch_Heavy.GCNL_NPC_Interaction_Glitch_Heavy_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnFinishedCustomization(struct AFortPlayerPawn* Pawn); // Function GCNL_NPC_Interaction_Glitch_Heavy.GCNL_NPC_Interaction_Glitch_Heavy_C.OnFinishedCustomization // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCosmeticPart(struct AFortPlayerPawn* Pawn, struct UCustomCharacterPart* Part, struct USkeletalMeshComponent* MeshPart, enum class EFortCustomPartType PartType); // Function GCNL_NPC_Interaction_Glitch_Heavy.GCNL_NPC_Interaction_Glitch_Heavy_C.OnCosmeticPart // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_NPC_Interaction_Glitch_Heavy(int32_t EntryPoint); // Function GCNL_NPC_Interaction_Glitch_Heavy.GCNL_NPC_Interaction_Glitch_Heavy_C.ExecuteUbergraph_GCNL_NPC_Interaction_Glitch_Heavy // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

