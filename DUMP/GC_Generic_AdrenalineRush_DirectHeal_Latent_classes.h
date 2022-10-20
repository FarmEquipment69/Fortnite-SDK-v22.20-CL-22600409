// BlueprintGeneratedClass GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C
// Size: 0xa08 (Inherited: 0x960)
struct AGC_Generic_AdrenalineRush_DirectHeal_Latent_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	float HealthSweep_SafetyOpacity_AEAC519D4817261537105281CD9192C7; // 0x968(0x04)
	float HealthSweep_Sweep_AEAC519D4817261537105281CD9192C7; // 0x96c(0x04)
	enum class ETimelineDirection HealthSweep__Direction_AEAC519D4817261537105281CD9192C7; // 0x970(0x01)
	char pad_971[0x7]; // 0x971(0x07)
	struct UTimelineComponent* HealthSweep; // 0x978(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Duplicate MIDs; // 0x980(0x10)
	struct FLinearColor Adrenaline Rush Color Outer Direct; // 0x990(0x10)
	struct FLinearColor Adrenaline Rush Color Inner Direct; // 0x9a0(0x10)
	double Adrenaline Rush WPO Offset; // 0x9b0(0x08)
	struct TMap<enum class EFortCustomPartType, struct USkeletalMeshComponent*> Duplicate MeshMap; // 0x9b8(0x50)

	void Toggle Mesh Visibility(bool Visibility); // Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.Toggle Mesh Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Duplicate Meshes(struct AFortPlayerPawn* Player Pawn); // Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.Duplicate Meshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Adrenaline Rush Visibility(bool Visible, struct AFortPlayerPawn* Player Pawn); // Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.Set Adrenaline Rush Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HealthSweep__FinishedFunc(); // Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.HealthSweep__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void HealthSweep__UpdateFunc(); // Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.HealthSweep__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GC_Generic_AdrenalineRush_DirectHeal_Latent(int32_t EntryPoint); // Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.ExecuteUbergraph_GC_Generic_AdrenalineRush_DirectHeal_Latent // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

