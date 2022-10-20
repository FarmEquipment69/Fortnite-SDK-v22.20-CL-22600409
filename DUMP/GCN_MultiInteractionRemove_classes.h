// BlueprintGeneratedClass GCN_MultiInteractionRemove.GCN_MultiInteractionRemove_C
// Size: 0x220 (Inherited: 0x210)
struct UGCN_MultiInteractionRemove_C : UFortGameplayCueNotify_Burst {
	struct USoundBase* DBNO Player Removed Sound; // 0x210(0x08)
	struct USoundBase* Default Player Removed Sound; // 0x218(0x08)

	void OnBurstGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_MultiInteractionRemove.GCN_MultiInteractionRemove_C.OnBurstGeneric // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void OnBurst(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_MultiInteractionRemove.GCN_MultiInteractionRemove_C.OnBurst // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
};

