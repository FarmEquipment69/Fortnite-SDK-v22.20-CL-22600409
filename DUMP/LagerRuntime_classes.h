// Class LagerRuntime.FortAthenaLinearEncounterAnalyticComponent
// Size: 0xf8 (Inherited: 0xa0)
struct UFortAthenaLinearEncounterAnalyticComponent : UActorComponent {
	char pad_A0[0x58]; // 0xa0(0x58)

	void OnStageCompleted(struct TArray<struct AFortPickup*>& SpawnedRewards); // Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnStageCompleted // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x651d08c
	void OnEncounterStart(struct UFortAthenaLivingWorldEncounterInstance* InAttackerEncounter, struct UFortAthenaLivingWorldEncounterInstance* InDefenderEncounter); // Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnEncounterStart // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x64c99dc
	void OnEncounterEnd(); // Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnEncounterEnd // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x24841e4
	void OnDefenderSpawned(struct AActor* SpawnedDefender); // Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderSpawned // (Final|Native|Private) // @ game+0x651ce38
	void OnDefenderDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderDied // (Final|Native|Private|HasDefaults) // @ game+0x651cad4
	void OnDefenderDidDamage(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderDidDamage // (Final|Native|Private|HasDefaults) // @ game+0x651c834
	void OnDefenderDamaged(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderDamaged // (Final|Native|Private|HasDefaults) // @ game+0x651c5b4
	void OnAttackerSpawned(struct AActor* SpawnedAttacker); // Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnAttackerSpawned // (Final|Native|Private) // @ game+0x651c53c
};

// Class LagerRuntime.FortAthenaLivingWorldConfigData
// Size: 0x208 (Inherited: 0x30)
struct UFortAthenaLivingWorldConfigData : UDataAsset {
	struct TArray<struct FFortAthenaLivingWorldCategoryTableData> CategoryTableDatas; // 0x30(0x10)
	struct FScalableFloat MaxActorCount; // 0x40(0x28)
	struct FScalableFloat MaxEventSpawnPerTick; // 0x68(0x28)
	struct FScalableFloat MaxActorDespawnPerTick; // 0x90(0x28)
	struct FScalableFloat MinimumEventGenerationInterval; // 0xb8(0x28)
	struct FScalableFloat MaxActorDensity; // 0xe0(0x28)
	struct FScalableFloat MaxActorUpdatesPerTick; // 0x108(0x28)
	struct FScalableFloat ActorDensityGridCellSize; // 0x130(0x28)
	struct FScalableFloat PointClusterSize; // 0x158(0x28)
	struct FScalableFloat MinNumberOfPlayerForAggressiveSpawning; // 0x180(0x28)
	struct TArray<struct FFortAthenaLivingWorldTagDensityGridData> TagDensityGridData; // 0x1a8(0x10)
	struct FGameplayTagQuery SingleUseSpawnerDataQuery; // 0x1b8(0x48)
	struct AActor* EQSActorHelperClass; // 0x200(0x08)
};

// Class LagerRuntime.FortAthenaLivingWorldDebugDensityMiniMapIndicator
// Size: 0x190 (Inherited: 0x140)
struct UFortAthenaLivingWorldDebugDensityMiniMapIndicator : UFortMiniMapIndicator {
	struct TArray<struct FFortAthenaActorDensityDebugInfo> ActorDebugInfos; // 0x140(0x10)
	struct TArray<float> DensityGridValues; // 0x150(0x10)
	struct FVector GridOrigin; // 0x160(0x18)
	struct FIntVector MaxGridSize; // 0x178(0x0c)
	float CellSize; // 0x184(0x04)
	float MaxDensity; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
};

// Class LagerRuntime.FortAthenaLivingWorldEncounter
// Size: 0x68 (Inherited: 0x30)
struct UFortAthenaLivingWorldEncounter : UDataAsset {
	struct FScalableFloat IntervalBetweenEventGeneration; // 0x30(0x28)
	struct TArray<struct FFortAthenaLivingWorldEncounterStage> Stages; // 0x58(0x10)
};

// Class LagerRuntime.FortAthenaLivingWorldEncounterInstance
// Size: 0x100 (Inherited: 0x28)
struct UFortAthenaLivingWorldEncounterInstance : UObject {
	struct FMulticastInlineDelegate OnActorSpawned; // 0x28(0x10)
	struct FMulticastInlineDelegate OnActorDestroyed; // 0x38(0x10)
	char pad_48[0x50]; // 0x48(0x50)
	struct TArray<struct TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>> OriginalPointProviders; // 0x98(0x10)
	struct TArray<struct TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>> RegisteredPointProviders; // 0xa8(0x10)
	struct TSoftObjectPtr<UFortAthenaLivingWorldEncounter> EncounterDefinition; // 0xb8(0x28)
	struct AActor* ActorDensityReservoir; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
	int32_t CurrentStageIndex; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	bool bIsPaused; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)

	void StartEncounterStage(int32_t StageIndex); // Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.StartEncounterStage // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x651d2a4
	void ResumeEncounter(); // Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.ResumeEncounter // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x651d28c
	void Reset(); // Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.Reset // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x24841e4
	void RequestEventGeneration(); // Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.RequestEventGeneration // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x651d258
	void PauseEncounter(); // Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.PauseEncounter // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x651d240
	bool OwnsActor(struct AActor* Actor); // Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.OwnsActor // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x651d1d4
	void OnActorSpawned__DelegateSignature(struct AActor* SpawnedActor); // DelegateFunction LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorSpawned__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	void OnActorDestroyed__DelegateSignature(struct AActor* DestroyedActor); // DelegateFunction LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorDestroyed__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	int32_t GetTotalActorCount(); // Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.GetTotalActorCount // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x651c528
	void AdvanceEncounterStage(); // Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.AdvanceEncounterStage // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x651c514
};

// Class LagerRuntime.FortAthenaLivingWorldEventData
// Size: 0x108 (Inherited: 0x30)
struct UFortAthenaLivingWorldEventData : UDataAsset {
	int32_t TimeOfDayFilters; // 0x30(0x04)
	float WaterLevelIndexMin; // 0x34(0x04)
	float WaterLevelIndexMax; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FGameplayTagQuery ProviderFiltersTagQuery; // 0x40(0x48)
	struct TArray<struct FPointProviderFilterEntry> ProviderFiltersEntries; // 0x88(0x10)
	struct TArray<struct FFortAthenaLivingWorldTaggedSpawnActionClass> SpawnActions; // 0x98(0x10)
	struct FScalableFloat MinActorCountToSpawn; // 0xa8(0x28)
	struct FScalableFloat MaxActorCountToSpawn; // 0xd0(0x28)
	struct TArray<struct FFortAthenaLivingWorldEventDataActorSpawnDescription> ActorDescriptions; // 0xf8(0x10)
};

// Class LagerRuntime.FortAthenaLivingWorldManager
// Size: 0x8f0 (Inherited: 0xa0)
struct UFortAthenaLivingWorldManager : UGameStateComponent {
	struct TSoftObjectPtr<UFortAthenaLivingWorldConfigData> DefaultLagerConfig; // 0xa0(0x28)
	struct TArray<struct FFortLivingWorldConfigOverride> LagerConfigOverrides; // 0xc8(0x10)
	struct FScalableFloat LagerEnabled; // 0xd8(0x28)
	struct TMap<struct FGameplayTag, struct UFortAthenaLivingWorldSpawnAction*> TaggedSpawnActionClassMap; // 0x100(0x50)
	struct TArray<struct TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>> PointProviders; // 0x150(0x10)
	struct FSlateBrush SpecialActorMinimapIconBrush; // 0x160(0xc0)
	struct FVector2D SpecialActorMinimapIconScale; // 0x220(0x10)
	struct FSlateBrush SpecialActorCompassIconBrush; // 0x230(0xc0)
	struct FVector2D SpecialActorCompassIconScale; // 0x2f0(0x10)
	struct TArray<struct UFortAthenaSpawnerDataBase*> SpawnedSingleUseSpawnerData; // 0x300(0x10)
	struct UWorld* CachedWorld; // 0x310(0x08)
	struct UFortAthenaLivingWorldConfigData* CachedConfig; // 0x318(0x08)
	struct TArray<struct UFortAthenaLivingWorldEncounterInstance*> RunningEncounterInstances; // 0x320(0x10)
	struct UFortSeasonalEventManager* CachedSeasonalEventManager; // 0x330(0x08)
	struct TArray<struct TSoftClassPtr<UObject>> ActorClassToPreloadOnClient; // 0x338(0x10)
	struct FFortAthenaLivingWorldPlayerTracker PlayerTracker; // 0x348(0xb0)
	struct FFortAthenaLivingWorldPreloader Preloader; // 0x3f8(0x90)
	char pad_488[0x1b0]; // 0x488(0x1b0)
	struct TArray<struct AActor*> RuntimePointProviderList; // 0x638(0x10)
	struct TSet<struct AActor*> RuntimePointProviderOwners; // 0x648(0x50)
	char pad_698[0x1f0]; // 0x698(0x1f0)
	struct TMap<struct UFortAthenaLivingWorldSpawnAction*, struct UFortAthenaLivingWorldSpawnAction*> SpawnActionCache; // 0x888(0x50)
	struct AActor* EQSHelper; // 0x8d8(0x08)
	struct UFortAthenaLivingWorldDebugDensityMiniMapIndicator* DebugDensityMinimapIndicator; // 0x8e0(0x08)
	char pad_8E8[0x8]; // 0x8e8(0x08)

	void UnregisterDensityReservoir(struct AActor* ActorDensityReservoir); // Function LagerRuntime.FortAthenaLivingWorldManager.UnregisterDensityReservoir // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x651f96c
	bool TrySpawnEvent(struct FDataTableRowHandle EventEntry, struct FTransform SpawnLocation, struct FDelegate& OnRequestFinished, int32_t& RequestId); // Function LagerRuntime.FortAthenaLivingWorldManager.TrySpawnEvent // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x651f790
	struct UFortAthenaLivingWorldEncounterInstance* StartEncounter(struct TSoftObjectPtr<UFortAthenaLivingWorldEncounter> EncounterType, struct TArray<struct TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>>& EncounterPointProviders, struct AActor* ActorDensityReservoir); // Function LagerRuntime.FortAthenaLivingWorldManager.StartEncounter // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x651f558
	void ResetEncounter(struct UFortAthenaLivingWorldEncounterInstance* EncounterInstance); // Function LagerRuntime.FortAthenaLivingWorldManager.ResetEncounter // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x651f450
	void RequestEventGeneration(); // Function LagerRuntime.FortAthenaLivingWorldManager.RequestEventGeneration // (Final|Native|Public|BlueprintCallable) // @ game+0x651f420
	void RegisterDensityReservoir(struct AActor* ActorDensityReservoir, float Density, float Range); // Function LagerRuntime.FortAthenaLivingWorldManager.RegisterDensityReservoir // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x651ef88
	int32_t QueryEventBudget(struct FDataTableRowHandle EventEntry, struct AActor* SpawnLocation); // Function LagerRuntime.FortAthenaLivingWorldManager.QueryEventBudget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x651eea8
	void OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags); // Function LagerRuntime.FortAthenaLivingWorldManager.OnWorldFinishedInitialization // (Final|Native|Private|HasOutParms) // @ game+0x651edf0
	void OnUnmanagedDensityReservoirActorDestroy(struct AActor* DestroyedActor); // Function LagerRuntime.FortAthenaLivingWorldManager.OnUnmanagedDensityReservoirActorDestroy // (Final|Native|Private) // @ game+0x651ed70
	void OnSpawnedActorDestroy(struct AActor* DestroyedActor); // Function LagerRuntime.FortAthenaLivingWorldManager.OnSpawnedActorDestroy // (Final|Native|Private) // @ game+0x651ec70
	void OnRep_DebugDensityMinimapIndicator(struct UFortAthenaLivingWorldDebugDensityMiniMapIndicator* OldMapIndicator); // Function LagerRuntime.FortAthenaLivingWorldManager.OnRep_DebugDensityMinimapIndicator // (Final|Native|Private) // @ game+0x64a2a4c
	void OnRep_ActorClassToPreloadOnClient(); // Function LagerRuntime.FortAthenaLivingWorldManager.OnRep_ActorClassToPreloadOnClient // (Final|Native|Private) // @ game+0x2224a84
	void OnPatrolPathAdded(struct AFortAthenaPatrolPath* PatrolPath); // Function LagerRuntime.FortAthenaLivingWorldManager.OnPatrolPathAdded // (Final|Native|Private) // @ game+0x651eb10
	void OnDebugSpawnEventSpawned(struct TArray<struct AActor*>& SpawnedActors, bool bSuccess); // Function LagerRuntime.FortAthenaLivingWorldManager.OnDebugSpawnEventSpawned // (Final|Native|Private|HasOutParms) // @ game+0x651e99c
	void OnCurrentPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // Function LagerRuntime.FortAthenaLivingWorldManager.OnCurrentPlaylistLoaded // (Final|Native|Private|HasOutParms) // @ game+0x651e888
	void OnActorSpawned(struct AActor* Actor, int32_t RequestId); // Function LagerRuntime.FortAthenaLivingWorldManager.OnActorSpawned // (Final|Native|Private) // @ game+0x651e7c4
	void LivingWorldManagerUnregisterPointProvider(struct AActor* PointProvider); // Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerUnregisterPointProvider // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x651e5bc
	void LivingWorldManagerToggleVerboseLogging(); // Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleVerboseLogging // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x24841e4
	void LivingWorldManagerToggleGenerateEvents(); // Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleGenerateEvents // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x24841e4
	void LivingWorldManagerToggleDensityDisplay(); // Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleDensityDisplay // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x24841e4
	void LivingWorldManagerToggleActorMinimap(struct FString Name); // Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleActorMinimap // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x651e628
	void LivingWorldManagerRegisterPointProvider(struct AActor* PointProvider); // Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerRegisterPointProvider // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x651e5bc
	void LivingWorldManagerProviderDebugActor(int32_t ProviderIndex); // Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerProviderDebugActor // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x651e558
	void LivingWorldManagerGenerateEvents(); // Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerGenerateEvents // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x24841e4
	void LivingWorldManagerFlush(); // Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerFlush // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x24841e4
	void LivingWorldManagerDumpSpawnCount(); // Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpSpawnCount // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x24841e4
	void LivingWorldManagerDumpEventInstances(); // Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpEventInstances // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x24841e4
	bool IsEncounterCategoryActive(struct TSoftObjectPtr<UFortAthenaLivingWorldEncounter> EncounterType); // Function LagerRuntime.FortAthenaLivingWorldManager.IsEncounterCategoryActive // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x651e494
	struct UFortAthenaLivingWorldEncounterInstance* GetOwningEncounter(struct AActor* Actor); // Function LagerRuntime.FortAthenaLivingWorldManager.GetOwningEncounter // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x651dfd8
	struct UFortAthenaLivingWorldManager* GetLivingWorldManager(struct UObject* WorldContextObject); // Function LagerRuntime.FortAthenaLivingWorldManager.GetLivingWorldManager // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x651df1c
	void EndEncounter(struct UFortAthenaLivingWorldEncounterInstance* EncounterInstance); // Function LagerRuntime.FortAthenaLivingWorldManager.EndEncounter // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x651dd2c
	void CancelSpawnRequest(int32_t RequestId); // Function LagerRuntime.FortAthenaLivingWorldManager.CancelSpawnRequest // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x651dba8
};

// Class LagerRuntime.FortAthenaLivingWorldPointProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UFortAthenaLivingWorldPointProviderInterface : UInterface {

	void OnSpawnedActorFailed(); // Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActorFailed // (Native|Public|BlueprintCallable) // @ game+0x63893c8
	void OnSpawnedActorDestroyed(struct AActor* DestroyedActor); // Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActorDestroyed // (Native|Public|BlueprintCallable) // @ game+0x651ecf0
	void OnSpawnedActor(struct AActor* SpawnedActor, struct FVector& PositionFromProvider); // Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActor // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x651eba4
	void OnEventRequested(int32_t NumberOfActors); // Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnEventRequested // (Native|Public|BlueprintCallable) // @ game+0x651ea90
	bool IsEnabled(struct FFortAthenaLivingWorldPointProviderFilterRules& PointFilter); // Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.IsEnabled // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x651e3c8
	bool GetValidLocation(struct FFortAthenaLivingWorldPointProviderFilterRules& PointFilter, struct FVector& OutPosition, struct FRotator& OutRotation); // Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetValidLocation // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x651e23c
	struct FVector GetPointProviderLocation(); // Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetPointProviderLocation // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x651e204
	void GetFiltersTags(struct FGameplayTagContainer& FilterTags); // Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetFiltersTags // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x651de18
	void EnablePointProvider(); // Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.EnablePointProvider // (Native|Public|BlueprintCallable) // @ game+0x234b9f8
	void DisablePointProvider(); // Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.DisablePointProvider // (Native|Public|BlueprintCallable) // @ game+0x651dcdc
};

// Class LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler
// Size: 0x340 (Inherited: 0x288)
struct AFortAthenaLivingWorldPointProvidersEnabler : AActor {
	struct TArray<struct TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>> EnabledLinkedPointProviders; // 0x288(0x10)
	struct TArray<struct TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>> AvailableLinkedPointProviders; // 0x298(0x10)
	struct FGameplayTagContainer EnablerTags; // 0x2a8(0x20)
	struct TArray<struct TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>> LinkedPointProviders; // 0x2c8(0x10)
	struct FScalableFloat PointProvidersToEnable; // 0x2d8(0x28)
	struct FScalableFloat EvaluateAutomatically; // 0x300(0x28)
	char pad_328[0x8]; // 0x328(0x08)
	struct FMulticastInlineDelegate OnCompletedEvaluationDelegate; // 0x330(0x10)

	void RemoveClosestPointProvidersToPoint(struct FVector& Point, float MaximumDistance, int32_t PointsToDisable); // Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.RemoveClosestPointProvidersToPoint // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x651f080
	void OnCurrentPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCurrentPlaylistLoaded // (Final|Native|Private|HasOutParms) // @ game+0x64a2008
	void OnCompletedEvaluation__DelegateSignature(struct TArray<struct TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>>& EnabledPointProviders); // DelegateFunction LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCompletedEvaluation__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xd67374
	bool HasCompletedEvaluation(); // Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.HasCompletedEvaluation // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x651e3b0
	struct FGameplayTagContainer GetEnablerTags(); // Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnablerTags // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x651ddfc
	struct TArray<struct TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>> GetEnabledLinkedPointProviders(); // Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnabledLinkedPointProviders // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x651dde0
	void EvaluateAndEnablePointProviders(); // Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.EvaluateAndEnablePointProviders // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x24841e4
	bool DoesStartEnabled(); // Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.DoesStartEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x651dcf0
};

// Class LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride
// Size: 0x340 (Inherited: 0x340)
struct AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride : AFortAthenaLivingWorldPointProvidersEnabler {
};

// Class LagerRuntime.FortAthenaLivingWorldPrefab
// Size: 0x8a0 (Inherited: 0x7f0)
struct AFortAthenaLivingWorldPrefab : ABuildingLevelInstance {
	struct TArray<struct FFortAthenaLivingWorldPrefabActorSpawnerData> ActorSpawnerDatas; // 0x7f0(0x10)
	struct FBox LocalLevelBounds; // 0x800(0x38)
	struct FMulticastInlineDelegate OnAllActorSpawnedDelegate; // 0x838(0x10)
	struct TArray<struct ABuildingActor*> BuildingsToKill; // 0x848(0x10)
	struct FDelegate FinishedDestroyingBuildingCallback; // 0x858(0x0c)
	bool bHasFinishedSpawn; // 0x864(0x01)
	char pad_865[0x3]; // 0x865(0x03)
	struct FScalableFloat bIsEnabled; // 0x868(0x28)
	bool bShouldLevelBeVisible; // 0x890(0x01)
	char pad_891[0xf]; // 0x891(0x0f)

	void OnRep_ShouldLevelBeVisible(); // Function LagerRuntime.FortAthenaLivingWorldPrefab.OnRep_ShouldLevelBeVisible // (Final|Native|Protected) // @ game+0x651eb90
	void OnBuildingInLevelBoundsDestroyed__DelegateSignature(); // DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefab.OnBuildingInLevelBoundsDestroyed__DelegateSignature // (Public|Delegate) // @ game+0xd67374
	void OnAllActorSpawned__DelegateSignature(struct TArray<struct AActor*>& SpawnedActors); // DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefab.OnAllActorSpawned__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xd67374
	void MakeLevelVisible(); // Function LagerRuntime.FortAthenaLivingWorldPrefab.MakeLevelVisible // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x651e788
	struct AFortAthenaLivingWorldPrefab* GetOwningLivingWorldPrefab(struct UObject* WorldContextObject); // Function LagerRuntime.FortAthenaLivingWorldPrefab.GetOwningLivingWorldPrefab // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x651e184
	struct FBox GetLevelBounds(); // Function LagerRuntime.FortAthenaLivingWorldPrefab.GetLevelBounds // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x651ded4
	void DestroyBuildingsInLevelBounds(struct FDelegate& FinishedDelegate); // Function LagerRuntime.FortAthenaLivingWorldPrefab.DestroyBuildingsInLevelBounds // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x651dc38
};

// Class LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner
// Size: 0x3b0 (Inherited: 0x288)
struct AFortAthenaLivingWorldPrefabActorSpawner : AActor {
	struct FFortAthenaLivingWorldActorSpawnDescription ActorDescription; // 0x288(0xf8)
	struct FMulticastInlineDelegate OnActorSpawnedDelegate; // 0x380(0x10)
	struct AFortAthenaPatrolPath* PatrolPath; // 0x390(0x08)
	struct FGuid Guid; // 0x398(0x10)
	struct AActor* SpawnedActor; // 0x3a8(0x08)

	void OnActorSpawned__DelegateSignature(struct AActor* SpawnedActor); // DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnActorSpawned__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	struct AActor* GetSpawnedActor(); // Function LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.GetSpawnedActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6520af0
};

// Class LagerRuntime.FortAthenaLivingWorldSpawnAction
// Size: 0x28 (Inherited: 0x28)
struct UFortAthenaLivingWorldSpawnAction : UObject {
};

// Class LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint
// Size: 0x28 (Inherited: 0x28)
struct UFortAthenaLivingWorldSpawnActionBlueprint : UFortAthenaLivingWorldSpawnAction {

	void K2_OnAllActorSpawned(struct TArray<struct AActor*>& SpawnedActor); // Function LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint.K2_OnAllActorSpawned // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xd67374
};

// Class LagerRuntime.FortAthenaLivingWorldSpawnAction_AddAIToGroup
// Size: 0x28 (Inherited: 0x28)
struct UFortAthenaLivingWorldSpawnAction_AddAIToGroup : UFortAthenaLivingWorldSpawnAction {
};

// Class LagerRuntime.FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle
// Size: 0x38 (Inherited: 0x28)
struct UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle : UFortAthenaLivingWorldSpawnAction {
	struct TArray<struct FFortAthenaLivingWorldTagQueryToSeatMapping> SeatMappings; // 0x28(0x10)
};

// Class LagerRuntime.FortAthenaLivingWorldStaticPointProvider
// Size: 0x328 (Inherited: 0x288)
struct AFortAthenaLivingWorldStaticPointProvider : AActor {
	char pad_288[0x8]; // 0x288(0x08)
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x290(0x38)
	struct FGameplayTagContainer FiltersTags; // 0x2c8(0x20)
	struct TArray<struct FTransform> SpawnPoints; // 0x2e8(0x10)
	bool bStartEnabled; // 0x2f8(0x01)
	bool bRandomizeStartPoint; // 0x2f9(0x01)
	char pad_2FA[0x6]; // 0x2fa(0x06)
	struct FMulticastInlineDelegate OnActorSpawned; // 0x300(0x10)
	struct AFortGameStateAthena* CachedGameState; // 0x310(0x08)
	struct UFortAthenaLivingWorldManager* CachedLivingWorldManager; // 0x318(0x08)
	char pad_320[0x8]; // 0x320(0x08)

	void OnCurrentPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // Function LagerRuntime.FortAthenaLivingWorldStaticPointProvider.OnCurrentPlaylistLoaded // (Final|Native|Protected|HasOutParms) // @ game+0x6521294
	void OnActorSpawned__DelegateSignature(struct AActor* SpawnedActor); // DelegateFunction LagerRuntime.FortAthenaLivingWorldStaticPointProvider.OnActorSpawned__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	void EnablePointProvider(); // Function LagerRuntime.FortAthenaLivingWorldStaticPointProvider.EnablePointProvider // (Native|Public|BlueprintCallable) // @ game+0x6520ab8
	void DisablePointProvider(); // Function LagerRuntime.FortAthenaLivingWorldStaticPointProvider.DisablePointProvider // (Native|Public|BlueprintCallable) // @ game+0x6520a68
};

// Class LagerRuntime.FortAthenaLivingWorldVehiclePointProvider
// Size: 0x350 (Inherited: 0x328)
struct AFortAthenaLivingWorldVehiclePointProvider : AFortAthenaLivingWorldStaticPointProvider {
	struct FGameplayTagContainer ForceMods; // 0x328(0x20)
	enum class EVehicleInitialOverlapBehavior InitialOverlapBehavior; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
};

// Class LagerRuntime.FortAthenaLivingWorldVolume
// Size: 0x588 (Inherited: 0x2c0)
struct AFortAthenaLivingWorldVolume : AVolume {
	char pad_2C0[0x8]; // 0x2c0(0x08)
	bool bStartEnabled; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FGameplayTagContainer FiltersTags; // 0x2d0(0x20)
	struct UEnvQuery* EnvironmentQuery; // 0x2f0(0x08)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x2f8(0x10)
	bool bRemoveUsedPoint; // 0x308(0x01)
	bool bRemoveUsedPointPermenantly; // 0x309(0x01)
	char pad_30A[0x6]; // 0x30a(0x06)
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x310(0x38)
	struct FScalableFloat EQSRefreshInterval; // 0x348(0x28)
	struct FScalableFloat WaterLevelIndexMin; // 0x370(0x28)
	struct FScalableFloat WaterLevelIndexMax; // 0x398(0x28)
	struct AFortGameStateAthena* CachedGameState; // 0x3c0(0x08)
	struct FMulticastInlineDelegate OnActorSpawnedResult; // 0x3c8(0x10)
	struct FMulticastInlineDelegate OnPointProviderRegistered; // 0x3d8(0x10)
	struct UFortAthenaLivingWorldManager* CachedLivingWorldManager; // 0x3e8(0x08)
	char pad_3F0[0x198]; // 0x3f0(0x198)

	void SetSpawnRotation(struct FRotator& Rotation); // Function LagerRuntime.FortAthenaLivingWorldVolume.SetSpawnRotation // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x65219a8
	void SetFiltersTags(struct FGameplayTagContainer& TagContainer); // Function LagerRuntime.FortAthenaLivingWorldVolume.SetFiltersTags // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6521894
	void SetEQSQueryConfigParam(struct FName ParameterName, float Value); // Function LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQueryConfigParam // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x65217cc
	void SetEQSQuery(struct UEnvQuery* Query); // Function LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQuery // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x652174c
	void RunEQS(); // Function LagerRuntime.FortAthenaLivingWorldVolume.RunEQS // (Final|Native|Private) // @ game+0x24841e4
	void ResetSpawnRotation(); // Function LagerRuntime.FortAthenaLivingWorldVolume.ResetSpawnRotation // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x6521728
	void OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags); // Function LagerRuntime.FortAthenaLivingWorldVolume.OnWorldFinishedInitialization // (Final|Native|Private|HasOutParms) // @ game+0x652167c
	void OnPointProviderRegistered__DelegateSignature(struct AFortAthenaLivingWorldVolume* PointProviderVolume); // DelegateFunction LagerRuntime.FortAthenaLivingWorldVolume.OnPointProviderRegistered__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	void OnCurrentPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // Function LagerRuntime.FortAthenaLivingWorldVolume.OnCurrentPlaylistLoaded // (Final|Native|Private|HasOutParms) // @ game+0x6521390
	void OnActorSpawnedResult__DelegateSignature(struct AActor* SpawnedActor, bool bResult); // DelegateFunction LagerRuntime.FortAthenaLivingWorldVolume.OnActorSpawnedResult__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	bool IsPointProviderEnabled(); // Function LagerRuntime.FortAthenaLivingWorldVolume.IsPointProviderEnabled // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6520b08
	void EnablePointProvider(); // Function LagerRuntime.FortAthenaLivingWorldVolume.EnablePointProvider // (Native|Public|BlueprintCallable) // @ game+0x6520ad4
	bool DoesStartEnabled(); // Function LagerRuntime.FortAthenaLivingWorldVolume.DoesStartEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6520aa0
	void DisablePointProvider(); // Function LagerRuntime.FortAthenaLivingWorldVolume.DisablePointProvider // (Native|Public|BlueprintCallable) // @ game+0x6520a84
};

// Class LagerRuntime.FortAthenaPatrolPathPointProvider
// Size: 0x328 (Inherited: 0x288)
struct AFortAthenaPatrolPathPointProvider : AActor {
	char pad_288[0x8]; // 0x288(0x08)
	struct FGameplayTagContainer FiltersTags; // 0x290(0x20)
	struct AFortAthenaPatrolPath* AssociatedPatrolPath; // 0x2b0(0x08)
	char bStartEnabled : 1; // 0x2b8(0x01)
	char bSpawnOnPatrolPath : 1; // 0x2b8(0x01)
	char bAlignOrientationToPath : 1; // 0x2b8(0x01)
	char pad_2B8_3 : 5; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x2c0(0x38)
	struct FMulticastInlineDelegate OnActorSpawnedResult; // 0x2f8(0x10)
	struct TWeakObjectPtr<struct AFortAthenaPatrolPath> RuntimePatrolPathWeakPtr; // 0x308(0x08)
	struct AFortGameStateAthena* CachedGameState; // 0x310(0x08)
	struct UFortAthenaLivingWorldManager* CachedLivingWorldManager; // 0x318(0x08)
	char pad_320[0x8]; // 0x320(0x08)

	void OnCurrentPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // Function LagerRuntime.FortAthenaPatrolPathPointProvider.OnCurrentPlaylistLoaded // (Final|Native|Private|HasOutParms) // @ game+0x6521484
	void OnActorSpawnedResult__DelegateSignature(struct AActor* SpawnedActor, bool bResult); // DelegateFunction LagerRuntime.FortAthenaPatrolPathPointProvider.OnActorSpawnedResult__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	void EnablePointProvider(); // Function LagerRuntime.FortAthenaPatrolPathPointProvider.EnablePointProvider // (Native|Public|BlueprintCallable) // @ game+0x6520ab8
	void DisablePointProvider(); // Function LagerRuntime.FortAthenaPatrolPathPointProvider.DisablePointProvider // (Native|Public|BlueprintCallable) // @ game+0x6520a68
};

// Class LagerRuntime.FortAthenaPointAroundPlayerProvider
// Size: 0x318 (Inherited: 0x288)
struct AFortAthenaPointAroundPlayerProvider : AActor {
	char pad_288[0x8]; // 0x288(0x08)
	struct FGameplayTagContainer FiltersTags; // 0x290(0x20)
	struct UEnvQuery* QueryTemplate; // 0x2b0(0x08)
	enum class EEnvQueryRunMode RunMode; // 0x2b8(0x01)
	char bStartEnabled : 1; // 0x2b9(0x01)
	char bGenerateAroundPlayerBots : 1; // 0x2b9(0x01)
	char pad_2B9_2 : 6; // 0x2b9(0x01)
	char pad_2BA[0x2]; // 0x2ba(0x02)
	struct FGameplayTag IgnorePlayerWithTag; // 0x2bc(0x04)
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x2c0(0x38)
	struct FMulticastInlineDelegate OnActorSpawnedResult; // 0x2f8(0x10)
	struct AFortGameStateAthena* CachedGameState; // 0x308(0x08)
	char pad_310[0x8]; // 0x310(0x08)

	void OnCurrentPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // Function LagerRuntime.FortAthenaPointAroundPlayerProvider.OnCurrentPlaylistLoaded // (Final|Native|Private|HasOutParms) // @ game+0x6521580
	void OnActorSpawnedResult__DelegateSignature(struct AActor* SpawnedActor, bool bResult); // DelegateFunction LagerRuntime.FortAthenaPointAroundPlayerProvider.OnActorSpawnedResult__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	void EnablePointProvider(); // Function LagerRuntime.FortAthenaPointAroundPlayerProvider.EnablePointProvider // (Native|Public|BlueprintCallable) // @ game+0x6520ab8
	void DisablePointProvider(); // Function LagerRuntime.FortAthenaPointAroundPlayerProvider.DisablePointProvider // (Native|Public|BlueprintCallable) // @ game+0x6520a68
};

// Class LagerRuntime.FortCheatManager_LivingWorldManager
// Size: 0x40 (Inherited: 0x28)
struct UFortCheatManager_LivingWorldManager : UChildCheatManager {
	int32_t CheatTeleportToCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString CheatLastEventDataName; // 0x30(0x10)

	void LivingWorldManagerTriggerEvent(struct FString EventDataName); // Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTriggerEvent // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x5c90b24
	void LivingWorldManagerTeleportToSpawnPosition(struct FString EventDataName); // Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportToSpawnPosition // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x651e628
	void LivingWorldManagerTeleportTo(struct FString EventDataName); // Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportTo // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x651e628
	void LivingWorldManagerSpawnEventAtLocation(struct FString EventDataName, struct FVector Location, struct FRotator Rotation, struct FString SpawnerDataNames); // Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnEventAtLocation // (Final|BlueprintAuthorityOnly|Exec|Native|Public|HasDefaults) // @ game+0x6520f8c
	void LivingWorldManagerSpawnEvent(struct FString EventDataName, struct FString SpawnerDataNames); // Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnEvent // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x6520cfc
	void LivingWorldManagerSpawnAtLocation(struct FString EventDataName, struct FVector Location, struct FRotator Rotation); // Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnAtLocation // (Final|BlueprintAuthorityOnly|Exec|Native|Public|HasDefaults) // @ game+0x6520b20
	void LivingWorldManagerSpawn(struct FString EventDataName); // Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawn // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x651e628
};

// Class LagerRuntime.FortGameFeatureAction_AddCategoryTableToConfig
// Size: 0x78 (Inherited: 0x28)
struct UFortGameFeatureAction_AddCategoryTableToConfig : UGameFeatureAction {
	struct TMap<struct TSoftObjectPtr<UFortAthenaLivingWorldConfigData>, struct FFortAthenaLivingWorldCategoryTableDataList> ConfigToCategoryTableDatas; // 0x28(0x50)
};

// Class LagerRuntime.FortGameFeatureAction_AddLagerConfig
// Size: 0x38 (Inherited: 0x28)
struct UFortGameFeatureAction_AddLagerConfig : UGameFeatureAction {
	struct TArray<struct FFortLivingWorldConfigOverride> LagerConfigOverrides; // 0x28(0x10)
};

// Class LagerRuntime.FortPawnComponent_LivingWorldSpawnAroundPlayer
// Size: 0xc0 (Inherited: 0xa0)
struct UFortPawnComponent_LivingWorldSpawnAroundPlayer : UFortPawnComponent {
	struct TArray<struct FLivingWorldSpawnAroundPlayerRuntimeData> RuntimeData; // 0xa0(0x10)
	struct TArray<struct FLivingWorldSpawnAroundPlayerConfiguration> PerPlayerConfigurations; // 0xb0(0x10)
};

