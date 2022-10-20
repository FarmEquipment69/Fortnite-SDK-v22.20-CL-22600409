// BlueprintGeneratedClass GCN_CollisionEffects_Water.GCN_CollisionEffects_Water_C
// Size: 0x380 (Inherited: 0x368)
struct UGCN_CollisionEffects_Water_C : UGCN_CollisionEffects_Parent_C {
	int32_t FXSize; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct TArray<struct UNiagaraSystem*> WaterSplash; // 0x370(0x10)

	void OnBurst(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_CollisionEffects_Water.GCN_CollisionEffects_Water_C.OnBurst // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void GetObjectSizeParam(struct AActor* PhysicsObject, int32_t& Size); // Function GCN_CollisionEffects_Water.GCN_CollisionEffects_Water_C.GetObjectSizeParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
};

