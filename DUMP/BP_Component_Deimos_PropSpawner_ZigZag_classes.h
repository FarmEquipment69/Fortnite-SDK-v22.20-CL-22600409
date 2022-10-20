// BlueprintGeneratedClass BP_Component_Deimos_PropSpawner_ZigZag.BP_Component_Deimos_PropSpawner_ZigZag_C
// Size: 0x178 (Inherited: 0xa0)
struct UBP_Component_Deimos_PropSpawner_ZigZag_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct ABP_Deimos_PropSpawner_C* ZigZagSpawner; // 0xa8(0x08)
	struct TMap<struct TSoftClassPtr<UObject>, struct FStruct_Deimos_PropSpawner_ZigZag_OffsetsAndSpawnOrientations> SpawnerClassesOffsetsAndOrientations; // 0xb0(0x50)
	int32_t SpawnerClassIndex; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct TArray<struct TSoftClassPtr<UObject>> SpawnerClassKeys; // 0x108(0x10)
	struct TArray<struct FStruct_Deimos_PropSpawner_ZigZag_OffsetsAndSpawnOrientations> SpawnerClassVariables; // 0x118(0x10)
	bool SpawnerClassFound; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct FVector LocationOffset; // 0x130(0x18)
	bool FixedSpawnDirection; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FScalableFloat ZigZagSpawnChance_HF; // 0x150(0x28)

	void OnReady_8873CA4E4AD025ECEA824CA5546510A5(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function BP_Component_Deimos_PropSpawner_ZigZag.BP_Component_Deimos_PropSpawner_ZigZag_C.OnReady_8873CA4E4AD025ECEA824CA5546510A5 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Component_Deimos_PropSpawner_ZigZag.BP_Component_Deimos_PropSpawner_ZigZag_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnDestroyed_Event(struct AActor* DestroyedActor); // Function BP_Component_Deimos_PropSpawner_ZigZag.BP_Component_Deimos_PropSpawner_ZigZag_C.OnDestroyed_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnDied_Event(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BP_Component_Deimos_PropSpawner_ZigZag.BP_Component_Deimos_PropSpawner_ZigZag_C.OnDied_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function BP_Component_Deimos_PropSpawner_ZigZag.BP_Component_Deimos_PropSpawner_ZigZag_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_Component_Deimos_PropSpawner_ZigZag(int32_t EntryPoint); // Function BP_Component_Deimos_PropSpawner_ZigZag.BP_Component_Deimos_PropSpawner_ZigZag_C.ExecuteUbergraph_BP_Component_Deimos_PropSpawner_ZigZag // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

