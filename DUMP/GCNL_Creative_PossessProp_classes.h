// BlueprintGeneratedClass GCNL_Creative_PossessProp.GCNL_Creative_PossessProp_C
// Size: 0x970 (Inherited: 0x960)
struct AGCNL_Creative_PossessProp_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct APlayerPawn_Athena_C* PlayerPawnAthena; // 0x968(0x08)

	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCNL_Creative_PossessProp.GCNL_Creative_PossessProp_C.OnActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Creative_PossessProp.GCNL_Creative_PossessProp_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnApplication(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Creative_PossessProp.GCNL_Creative_PossessProp_C.OnApplication // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Creative_PossessProp(int32_t EntryPoint); // Function GCNL_Creative_PossessProp.GCNL_Creative_PossessProp_C.ExecuteUbergraph_GCNL_Creative_PossessProp // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

