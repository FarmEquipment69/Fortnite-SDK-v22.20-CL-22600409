// BlueprintGeneratedClass GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C
// Size: 0x558 (Inherited: 0x528)
struct AGC_Abilities_Death_FadeCapsule_StW_C : AFortGameplayCueNotify_BurstLatent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	float CapsuleFadeTL_RemoveShadow_D18D776D462C2233B7D3E1B7577403C1; // 0x530(0x04)
	enum class ETimelineDirection CapsuleFadeTL__Direction_D18D776D462C2233B7D3E1B7577403C1; // 0x534(0x01)
	char pad_535[0x3]; // 0x535(0x03)
	struct UTimelineComponent* CapsuleFadeTL; // 0x538(0x08)
	double Starting Min Capsule Shadow Vis; // 0x540(0x08)
	struct TArray<struct USkeletalMeshComponent*> SkeletalMesh; // 0x548(0x10)

	void SkeletalMeshSetup(struct AFortPlayerPawn* FortPawn); // Function GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.SkeletalMeshSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CapsuleFadeTL__FinishedFunc(); // Function GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.CapsuleFadeTL__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void CapsuleFadeTL__UpdateFunc(); // Function GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.CapsuleFadeTL__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW(int32_t EntryPoint); // Function GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

