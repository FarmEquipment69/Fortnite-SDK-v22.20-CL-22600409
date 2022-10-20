// BlueprintGeneratedClass BP_Deimos_PropSpawner.BP_Deimos_PropSpawner_C
// Size: 0x370 (Inherited: 0x288)
struct ABP_Deimos_PropSpawner_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USoundLibraryComponent* SoundLibrary; // 0x290(0x08)
	struct USphereComponent* Trigger; // 0x298(0x08)
	struct UArrowComponent* Arrow; // 0x2a0(0x08)
	struct UTextRenderComponent* TextRender; // 0x2a8(0x08)
	struct UStaticMeshComponent* CUBE; // 0x2b0(0x08)
	struct USceneComponent* Root; // 0x2b8(0x08)
	bool FixedSpawnDirection; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct APawn* SpawnedAI; // 0x2c8(0x08)
	struct ABuildingProp* LinkedBuildingProp; // 0x2d0(0x08)
	struct FRotator SpawnRotation; // 0x2d8(0x18)
	struct FGameplayTag GameplayCue_Wobble; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	double LaunchVelocity; // 0x2f8(0x08)
	double LaunchVelocityZ; // 0x300(0x08)
	struct UParticleSystem* FX_OnSpawn; // 0x308(0x08)
	struct ULegacyCameraShake* CameraShake; // 0x310(0x08)
	struct UForceFeedbackEffect* FFE_Spawn; // 0x318(0x08)
	struct FVector SpawnLocation; // 0x320(0x18)
	struct FScalableFloat ZigZagSpawnChance_HF; // 0x338(0x28)
	struct FDataTableRowHandle LWMEventEntryToSpawn; // 0x360(0x10)

	void Play Library Sound(struct FGameplayTag Event Name, struct FVector Location); // Function BP_Deimos_PropSpawner.BP_Deimos_PropSpawner_C.Play Library Sound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AttachAndApplySFX(struct FSoundLibraryPlaySoundResult& SoundLibraryResult); // Function BP_Deimos_PropSpawner.BP_Deimos_PropSpawner_C.AttachAndApplySFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnReady_D9C5935643E5551FE9414598061014E3(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function BP_Deimos_PropSpawner.BP_Deimos_PropSpawner_C.OnReady_D9C5935643E5551FE9414598061014E3 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function BP_Deimos_PropSpawner.BP_Deimos_PropSpawner_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SpawnPropMonster(struct FVector SpawnLocation); // Function BP_Deimos_PropSpawner.BP_Deimos_PropSpawner_C.SpawnPropMonster // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_Deimos_PropSpawner.BP_Deimos_PropSpawner_C. // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FXAndDestructionComplete(); // Function BP_Deimos_PropSpawner.BP_Deimos_PropSpawner_C.FXAndDestructionComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SpawnComplete(); // Function BP_Deimos_PropSpawner.BP_Deimos_PropSpawner_C.SpawnComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DoSpawnFX(struct FVector SpawnLocation); // Function BP_Deimos_PropSpawner.BP_Deimos_PropSpawner_C.DoSpawnFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_Deimos_PropSpawner(int32_t EntryPoint); // Function BP_Deimos_PropSpawner.BP_Deimos_PropSpawner_C.ExecuteUbergraph_BP_Deimos_PropSpawner // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

