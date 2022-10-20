// BlueprintGeneratedClass GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C
// Size: 0x990 (Inherited: 0x960)
struct AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UNiagaraComponent* Snow_Niagara; // 0x968(0x08)
	double LoopingCheckTime; // 0x970(0x08)
	struct AActor* My Target; // 0x978(0x08)
	struct UNiagaraComponent* ReturnValue; // 0x980(0x08)
	struct FTimerHandle Timer; // 0x988(0x08)

	void SpawnNiagara(); // Function GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.SpawnNiagara // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRemovalNiagara(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UNiagaraComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.OnRemovalNiagara // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara(int32_t EntryPoint); // Function GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

