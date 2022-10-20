// BlueprintGeneratedClass GCN_RezOut.GCN_RezOut_C
// Size: 0x718 (Inherited: 0x528)
struct AGCN_RezOut_C : AFortGameplayCueNotify_BurstLatent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	float TFX_ResOutCharacterMesh_LightIntensity_E9C2D3554642468472CCCFA609A39FBC; // 0x530(0x04)
	float TFX_ResOutCharacterMesh_ZHeightParam_E9C2D3554642468472CCCFA609A39FBC; // 0x534(0x04)
	float TFX_ResOutCharacterMesh_TransitionParam_E9C2D3554642468472CCCFA609A39FBC; // 0x538(0x04)
	enum class ETimelineDirection TFX_ResOutCharacterMesh__Direction_E9C2D3554642468472CCCFA609A39FBC; // 0x53c(0x01)
	char pad_53D[0x3]; // 0x53d(0x03)
	struct UTimelineComponent* TFX_ResOutCharacterMesh; // 0x540(0x08)
	float TFX_GlowCharacterMesh_EmissiveWarp_39A37BC9407CF090A09ABDA5A488F776; // 0x548(0x04)
	enum class ETimelineDirection TFX_GlowCharacterMesh__Direction_39A37BC9407CF090A09ABDA5A488F776; // 0x54c(0x01)
	char pad_54D[0x3]; // 0x54d(0x03)
	struct UTimelineComponent* TFX_GlowCharacterMesh; // 0x550(0x08)
	bool DEBUG_ANIMATION; // 0x558(0x01)
	bool SpawnDrone; // 0x559(0x01)
	char pad_55A[0x6]; // 0x55a(0x06)
	struct ABP_TeleportationDrone_C* Teleportation Drone; // 0x560(0x08)
	double Teleport_Bot_AnimPlayRate; // 0x568(0x08)
	double Teleport Bot Lifespan; // 0x570(0x08)
	struct UPointLightComponent* Teleportation Point Light; // 0x578(0x08)
	struct FVector Teleportation Light Offset; // 0x580(0x18)
	struct FLinearColor Teleportation Light Color; // 0x598(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> DissolveMIDs; // 0x5a8(0x10)
	struct UMaterialInterface* Mat Chracter Dissolve; // 0x5b8(0x08)
	struct APlayerPawn_Athena_C* Pawn; // 0x5c0(0x08)
	struct TSet<struct USkeletalMeshComponent*> Dissolve; // 0x5c8(0x50)
	struct FName Socket Mesh Top; // 0x618(0x04)
	char pad_61C[0x4]; // 0x61c(0x04)
	double Max Light Intensity; // 0x620(0x08)
	struct FName Socket Mesh Bottom; // 0x628(0x04)
	char pad_62C[0x4]; // 0x62c(0x04)
	struct TArray<struct USkeletalMeshComponent*> Meshes to Dissolve; // 0x630(0x10)
	struct ABP_TeleportationDrone_C* Drone; // 0x640(0x08)
	bool DEBUG_CHILDCOMPONENTS; // 0x648(0x01)
	char pad_649[0x7]; // 0x649(0x07)
	struct TArray<struct UFXSystemComponent*> Particle Components; // 0x650(0x10)
	struct UNiagaraComponent* Spawned Death VFX; // 0x660(0x08)
	struct UNiagaraSystem* Dissolve Visual Effect; // 0x668(0x08)
	struct FName Dissolve VFX Spawn Point Name; // 0x670(0x04)
	char pad_674[0x4]; // 0x674(0x04)
	struct UAnimMontage* Base Elimination Montage; // 0x678(0x08)
	struct UAnimMontage* DBNO Elimination Montage; // 0x680(0x08)
	struct UAnimMontage* Skydiving Elimination Montage; // 0x688(0x08)
	struct UAnimMontage* Swimming Elimination Montage; // 0x690(0x08)
	struct UAnimMontage* DBNO Swimming Elimination Montage; // 0x698(0x08)
	bool Spawn VFX Attached; // 0x6a0(0x01)
	char pad_6A1[0x7]; // 0x6a1(0x07)
	double Dissolve Timeline Playrate; // 0x6a8(0x08)
	double Glow Timeline Playrate; // 0x6b0(0x08)
	bool DEBUG_REMOVESPAWNVFX; // 0x6b8(0x01)
	bool DEBUG_REMOVESPAWNEDPOINTLIGHT; // 0x6b9(0x01)
	char pad_6BA[0x6]; // 0x6ba(0x06)
	struct UNiagaraSystem* Drone Visual Effect; // 0x6c0(0x08)
	struct FName Drone VFX Attach Point; // 0x6c8(0x04)
	bool DEBUG_FXSYSTEMCOMPONENTS; // 0x6cc(0x01)
	bool ShouldDelayBetweenAnimAndVFX; // 0x6cd(0x01)
	char pad_6CE[0x2]; // 0x6ce(0x02)
	double DelayBetweenAnimAndVFX; // 0x6d0(0x08)
	struct FGuid Material Override ID; // 0x6d8(0x10)
	struct FFortPawnMaterialOverrideCopiedParameters Copied Parameters; // 0x6e8(0x30)

	void Spawn Drone VFX(); // Function GCN_RezOut.GCN_RezOut_C.Spawn Drone VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Timeline Playrates(); // Function GCN_RezOut.GCN_RezOut_C.Set Timeline Playrates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Dissolve Material Setup(); // Function GCN_RezOut.GCN_RezOut_C.Dissolve Material Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Spawn Dissolve VFX(); // Function GCN_RezOut.GCN_RezOut_C.Spawn Dissolve VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Clean-Up Teleportation Light(); // Function GCN_RezOut.GCN_RezOut_C.Clean-Up Teleportation Light // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Spawn Teleportation Light(); // Function GCN_RezOut.GCN_RezOut_C.Spawn Teleportation Light // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Spawn Teleportation Drone(); // Function GCN_RezOut.GCN_RezOut_C.Spawn Teleportation Drone // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Stop Looping Audio(); // Function GCN_RezOut.GCN_RezOut_C.Stop Looping Audio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Play Elmination AnimMontage(); // Function GCN_RezOut.GCN_RezOut_C.Play Elmination AnimMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TFX_GlowCharacterMesh__FinishedFunc(); // Function GCN_RezOut.GCN_RezOut_C.TFX_GlowCharacterMesh__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void TFX_GlowCharacterMesh__UpdateFunc(); // Function GCN_RezOut.GCN_RezOut_C.TFX_GlowCharacterMesh__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void TFX_ResOutCharacterMesh__FinishedFunc(); // Function GCN_RezOut.GCN_RezOut_C.TFX_ResOutCharacterMesh__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void TFX_ResOutCharacterMesh__UpdateFunc(); // Function GCN_RezOut.GCN_RezOut_C.TFX_ResOutCharacterMesh__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void OnBurstGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_RezOut.GCN_RezOut_C.OnBurstGeneric // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xd67374
	void Pre-Sequence Change(); // Function GCN_RezOut.GCN_RezOut_C.Pre-Sequence Change // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Additional Niagara Parameters on Spawned FX(struct UNiagaraComponent* Spawned Death FX); // Function GCN_RezOut.GCN_RezOut_C.Set Additional Niagara Parameters on Spawned FX // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Additional Niagara Parameters on Drone FX(struct UNiagaraComponent* Drone FX); // Function GCN_RezOut.GCN_RezOut_C.Set Additional Niagara Parameters on Drone FX // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCN_RezOut(int32_t EntryPoint); // Function GCN_RezOut.GCN_RezOut_C.ExecuteUbergraph_GCN_RezOut // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

