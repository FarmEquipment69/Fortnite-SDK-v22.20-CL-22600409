// BlueprintGeneratedClass BP_SprayDecal.BP_SprayDecal_C
// Size: 0xeb2 (Inherited: 0xdf8)
struct ABP_SprayDecal_C : AFortSprayDecalInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xdf8(0x08)
	double DecalFadeoutTime; // 0xe00(0x08)
	struct UDecalComponent* EmissiveDecal; // 0xe08(0x08)
	struct UMaterialInstanceDynamic* EmissiveDecalMID; // 0xe10(0x08)
	double DecalSize; // 0xe18(0x08)
	struct UMaterialInterface* EmissiveMatSource; // 0xe20(0x08)
	double DecalDepth; // 0xe28(0x08)
	struct UAthenaSprayItemDefinition* SprayAsset; // 0xe30(0x08)
	int32_t LoadsOutstanding; // 0xe38(0x04)
	char pad_E3C[0x4]; // 0xe3c(0x04)
	struct TSoftObjectPtr<UTexture2D> DecalTextureOverrideSoft; // 0xe40(0x28)
	struct UTexture2D* DecalTextureOverride; // 0xe68(0x08)
	struct FLinearColor BannerPrimaryColor; // 0xe70(0x10)
	struct FLinearColor BannerSecondaryColor; // 0xe80(0x10)
	struct AFortPlayerController* SpawningPlayerController; // 0xe90(0x08)
	struct TArray<struct AActor*> NearbyBuildingActors; // 0xe98(0x10)
	double SpawnStartTimeDelay; // 0xea8(0x08)
	bool bIsFrontEndPreview; // 0xeb0(0x01)
	bool bDestroyOnTrapPlaced; // 0xeb1(0x01)

	void Initialize Spray Spawned from Gameplay(double InDecalSize, struct UAthenaSprayItemDefinition* InSprayAsset, struct AFortPlayerController* InSpawningPlayerController); // Function BP_SprayDecal.BP_SprayDecal_C.Initialize Spray Spawned from Gameplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AddBoxCollisionForCreative(); // Function BP_SprayDecal.BP_SprayDecal_C.AddBoxCollisionForCreative // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FindNearbyBuildingActorsAndBindDelegates(); // Function BP_SprayDecal.BP_SprayDecal_C.FindNearbyBuildingActorsAndBindDelegates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UnbindAndClearNearbyBuildingActors(); // Function BP_SprayDecal.BP_SprayDecal_C.UnbindAndClearNearbyBuildingActors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRep_DecalFadeoutTime(); // Function BP_SprayDecal.BP_SprayDecal_C.OnRep_DecalFadeoutTime // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FUniqueNetIdRepl GetInstigatorPlayerId(); // Function BP_SprayDecal.BP_SprayDecal_C.GetInstigatorPlayerId // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CreateDecalComponents(); // Function BP_SprayDecal.BP_SprayDecal_C.CreateDecalComponents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function BP_SprayDecal.BP_SprayDecal_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_F8AB699B4D8DD22B5A0409B608B7D6FA(struct UObject* Loaded); // Function BP_SprayDecal.BP_SprayDecal_C.OnLoaded_F8AB699B4D8DD22B5A0409B608B7D6FA // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_F925FF00475A018319C73E9FB1540BC6(struct UObject* Loaded); // Function BP_SprayDecal.BP_SprayDecal_C.OnLoaded_F925FF00475A018319C73E9FB1540BC6 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnReady_B252FED346EAB98D54D786BD15C1CC7B(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function BP_SprayDecal.BP_SprayDecal_C.OnReady_B252FED346EAB98D54D786BD15C1CC7B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function BP_SprayDecal.BP_SprayDecal_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSprayAssetReplicatedDown(); // Function BP_SprayDecal.BP_SprayDecal_C.OnSprayAssetReplicatedDown // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSprayInfoReady(); // Function BP_SprayDecal.BP_SprayDecal_C.OnSprayInfoReady // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void StartSprayFadeOutDueToNewPlacement(); // Function BP_SprayDecal.BP_SprayDecal_C.StartSprayFadeOutDueToNewPlacement // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnNearbyWallDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BP_SprayDecal.BP_SprayDecal_C.OnNearbyWallDied // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnNearbyWallDamaged(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BP_SprayDecal.BP_SprayDecal_C.OnNearbyWallDamaged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBounceOccurs(); // Function BP_SprayDecal.BP_SprayDecal_C.OnBounceOccurs // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnNearbyTrapPlaced(struct ABuildingTrap* Trap, bool bDetatched); // Function BP_SprayDecal.BP_SprayDecal_C.OnNearbyTrapPlaced // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PostLevelSaveSpawnCleanup(); // Function BP_SprayDecal.BP_SprayDecal_C.PostLevelSaveSpawnCleanup // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnWallDestoryed(struct AActor* DestroyedActor); // Function BP_SprayDecal.BP_SprayDecal_C.OnWallDestoryed // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_SprayDecal(int32_t EntryPoint); // Function BP_SprayDecal.BP_SprayDecal_C.ExecuteUbergraph_BP_SprayDecal // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

