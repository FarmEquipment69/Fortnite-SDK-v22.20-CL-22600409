// BlueprintGeneratedClass GCNL_Status_DanceStunned.GCNL_Status_DanceStunned_C
// Size: 0x970 (Inherited: 0x960)
struct AGCNL_Status_DanceStunned_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UParticleSystemComponent* Active Confetti; // 0x968(0x08)

	void OnApplicationGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Status_DanceStunned.GCNL_Status_DanceStunned_C.OnApplicationGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Status_DanceStunned.GCNL_Status_DanceStunned_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Status_DanceStunned(int32_t EntryPoint); // Function GCNL_Status_DanceStunned.GCNL_Status_DanceStunned_C.ExecuteUbergraph_GCNL_Status_DanceStunned // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

