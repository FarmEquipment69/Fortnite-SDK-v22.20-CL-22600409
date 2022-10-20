// Class CampsiteRuntime.AbandonedCampsiteManager
// Size: 0x408 (Inherited: 0x288)
struct AAbandonedCampsiteManager : AActor {
	struct FScalableFloat MinNumAbandonedCampsites; // 0x288(0x28)
	struct FScalableFloat MaxNumAbandonedCampsites; // 0x2b0(0x28)
	struct FScalableFloat AbandonedCampsitesEnabled; // 0x2d8(0x28)
	struct TMap<enum class EAbandonedCampsiteSpawnType, struct FScalableFloat> SpawnTypeWeights; // 0x300(0x50)
	struct TSoftObjectPtr<UEnvQuery> Spawn_EnvironmentalQuery; // 0x350(0x28)
	struct TSoftClassPtr<UObject> AbandonedCampsiteAsset; // 0x378(0x28)
	struct TArray<struct AAbandonedCampsitePlacedSpawner*> PreplacedCampsiteSpawnPoints; // 0x3a0(0x10)
	struct TArray<struct AAbandonedCampsitePlacedSpawner*> DeferredPreplacedCampsiteSpawns; // 0x3b0(0x10)
	char pad_3C0[0x10]; // 0x3c0(0x10)
	struct UCampsiteAnalytics* Analytics; // 0x3d0(0x08)
	char pad_3D8[0x30]; // 0x3d8(0x30)

	void OnGamePhaseStepChanged(struct TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep); // Function CampsiteRuntime.AbandonedCampsiteManager.OnGamePhaseStepChanged // (Final|Native|Protected|HasOutParms) // @ game+0x66d264c
};

// Class CampsiteRuntime.AbandonedCampsitePlacedSpawner
// Size: 0x2b0 (Inherited: 0x288)
struct AAbandonedCampsitePlacedSpawner : AActor {
	struct TSoftClassPtr<UObject> AbandonedTentAsset; // 0x288(0x28)

	void SpawnCampsite(); // Function CampsiteRuntime.AbandonedCampsitePlacedSpawner.SpawnCampsite // (Native|Event|Public|BlueprintEvent) // @ game+0x230a2e8
};

// Class CampsiteRuntime.AbandonedTentSpawnPointComponent
// Size: 0x620 (Inherited: 0x5f0)
struct UAbandonedTentSpawnPointComponent : UStaticMeshComponent {
	struct FScalableFloat SpawnChance; // 0x5f0(0x28)
	char pad_618[0x8]; // 0x618(0x08)
};

// Class CampsiteRuntime.CampsiteAnalytics
// Size: 0x38 (Inherited: 0x28)
struct UCampsiteAnalytics : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class CampsiteRuntime.CampsiteConversationComponent
// Size: 0xa0 (Inherited: 0xa0)
struct UCampsiteConversationComponent : UActorComponent {

	void StartConversation(struct AFortPlayerController* InstigatingController); // Function CampsiteRuntime.CampsiteConversationComponent.StartConversation // (Final|Native|Public|BlueprintCallable) // @ game+0x66d2a74
};

// Class CampsiteRuntime.CampsiteFunctionLibraryNative
// Size: 0x28 (Inherited: 0x28)
struct UCampsiteFunctionLibraryNative : UBlueprintFunctionLibrary {

	void StoreHealthOnPickupFromProp(struct ABuildingProp* BuildingProp, struct AFortPickup* PickUp); // Function CampsiteRuntime.CampsiteFunctionLibraryNative.StoreHealthOnPickupFromProp // (Final|BlueprintAuthorityOnly|Native|Static|Private|BlueprintCallable) // @ game+0x66d2b10
	void SetHealthOnPropFromItemEntry(struct FFortItemEntry& FortItem, struct ABuildingProp* BuildingProp); // Function CampsiteRuntime.CampsiteFunctionLibraryNative.SetHealthOnPropFromItemEntry // (Final|BlueprintAuthorityOnly|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x66d287c
	bool IsItemEntryAvailable(struct UObject* WorldContextObject, struct FFortItemEntry& FortItem); // Function CampsiteRuntime.CampsiteFunctionLibraryNative.IsItemEntryAvailable // (Final|BlueprintAuthorityOnly|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x66d2540
	bool IsItemDefinitionAvailable(struct UObject* WorldContextObject, struct UFortItemDefinition* FortItem); // Function CampsiteRuntime.CampsiteFunctionLibraryNative.IsItemDefinitionAvailable // (Final|BlueprintAuthorityOnly|Native|Static|Private|BlueprintCallable) // @ game+0x66d2434
	bool IsItemAvailable(struct UObject* WorldContextObject, struct UFortItem* FortItem); // Function CampsiteRuntime.CampsiteFunctionLibraryNative.IsItemAvailable // (Final|BlueprintAuthorityOnly|Native|Static|Private|BlueprintCallable) // @ game+0x66d234c
	struct FFortItemEntry GetItemEntryCopyFromWeapon(struct AFortWeapon* Weapon); // Function CampsiteRuntime.CampsiteFunctionLibraryNative.GetItemEntryCopyFromWeapon // (Final|BlueprintAuthorityOnly|Native|Static|Private|BlueprintCallable) // @ game+0x66d21c0
};

// Class CampsiteRuntime.CampsiteImprovementComponent
// Size: 0x170 (Inherited: 0xa0)
struct UCampsiteImprovementComponent : UActorComponent {
	struct FSlateBrush MiniMapIconBrush; // 0xa0(0xc0)
	int32_t ImprovementOwnerSquadId; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct UFortSimpleMiniMapIndicator* MinimapIndicator; // 0x168(0x08)

	void SetImprovementOwnerSquadId(int32_t SquadId); // Function CampsiteRuntime.CampsiteImprovementComponent.SetImprovementOwnerSquadId // (Final|Native|Protected|BlueprintCallable) // @ game+0x66d29f8
	void RemoveIndicator(); // Function CampsiteRuntime.CampsiteImprovementComponent.RemoveIndicator // (Final|Native|Protected|BlueprintCallable) // @ game+0x66d2868
	void OnRep_ImprovementOwnerSquadId(); // Function CampsiteRuntime.CampsiteImprovementComponent.OnRep_ImprovementOwnerSquadId // (Final|Native|Protected) // @ game+0x66d26f8
	void CreateIndicator(); // Function CampsiteRuntime.CampsiteImprovementComponent.CreateIndicator // (Final|Native|Protected|BlueprintCallable) // @ game+0x66d20d0
};

// Class CampsiteRuntime.FortControllerComponent_CampsiteAccountItem
// Size: 0xe0 (Inherited: 0xa0)
struct UFortControllerComponent_CampsiteAccountItem : UActorComponent {
	struct UFortCampsiteAccountItemDefinition* CampsiteAccountItemDefinition; // 0xa0(0x08)
	struct FCampsiteAccountData CampsiteAccountData; // 0xa8(0x28)
	struct TArray<struct FFortItemEntry> CurrentlyStashedItemEntries; // 0xd0(0x10)

	void WriteStashedItemFromEntry(struct AFortPlayerControllerAthena* PlayerController, struct FFortItemEntry& ItemEntry, int32_t StashedItemIndex); // Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.WriteStashedItemFromEntry // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x66d2ce4
	void WriteStashedItem(struct AFortPlayerControllerAthena* PlayerController, struct UFortWorldItem* Item, int32_t StashedItemIndex); // Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.WriteStashedItem // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x66d2c00
	bool SwapStashedItem(struct AActor* SourceActor, int32_t StashedItemIndex); // Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.SwapStashedItem // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x66d2024
	bool StashCurrentlyHeldItemAndRemoveFromInventory(int32_t StashedItemIndex); // Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.StashCurrentlyHeldItemAndRemoveFromInventory // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x66d22e0
	void OnAthenaProfileInitialized(); // Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.OnAthenaProfileInitialized // (Final|Native|Private) // @ game+0x24841e4
	bool HasCurrentlyStashedItem(int32_t StashedItemIndex); // Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.HasCurrentlyStashedItem // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x66d22e0
	struct FFortItemEntry GetCurrentlyStashedItemAsItemEntry(int32_t StashedItemIndex); // Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.GetCurrentlyStashedItemAsItemEntry // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x66d20e4
	void ClearStoredCampsiteLocations(); // Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.ClearStoredCampsiteLocations // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x24841e4
	bool ClearStashedItemAndGiveToPlayer(struct AActor* SourceActor, int32_t StashedItemIndex); // Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.ClearStashedItemAndGiveToPlayer // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x66d2024
	void ClearStashedItem(int32_t StashedItemIndex); // Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.ClearStashedItem // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x651e558
	void CacheAccountItemData(); // Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.CacheAccountItemData // (Final|Native|Private) // @ game+0x24841e4
};

// Class CampsiteRuntime.FortGameStateComponent_Campsite
// Size: 0x1b8 (Inherited: 0xa0)
struct UFortGameStateComponent_Campsite : UFortGameStateComponent {
	struct TSet<struct UFortItemDefinition*> AllowedItemDefinitions; // 0xa0(0x50)
	struct TArray<struct TSoftObjectPtr<UFortItemDefinition>> BlacklistedItemDefinitions; // 0xf0(0x10)
	struct TArray<struct FString> BlacklistedItemPaths; // 0x100(0x10)
	struct TArray<struct AAbandonedCampsitePlacedSpawner*> PlacedCampsiteSpawnPoints; // 0x110(0x10)
	char pad_120[0x18]; // 0x120(0x18)
	struct TSoftObjectPtr<UFortAthenaAIBotNameDataAsset> BotNameDataAsset; // 0x138(0x28)
	char pad_160[0x50]; // 0x160(0x50)
	struct UDataTable* BotNameDataTable; // 0x1b0(0x08)

	void RegisterPreplacedCampsite(struct AAbandonedCampsitePlacedSpawner* PreplacedCampsiteSpawnPoint); // Function CampsiteRuntime.FortGameStateComponent_Campsite.RegisterPreplacedCampsite // (Final|Native|Public|BlueprintCallable) // @ game+0x66d27e8
	void RegisterCampsiteLocation(struct FVector& NewCampsiteLocation); // Function CampsiteRuntime.FortGameStateComponent_Campsite.RegisterCampsiteLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x66d2718
	void ClaimUnusedBotName(struct FString& OutBotName); // Function CampsiteRuntime.FortGameStateComponent_Campsite.ClaimUnusedBotName // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x651d08c
};

// Class CampsiteRuntime.FortQueryTest_AbandonedCampsite
// Size: 0x260 (Inherited: 0x1f8)
struct UFortQueryTest_AbandonedCampsite : UEnvQueryTest {
	float TraceRadius; // 0x1f8(0x04)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct FVector TraceStartOffset; // 0x200(0x18)
	struct FVector TraceEndOffset; // 0x218(0x18)
	enum class ECollisionChannel BlockingChannel; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct TSoftObjectPtr<UPhysicalMaterial> BlockingMaterial; // 0x238(0x28)
};

