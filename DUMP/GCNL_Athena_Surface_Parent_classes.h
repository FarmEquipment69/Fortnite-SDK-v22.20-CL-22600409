// BlueprintGeneratedClass GCNL_Athena_Surface_Parent.GCNL_Athena_Surface_Parent_C
// Size: 0x972 (Inherited: 0x960)
struct AGCNL_Athena_Surface_Parent_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct AFortPlayerPawn* TargetPawn; // 0x968(0x08)
	bool Debug; // 0x970(0x01)
	bool Is in Water; // 0x971(0x01)

	void OnPlayerFootstep(); // Function GCNL_Athena_Surface_Parent.GCNL_Athena_Surface_Parent_C.OnPlayerFootstep // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_Surface_Parent.GCNL_Athena_Surface_Parent_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_Surface_Parent.GCNL_Athena_Surface_Parent_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Athena_Surface_Parent(int32_t EntryPoint); // Function GCNL_Athena_Surface_Parent.GCNL_Athena_Surface_Parent_C.ExecuteUbergraph_GCNL_Athena_Surface_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

