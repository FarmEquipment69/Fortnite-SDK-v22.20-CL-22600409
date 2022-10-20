// Class RealitySeedGameplayRuntime.BuildingRealitySapling
// Size: 0xee8 (Inherited: 0xdc8)
struct ABuildingRealitySapling : ABuildingSMActor {
	char pad_DC8[0x8]; // 0xdc8(0x08)
	struct FRealitySaplingPersistentData PersistentSaplingData; // 0xdd0(0x60)
	char bIsPerfCulledSapling : 1; // 0xe30(0x01)
	char pad_E30_1 : 2; // 0xe30(0x01)
	char bCanBeMarked : 1; // 0xe30(0x01)
	char bBlockMarking : 1; // 0xe30(0x01)
	char pad_E30_5 : 3; // 0xe30(0x01)
	char pad_E31[0x7]; // 0xe31(0x07)
	struct FMarkedActorDisplayInfo MarkerDisplay; // 0xe38(0x98)
	struct FVector MarkerPositionOffset; // 0xed0(0x18)

	bool WillEnterGhostStateOnDeath(); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.WillEnterGhostStateOnDeath // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x680d83c
	void SetShouldEnterGhostStateOnDeath(bool bShouldEnterGhostState); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.SetShouldEnterGhostStateOnDeath // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x680d7b0
	void OverrideMarkerDisplayInfo(struct FMarkedActorDisplayInfo& NewDisplayInfo); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.OverrideMarkerDisplayInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x680ca14
	void OnSaplingRegistered(); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.OnSaplingRegistered // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xd67374
	bool NotificationsEnabled(); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.NotificationsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x680c9e4
	float GetNotificationTime(); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.GetNotificationTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x680c6b4
	float GetNotificationCooldown(); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.GetNotificationCooldown // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x680c698
	struct FDateTime GetEventManagerCalendarTime(); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.GetEventManagerCalendarTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x266f0d0
	void ForceSpawnWeeds(); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.ForceSpawnWeeds // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EnterGhostState(); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.EnterGhostState // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

// Class RealitySeedGameplayRuntime.BuildingRealitySeedPod
// Size: 0xe88 (Inherited: 0xdc8)
struct ABuildingRealitySeedPod : ABuildingSMActor {
	char pad_DC8[0x8]; // 0xdc8(0x08)
	char bCanBeMarked : 1; // 0xdd0(0x01)
	char bBlockMarking : 1; // 0xdd0(0x01)
	char pad_DD0_2 : 6; // 0xdd0(0x01)
	char pad_DD1[0x7]; // 0xdd1(0x07)
	struct FMarkedActorDisplayInfo MarkerDisplay; // 0xdd8(0x98)
	struct FVector MarkerPositionOffset; // 0xe70(0x18)
};

// Class RealitySeedGameplayRuntime.FortCheatManager_RealitySeed
// Size: 0x28 (Inherited: 0x28)
struct UFortCheatManager_RealitySeed : UChildCheatManager {

	void RealitySaplingSpawnWeeds(bool bOnlyForCallingPlayer); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingSpawnWeeds // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x64a1f14
	void RealitySaplingSpawnQueued(); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingSpawnQueued // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x24841e4
	void RealitySaplingSpawnOwnedAtPlayerLocation(int32_t MaturityLevelOverride, int32_t NurturingLevelOverride); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingSpawnOwnedAtPlayerLocation // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x680d56c
	void RealitySaplingSpawnInRadiusAtPlayerLocation(float Radius, int32_t NumSaplings, int32_t MaturityLevelOverride, int32_t NurturingLevelOverride, float GridHalfSizeOverride, float GridSpaceBetweenOverride, bool bSetOwningController); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingSpawnInRadiusAtPlayerLocation // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x680d398
	void RealitySaplingSpawnInRadiusAtLocation(float X, float Y, float Z, float Radius, int32_t NumSaplings, int32_t MaturityLevelOverride, int32_t NurturingLevelOverride, float GridHalfSizeOverride, float GridSpaceBetweenOverride, bool bSetOwningController); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingSpawnInRadiusAtLocation // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x680d114
	void RealitySaplingSpawnAtPlayerLocation(int32_t NumSaplings, int32_t MaturityLevelOverride, int32_t NurturingLevelOverride, float GridHalfSizeOverride, float GridSpaceBetweenOverride, bool bSetOwningController); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingSpawnAtPlayerLocation // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x680cf7c
	void RealitySaplingSpawnAtLocation(float X, float Y, float Z, int32_t NumSaplings, int32_t MaturityLevelOverride, int32_t NurturingLevelOverride, float GridHalfSizeOverride, float GridSpaceBetweenOverride, bool bSetOwningController); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingSpawnAtLocation // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x680cd34
	void RealitySaplingSendToGhostState(bool bOnlyForCallingPlayer); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingSendToGhostState // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x64a1f14
	void RealitySaplingQueueToSpawnAtPlayerLocation(int32_t MaturityLevelOverride, int32_t NurturingLevelOverride, bool bSetOwningController); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingQueueToSpawnAtPlayerLocation // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x680cc54
	void RealitySaplingQueueToSpawnAtLocation(float X, float Y, float Z, int32_t MaturityLevelOverride, int32_t NurturingLevelOverride, bool bSetOwningController); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingQueueToSpawnAtLocation // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x680cabc
	void RealitySaplingLogSaplingData(bool bOnlyForCallingPlayer); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingLogSaplingData // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x64a1f14
	void RealitySaplingLevelUpAndRespawn(bool bAutoWeed); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingLevelUpAndRespawn // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x64a1f14
	void RealitySaplingDestroyOwned(); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingDestroyOwned // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x24841e4
};

// Class RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling
// Size: 0x220 (Inherited: 0xa0)
struct UFortControllerComponent_RealitySapling : UFortControllerComponent {
	struct FMulticastInlineDelegate OnOwnedSaplingsChanged; // 0xa0(0x10)
	struct TArray<struct FOwnedRealitySaplingData> OwnedSaplings; // 0xb0(0x10)
	struct TArray<struct UFortMiniMapIndicator*> OwnedIndicators; // 0xc0(0x10)
	struct URealitySaplingAccountItemDefinition* RealitySaplingAccountItemDefinition; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FSlateBrush MiniMapIconBrush; // 0xe0(0xc0)
	struct FVector2D MobileMinimapIconBrushSize; // 0x1a0(0x10)
	struct FGameplayTag SaplingPlantedGameplayEventTag; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct TArray<struct FRealitySaplingPersistentData> StoredRealitySaplings; // 0x1b8(0x10)
	char pad_1C8[0x8]; // 0x1c8(0x08)
	struct FScalableFloat bUpdateSaplingPersistentLocationEachMatch; // 0x1d0(0x28)
	struct FScalableFloat bPersistentRealitySaplingsEnabled; // 0x1f8(0x28)

	void SetFirstOwnedSaplingData(struct FOwnedRealitySaplingData InSaplingData); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.SetFirstOwnedSaplingData // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x680d6d8
	void RegisterPlantedSapling(struct ABuildingRealitySapling* RealitySapling, bool bIsNewSapling); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.RegisterPlantedSapling // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x680d610
	void OnRep_OwnedSaplings(); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.OnRep_OwnedSaplings // (Final|Native|Public) // @ game+0x680ca00
	void OnAthenaProfileInitialized(); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.OnAthenaProfileInitialized // (Final|Native|Private) // @ game+0x24addbc
	bool HasPersistentSapling(); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.HasPersistentSapling // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x680c9c4
	bool HasActiveSapling(); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.HasActiveSapling // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x680c9c4
	void HandleSaplingDestroyedDirectly(struct AActor* DestroyedActor); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.HandleSaplingDestroyedDirectly // (Final|Native|Private) // @ game+0x64a2a4c
	void HandleCurrentPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.HandleCurrentPlaylistLoaded // (Final|Native|Private|HasOutParms) // @ game+0x680c8c8
	struct TArray<struct FOwnedRealitySaplingData> GetOwnedSaplings(); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.GetOwnedSaplings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x680c7b0
	int32_t GetMaxSaplingsPerPlayer(); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.GetMaxSaplingsPerPlayer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x680c680
	bool GetFirstOwnedSaplingData(struct FOwnedRealitySaplingData& OutSaplingData); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.GetFirstOwnedSaplingData // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x680c57c
	struct ABuildingRealitySapling* GetFirstOwnedSapling(); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.GetFirstOwnedSapling // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x680c554
	void ClientRegisterPlantedSapling(bool bIsNewSapling); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.ClientRegisterPlantedSapling // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x680c4d0
	void CacheAccountItemData(); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.CacheAccountItemData // (Final|Native|Private) // @ game+0x680c4bc
};

// Class RealitySeedGameplayRuntime.FortGameStateComponent_RealitySapling
// Size: 0x220 (Inherited: 0xa0)
struct UFortGameStateComponent_RealitySapling : UFortGameStateComponent {
	enum class EAthenaGamePhaseStep StartSpawningSaplingsGamePhaseStep; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FScalableFloat bPersistentRealitySaplingsEnabled; // 0xa8(0x28)
	struct TSoftClassPtr<UObject> SaplingAsset; // 0xd0(0x28)
	struct FScalableFloat bUsePerfCulledSaplingAssetOnSpawnFailed; // 0xf8(0x28)
	struct TSoftClassPtr<UObject> PerfCulledSaplingAsset; // 0x120(0x28)
	struct TSoftObjectPtr<UEnvQuery> SaplingSpawnEnvQuery; // 0x148(0x28)
	struct TMap<struct FName, struct FScalableFloat> SaplingSpawnEnvQueryFloatParamMap; // 0x170(0x50)
	struct TArray<struct FRealitySaplingEnvQueryParam> SaplingSpawnEnvQueryParams; // 0x1c0(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> SaplingSpawnEnvQueryActorClassesToAvoidByBounds; // 0x1d0(0x10)
	struct TArray<struct FRealitySaplingPersistentData> SaplingDataToSpawn; // 0x1e0(0x10)
	char pad_1F0[0x10]; // 0x1f0(0x10)
	struct TArray<struct ABuildingRealitySapling*> SpawnedSaplings; // 0x200(0x10)
	struct TArray<struct AActor*> SaplingSpawnEnvQueryActorsToAvoidByBounds; // 0x210(0x10)

	void HandleGamePhaseStepChanged(struct TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep); // Function RealitySeedGameplayRuntime.FortGameStateComponent_RealitySapling.HandleGamePhaseStepChanged // (Final|Native|Protected|HasOutParms) // @ game+0x66d264c
	void HandleCurrentPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // Function RealitySeedGameplayRuntime.FortGameStateComponent_RealitySapling.HandleCurrentPlaylistLoaded // (Final|Native|Protected|HasOutParms) // @ game+0x64a2008
	struct TArray<struct AActor*> GetSaplingSpawnEnvQueryActorsToAvoidByBounds(); // Function RealitySeedGameplayRuntime.FortGameStateComponent_RealitySapling.GetSaplingSpawnEnvQueryActorsToAvoidByBounds // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x680c8ac
	int32_t GetNumSaplingsInRadius(struct FVector& Location, float Radius); // Function RealitySeedGameplayRuntime.FortGameStateComponent_RealitySapling.GetNumSaplingsInRadius // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x680c6d0
};

// Class RealitySeedGameplayRuntime.FortQueryContext_RealitySaplingLocations
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_RealitySaplingLocations : UEnvQueryContext {
};

// Class RealitySeedGameplayRuntime.FortQueryTest_RealitySaplingObstructed
// Size: 0x290 (Inherited: 0x1f8)
struct UFortQueryTest_RealitySaplingObstructed : UEnvQueryTest {
	struct FAIDataProviderFloatValue SphereOverlapRadius; // 0x1f8(0x38)
	struct FAIDataProviderFloatValue SphereOverlapZOffset; // 0x230(0x38)
	char bOnlyBlockingHits : 1; // 0x268(0x01)
	char bOverlapComplex : 1; // 0x268(0x01)
	char pad_268_2 : 6; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct TArray<enum class ECollisionChannel> ObjectTypesToQuery; // 0x270(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> IgnoreActorClasses; // 0x280(0x10)
};

// Class RealitySeedGameplayRuntime.FortQueryTest_RealitySaplingsInRadius
// Size: 0x268 (Inherited: 0x1f8)
struct UFortQueryTest_RealitySaplingsInRadius : UEnvQueryTest {
	struct FAIDataProviderFloatValue Radius; // 0x1f8(0x38)
	struct FAIDataProviderIntValue MaxNumSaplingsInRadius; // 0x230(0x38)
};

