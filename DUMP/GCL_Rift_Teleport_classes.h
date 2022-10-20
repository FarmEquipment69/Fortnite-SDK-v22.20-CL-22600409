// BlueprintGeneratedClass GCL_Rift_Teleport.GCL_Rift_Teleport_C
// Size: 0x368 (Inherited: 0x368)
struct AGCL_Rift_Teleport_C : AFortGameplayCueNotify_Looping {

	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCL_Rift_Teleport.GCL_Rift_Teleport_C.WhileActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCL_Rift_Teleport.GCL_Rift_Teleport_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnWhileActiveParticleSystemDeactivate(struct UParticleSystemComponent* WhileActiveParticleSysComponent, struct FGameplayCueParameters& Parameters); // Function GCL_Rift_Teleport.GCL_Rift_Teleport_C.OnWhileActiveParticleSystemDeactivate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void OnStartParticleSystemSpawned(struct UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters); // Function GCL_Rift_Teleport.GCL_Rift_Teleport_C.OnStartParticleSystemSpawned // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
};

