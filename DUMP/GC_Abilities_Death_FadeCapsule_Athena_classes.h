// BlueprintGeneratedClass GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C
// Size: 0x558 (Inherited: 0x528)
struct AGC_Abilities_Death_FadeCapsule_Athena_C : AFortGameplayCueNotify_BurstLatent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	float CapsuleFadeTL_RemoveShadow_B48F4431426ECD264BA37C992B6887C3; // 0x530(0x04)
	enum class ETimelineDirection CapsuleFadeTL__Direction_B48F4431426ECD264BA37C992B6887C3; // 0x534(0x01)
	char pad_535[0x3]; // 0x535(0x03)
	struct UTimelineComponent* CapsuleFadeTL; // 0x538(0x08)
	double Starting Min Capsule Shadow Vis; // 0x540(0x08)
	struct TArray<struct USkeletalMeshComponent*> SkeletalMesh; // 0x548(0x10)

	void SkeletalMeshSetup(struct AFortPlayerPawnAthena* FortPawn); // Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.SkeletalMeshSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CapsuleFadeTL__FinishedFunc(); // Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void CapsuleFadeTL__UpdateFunc(); // Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena(int32_t EntryPoint); // Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

