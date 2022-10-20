// BlueprintGeneratedClass GCNL_RollingEffects_Stone.GCNL_RollingEffects_Stone_C
// Size: 0xaf0 (Inherited: 0xae8)
struct AGCNL_RollingEffects_Stone_C : AGCNL_RollingEffects_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xae8(0x08)

	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_RollingEffects_Stone.GCNL_RollingEffects_Stone_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_RollingEffects_Stone.GCNL_RollingEffects_Stone_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_RollingEffects_Stone(int32_t EntryPoint); // Function GCNL_RollingEffects_Stone.GCNL_RollingEffects_Stone_C.ExecuteUbergraph_GCNL_RollingEffects_Stone // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

