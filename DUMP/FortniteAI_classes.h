// Class FortniteAI.FortAthenaAISpawnerDataComponent
// Size: 0x30 (Inherited: 0x28)
struct UFortAthenaAISpawnerDataComponent : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_ScriptBase
// Size: 0x30 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_ScriptBase : UFortAthenaAISpawnerDataComponent {
};

// Class FortniteAI.FortAthenaBTTask_BotMoveTo
// Size: 0xc0 (Inherited: 0xb0)
struct UFortAthenaBTTask_BotMoveTo : UBTTask_MoveTo {
	struct FName MovementResultKeyName; // 0xb0(0x04)
	struct FName ExecutionStatusKeyName; // 0xb4(0x04)
	char pad_B8[0x2]; // 0xb8(0x02)
	char bAllowRandomWobble : 1; // 0xba(0x01)
	char bIsUrgentMovement : 1; // 0xba(0x01)
	char pad_BA_2 : 6; // 0xba(0x01)
	char pad_BB[0x5]; // 0xbb(0x05)
};

// Class FortniteAI.FortAIComponent_Telemetry
// Size: 0x108 (Inherited: 0xa0)
struct UFortAIComponent_Telemetry : UActorComponent {
	struct AFortAIPawn* PossessedPawn; // 0xa0(0x08)
	struct AAthenaAIController* CachedAIController; // 0xa8(0x08)
	struct AController* DeathInstigator; // 0xb0(0x08)
	struct TArray<struct UFortItemDefinition*> GrabbedPickups; // 0xb8(0x10)
	struct TArray<struct UFortItemDefinition*> DroppedPickups; // 0xc8(0x10)
	struct UFortAthenaAIRuntimeParameters_AIAnalytic* AnalyticRuntimeParameters; // 0xd8(0x08)
	struct TArray<struct UFortAthenaAITelemetryData*> TelemetryData; // 0xe0(0x10)
	char pad_F0[0x18]; // 0xf0(0x18)

	void OnTetheredFollowerChanged(struct AFortPawn* NewFollower, struct AFortPawn* OldFollower); // Function FortniteAI.FortAIComponent_Telemetry.OnTetheredFollowerChanged // (Final|Native|Private) // @ game+0x99a0c3c
	void OnPawnDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.FortAIComponent_Telemetry.OnPawnDied // (Final|Native|Private|HasDefaults) // @ game+0x99a09c0
	void OnDidDamage(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.FortAIComponent_Telemetry.OnDidDamage // (Final|Native|Private|HasDefaults) // @ game+0x99a0744
	struct UFortAthenaAITelemetryData* GetOrCreateTelemetryData(struct UFortAthenaAITelemetryData* TelemetryDataClass); // Function FortniteAI.FortAIComponent_Telemetry.GetOrCreateTelemetryData // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99a04f4
};

// Class FortniteAI.FortAITask_Move
// Size: 0x158 (Inherited: 0x110)
struct UFortAITask_Move : UAITask_MoveTo {
	struct FFortMoveConfig MoveConfig; // 0x110(0x38)
	char pad_148[0x10]; // 0x148(0x10)
};

// Class FortniteAI.FortAIController
// Size: 0x518 (Inherited: 0x3b0)
struct AFortAIController : AAIController {
	char pad_3B0[0x28]; // 0x3b0(0x28)
	char bUsingNavMesh : 1; // 0x3d8(0x01)
	char bAlwaysNotifyBumpWall : 1; // 0x3d8(0x01)
	char bInstantRotation : 1; // 0x3d8(0x01)
	char bTurnTransitionsEnabled : 1; // 0x3d8(0x01)
	char pad_3D8_4 : 4; // 0x3d8(0x01)
	char pad_3D9_0 : 7; // 0x3d9(0x01)
	char bIgnoreAllActorsThatAreNotPawnsOrBuildings : 1; // 0x3d9(0x01)
	char bAllowHotspotAbilityLooping : 1; // 0x3da(0x01)
	char pad_3DA_1 : 7; // 0x3da(0x01)
	char pad_3DB[0x5]; // 0x3db(0x05)
	struct UFortPathFollowingComponent* FortPathFollowingComp; // 0x3e0(0x08)
	struct FAIHotSpotUseInfo CurrentHotSpot; // 0x3e8(0x18)
	struct UFortAthenaAIRuntimeParametersComponent* CachedAIRuntimeParametersComponent; // 0x400(0x08)
	struct UFortAthenaAIRuntimeParameters_AffiliationBase* CachedAffiliationRuntimeParameters; // 0x408(0x08)
	float GoalInfoUpdateRate; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct AActor* GoalActor; // 0x418(0x08)
	float GoalVisibilityPersistanceTime; // 0x420(0x04)
	char pad_424[0xa4]; // 0x424(0xa4)
	struct AFortAIPawn* MyFortPawn; // 0x4c8(0x08)
	struct FMulticastInlineDelegate OnTeamSetDelegate; // 0x4d0(0x10)
	struct FMulticastInlineDelegate OnControllerComponentAttachedEvent; // 0x4e0(0x10)
	struct UAIGoalComponent* AIGoalComponent; // 0x4f0(0x08)
	struct FMulticastInlineDelegate OnControllerNewGoalActorEvent; // 0x4f8(0x10)
	struct UBehaviorTree* BTAssetToRunOnPawnAISpawned; // 0x508(0x08)
	struct UFortGameStateComponent_AffiliationManager* CachedAffiliationManager; // 0x510(0x08)

	void WakeUp(); // Function FortniteAI.FortAIController.WakeUp // (Final|Native|Public|BlueprintCallable) // @ game+0x99a13f0
	void UnlockMovementResource(); // Function FortniteAI.FortAIController.UnlockMovementResource // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x99a13bc
	void UnlockBehaviorResource(); // Function FortniteAI.FortAIController.UnlockBehaviorResource // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x99a1388
	void SetupCustomVIM(struct UObject* VIM); // Function FortniteAI.FortAIController.SetupCustomVIM // (Final|Native|Public|BlueprintCallable) // @ game+0x99a12cc
	void SetTeamInt(char InTeam); // Function FortniteAI.FortAIController.SetTeamInt // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x99a11cc
	void SetTeam(enum class EFortTeam InTeam); // Function FortniteAI.FortAIController.SetTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x99a11cc
	void SetPawnAIType(enum class EFortressAIType NewAIType, struct AActor* SpawnSpot); // Function FortniteAI.FortAIController.SetPawnAIType // (Final|Native|Public|BlueprintCallable) // @ game+0x99a10e8
	void SetIsSleeping(bool bNewSleepStatus); // Function FortniteAI.FortAIController.SetIsSleeping // (Final|Native|Public|BlueprintCallable) // @ game+0x99a1068
	void SetGoalActor(struct AActor* InActor, bool bLocationAlwaysKnown); // Function FortniteAI.FortAIController.SetGoalActor // (Final|Native|Public|BlueprintCallable) // @ game+0x99a0fa0
	void SetFullPeripheralVision(bool bNewFullPeripheralVision); // Function FortniteAI.FortAIController.SetFullPeripheralVision // (Final|Native|Public|BlueprintCallable) // @ game+0x99a0f10
	void SetAlwaysGameplayRelevant(bool bInAlwaysGameplayRelevant); // Function FortniteAI.FortAIController.SetAlwaysGameplayRelevant // (Final|Native|Public|BlueprintCallable) // @ game+0x99a0e7c
	void OnBuildingActorGoalDestroyed(); // Function FortniteAI.FortAIController.OnBuildingActorGoalDestroyed // (Final|Native|Public) // @ game+0x99a072c
	void OnActorGoalDestroyed(struct AActor* DestroyedActor); // Function FortniteAI.FortAIController.OnActorGoalDestroyed // (Final|Native|Public) // @ game+0x99a06ac
	void LockMovementResource(); // Function FortniteAI.FortAIController.LockMovementResource // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x99a0678
	void LockBehaviorResource(); // Function FortniteAI.FortAIController.LockBehaviorResource // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x99a0644
	bool IsIgnoringProximity(struct AFortAIController* FortAIController); // Function FortniteAI.FortAIController.IsIgnoringProximity // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x73082dc
	bool IsAllowedToSleep(); // Function FortniteAI.FortAIController.IsAllowedToSleep // (Final|Native|Public|BlueprintCallable) // @ game+0x99a060c
	void IgnoreProximityForDuration(float DurationToIgnore); // Function FortniteAI.FortAIController.IgnoreProximityForDuration // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x99a0584
	struct AActor* GetGoalActor(); // Function FortniteAI.FortAIController.GetGoalActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7394864
	struct UFortAIEncounterInfo* GetEncounterInfo(); // Function FortniteAI.FortAIController.GetEncounterInfo // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a0270
	bool CreateBuildingActor(struct ABuildingSMActor* BuildingClass, struct FVector BuildLoc, struct FRotator BuildRot, bool bMirrored); // Function FortniteAI.FortAIController.CreateBuildingActor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x99a0088
	void ClearAllFocalPoints(); // Function FortniteAI.FortAIController.ClearAllFocalPoints // (Final|Native|Public|BlueprintCallable) // @ game+0x99a0028
};

// Class FortniteAI.AthenaAIController
// Size: 0x5a8 (Inherited: 0x518)
struct AAthenaAIController : AFortAIController {
	char pad_518[0x20]; // 0x518(0x20)
	struct UFortGameplayAbility* PrimaryMeleeAttackAbilityInstance; // 0x538(0x08)
	struct UFortGameplayAbility* PrimaryRangedAttackAbilityInstance; // 0x540(0x08)
	struct FVector NavWalkingSearchExtentScale; // 0x548(0x18)
	float CheapFlyingNavPointHorizontalGridRatio; // 0x560(0x04)
	float CheapFlyingNavNavPointVerticalGridRatio; // 0x564(0x04)
	struct FGameplayTagContainer CheapFlyingNavSmashableAbilityTag; // 0x568(0x20)
	char bEnableCheapFlyingNavigation : 1; // 0x588(0x01)
	char bAllowBacktrackPathfinding : 1; // 0x588(0x01)
	char bIsGoalRequiredForBehavior : 1; // 0x588(0x01)
	char bAutoGenerateHotspotOnPlayerBuildings : 1; // 0x588(0x01)
	char pad_588_4 : 4; // 0x588(0x01)
	char bRegisterToAthenaAIDropper : 1; // 0x589(0x01)
	char pad_589_1 : 7; // 0x589(0x01)
	char pad_58A[0x6]; // 0x58a(0x06)
	struct AActor* SecondaryGoalActor; // 0x590(0x08)
	char pad_598[0x8]; // 0x598(0x08)
	struct UAthenaPathFollowingComponent* AthenaPFC; // 0x5a0(0x08)
};

// Class FortniteAI.FortAthenaAIEvaluator
// Size: 0x58 (Inherited: 0x28)
struct UFortAthenaAIEvaluator : UObject {
	struct UBehaviorTreeComponent* CachedOwnerComp; // 0x28(0x08)
	struct FName ExecutionStatusName; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
	struct TScriptInterface<IFortAthenaAILODSettings> CachedLODSettingsInterface; // 0x40(0x10)
	struct UBlackboardKeyAccessValidator* KeyAccessValidator; // 0x50(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator
// Size: 0x88 (Inherited: 0x58)
struct UFortAthenaAIBotEvaluator : UFortAthenaAIEvaluator {
	struct UNavigationQueryFilter* OverrideNavigationFilterClass; // 0x58(0x08)
	struct AFortAthenaAIBotController* CachedBotController; // 0x60(0x08)
	char pad_68[0x20]; // 0x68(0x20)
};

// Class FortniteAI.FortAthenaAITelemetryData
// Size: 0x28 (Inherited: 0x28)
struct UFortAthenaAITelemetryData : UObject {
};

// Class FortniteAI.AthenaAIService
// Size: 0x78 (Inherited: 0x28)
struct UAthenaAIService : UObject {
	struct AFortGameModeAthena* CachedGameMode; // 0x28(0x08)
	struct AFortGameStateAthena* CachedGameState; // 0x30(0x08)
	char pad_38[0x30]; // 0x38(0x30)
	struct UAthenaAIServiceManager* AIServiceManager; // 0x68(0x08)
	char pad_70[0x8]; // 0x70(0x08)
};

// Class FortniteAI.AthenaAIServicePlayerBots
// Size: 0xda0 (Inherited: 0x78)
struct UAthenaAIServicePlayerBots : UAthenaAIService {
	char pad_78[0x8]; // 0x78(0x08)
	struct UFortAthenaAISpawnerDataComponentList* DefaultAISpawnerDataComponentList; // 0x80(0x08)
	struct UFortAthenaAISpawnerDataComponent_SpawnParamsBase* DefaultAISpawnComponent; // 0x88(0x08)
	struct TArray<struct FFortServerBotInfo> DeadBots; // 0x90(0x10)
	struct TArray<struct FFortServerBotInfo> PlayerBotsRestartLeft; // 0xa0(0x10)
	struct FVector ZiplineOctreeCenter; // 0xb0(0x18)
	struct FScalableFloat ZiplineOctreeRadius; // 0xc8(0x28)
	struct FScalableFloat UseZiplines; // 0xf0(0x28)
	char pad_118[0x138]; // 0x118(0x138)
	struct FDebugMinimapData DebugMinimapData; // 0x250(0x1b0)
	struct FName MarkPlayerBotsAggressiveStencilName; // 0x400(0x04)
	struct FName MarkPlayerBotsDefensiveStencilName; // 0x404(0x04)
	bool bBotHostileToHumanPlayersOnly; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct FScalableFloat UseAllBattleBusPOIsSquadRatio; // 0x410(0x28)
	struct UCurveFloat* TagQueryWeightChance; // 0x438(0x08)
	struct TSoftObjectPtr<UEnvQuery> FindLocationsAroundPOIQuery; // 0x440(0x28)
	struct TArray<struct FBattleBusPOI> BattleBusTagQueryPOIList; // 0x468(0x10)
	struct TArray<struct FBattleBusPOI> SecondaryBattleBusTagQueryPOIList; // 0x478(0x10)
	char pad_488[0x8]; // 0x488(0x08)
	struct TArray<struct FNavigationPOI> OnGroundTagQueryPOIList; // 0x490(0x10)
	struct FConstructionBuildingInfo ConstructionBuildingInfo[0x6]; // 0x4a0(0x90)
	struct FScalableFloat UseCustomSupportedItemList; // 0x530(0x28)
	struct UDataTable* BotItemDataTable; // 0x558(0x08)
	struct FScalableFloat UseRegionalNameList; // 0x560(0x28)
	struct FScalableFloat MaxAnonymousBotCount; // 0x588(0x28)
	struct TSoftObjectPtr<UFortAthenaAIBotNameDataAsset> BotNameDataAsset; // 0x5b0(0x28)
	struct FScalableFloat ThankBusDriverProbability; // 0x5d8(0x28)
	struct FScalableFloat ThankBusDriverMinTime; // 0x600(0x28)
	struct FScalableFloat ThankBusDriverMaxTime; // 0x628(0x28)
	struct FScalableFloat ShowSeasonLevelProbability; // 0x650(0x28)
	struct FScalableFloat SpectateOthersOnDeath; // 0x678(0x28)
	struct FScalableFloat MaxNumberOfBotsToSpawnAroundPlayer; // 0x6a0(0x28)
	float MaxAroundBotDistanceToSearchPOIToLand; // 0x6c8(0x04)
	char pad_6CC[0x4]; // 0x6cc(0x04)
	struct FScalableFloat BackfillEnabled; // 0x6d0(0x28)
	struct FScalableFloat UsePlayerCosmeticForBackfill; // 0x6f8(0x28)
	struct FScalableFloat UsePlayerInventoryForBackfill; // 0x720(0x28)
	struct FScalableFloat OnlyUseBackfillDuringSafezones; // 0x748(0x28)
	struct TSoftClassPtr<UObject> BackfillSpawnerData; // 0x770(0x28)
	struct FGameplayTagContainer SupportedItemTags; // 0x798(0x20)
	struct TArray<struct FCachedPOIVolumeLocations> CachedValidPOIVolumeLocations; // 0x7b8(0x10)
	struct TArray<struct ABuildingFoundation*> CachedBuildingFoundations; // 0x7c8(0x10)
	char pad_7D8[0x150]; // 0x7d8(0x150)
	struct AFortPlayerStartWarmup* LastTeamPlayerStart; // 0x928(0x08)
	char pad_930[0x8]; // 0x930(0x08)
	struct TMap<int32_t, struct UCacheSafeZoneLocation*> CacheSafeZoneLocationsMap; // 0x938(0x50)
	float DeadBotCleanupMinDelay; // 0x988(0x04)
	char pad_98C[0xc]; // 0x98c(0x0c)
	struct TSet<struct FString> ReservedPlayerNames; // 0x998(0x50)
	char pad_9E8[0x8]; // 0x9e8(0x08)
	struct TArray<int32_t> LocationsInSafeZoneFreeIndices; // 0x9f0(0x10)
	char pad_A00[0x50]; // 0xa00(0x50)
	struct AFortTeamInfoAthena* CurrentFillingTeam; // 0xa50(0x08)
	char pad_A58[0x58]; // 0xa58(0x58)
	struct FScalableFloat BotsUniqueIDUseValidAccountID; // 0xab0(0x28)
	int32_t CurrentBotControllerUID; // 0xad8(0x04)
	char pad_ADC[0x4]; // 0xadc(0x04)
	struct TArray<struct UFortAthenaBeaconComponent*> BeaconList; // 0xae0(0x10)
	char pad_AF0_0 : 6; // 0xaf0(0x01)
	char bWaitForNavmeshToBeLoaded : 1; // 0xaf0(0x01)
	char bDoSpawnBotFlow : 1; // 0xaf0(0x01)
	char bDoMapSampling : 1; // 0xaf1(0x01)
	char pad_AF1_1 : 7; // 0xaf1(0x01)
	enum class EAthenaGamePhase GamePhaseToStartSpawning; // 0xaf2(0x01)
	char pad_AF3[0x5]; // 0xaf3(0x05)
	struct UFortAthenaAISpawnerData* DefaultBotAISpawnerData; // 0xaf8(0x08)
	char pad_B00[0x10]; // 0xb00(0x10)
	struct TSoftObjectPtr<UEnvQuery> EQSMapSampling; // 0xb10(0x28)
	char pad_B38[0x30]; // 0xb38(0x30)
	struct FScalableFloat CanReviveDownedSquad; // 0xb68(0x28)
	struct UAthenaAIPopulationTracker* CachedAIPopulationTracker; // 0xb90(0x08)
	struct TArray<struct FFortServerBotInfo> PlayerBots; // 0xb98(0x10)
	struct TArray<struct FFortServerBotInfo> NonAthenaParticipantBots; // 0xba8(0x10)
	char pad_BB8[0x88]; // 0xbb8(0x88)
	struct TSoftObjectPtr<UDataTable> MMRSpawnTable; // 0xc40(0x28)
	struct FMMRSpawningPlayerBotsRuntimeInfo CachedMMRSpawningInfo; // 0xc68(0x38)
	char pad_CA0[0x20]; // 0xca0(0x20)
	struct FScalableFloat OverridePOISpreadingSquadCount; // 0xcc0(0x28)
	char pad_CE8[0xb8]; // 0xce8(0xb8)

	struct APawn* SpawnAI(struct FVector& InSpawnLocation, struct FRotator& InSpawnRotation, struct UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList); // Function FortniteAI.AthenaAIServicePlayerBots.SpawnAI // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x999e610
	void OnServerGameMemberRemoved(char InSquadId, char InTeamIndex, struct AFortPlayerStateAthena* ChangedPS); // Function FortniteAI.AthenaAIServicePlayerBots.OnServerGameMemberRemoved // (Final|Native|Private) // @ game+0x999e260
	void OnSafeZoneUpdated(); // Function FortniteAI.AthenaAIServicePlayerBots.OnSafeZoneUpdated // (Final|Native|Private) // @ game+0x999e24c
	void OnPawnSpawned(struct APawn* Pawn, int32_t RequestId, bool bIsRespawn); // Function FortniteAI.AthenaAIServicePlayerBots.OnPawnSpawned // (Final|Native|Private) // @ game+0x999df9c
	void OnGamePhaseChanged(enum class EAthenaGamePhase NewPhase); // Function FortniteAI.AthenaAIServicePlayerBots.OnGamePhaseChanged // (Native|Protected) // @ game+0x999de24
	void OnAgentGameOver(struct AFortAthenaAIBotController* AIBotController, struct AFortPawn* Pawn, struct AController* Instigator); // Function FortniteAI.AthenaAIServicePlayerBots.OnAgentGameOver // (Final|Native|Private) // @ game+0x999dab0
	void KillBots(bool bKillPlayers, bool bKillNoneParticipants, char TeamIndex, struct AActor* BotOwner); // Function FortniteAI.AthenaAIServicePlayerBots.KillBots // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x999d714
	void JoinTeam(struct AController* SourceTeamController, struct AController* DestinationTeamController); // Function FortniteAI.AthenaAIServicePlayerBots.JoinTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x999d468
	bool IsWeaponSupported(struct AFortWeapon* FortWeapon); // Function FortniteAI.AthenaAIServicePlayerBots.IsWeaponSupported // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x999d338
};

// Class FortniteAI.AthenaAIServiceCreativePlayerBots
// Size: 0xdf0 (Inherited: 0xda0)
struct UAthenaAIServiceCreativePlayerBots : UAthenaAIServicePlayerBots {
	struct TMap<struct AActor*, struct APlayerController*> HiringHistory; // 0xd98(0x50)

	struct APlayerController* GetLastHiringPlayer(struct AActor* HiredOwner); // Function FortniteAI.AthenaAIServiceCreativePlayerBots.GetLastHiringPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x999d178
	void ClearHiringHistory(struct AActor* HiredOwner); // Function FortniteAI.AthenaAIServiceCreativePlayerBots.ClearHiringHistory // (Final|Native|Public|BlueprintCallable) // @ game+0x999cea4
	void AddHiringHistory(struct AActor* HiredOwner, struct APlayerController* HiringPlayer); // Function FortniteAI.AthenaAIServiceCreativePlayerBots.AddHiringHistory // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x999cd00
};

// Class FortniteAI.FortAthenaAIBotController
// Size: 0x1260 (Inherited: 0x3b0)
struct AFortAthenaAIBotController : AAIController {
	char pad_3B0[0x48]; // 0x3b0(0x48)
	struct AActor* PreviousVehicle; // 0x3f8(0x08)
	char pad_400[0x10]; // 0x400(0x10)
	struct TMap<struct FGuid, struct FFortAbilitySetHandle> AppliedInGameModifierAbilitySetHandles; // 0x410(0x50)
	struct TSet<struct FGuid> GadgetTrackedAttributeItemInstanceIds; // 0x460(0x50)
	char pad_4B0[0x50]; // 0x4b0(0x50)
	struct FFortBotTargetHandler TargetHandler; // 0x500(0x40)
	char pad_540[0x1]; // 0x540(0x01)
	char pad_541_0 : 1; // 0x541(0x01)
	char bIsAnAthenaGameParticipant : 1; // 0x541(0x01)
	char pad_541_2 : 6; // 0x541(0x01)
	char pad_542[0x6]; // 0x542(0x06)
	enum class EReachLocationValidationMode ReachLocationValidationMode; // 0x548(0x01)
	char pad_549[0x7]; // 0x549(0x07)
	struct UBehaviorTree* BehaviorTree; // 0x550(0x08)
	struct FFortBotInventoryInfo SlotItems[0x6]; // 0x558(0x90)
	char pad_5E8[0x18]; // 0x5e8(0x18)
	struct UFortAthenaAIBotInventoryDigestedSkillSet* CacheInventoryDigestedSkillSet; // 0x600(0x08)
	char pad_608[0x8]; // 0x608(0x08)
	struct AFortPlayerPawnAthena* PlayerBotPawn; // 0x610(0x08)
	struct UAthenaAIServicePlayerBots* CachedAIServicePlayerBots; // 0x618(0x08)
	struct AFortGameModeAthena* CachedGameMode; // 0x620(0x08)
	struct UFortAthenaAIRuntimeParametersComponent* CachedAIRuntimeParametersComponent; // 0x628(0x08)
	struct UFortAthenaAIRuntimeParameters_Leash* CachedLeashRuntimeParameters; // 0x630(0x08)
	struct UFortAthenaAIRuntimeParameters_AffiliationBase* CachedAffiliationRuntimeParameters; // 0x638(0x08)
	struct UFortAthenaNpcPatrollingComponent* CachedPatrollingComponent; // 0x640(0x08)
	struct UFortAIControllerPerksComponent* CachedAIPerksComponent; // 0x648(0x08)
	char pad_650[0x8]; // 0x650(0x08)
	struct TArray<struct FBotDelayedStimulus> DelayedStimulus; // 0x658(0x10)
	char pad_668[0x18]; // 0x668(0x18)
	struct TArray<struct FFortBotThreatActorInfo> ObjectsThreatList; // 0x680(0x10)
	struct TArray<struct FFortBotThreatActorInfo> TrapsThreatList; // 0x690(0x10)
	enum class EAlertLevel CurrentAlertLevel; // 0x6a0(0x01)
	char pad_6A1[0x7]; // 0x6a1(0x07)
	struct FAlertLevelInfo DefaultAlertLevelInfo; // 0x6a8(0x10)
	struct FMulticastInlineDelegate OnAlertLevelChangedEventDelegate; // 0x6b8(0x10)
	struct FMulticastInlineDelegate OnStealthMeterChangedEventDelegate; // 0x6c8(0x10)
	char pad_6D8[0x8]; // 0x6d8(0x08)
	struct FMulticastInlineDelegate OnAgentDBNOStatusChangedEventDelegate; // 0x6e0(0x10)
	struct FMulticastInlineDelegate OnAgentDiedEventDelegate; // 0x6f0(0x10)
	struct FMulticastInlineDelegate OnAgentGameOver; // 0x700(0x10)
	char pad_710[0x48]; // 0x710(0x48)
	struct FMulticastInlineDelegate OnPlayerPawnKilledByBot; // 0x758(0x10)
	struct FMulticastInlineDelegate OnAIPawnKilledByBot; // 0x768(0x10)
	char pad_778[0x30]; // 0x778(0x30)
	struct AFortInventory* Inventory; // 0x7a8(0x08)
	float Skill; // 0x7b0(0x04)
	char bAllowUnsupportedItemsInDefaultInventory : 1; // 0x7b4(0x01)
	char pad_7B4_1 : 7; // 0x7b4(0x01)
	char pad_7B5[0x3]; // 0x7b5(0x03)
	struct TArray<struct UFortAthenaAIBotSkillSet*> BotSkillSetClasses; // 0x7b8(0x10)
	char pad_7C8[0x20]; // 0x7c8(0x20)
	struct UFortAthenaAIBotInventoryItems* StartupInventory; // 0x7e8(0x08)
	struct FFortAthenaLoadout CosmeticLoadoutBC; // 0x7f0(0x168)
	struct TArray<struct UCustomCharacterPart*> CustomCharacterPartOverridesBC; // 0x958(0x10)
	struct UFortBotNameSettings* NameSettingsBC; // 0x968(0x08)
	struct FScalableFloat SpectateOnDeathMinTime; // 0x970(0x28)
	struct FScalableFloat SpectateOnDeathMaxTime; // 0x998(0x28)
	struct FScalableFloat EmotesMaxCount; // 0x9c0(0x28)
	struct UFortAthenaAIBotPerceptionDigestedSkillSet* CachePerceptionDigestedSkillSet; // 0x9e8(0x08)
	struct UFortAthenaAIBotHarvestDigestedSkillSet* CacheHarvestDigestedSkillSet; // 0x9f0(0x08)
	struct UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementSkillSet; // 0x9f8(0x08)
	struct UFortAthenaAIBotLootingDigestedSkillSet* CacheLootingSkillSet; // 0xa00(0x08)
	struct UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingSkillSet; // 0xa08(0x08)
	struct UFortAthenaAIBotPlayStyleDigestedSkillSet* CachePlayStyleSkillSet; // 0xa10(0x08)
	struct UFortAthenaAIBotUnstuckDigestedSkillSet* CacheUnstuckSkillSet; // 0xa18(0x08)
	struct UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackSkillSet; // 0xa20(0x08)
	char pad_A28[0x60]; // 0xa28(0x60)
	struct UFortInteractContextInfo* InteractContextInfo; // 0xa88(0x08)
	char pad_A90[0x68]; // 0xa90(0x68)
	struct UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet; // 0xaf8(0x08)
	char pad_B00[0x4]; // 0xb00(0x04)
	char bCanBeDestroyedOnDeath : 1; // 0xb04(0x01)
	char pad_B04_1 : 7; // 0xb04(0x01)
	char pad_B05[0xb]; // 0xb05(0x0b)
	struct FVector LastDeathLocation; // 0xb10(0x18)
	struct FRotator LastDeathRotation; // 0xb28(0x18)
	struct UFortWorldItem* CachedWorldItem; // 0xb40(0x08)
	char pad_B48[0x8]; // 0xb48(0x08)
	struct AFortWeapon* CacheWeaponUsedToCalculateType; // 0xb50(0x08)
	bool bCachedIsUsingArcedProjectileWeapon; // 0xb58(0x01)
	char pad_B59[0x3]; // 0xb59(0x03)
	float CachedProjectileGravityScale; // 0xb5c(0x04)
	struct AFortWeapon* CachedWeaponUsedToCalculateProjectileData; // 0xb60(0x08)
	struct UStatManager* StatManager; // 0xb68(0x08)
	struct TArray<struct FBuildingWeakSpotData> ActiveWeakSpots; // 0xb70(0x10)
	char pad_B80[0x28]; // 0xb80(0x28)
	struct AFortPawn* CacheBotPawnClass; // 0xba8(0x08)
	char pad_BB0[0x8]; // 0xbb0(0x08)
	struct AActor* CurrentLootActor; // 0xbb8(0x08)
	struct UAthenaMarkerComponent* MarkerComponent; // 0xbc0(0x08)
	struct FString BotPlayerName; // 0xbc8(0x10)
	struct FGameplayTag DescriptorTag; // 0xbd8(0x04)
	char pad_BDC[0x4]; // 0xbdc(0x04)
	struct FString BotIDSuffix; // 0xbe0(0x10)
	struct FString BotPlayerNameWithSkillRating; // 0xbf0(0x10)
	char pad_C00[0x10]; // 0xc00(0x10)
	struct UFortAthenaMutator_SpawningPolicyData* PolicyDataSpawner; // 0xc10(0x08)
	char pad_C18[0xd8]; // 0xc18(0xd8)
	struct UFortControllerComponent_Telemetry* FortControllerComponent_Telemetry; // 0xcf0(0x08)
	bool bForceUsingBuildingTool; // 0xcf8(0x01)
	bool bForceHolsterWeapon; // 0xcf9(0x01)
	char pad_CFA[0x6]; // 0xcfa(0x06)
	struct UFortWorldItem* PendingEquipWeapon; // 0xd00(0x08)
	char pad_D08[0x48]; // 0xd08(0x48)
	struct APawn* PlayerToSpectateOnDeath; // 0xd50(0x08)
	struct FMulticastInlineDelegate OnPlayerPawnAISpawnedDelegate; // 0xd58(0x10)
	char pad_D68[0x108]; // 0xd68(0x108)
	struct UAISenseConfig_Sight* AISenseConfig_SightOverride; // 0xe70(0x08)
	char pad_E78[0x10]; // 0xe78(0x10)
	struct AActor* BotOwner; // 0xe88(0x08)
	int32_t BotControllerUID; // 0xe90(0x04)
	char pad_E94[0x4]; // 0xe94(0x04)
	struct AFortPlayerPawnAthena* ReviveTarget; // 0xe98(0x08)
	char pad_EA0[0x90]; // 0xea0(0x90)
	struct UFortAthenaAIBotCustomizationData* BotData; // 0xf30(0x08)
	char pad_F38[0x8]; // 0xf38(0x08)
	struct FDebugMinimapData DebugMinimapData; // 0xf40(0x1b0)
	struct AFortPlayerPawnAthena* RevivePlayerPawnToken; // 0x10f0(0x08)
	char pad_10F8[0x18]; // 0x10f8(0x18)
	struct AActor* LeashActorToFollow; // 0x1110(0x08)
	struct FVector LeashActorToFollowLocalOffset; // 0x1118(0x18)
	struct AFortAthenaAILeashVolume* LeashVolume; // 0x1130(0x08)
	struct UFortGameStateComponent_AffiliationManager* CachedAffiliationManager; // 0x1138(0x08)
	struct UFortActorComponent_Affiliation* CachedAffiliationComponent; // 0x1140(0x08)
	bool bIsAffectedByMutatorHealthAndShieldModifiers; // 0x1148(0x01)
	char pad_1149[0x7]; // 0x1149(0x07)
	bool bHasChangedPawnCullDistanceToAggroMode; // 0x1150(0x01)
	char pad_1151[0x7]; // 0x1151(0x07)
	struct UFortAthenaAIRuntimeParameters_AIBotRespawn* RespawnRuntimeParameters; // 0x1158(0x08)
	struct ABuildingWall* CurrentBlockingDoor; // 0x1160(0x08)
	char pad_1168[0x10]; // 0x1168(0x10)
	struct APawn* FinisherPawn; // 0x1178(0x08)
	char pad_1180[0x54]; // 0x1180(0x54)
	enum class EFortPawnStasisMode PreviousStasisMode; // 0x11d4(0x01)
	bool bPostponeGiveWeaponCheat; // 0x11d5(0x01)
	bool bPostponeGiveMaterialsCheat; // 0x11d6(0x01)
	char pad_11D7[0x1]; // 0x11d7(0x01)
	float StartSpectatingTime; // 0x11d8(0x04)
	char pad_11DC[0x3c]; // 0x11dc(0x3c)
	struct UAthenaDanceItemDefinition* RequestedEmoteAsset; // 0x1218(0x08)
	char pad_1220[0x8]; // 0x1220(0x08)
	struct UBehaviorTree* BTAssetToRunOnPawnAISpawned; // 0x1228(0x08)
	char pad_1230[0x30]; // 0x1230(0x30)

	void UpdateLeashActorToFollowLocation(); // Function FortniteAI.FortAthenaAIBotController.UpdateLeashActorToFollowLocation // (Final|Native|Protected) // @ game+0x99af954
	void ThankBusDriver(); // Function FortniteAI.FortAthenaAIBotController.ThankBusDriver // (Final|Native|Protected) // @ game+0x99af940
	void SwitchTeam(char TeamIndex); // Function FortniteAI.FortAthenaAIBotController.SwitchTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x99af7b8
	void StopSecondaryFire(bool bFireWhenStopping); // Function FortniteAI.FortAthenaAIBotController.StopSecondaryFire // (Final|Native|Public|BlueprintCallable) // @ game+0x99af6e4
	void StopFire(); // Function FortniteAI.FortAthenaAIBotController.StopFire // (Final|Native|Public|BlueprintCallable) // @ game+0x99af6d0
	void StopEmote(); // Function FortniteAI.FortAthenaAIBotController.StopEmote // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99af6bc
	void StartSecondaryFire(); // Function FortniteAI.FortAthenaAIBotController.StartSecondaryFire // (Final|Native|Public|BlueprintCallable) // @ game+0x99af640
	void StartFire(); // Function FortniteAI.FortAthenaAIBotController.StartFire // (Final|Native|Public|BlueprintCallable) // @ game+0x99af62c
	void SetSkillSet(struct UFortAthenaAIBotSkillSet* SkillSetClass); // Function FortniteAI.FortAthenaAIBotController.SetSkillSet // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99af560
	void SetRadialLeashOuterRadius(float OuterRadius); // Function FortniteAI.FortAthenaAIBotController.SetRadialLeashOuterRadius // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99af4dc
	void SetRadialLeashInnerRadius(float InnerRadius); // Function FortniteAI.FortAthenaAIBotController.SetRadialLeashInnerRadius // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99af458
	void SetPatrollingEnable(bool bEnable); // Function FortniteAI.FortAthenaAIBotController.SetPatrollingEnable // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99af3d8
	void SetLeashVolume(struct AFortAthenaAILeashVolume* InLeashVolume); // Function FortniteAI.FortAthenaAIBotController.SetLeashVolume // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99af33c
	void SetLeashReturnLocationMode(enum class ELeashReturnLocationMode ReturnMode); // Function FortniteAI.FortAthenaAIBotController.SetLeashReturnLocationMode // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99af2c0
	void SetLeashActorToFollow(struct AActor* ActorToFollow, float LeashLocationUpdateRate, struct FVector LocalOffset); // Function FortniteAI.FortAthenaAIBotController.SetLeashActorToFollow // (Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x99af1b0
	void SetBotOwner(struct AActor* InBotOwner); // Function FortniteAI.FortAthenaAIBotController.SetBotOwner // (Final|Native|Public|BlueprintCallable) // @ game+0x99af130
	void RequestEmote(struct FPrimaryAssetId& EmotePrimaryAssetId, float InfiniteEmoteMaxDuration); // Function FortniteAI.FortAthenaAIBotController.RequestEmote // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x99af05c
	void RemoveSkillSet(struct UFortAthenaAIBotSkillSet* SkillSetClass); // Function FortniteAI.FortAthenaAIBotController.RemoveSkillSet // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99aef54
	void RemoveEmoteRequest(); // Function FortniteAI.FortAthenaAIBotController.RemoveEmoteRequest // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99aef40
	void ReleaseBuildTool(); // Function FortniteAI.FortAthenaAIBotController.ReleaseBuildTool // (Final|Native|Protected) // @ game+0x99aef2c
	void QueueStim(struct AActor* SourceActor, struct FVector& SourceLocation, struct FVector& SourceDirection, enum class EStimType NewStimType, float StimStrength, struct FName StimTag); // Function FortniteAI.FortAthenaAIBotController.QueueStim // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x99aed38
	void PlayEmote(struct FPrimaryAssetId& EmotePrimaryAssetId); // Function FortniteAI.FortAthenaAIBotController.PlayEmote // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x99aecac
	void OverrideSkill(float NewSkill); // Function FortniteAI.FortAthenaAIBotController.OverrideSkill // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99aec28
	void OverrideAggressivenessPlayStyle(bool bInIsAggressive); // Function FortniteAI.FortAthenaAIBotController.OverrideAggressivenessPlayStyle // (Final|Native|Public|BlueprintCallable) // @ game+0x99aeb9c
	void OnTargetPawnDestroyed(); // Function FortniteAI.FortAthenaAIBotController.OnTargetPawnDestroyed // (Final|Native|Public) // @ game+0x99aeb88
	void OnTargetPawnDead(struct AFortPawn* FortPawn); // Function FortniteAI.FortAthenaAIBotController.OnTargetPawnDead // (Final|Native|Public) // @ game+0x99aeb08
	void OnTargetPawnDamaged(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.FortAthenaAIBotController.OnTargetPawnDamaged // (Final|Native|Public|HasDefaults) // @ game+0x99ae8e4
	void OnTargetBuildingDestroyed(struct ABuildingActor* Building, struct AAthenaAIController* AIController); // Function FortniteAI.FortAthenaAIBotController.OnTargetBuildingDestroyed // (Final|Native|Public) // @ game+0x99ae820
	void OnTargetActorDestroyed(struct AActor* DestroyedActor); // Function FortniteAI.FortAthenaAIBotController.OnTargetActorDestroyed // (Final|Native|Public) // @ game+0x99ae7a0
	void OnServerMarkerAdded(struct FFortWorldMarkerData& MarkerData); // Function FortniteAI.FortAthenaAIBotController.OnServerMarkerAdded // (Final|Native|Public|HasOutParms) // @ game+0x99ae6ec
	void OnSafeZoneUpdated(); // Function FortniteAI.FortAthenaAIBotController.OnSafeZoneUpdated // (Final|Native|Public) // @ game+0x99ae658
	void OnSafezoneStateChanged(enum class EFortSafeZoneState NewState); // Function FortniteAI.FortAthenaAIBotController.OnSafezoneStateChanged // (Final|Native|Public) // @ game+0x99ae66c
	void OnPossessedPawnReceiveDamage(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.FortAthenaAIBotController.OnPossessedPawnReceiveDamage // (Final|Native|Public|HasDefaults) // @ game+0x99ae3dc
	void OnPossesedPawnDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.FortAthenaAIBotController.OnPossesedPawnDied // (Final|Native|Public|HasDefaults) // @ game+0x99ae1a8
	void OnPerceptionSensed(struct AActor* SourceActor, struct FAIStimulus Stim); // Function FortniteAI.FortAthenaAIBotController.OnPerceptionSensed // (Native|Public) // @ game+0x99ae0b8
	void OnPawnWeaponChanged(struct AFortWeapon* NewWeapon, struct AFortWeapon* OldWeapon); // Function FortniteAI.FortAthenaAIBotController.OnPawnWeaponChanged // (Final|Native|Public) // @ game+0x99adff4
	void OnPawnDidDamage(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.FortAthenaAIBotController.OnPawnDidDamage // (Final|Native|Public|HasDefaults) // @ game+0x99add78
	void OnMovementModeChange(struct ACharacter* InCharacter, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function FortniteAI.FortAthenaAIBotController.OnMovementModeChange // (Final|Native|Public) // @ game+0x99adc30
	void OnLaunched(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride); // Function FortniteAI.FortAthenaAIBotController.OnLaunched // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x99adb14
	void OnKnockbacked(struct FGameplayTag KnockbackTypeTag); // Function FortniteAI.FortAthenaAIBotController.OnKnockbacked // (Final|Native|Public|BlueprintCallable) // @ game+0x99ada94
	void OnGamePhaseStepChanged(struct TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep); // Function FortniteAI.FortAthenaAIBotController.OnGamePhaseStepChanged // (Final|Native|Public|HasOutParms) // @ game+0x99ad9b4
	void OnGamePhaseChanged(enum class EAthenaGamePhase GamePhase); // Function FortniteAI.FortAthenaAIBotController.OnGamePhaseChanged // (Final|Native|Public) // @ game+0x99ad934
	void OnEndSpectating(struct AFortPlayerStateZone* Spectator); // Function FortniteAI.FortAthenaAIBotController.OnEndSpectating // (Final|Native|Public) // @ game+0x64a2a4c
	void OnCurrentHarvestableDestroyed(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.FortAthenaAIBotController.OnCurrentHarvestableDestroyed // (Final|Native|Protected|HasDefaults) // @ game+0x99ad708
	void OnBeginSpectating(struct AFortPlayerStateZone* Spectator); // Function FortniteAI.FortAthenaAIBotController.OnBeginSpectating // (Final|Native|Public) // @ game+0x64a2a4c
	void OnAlertLevelChanged(enum class EAlertLevel OldAlertLevel, enum class EAlertLevel NewAlertLevel); // Function FortniteAI.FortAthenaAIBotController.OnAlertLevelChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnAgentDBNO(struct AFortPawn* InPlayer, bool bInIsDBNO); // Function FortniteAI.FortAthenaAIBotController.OnAgentDBNO // (Final|Native|Public) // @ game+0x99ad640
	void NotifyPickupsSpawnedOnDeath(struct TArray<struct AFortPickup*>& SpawnedPickups); // Function FortniteAI.FortAthenaAIBotController.NotifyPickupsSpawnedOnDeath // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x651d08c
	bool IsAnAthenaGameParticipant(); // Function FortniteAI.FortAthenaAIBotController.IsAnAthenaGameParticipant // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99ad624
	struct UAthenaMarkerComponent* GetMarkerComponent(); // Function FortniteAI.FortAthenaAIBotController.GetMarkerComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99ad60c
	struct AActor* GetCurrentThreat(); // Function FortniteAI.FortAthenaAIBotController.GetCurrentThreat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99ad5cc
	struct AActor* GetBotOwner(); // Function FortniteAI.FortAthenaAIBotController.GetBotOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99ad5b4
	struct AFortWeapon* EquipWeaponByTag(struct FGameplayTag& WeaponTag); // Function FortniteAI.FortAthenaAIBotController.EquipWeaponByTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x99ad51c
	struct AFortWeapon* EquipWeapon(struct UFortWorldItem* Weapon); // Function FortniteAI.FortAthenaAIBotController.EquipWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x99ad48c
	struct AFortWeapon* EquipMeleeWeapon(); // Function FortniteAI.FortAthenaAIBotController.EquipMeleeWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x99ad3f4
	struct AFortWeapon* EquipBestWeapon(); // Function FortniteAI.FortAthenaAIBotController.EquipBestWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x99ad3d0
	void Cheat_ForceAthenaCosmeticItemInSlot(struct UAthenaCosmeticItemDefinition* CosmeticItem, enum class EAthenaCustomizationCategory Slot, int32_t Index); // Function FortniteAI.FortAthenaAIBotController.Cheat_ForceAthenaCosmeticItemInSlot // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x99ad2ac
	void Cheat_ClearForcedCosmeticItems(); // Function FortniteAI.FortAthenaAIBotController.Cheat_ClearForcedCosmeticItems // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x99ad260
	void ChangeActiveVariantForCosmeticItem(struct FName ItemTemplateToChange, struct FGameplayTag VariantChannelToChange, struct FGameplayTag DesiredActiveVariant); // Function FortniteAI.FortAthenaAIBotController.ChangeActiveVariantForCosmeticItem // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99ad168
	void BlueprintOnBehaviorTreeStarted(); // Function FortniteAI.FortAthenaAIBotController.BlueprintOnBehaviorTreeStarted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void AddTargetInfos(struct TArray<struct AActor*>& Targets, enum class EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance); // Function FortniteAI.FortAthenaAIBotController.AddTargetInfos // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x99acff4
	void AddTargetInfo(struct AActor* Target, bool bForceTarget, enum class EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance); // Function FortniteAI.FortAthenaAIBotController.AddTargetInfo // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99ace5c
};

// Class FortniteAI.FortQueryTest_GoalBase
// Size: 0x268 (Inherited: 0x1f8)
struct UFortQueryTest_GoalBase : UEnvQueryTest {
	char bScoreEnemies : 1; // 0x1f8(0x01)
	char bScoreEncounterGoals : 1; // 0x1f8(0x01)
	char bScoreWorldGoals : 1; // 0x1f8(0x01)
	char bScoreSpecificAssignments : 1; // 0x1f8(0x01)
	char pad_1F8_4 : 4; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct TArray<struct FFortAIAssignmentIdentifier> AssignmentIDs; // 0x200(0x10)
	struct TArray<struct FFortAIAssignmentIdentifier> ProhibitedAssignmentIDs; // 0x210(0x10)
	struct FGameplayTagQuery GoalActorTagQuery; // 0x220(0x48)
};

// Class FortniteAI.FortNavModifierComponent
// Size: 0x230 (Inherited: 0x190)
struct UFortNavModifierComponent : UNavModifierComponent {
	float LowSpeedSquareThreshold; // 0x190(0x04)
	float LowSpeedSquareDistanceThreshold; // 0x194(0x04)
	float LowSpeedRotationThreshold; // 0x198(0x04)
	float LowSpeedScaleThreshold; // 0x19c(0x04)
	char bAutomaticNavBoundComputation : 1; // 0x1a0(0x01)
	char bForceFailSafeExtent : 1; // 0x1a0(0x01)
	char pad_1A0_2 : 6; // 0x1a0(0x01)
	char pad_1A1[0x3]; // 0x1a1(0x03)
	float ExtrapolationMultiplierForFailsafeExtent; // 0x1a4(0x04)
	struct TArray<struct ANavigationData*> DisableForNavmeshClasses; // 0x1a8(0x10)
	struct UPrimitiveComponent* PrimCompAffectingNavMesh; // 0x1b8(0x08)
	char pad_1C0[0x70]; // 0x1c0(0x70)

	void SetComponentAffectingNavMesh(struct UPrimitiveComponent* InComponentAffectingNavMesh); // Function FortniteAI.FortNavModifierComponent.SetComponentAffectingNavMesh // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x99bf21c
};

// Class FortniteAI.FortPhysicsObjectNavigationComponent
// Size: 0x240 (Inherited: 0x230)
struct UFortPhysicsObjectNavigationComponent : UFortNavModifierComponent {
	struct UFortPhysicsObjectComponent* PhysicsObjectComponent; // 0x230(0x08)
	char pad_238[0x8]; // 0x238(0x08)

	void OnSleepStateChanged(struct UPrimitiveComponent* SimulatingComponent, bool bIsAwake); // Function FortniteAI.FortPhysicsObjectNavigationComponent.OnSleepStateChanged // (Final|RequiredAPI|Native|Protected) // @ game+0x99bee00
};

// Class FortniteAI.AIGoalComponent
// Size: 0x108 (Inherited: 0xa0)
struct UAIGoalComponent : UGameFrameworkComponent {
	char pad_A0[0x68]; // 0xa0(0x68)
};

// Class FortniteAI.AIHotSpot
// Size: 0x438 (Inherited: 0x288)
struct AAIHotSpot : AActor {
	char pad_288[0x8]; // 0x288(0x08)
	struct TArray<struct UAIHotSpotSlot*> UserSlots; // 0x290(0x10)
	struct UAIHotSpotSlotGenerator* SlotGenerator; // 0x2a0(0x08)
	struct TArray<struct UAIHotSpotSlot*> Slots; // 0x2a8(0x10)
	struct AActor* FocusActor; // 0x2b8(0x08)
	struct UNavigationQueryFilter* FilterClass; // 0x2c0(0x08)
	struct FVector CustomNavmeshSearchExtent; // 0x2c8(0x18)
	char bStartEnabled : 1; // 0x2e0(0x01)
	char bAllowSlotlessAssignment : 1; // 0x2e0(0x01)
	char bAllowClaimingMultipleSlots : 1; // 0x2e0(0x01)
	char bTrackOverlappingSlots : 1; // 0x2e0(0x01)
	char bProjectSlotsOnNavmesh : 1; // 0x2e0(0x01)
	char bCustomNavmeshSearchExtent : 1; // 0x2e0(0x01)
	char bIsEnabled : 1; // 0x2e0(0x01)
	char pad_2E0_7 : 1; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct TArray<struct AAIController*> NoSlotAssignees; // 0x2e8(0x10)
	char pad_2F8[0x128]; // 0x2f8(0x128)
	struct UPrimitiveComponent* RenderingComponent; // 0x420(0x08)
	struct UBillboardComponent* SpriteComponent; // 0x428(0x08)
	char pad_430[0x8]; // 0x430(0x08)

	void SetEnabled(bool bEnabled); // Function FortniteAI.AIHotSpot.SetEnabled // (Native|Public|BlueprintCallable) // @ game+0x999bbc0
	int32_t RemoveGroupFromHotspot(struct TArray<struct AAIController*> GroupOfAI); // Function FortniteAI.AIHotSpot.RemoveGroupFromHotspot // (Native|Public|BlueprintCallable) // @ game+0x999ba10
	bool RemoveFromHotspot(struct AAIController* AI, bool bAssignFromWaitingList); // Function FortniteAI.AIHotSpot.RemoveFromHotspot // (Native|Public|BlueprintCallable) // @ game+0x999b944
	void OnSlotOccupied(struct AAIController* AI, int32_t Index, int32_t UserId); // Function FortniteAI.AIHotSpot.OnSlotOccupied // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x999b848
	void OnSlotFreed(struct AAIController* AI, int32_t Index, int32_t UserId); // Function FortniteAI.AIHotSpot.OnSlotFreed // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x999b74c
	void OnSlotEnabled(int32_t Index, int32_t UserId); // Function FortniteAI.AIHotSpot.OnSlotEnabled // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x999b688
	void OnSlotDisabled(int32_t Index, int32_t UserId); // Function FortniteAI.AIHotSpot.OnSlotDisabled // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x999b5c4
	void OnSlotClaimed(struct AAIController* AI, int32_t Index, int32_t UserId); // Function FortniteAI.AIHotSpot.OnSlotClaimed // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x999b4c8
	void OnSlotBlocked(struct AAIController* AI, int32_t Index, int32_t UserId); // Function FortniteAI.AIHotSpot.OnSlotBlocked // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x999b3cc
	void OnRemovedSlotlessBehavior(struct AAIController* AI, bool bIsClamingSlot); // Function FortniteAI.AIHotSpot.OnRemovedSlotlessBehavior // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x999b300
	void OnRemovedBehavior(struct AAIController* AI, int32_t Index, int32_t UserId, enum class EAIHotSpotSlot PrevState, bool bWasOnWaitingList); // Function FortniteAI.AIHotSpot.OnRemovedBehavior // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x999b17c
	void OnMoveToSlotFinished(struct AAIController* AI, int32_t Index, int32_t UserId, bool bResult); // Function FortniteAI.AIHotSpot.OnMoveToSlotFinished // (BlueprintAuthorityOnly|Native|Event|Protected|BlueprintEvent) // @ game+0x999b03c
	void OnHotSpotEnabled(); // Function FortniteAI.AIHotSpot.OnHotSpotEnabled // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0xfe5030
	void OnHotSpotDisabled(); // Function FortniteAI.AIHotSpot.OnHotSpotDisabled // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0xdf3528
	bool OnAssignedSlotlessBehavior(struct AAIController* AI); // Function FortniteAI.AIHotSpot.OnAssignedSlotlessBehavior // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x999afa8
	bool OnAssignedOccupiedBehavior(struct AAIController* AI, int32_t Index, int32_t UserId); // Function FortniteAI.AIHotSpot.OnAssignedOccupiedBehavior // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x999aea8
	bool OnAssignedClaimedBehavior(struct AAIController* AI, int32_t Index, int32_t UserId, bool bWasOnWaitingList); // Function FortniteAI.AIHotSpot.OnAssignedClaimedBehavior // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x999ad64
	bool OccupySlotByIndex(int32_t Index); // Function FortniteAI.AIHotSpot.OccupySlotByIndex // (Native|Public|BlueprintCallable) // @ game+0x999acd0
	bool IsSlotlessAssignmentAllowed(); // Function FortniteAI.AIHotSpot.IsSlotlessAssignmentAllowed // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x999a628
	bool IsEnabled(); // Function FortniteAI.AIHotSpot.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x999a348
	bool IsAIAllowed(struct AAIController* AI); // Function FortniteAI.AIHotSpot.IsAIAllowed // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent|Const) // @ game+0x999a220
	bool HasEnabledSlots(); // Function FortniteAI.AIHotSpot.HasEnabledSlots // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x999a1e0
	bool HasAssignedAI(struct AAIController* AI, enum class EAIHotSpotAssignmentFilter Filter); // Function FortniteAI.AIHotSpot.HasAssignedAI // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x999a11c
	int32_t GetSlotUserIdByIndex(int32_t Index); // Function FortniteAI.AIHotSpot.GetSlotUserIdByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x999a088
	enum class EAIHotSpotSlot GetSlotStateByOwner(struct AAIController* AIOwner); // Function FortniteAI.AIHotSpot.GetSlotStateByOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9999fd0
	enum class EAIHotSpotSlot GetSlotStateByIndex(int32_t Index); // Function FortniteAI.AIHotSpot.GetSlotStateByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9999f3c
	struct FRotator GetSlotRotationByIndex(int32_t Index); // Function FortniteAI.AIHotSpot.GetSlotRotationByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x9999e84
	struct AAIController* GetSlotOwnerByIndex(int32_t Index); // Function FortniteAI.AIHotSpot.GetSlotOwnerByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9999d98
	struct FVector GetSlotLocationByIndex(int32_t Index); // Function FortniteAI.AIHotSpot.GetSlotLocationByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x9999cf8
	int32_t GetSlotIndexByOwner(struct AAIController* AIOwner); // Function FortniteAI.AIHotSpot.GetSlotIndexByOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9999c40
	int32_t GetSlotCount(enum class EAIHotSpotSlotFilter Filter); // Function FortniteAI.AIHotSpot.GetSlotCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9999b9c
	struct UAIHotSpotSlot* GetSlotByOwner(struct AAIController* AIOwner); // Function FortniteAI.AIHotSpot.GetSlotByOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9999b00
	struct UAIHotSpotSlot* GetSlotByIndex(int32_t Index); // Function FortniteAI.AIHotSpot.GetSlotByIndex // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9999a74
	int32_t GetAssignedAICount(enum class EAIHotSpotAssignmentFilter Filter); // Function FortniteAI.AIHotSpot.GetAssignedAICount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9999958
	struct TArray<struct AAIController*> GetAssignedAI(enum class EAIHotSpotAssignmentFilter Filter); // Function FortniteAI.AIHotSpot.GetAssignedAI // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x999988c
	struct TArray<int32_t> FindBestSlotIndices(struct TArray<struct AAIController*> AI); // Function FortniteAI.AIHotSpot.FindBestSlotIndices // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99993e8
	int32_t FindBestSlotIndex(struct AAIController* AI); // Function FortniteAI.AIHotSpot.FindBestSlotIndex // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9999354
	bool CanUseSlotByIndex(struct AAIController* AI, int32_t Index); // Function FortniteAI.AIHotSpot.CanUseSlotByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9999290
	bool AssignToSlotByIndex(struct AAIController* AI, int32_t Index); // Function FortniteAI.AIHotSpot.AssignToSlotByIndex // (Native|Public|BlueprintCallable) // @ game+0x9998f9c
	bool AssignToHotspot(struct AAIController* AI); // Function FortniteAI.AIHotSpot.AssignToHotspot // (Native|Public|BlueprintCallable) // @ game+0x932526c
	int32_t AssignGroupToHotspot(struct TArray<struct AAIController*> GroupOfAI); // Function FortniteAI.AIHotSpot.AssignGroupToHotspot // (Native|Public|BlueprintCallable) // @ game+0x9998dec
	void AssignFromWaitingList(); // Function FortniteAI.AIHotSpot.AssignFromWaitingList // (Final|Native|Public|BlueprintCallable) // @ game+0x9998dd8
};

// Class FortniteAI.AIHotSpotConfig
// Size: 0x50 (Inherited: 0x30)
struct UAIHotSpotConfig : UDataAsset {
	struct TArray<struct FAIHotSpotSlotConfig> Slots; // 0x30(0x10)
	char bDetectUnreachableSlots : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct UAIHotSpotSlotGenerator* SlotGenerator; // 0x48(0x08)
};

// Class FortniteAI.AIHotSpotManagerProxy
// Size: 0x80 (Inherited: 0x28)
struct UAIHotSpotManagerProxy : UAIHotSpotManager {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class FortniteAI.AIHotSpotRenderingComponent
// Size: 0x580 (Inherited: 0x580)
struct UAIHotSpotRenderingComponent : UDebugDrawComponent {
};

// Class FortniteAI.AIHotSpotSlot
// Size: 0x120 (Inherited: 0x28)
struct UAIHotSpotSlot : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform LocalTransform; // 0x30(0x60)
	float Height; // 0x90(0x04)
	float Radius; // 0x94(0x04)
	float DistanceToFocusActor; // 0x98(0x04)
	int32_t UserId; // 0x9c(0x04)
	char bStartEnabled : 1; // 0xa0(0x01)
	char bHasCachedAgentData : 1; // 0xa0(0x01)
	char bHasOverlappingSlots : 1; // 0xa0(0x01)
	char bHasDistanceToFocusActor : 1; // 0xa0(0x01)
	char bIsBlockingOthers : 1; // 0xa0(0x01)
	char bIsEnabled : 1; // 0xa0(0x01)
	char pad_A0_6 : 2; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct AAIController* Owner; // 0xa8(0x08)
	int32_t SlotIndex; // 0xb0(0x04)
	enum class EAIHotSpotSlot SlotState; // 0xb4(0x01)
	char pad_B5[0x6b]; // 0xb5(0x6b)

	void SetSlotState(enum class EAIHotSpotSlot NewState); // Function FortniteAI.AIHotSpotSlot.SetSlotState // (Native|Public|BlueprintCallable) // @ game+0x999bd90
	void SetSlotOwnerAndState(struct AAIController* NewOwner, enum class EAIHotSpotSlot NewState); // Function FortniteAI.AIHotSpotSlot.SetSlotOwnerAndState // (Native|Public|BlueprintCallable) // @ game+0x999bcc8
	void SetSlotEnabled(bool bNewEnabled); // Function FortniteAI.AIHotSpotSlot.SetSlotEnabled // (Native|Public|BlueprintCallable) // @ game+0x999bc44
	void OnStateChanged(struct AAIController* SlotOwner, enum class EAIHotSpotSlot NewState); // Function FortniteAI.AIHotSpotSlot.OnStateChanged // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xd67374
	bool IsEnabled(); // Function FortniteAI.AIHotSpotSlot.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x999a364
	bool IsAIAllowed(struct AAIController* AI); // Function FortniteAI.AIHotSpotSlot.IsAIAllowed // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent|Const) // @ game+0x999a2b4
	bool HasUserId(); // Function FortniteAI.AIHotSpotSlot.HasUserId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x999a204
	int32_t GetSlotUserId(); // Function FortniteAI.AIHotSpotSlot.GetSlotUserId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x999a070
	enum class EAIHotSpotSlot GetSlotState(); // Function FortniteAI.AIHotSpotSlot.GetSlotState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9999f24
	struct FRotator GetSlotRotation(); // Function FortniteAI.AIHotSpotSlot.GetSlotRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x9999e4c
	float GetSlotRadius(); // Function FortniteAI.AIHotSpotSlot.GetSlotRadius // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9999e34
	struct AAIController* GetSlotOwner(); // Function FortniteAI.AIHotSpotSlot.GetSlotOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69f35a0
	struct FVector GetSlotLocation(); // Function FortniteAI.AIHotSpotSlot.GetSlotLocation // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x9999cd0
	int32_t GetSlotIndex(); // Function FortniteAI.AIHotSpotSlot.GetSlotIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29eed64
	float GetSlotHeight(); // Function FortniteAI.AIHotSpotSlot.GetSlotHeight // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9999c28
	struct FBox GetSlotBounds(); // Function FortniteAI.AIHotSpotSlot.GetSlotBounds // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x9999a2c
	struct AAIHotSpot* GetHotSpot(); // Function FortniteAI.AIHotSpotSlot.GetHotSpot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99999e4
	void ClearSlot(); // Function FortniteAI.AIHotSpotSlot.ClearSlot // (Native|Public|BlueprintCallable) // @ game+0x5c7e9b0
};

// Class FortniteAI.AIHotSpotSlotGenerator
// Size: 0x28 (Inherited: 0x28)
struct UAIHotSpotSlotGenerator : UObject {

	struct AAIHotSpot* GetHotSpot(); // Function FortniteAI.AIHotSpotSlotGenerator.GetHotSpot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99999e4
	void GenerateSlots(); // Function FortniteAI.AIHotSpotSlotGenerator.GenerateSlots // (Native|Event|Public|BlueprintEvent) // @ game+0x12fee80
	struct UAIHotSpotSlot* AddSlot(struct FVector& RelativeLocation, struct FRotator& RelativeRotation, struct UAIHotSpotSlot* CustomSlotClass, bool bEnabled); // Function FortniteAI.AIHotSpotSlotGenerator.AddSlot // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x9998c68
};

// Class FortniteAI.AIHotSpotSlotGenerator_OnBoundingBox
// Size: 0x98 (Inherited: 0x28)
struct UAIHotSpotSlotGenerator_OnBoundingBox : UAIHotSpotSlotGenerator {
	struct UAIHotSpotSlot* SlotClass; // 0x28(0x08)
	struct FVector MaxExtent; // 0x30(0x18)
	float ExpandBy; // 0x48(0x04)
	float OffsetFromEdge; // 0x4c(0x04)
	float Spacing; // 0x50(0x04)
	char bLimitMaxExtent : 1; // 0x54(0x01)
	char bMustHitFocusActor : 1; // 0x54(0x01)
	char pad_54_2 : 6; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	enum class EBoundingBoxSlotDirectionCalculation SlotDirectionCalculation; // 0x58(0x01)
	char pad_59[0x3f]; // 0x59(0x3f)
};

// Class FortniteAI.AITask_ExecuteAbility
// Size: 0x90 (Inherited: 0x68)
struct UAITask_ExecuteAbility : UAITask {
	char pad_68[0x28]; // 0x68(0x28)
};

// Class FortniteAI.AthenaAIBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAthenaAIBlueprintLibrary : UBlueprintFunctionLibrary {

	void MakeBotGroupsTakeEachOtherAsTargets(struct TArray<struct AActor*>& GroupA, struct TArray<struct AActor*>& GroupB, enum class EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance); // Function FortniteAI.AthenaAIBlueprintLibrary.MakeBotGroupsTakeEachOtherAsTargets // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x999ab00
	void KillBots(struct UObject* WorldContextObject, bool bKillPlayers, bool bKillNoneParticipants, char TeamIndex, struct AActor* BotOwner); // Function FortniteAI.AthenaAIBlueprintLibrary.KillBots // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x999a944
	void JoinTeam(struct UObject* WorldContextObject, struct AController* SourceTeamController, struct AController* DestinationTeamController); // Function FortniteAI.AthenaAIBlueprintLibrary.JoinTeam // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x999a7dc
	bool IsWeaponSupported(struct UObject* WorldContextObject, struct AFortWeapon* FortWeapon); // Function FortniteAI.AthenaAIBlueprintLibrary.IsWeaponSupported // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x999a644
	bool IsItemDefinitionSupported(struct UObject* WorldContextObject, struct UFortItemDefinition* FortItemDef); // Function FortniteAI.AthenaAIBlueprintLibrary.IsItemDefinitionSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x999a380
	struct UAthenaAIServicePlayerBots* GetAIServicePlayerBots(struct UObject* WorldContextObject); // Function FortniteAI.AthenaAIBlueprintLibrary.GetAIServicePlayerBots // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x99997f4
	struct UAthenaAIServiceLoot* GetAIServiceLoot(struct UObject* WorldContextObject); // Function FortniteAI.AthenaAIBlueprintLibrary.GetAIServiceLoot // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x9999720
	struct UAthenaAIServiceCreativePlayerBots* GetAIServiceCreativePlayerBots(struct UObject* WorldContextObject); // Function FortniteAI.AthenaAIBlueprintLibrary.GetAIServiceCreativePlayerBots // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x999964c
	struct UAthenaAIPopulationTracker* GetAIPopulationTracker(struct UObject* WorldContextObject); // Function FortniteAI.AthenaAIBlueprintLibrary.GetAIPopulationTracker // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x99995b4
	struct APawn* AthenaSpawnAIFromClass(struct UObject* WorldContextObject, struct APawn* PawnClass, struct UBehaviorTree* BehaviorTree, struct FVector Location, struct FRotator Rotation, bool bNoCollisionFail, struct AActor* Owner); // Function FortniteAI.AthenaAIBlueprintLibrary.AthenaSpawnAIFromClass // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x9999064
	bool AIPawnFromGAHasLuringPickupAsGoal(struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTag GameplayTag, float MaxLifetime, enum class EFortPickupSpawnSource RequiredPickupSpawnSource); // Function FortniteAI.AthenaAIBlueprintLibrary.AIPawnFromGAHasLuringPickupAsGoal // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9998afc
};

// Class FortniteAI.AthenaAIBudgetManager
// Size: 0x278 (Inherited: 0x30)
struct UAthenaAIBudgetManager : UWorldSubsystem {
	char pad_30[0x30]; // 0x30(0x30)
	struct TMap<struct TWeakObjectPtr<struct UObject>, struct FAthenaMemoryBudgetInterfaces> StaticallyRegisteredPawns; // 0x60(0x50)
	char pad_B0[0x1c8]; // 0xb0(0x1c8)
};

// Class FortniteAI.FortAIPerceptionComponent
// Size: 0x180 (Inherited: 0x178)
struct UFortAIPerceptionComponent : UAIPerceptionComponent {
	float LosingSightRadiusBump; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
};

// Class FortniteAI.AthenaAIPerceptionComponent
// Size: 0x180 (Inherited: 0x180)
struct UAthenaAIPerceptionComponent : UFortAIPerceptionComponent {
};

// Class FortniteAI.FortBehaviorTreeComponent
// Size: 0x290 (Inherited: 0x290)
struct UFortBehaviorTreeComponent : UBehaviorTreeComponent {
};

// Class FortniteAI.AthenaBehaviorTreeComponent
// Size: 0x290 (Inherited: 0x290)
struct UAthenaBehaviorTreeComponent : UFortBehaviorTreeComponent {
};

// Class FortniteAI.FortAIDirector
// Size: 0x1040 (Inherited: 0x288)
struct AFortAIDirector : AActor {
	char pad_288[0x10]; // 0x288(0x10)
	struct FCurveTableRowHandle MaxAliveCurve; // 0x298(0x10)
	struct FCurveTableRowHandle MinAliveCurve; // 0x2a8(0x10)
	struct FIntensityData IntensityInfo; // 0x2b8(0x30)
	struct FFortAIEncounterPIDController AIDirectorPIDController; // 0x2e8(0x68)
	struct FFortAIEncounterPIDControllerSettings PIDControllerSettings; // 0x350(0x30)
	struct FUtilityData UtilityContributionData[0x10]; // 0x380(0x400)
	float UnreachableLocationPathCost; // 0x780(0x04)
	char pad_784[0x4]; // 0x784(0x04)
	struct FFortPlayerPerformanceEstimateSettings PlayerPerformanceEstimateSettings; // 0x788(0x40)
	char bUsePrototypeEnemies : 1; // 0x7c8(0x01)
	char pad_7C8_1 : 7; // 0x7c8(0x01)
	char pad_7C9[0x3]; // 0x7c9(0x03)
	bool bForceByPassNavMeshForAISpawning; // 0x7cc(0x01)
	char pad_7CD[0x3]; // 0x7cd(0x03)
	struct TArray<enum class EFortEncounterDirection> DebugEncounterDirections; // 0x7d0(0x10)
	enum class EDespawnAIType DespawnAIType; // 0x7e0(0x01)
	char pad_7E1[0x3]; // 0x7e1(0x03)
	float DespawnDistance; // 0x7e4(0x04)
	float DespawnInterval; // 0x7e8(0x04)
	char pad_7EC[0x4]; // 0x7ec(0x04)
	struct FGameplayTagContainer DebugSpawnAIGroupTags; // 0x7f0(0x20)
	struct FGameplayTagContainer DebugEncounterTags; // 0x810(0x20)
	float BurstSpawnThreatVisualsEndDelay; // 0x830(0x04)
	char pad_834[0x4]; // 0x834(0x04)
	struct TArray<struct FFortAIEncounterSpawnGroupCapsProfile> EncounterSpawnGroupCapSettings; // 0x838(0x10)
	struct TArray<struct FFortAIEncounterSpawnPointsProfile> EncounterSpawnPointsSettings; // 0x848(0x10)
	struct TArray<struct FFortAIEncounterPawnDifficultyLevelModifier> EncounterPawnDifficultyLevelModifiers; // 0x858(0x10)
	struct TArray<struct FFortAISpawnGroupUpgradeData> SpawnGroupUpgrades; // 0x868(0x10)
	float GuaranteedUpgradeGroupUtilityBonus; // 0x878(0x04)
	float DiscreteEncounterUtilityDesireMappings[0x4]; // 0x87c(0x10)
	enum class EFortAIUtility InitialDynamicUtilities[0x4]; // 0x88c(0x04)
	struct FEncounterEnvironmentQueryInfo SpawnLocationPlacementQueries[0x4]; // 0x890(0xa0)
	struct FEncounterEnvironmentQueryInfo SpawnLocationActorSearchQueries[0x4]; // 0x930(0xa0)
	struct UFortAIDirectorDataTrackingSettings* DataTrackingSettings; // 0x9d0(0x08)
	struct TArray<struct FDataTableRowHandle> BaseLootDropData; // 0x9d8(0x10)
	struct TArray<struct FFortAILootDropModifiers> LootDropModifiers; // 0x9e8(0x10)
	struct FGameplayTagQuery LootDropDenialQuery; // 0x9f8(0x48)
	char bDebugEncounterQueries : 1; // 0xa40(0x01)
	char pad_A40_1 : 7; // 0xa40(0x01)
	char pad_A41[0x17]; // 0xa41(0x17)
	struct TArray<struct AFortPlayerControllerZone*> PlayerControllersForBVTree; // 0xa58(0x10)
	struct TArray<struct AFortPlayerPawn*> PlayerPawnsForBVTree; // 0xa68(0x10)
	char pad_A78[0x40]; // 0xa78(0x40)
	struct TArray<struct AFortAIController*> AIControllersForBVTree; // 0xab8(0x10)
	struct TArray<struct AFortAIPawn*> AIPawnsForBVTree; // 0xac8(0x10)
	char pad_AD8[0x40]; // 0xad8(0x40)
	struct TArray<struct AFortAthenaAIBotController*> AIPlayerBotControllersForBVTree; // 0xb18(0x10)
	struct TArray<struct AFortPlayerPawn*> AIPlayerBotPawnsForBVTree; // 0xb28(0x10)
	char pad_B38[0x40]; // 0xb38(0x40)
	struct TArray<struct AFortAthenaAIBotController*> AINonPlayerBotControllersForBVTree; // 0xb78(0x10)
	struct TArray<struct AFortPlayerPawn*> AINonPlayerBotPawnsForBVTree; // 0xb88(0x10)
	char pad_B98[0x40]; // 0xb98(0x40)
	struct TArray<struct AFortPlayerPawn*> NonPlayerBotPawns; // 0xbd8(0x10)
	struct TArray<struct AFortPlayerPawn*> PlayerBotPawns; // 0xbe8(0x10)
	struct TArray<struct AFortPlayerPawn*> PlayerPawns; // 0xbf8(0x10)
	struct TArray<struct AFortAIPawn*> FortAIPawns; // 0xc08(0x10)
	char pad_C18[0x100]; // 0xc18(0x100)
	bool bUseLODSettings; // 0xd18(0x01)
	char pad_D19[0x6f]; // 0xd19(0x6f)
	struct TScriptInterface<IFortAthenaAILODSettings> CachedLODSettingsManager; // 0xd88(0x10)
	bool bAsyncProcessUpdateAliveAIs; // 0xd98(0x01)
	bool bAllowProcessPlayerTargeting; // 0xd99(0x01)
	char pad_D9A[0x2]; // 0xd9a(0x02)
	int32_t MaxNumLODAIProcessPerFrame; // 0xd9c(0x04)
	struct FFortEncounterPawnNumberCaps DefaultEncounterPawnCaps; // 0xda0(0x18)
	char pad_DB8[0x8]; // 0xdb8(0x08)
	struct UReporterGraph* IntensityGraph; // 0xdc0(0x08)
	struct UReporterGraph* UtilitiesGraph; // 0xdc8(0x08)
	struct UReporterGraph* PIDValuesGraph; // 0xdd0(0x08)
	struct UReporterGraph* PIDContributionsGraph; // 0xdd8(0x08)
	char bNightActive : 1; // 0xde0(0x01)
	char bAIDisabled : 1; // 0xde0(0x01)
	char bRegisteredForDayPhaseChange : 1; // 0xde0(0x01)
	char bUseSpawnCap : 1; // 0xde0(0x01)
	char pad_DE0_4 : 4; // 0xde0(0x01)
	char pad_DE1[0x3]; // 0xde1(0x03)
	int32_t NightCount; // 0xde4(0x04)
	float NightEncounterFailureBreatherTime; // 0xde8(0x04)
	float EncounterPawnSpawnInterval; // 0xdec(0x04)
	struct UFortAIEncounterInfo* DefaultNightEncounter; // 0xdf0(0x08)
	struct UFortAIEncounterInfo* DummyDebugEncounter; // 0xdf8(0x08)
	struct UFortAIEncounterInfo* BaseEncounterClass; // 0xe00(0x08)
	int32_t MaxActiveAlive; // 0xe08(0x04)
	int32_t NumActiveAlive; // 0xe0c(0x04)
	int32_t NumPendingCapRelevantAI; // 0xe10(0x04)
	char pad_E14[0x54]; // 0xe14(0x54)
	struct TArray<struct FPendingSpawnInfo> PendingSpawns; // 0xe68(0x10)
	int32_t MaxAISpawnedPerFrame; // 0xe78(0x04)
	int32_t MaxAIDespawnedPerFrame; // 0xe7c(0x04)
	int32_t DespawnAllAIMaxAIDespawnedPerFrame; // 0xe80(0x04)
	char pad_E84[0x4]; // 0xe84(0x04)
	struct TArray<struct TWeakObjectPtr<struct AFortAIPawn>> PendingDespawns; // 0xe88(0x10)
	char pad_E98[0x8]; // 0xe98(0x08)
	int32_t NumWorldSubdivides; // 0xea0(0x04)
	float MinAISpawnDistanceFromPlayers; // 0xea4(0x04)
	struct FGameplayTagContainer AmbientThreatPreferredPlacementActorTags; // 0xea8(0x20)
	struct FGameplayTagContainer AmbientThreatRequiredPlacementActorTags; // 0xec8(0x20)
	struct TArray<struct UFortAIEncounterInfo*> ActiveEncounters; // 0xee8(0x10)
	struct TArray<struct UFortAIEncounterInfo*> InactiveEncounters; // 0xef8(0x10)
	struct TArray<struct FFortPendingStoppedEncounterData> PendingStoppedEncounters; // 0xf08(0x10)
	struct UFortAIEncounterInfo* ActiveDefaultEncounter; // 0xf18(0x08)
	struct UFortAIEncounterInfo* ActiveDummyDebugEncounter; // 0xf20(0x08)
	struct TArray<struct UFortAIEncounterSequence*> EncounterSequences; // 0xf28(0x10)
	struct UEQSRenderingComponent* EQSRenderingComp; // 0xf38(0x08)
	int32_t DebugGraphUpdateFrequency; // 0xf40(0x04)
	float MaxNormalLODDistanceToPlayer; // 0xf44(0x04)
	float AIRelevantDistanceToPlayer; // 0xf48(0x04)
	float EncounterRelevantDistanceToPlayer; // 0xf4c(0x04)
	float EncounterRelevantDistanceToDefender; // 0xf50(0x04)
	char pad_F54[0x4]; // 0xf54(0x04)
	struct TArray<struct TScriptInterface<IFortPatrolWardInterface>> PatrolWards; // 0xf58(0x10)
	char pad_F68[0x4]; // 0xf68(0x04)
	int32_t MaxTotalActiveAliveAI; // 0xf6c(0x04)
	int32_t MaxEncounterActiveAliveAI; // 0xf70(0x04)
	int32_t MaxSPUsed; // 0xf74(0x04)
	char pad_F78[0x8]; // 0xf78(0x08)
	struct TArray<struct FUtilityTypeFloatPair> DebugEncounterTopUtilityPercentages; // 0xf80(0x10)
	struct TArray<struct UCurveFloat*> DebugEncounterSpawnPointsCurves; // 0xf90(0x10)
	char bDebugAllowEncounterModifierTags : 1; // 0xfa0(0x01)
	char pad_FA0_1 : 7; // 0xfa0(0x01)
	char pad_FA1[0x3]; // 0xfa1(0x03)
	int32_t SimulatedNumberOfPlayersForAIEncounters; // 0xfa4(0x04)
	char pad_FA8[0x78]; // 0xfa8(0x78)
	int32_t MaxNumberOfEncounterGroups; // 0x1020(0x04)
	char pad_1024[0x4]; // 0x1024(0x04)
	struct TArray<struct ABuildingProp_AISpawner*> RegisteredAISpawners; // 0x1028(0x10)
	char pad_1038[0x8]; // 0x1038(0x08)

	void UnregisterPatrolWard(struct TScriptInterface<IFortPatrolWardInterface> PatrolWard); // Function FortniteAI.FortAIDirector.UnregisterPatrolWard // (Final|Native|Public|BlueprintCallable) // @ game+0x99a3928
	struct UFortAIEncounterInfo* StartEncounter(struct FString& EncounterInstigator, struct UFortDifficultyEncounterSettings* DifficultyEncounterSettings, struct FFortAIEncounterQueryData OptionalQueryData); // Function FortniteAI.FortAIDirector.StartEncounter // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x99a370c
	void RegisterPatrolWard(struct TScriptInterface<IFortPatrolWardInterface> PatrolWard); // Function FortniteAI.FortAIDirector.RegisterPatrolWard // (Final|Native|Public|BlueprintCallable) // @ game+0x99a367c
	void ReceivePawnSpawned(struct AFortPawn* SpawnedPawn); // Function FortniteAI.FortAIDirector.ReceivePawnSpawned // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xd67374
	void PostDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation); // Function FortniteAI.FortAIDirector.PostDayPhaseChanged // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnRestStarted(); // Function FortniteAI.FortAIDirector.OnRestStarted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnRampStarted(); // Function FortniteAI.FortAIDirector.OnRampStarted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPlayerSpawn(struct AFortPlayerPawn* PlayerPawn); // Function FortniteAI.FortAIDirector.OnPlayerSpawn // (RequiredAPI|BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPlayerDied(struct AFortPlayerPawn* PlayerPawn); // Function FortniteAI.FortAIDirector.OnPlayerDied // (RequiredAPI|BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPeakStarted(); // Function FortniteAI.FortAIDirector.OnPeakStarted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPawnDied(struct AFortAIPawn* KilledPawn); // Function FortniteAI.FortAIDirector.OnPawnDied // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnFadeStarted(); // Function FortniteAI.FortAIDirector.OnFadeStarted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnDirectorDeactivated(); // Function FortniteAI.FortAIDirector.OnDirectorDeactivated // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation); // Function FortniteAI.FortAIDirector.OnDayPhaseChanged // (Native|Public) // @ game+0x99a357c
	bool IsPointTooCloseToPatrolWards(struct FVector& Point, enum class EWardAffectType WardEffectTypeFilter); // Function FortniteAI.FortAIDirector.IsPointTooCloseToPatrolWards // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a34a0
	bool IsLineTooCloseToPatrolWards(struct FVector& LineStart, struct FVector& LineEnd); // Function FortniteAI.FortAIDirector.IsLineTooCloseToPatrolWards // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a33b0
	bool IsAnyEncounterGoalWithinDistanceOfPoint(struct FVector& Point, float Distance, bool bOnlyActiveEncounters); // Function FortniteAI.FortAIDirector.IsAnyEncounterGoalWithinDistanceOfPoint // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a32a8
	bool IsAnyAIRelevantToPlayer(struct AFortPlayerPawn* Player); // Function FortniteAI.FortAIDirector.IsAnyAIRelevantToPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a2b68
	bool IsAnyActiveEncounterRelevantToPlayer(struct AFortPlayerPawn* Player); // Function FortniteAI.FortAIDirector.IsAnyActiveEncounterRelevantToPlayer // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a3204
	bool IsAnyActiveEncounterRelevantToDefender(struct AFortAIPawn* Defender); // Function FortniteAI.FortAIDirector.IsAnyActiveEncounterRelevantToDefender // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a3160
	struct FVector GetVectorFromEncounterDirection(enum class EFortEncounterDirection Direction); // Function FortniteAI.FortAIDirector.GetVectorFromEncounterDirection // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x99a2ad4
	struct TArray<struct ABuildingRift*> GetRiftsFromClosestActiveEncounterTo(struct AActor* Target); // Function FortniteAI.FortAIDirector.GetRiftsFromClosestActiveEncounterTo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a28a0
	int32_t GetNumPlayers(); // Function FortniteAI.FortAIDirector.GetNumPlayers // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x752c614
	int32_t GetNumActiveEncounters(); // Function FortniteAI.FortAIDirector.GetNumActiveEncounters // (Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99a2888
	enum class EFortEncounterDirection GetEncounterDirectionFromVector(struct FVector DirectionVector); // Function FortniteAI.FortAIDirector.GetEncounterDirectionFromVector // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x99a27f8
	void GetAmbientThreatEncounterSpawnLocations(struct TArray<struct FVector>& AmbientThreatEncounterSpawnLocations); // Function FortniteAI.FortAIDirector.GetAmbientThreatEncounterSpawnLocations // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a2738
	void Deactivate(); // Function FortniteAI.FortAIDirector.Deactivate // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xfe5030
	struct TArray<enum class EFortEncounterDirection> ConvertInvalidDirectionsToValidDirections(struct TArray<enum class EFortEncounterDirection> InvalidDirections); // Function FortniteAI.FortAIDirector.ConvertInvalidDirectionsToValidDirections // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x99a2648
	void Activate(); // Function FortniteAI.FortAIDirector.Activate // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x230a2e8
};

// Class FortniteAI.AthenaAIDirector
// Size: 0x1048 (Inherited: 0x1040)
struct AAthenaAIDirector : AFortAIDirector {
	char pad_1040[0x8]; // 0x1040(0x08)

	void AggroOnActor(struct AAthenaAIController* AIController, struct AActor* Target); // Function FortniteAI.AthenaAIDirector.AggroOnActor // (Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x999cdec
};

// Class FortniteAI.AthenaAIDropper
// Size: 0x38 (Inherited: 0x28)
struct UAthenaAIDropper : UObject {
	struct TArray<struct FDroppingAgentData> InactiveAgents; // 0x28(0x10)
};

// Class FortniteAI.AthenaAIPerceptionManager
// Size: 0x48 (Inherited: 0x38)
struct UAthenaAIPerceptionManager : UAISubsystem {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class FortniteAI.AthenaAIPerceptionStimuliSourceComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UAthenaAIPerceptionStimuliSourceComponent : UAIPerceptionStimuliSourceComponent {

	void OnOwnerTeamIndexChanged(); // Function FortniteAI.AthenaAIPerceptionStimuliSourceComponent.OnOwnerTeamIndexChanged // (Final|Native|Private) // @ game+0x999df88
};

// Class FortniteAI.AthenaAIPopulationTracker
// Size: 0x160 (Inherited: 0x38)
struct UAthenaAIPopulationTracker : UAISubsystem {
	struct FMulticastInlineDelegate OnAIPawnDied; // 0x38(0x10)
	struct FMulticastInlineDelegate OnAIPawnSpawned; // 0x48(0x10)
	char pad_58[0x60]; // 0x58(0x60)
	struct TArray<struct AController*> AIList; // 0xb8(0x10)
	struct AFortGameModeAthena* CachedGameMode; // 0xc8(0x08)
	char pad_D0[0x90]; // 0xd0(0x90)

	void OnFortPawnDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.AthenaAIPopulationTracker.OnFortPawnDied // (Final|Native|Public|HasDefaults) // @ game+0x999dba8
	void OnAISpawned(struct APawn* Pawn, int32_t RequestId); // Function FortniteAI.AthenaAIPopulationTracker.OnAISpawned // (Final|Native|Private) // @ game+0x999d864
	void OnAgentGameOver(struct AFortAthenaAIBotController* AIBotController, struct AFortPawn* Pawn, struct AController* Instigator); // Function FortniteAI.AthenaAIPopulationTracker.OnAgentGameOver // (Final|Native|Private) // @ game+0x999d990
	int32_t GetNumTotalBots(); // Function FortniteAI.AthenaAIPopulationTracker.GetNumTotalBots // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x999d230
	int32_t GetNumPlayerBots(); // Function FortniteAI.AthenaAIPopulationTracker.GetNumPlayerBots // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9280260
	int32_t GetNumNonAthenaParticipantBots(); // Function FortniteAI.AthenaAIPopulationTracker.GetNumNonAthenaParticipantBots // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x999d21c
	int32_t GetNumAIPawn(); // Function FortniteAI.AthenaAIPopulationTracker.GetNumAIPawn // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x999d208
	struct FAIPopulationCountSnapshot GetAIPopulationTrackerCount(); // Function FortniteAI.AthenaAIPopulationTracker.GetAIPopulationTrackerCount // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x999d03c
	struct TArray<struct AController*> GetAIMatchingQuery(struct FGameplayTagQuery& TagQuery); // Function FortniteAI.AthenaAIPopulationTracker.GetAIMatchingQuery // (Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x999cf28
};

// Class FortniteAI.AthenaAISense_Hearing
// Size: 0xe8 (Inherited: 0xe8)
struct UAthenaAISense_Hearing : UAISense_Hearing {
};

// Class FortniteAI.AthenaAIServiceCover
// Size: 0xa8 (Inherited: 0x78)
struct UAthenaAIServiceCover : UAthenaAIService {
	struct UNavigationQueryFilter* CoverPositionFilterClass; // 0x78(0x08)
	char pad_80[0x28]; // 0x80(0x28)

	struct UAthenaAIServiceCover* GetAthenaAIServiceCover(struct UObject* WorldContextObject); // Function FortniteAI.AthenaAIServiceCover.GetAthenaAIServiceCover // (Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x999d078
};

// Class FortniteAI.AthenaAIServiceGroup
// Size: 0x90 (Inherited: 0x78)
struct UAthenaAIServiceGroup : UAthenaAIService {
	int32_t GroupIndexCount; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FAthenaAIServiceGroupInfo> GroupList; // 0x80(0x10)
};

// Class FortniteAI.AthenaAIServiceLOFOccluder
// Size: 0x98 (Inherited: 0x78)
struct UAthenaAIServiceLOFOccluder : UAthenaAIService {
	struct TArray<struct TWeakObjectPtr<struct AActor>> TrackedActors; // 0x78(0x10)
	char pad_88[0x10]; // 0x88(0x10)

	void UnregisterOccluder(struct AActor* OccluderActor); // Function FortniteAI.AthenaAIServiceLOFOccluder.UnregisterOccluder // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x999e700
	void RegisterOccluder(struct AActor* OccluderActor, float SphereRadius); // Function FortniteAI.AthenaAIServiceLOFOccluder.RegisterOccluder // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x999e358
	bool IsLOFOccluded(struct FVector& StartLocation, struct FVector& EndLocation); // Function FortniteAI.AthenaAIServiceLOFOccluder.IsLOFOccluded // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x999d248
	struct UAthenaAIServiceLOFOccluder* GetAthenaAIServiceLOFOccluder(struct UObject* WorldContextObject); // Function FortniteAI.AthenaAIServiceLOFOccluder.GetAthenaAIServiceLOFOccluder // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x999d0f8
};

// Class FortniteAI.AthenaAIServiceLoot
// Size: 0x470 (Inherited: 0x78)
struct UAthenaAIServiceLoot : UAthenaAIService {
	struct FVector LootOctreeCenter; // 0x78(0x18)
	struct FScalableFloat LootOctreeRadius; // 0x90(0x28)
	struct FScalableFloat SupplyDropStatusUpdateRate; // 0xb8(0x28)
	struct FScalableFloat RemoveInvalidChestFromOctreeProbability; // 0xe0(0x28)
	struct FScalableFloat MovingLootTrackingEnabled; // 0x108(0x28)
	struct FScalableFloat MovingLootUpdateRate; // 0x130(0x28)
	struct FScalableFloat MovingLootOctreeUpdateDistanceThreshold; // 0x158(0x28)
	struct TArray<struct ABuildingProp*> HarvestableActorClassList; // 0x180(0x10)
	char pad_190[0x210]; // 0x190(0x210)
	struct TMap<struct TWeakObjectPtr<struct AFortPickup>, struct FMovingLootInfo> MovingLoots; // 0x3a0(0x50)
	char pad_3F0[0x8]; // 0x3f0(0x08)
	struct TArray<struct FCachedSupplyDrop> CachedSupplyDrops; // 0x3f8(0x10)
	struct UFortWorldItem* CachedWorldItem; // 0x408(0x08)
	struct UDataTable* BotBuildingContainerExcludeListDataTable; // 0x410(0x08)
	char pad_418[0x58]; // 0x418(0x58)

	void UpdateSupplyDropStatus(); // Function FortniteAI.AthenaAIServiceLoot.UpdateSupplyDropStatus // (Final|Native|Private) // @ game+0x999e8b8
	void UpdateMovingLoots(); // Function FortniteAI.AthenaAIServiceLoot.UpdateMovingLoots // (Final|Native|Private) // @ game+0x999e8a4
	void OnGamePhaseStepChanged(struct TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep); // Function FortniteAI.AthenaAIServiceLoot.OnGamePhaseStepChanged // (Final|Native|Public|HasOutParms) // @ game+0x999dea8
	void K2_RemoveGameplayTagFromLoot(struct AActor* LootActor, struct FGameplayTag& GameplayTag); // Function FortniteAI.AthenaAIServiceLoot.K2_RemoveGameplayTagFromLoot // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x999d644
	void K2_AddGameplayTagToLoot(struct AActor* LootActor, struct FGameplayTag& GameplayTag); // Function FortniteAI.AthenaAIServiceLoot.K2_AddGameplayTagToLoot // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x999d574
};

// Class FortniteAI.AthenaAIServiceManager
// Size: 0x80 (Inherited: 0x38)
struct UAthenaAIServiceManager : UAISubsystem {
	char pad_38[0x18]; // 0x38(0x18)
	struct TArray<struct UAthenaAIService*> AIServices; // 0x50(0x10)
	char pad_60[0x20]; // 0x60(0x20)
};

// Class FortniteAI.CacheSafeZoneLocation
// Size: 0x40 (Inherited: 0x28)
struct UCacheSafeZoneLocation : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class FortniteAI.AthenaAIServiceVehicle
// Size: 0xc8 (Inherited: 0x78)
struct UAthenaAIServiceVehicle : UAthenaAIService {
	char pad_78[0x38]; // 0x78(0x38)
	struct TArray<struct AFortAthenaVehicle*> TrackedVehicles; // 0xb0(0x10)
	float TimeToRefreshTree; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class FortniteAI.AthenaNavSystemConfigOverride
// Size: 0x298 (Inherited: 0x298)
struct AAthenaNavSystemConfigOverride : ANavSystemConfigOverride {
};

// Class FortniteAI.AthenaAISettingsAIDIrectorLOD
// Size: 0x118 (Inherited: 0x30)
struct UAthenaAISettingsAIDIrectorLOD : UDataAsset {
	struct TArray<struct FPlayerLODViewConeConfig> PlayerLODViewConeConfigs; // 0x30(0x10)
	struct FPlayerLODViewConeHysteresisConfig PlayerLODViewConeHysteresisConfig; // 0x40(0x50)
	struct FScalableFloat CouldBeVisibleViewConeAngleDegrees; // 0x90(0x28)
	struct FScalableFloat CouldBeVisibleMaxDistance; // 0xb8(0x28)
	struct FScalableFloat LODSortHysteresisDistance; // 0xe0(0x28)
	struct TArray<struct FFortAIDirectorPerLODConfig> FortAIDirectorLODConfigs; // 0x108(0x10)
};

// Class FortniteAI.AthenaAISettings
// Size: 0xa0 (Inherited: 0x30)
struct UAthenaAISettings : UDataAsset {
	char bAllowAIDirector : 1; // 0x30(0x01)
	char bAllowAIGoalManager : 1; // 0x30(0x01)
	char bForceRVOUse : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float MaxPlayerSpeedScaleFootstepSounds; // 0x34(0x04)
	float MinFootstepHearingRange; // 0x38(0x04)
	float MaxFootstepHearingRange; // 0x3c(0x04)
	float DamagedHearingRange; // 0x40(0x04)
	float CrouchHearingModifier; // 0x44(0x04)
	float MaxNPCHearingRange; // 0x48(0x04)
	float MaxPerceptualStimuliAge; // 0x4c(0x04)
	float DeAggroRange; // 0x50(0x04)
	float ReducedDeAggroRange; // 0x54(0x04)
	float DurationReduceAggroLimits; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct AAthenaNavSystemConfigOverride* NavigationSystemConfig; // 0x60(0x08)
	struct TSoftObjectPtr<UAthenaAISettingsAIDIrectorLOD> AIDIrectorLOD; // 0x68(0x28)
	struct TArray<struct UAthenaAIService*> AIServices; // 0x90(0x10)
};

// Class FortniteAI.AthenaAISpawner
// Size: 0x108 (Inherited: 0x38)
struct UAthenaAISpawner : UAISubsystem {
	struct FMulticastInlineDelegate OnPawnPreFinishSpawningEvent; // 0x38(0x10)
	struct FMulticastInlineDelegate OnPawnSpawnedEvent; // 0x48(0x10)
	char pad_58[0xb0]; // 0x58(0xb0)

	int32_t RequestSpawn(struct UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList, struct FTransform& SpawnTransform, bool bUrgentRequest); // Function FortniteAI.AthenaAISpawner.RequestSpawn // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x999f730
	void QueueForDespawn(struct AActor* ActorToDespawn); // Function FortniteAI.AthenaAISpawner.QueueForDespawn // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x999f5e4
	bool CancelRequest(int32_t RequestId); // Function FortniteAI.AthenaAISpawner.CancelRequest // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x999eb50
};

// Class FortniteAI.FortAISystem
// Size: 0x1e8 (Inherited: 0x148)
struct UFortAISystem : UAISystem {
	struct TArray<struct UFortQueryTwoPointSolver*> TwoPointSolvers; // 0x148(0x10)
	struct UFortInfluenceMap* InfluenceMap; // 0x158(0x08)
	struct UFortBotMissionManager* BotManager; // 0x160(0x08)
	char pad_168[0x10]; // 0x168(0x10)
	struct TArray<struct UFortRiftBlockerComponent*> ActiveRiftBlockers; // 0x178(0x10)
	char pad_188[0x50]; // 0x188(0x50)
	struct UAthenaAISpawner* AISpawner; // 0x1d8(0x08)
	struct UAthenaAIServiceManager* AIServiceManager; // 0x1e0(0x08)

	bool IsInCone2D(struct FVector ConeOrigin, struct FVector ConeDirection, float HalfAngle, struct FVector LocationToCheck); // Function FortniteAI.FortAISystem.IsInCone2D // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x99ac45c
};

// Class FortniteAI.AthenaAISystem
// Size: 0x240 (Inherited: 0x1e8)
struct UAthenaAISystem : UFortAISystem {
	struct UAthenaAIPerceptionManager* PerceptionManager; // 0x1e8(0x08)
	struct UAthenaAIDropper* AIDropper; // 0x1f0(0x08)
	struct UAthenaAIPopulationTracker* AIPopulationTracker; // 0x1f8(0x08)
	struct UAthenaAIVehicleAvoidanceManager* AIVehicleAvoidanceManager; // 0x200(0x08)
	struct TArray<struct AAthenaAIController*> AIControllers; // 0x208(0x10)
	struct TArray<struct UAthenaPathFollowingComponent*> PathFollowingComponents; // 0x218(0x10)
	struct TArray<struct AActor*> RegisteredAISpawners; // 0x228(0x10)
	char bUnlimitedAIHealth : 1; // 0x238(0x01)
	char bNavigationReady : 1; // 0x238(0x01)
	char pad_238_2 : 6; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)

	void OnAIPawnSpawned(struct AController* SpawnedController, bool bIsABot, struct AFortPawn* FortAIPawn, struct AFortPlayerPawn* PlayerPawn); // Function FortniteAI.AthenaAISystem.OnAIPawnSpawned // (Final|Native|Protected) // @ game+0x999f3f0
	void OnAIPawnDied(struct AController* KilledController, bool bIsABot, struct AFortPawn* KilledAIPawn, struct AFortPlayerPawn* KilledPlayerPawn, struct AController* KillerController); // Function FortniteAI.AthenaAISystem.OnAIPawnDied // (Final|Native|Protected) // @ game+0x999f258
	void HandlePlayerExitAircraft(struct AController* ExitingController); // Function FortniteAI.AthenaAISystem.HandlePlayerExitAircraft // (Final|Native|Protected) // @ game+0x999ee40
	void HandleGamePhaseStepChanged(struct TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep); // Function FortniteAI.AthenaAISystem.HandleGamePhaseStepChanged // (Final|Native|Protected|HasOutParms) // @ game+0x999ed60
	void AIProfiling_OnSafeZoneUpdated(); // Function FortniteAI.AthenaAISystem.AIProfiling_OnSafeZoneUpdated // (Final|Native|Public) // @ game+0x24841e4
	void AIProfiling_OnGamePhaseChanged(enum class EAthenaGamePhase GamePhase); // Function FortniteAI.AthenaAISystem.AIProfiling_OnGamePhaseChanged // (Final|Native|Public) // @ game+0x66da9d0
};

// Class FortniteAI.AthenaAIVehicleAvoidanceManager
// Size: 0x88 (Inherited: 0x38)
struct UAthenaAIVehicleAvoidanceManager : UAISubsystem {
	char pad_38[0x4c]; // 0x38(0x4c)
	float TimeToRefreshTree; // 0x84(0x04)
};

// Class FortniteAI.AthenaAvoidanceManager
// Size: 0xe0 (Inherited: 0xe0)
struct UAthenaAvoidanceManager : UAvoidanceManager {
};

// Class FortniteAI.AthenaCreativeRift
// Size: 0xc70 (Inherited: 0xb80)
struct AAthenaCreativeRift : ABuildingRift {
	struct USphereComponent* DespawnSphereComponent; // 0xb78(0x08)
	struct ABuildingProp_AISpawner* ParentTrap; // 0xb80(0x08)
	struct FFortEncounterSettings OverrideEncounterSettings; // 0xb88(0xc0)
	bool bHasLoadedSettings; // 0xc48(0x01)
	struct TArray<struct AFortPlayerPawn*> DespawnPlayerOverlaps; // 0xc50(0x10)
	char pad_C61[0x7]; // 0xc61(0x07)
	struct UFortAIManagerMinigameComponent* CachedAIMinigamecomponent; // 0xc68(0x08)

	void NotifyActorDespawnEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function FortniteAI.AthenaCreativeRift.NotifyActorDespawnEndOverlap // (Final|Native|Public) // @ game+0x999f11c
	void BlueprintShowRift(); // Function FortniteAI.AthenaCreativeRift.BlueprintShowRift // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class FortniteAI.AthenaNavInvokerBox
// Size: 0x298 (Inherited: 0x288)
struct AAthenaNavInvokerBox : AActor {
	float GenerationRange; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct UNavigationInvokerComponent* InvokerComp; // 0x290(0x08)

	void SetInvokerEnabled(bool bEnable); // Function FortniteAI.AthenaNavInvokerBox.SetInvokerEnabled // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x999f940
};

// Class FortniteAI.FortNavMesh
// Size: 0x570 (Inherited: 0x568)
struct AFortNavMesh : ARecastNavMesh {
	struct UFortAIHotSpotManager* HotSpotManager; // 0x568(0x08)
};

// Class FortniteAI.AthenaNavMesh
// Size: 0x670 (Inherited: 0x570)
struct AAthenaNavMesh : AFortNavMesh {
	int32_t HotSpotPathfindingMaxSearchNodes; // 0x570(0x04)
	float ShallowWaterTraceStartOffsetZ; // 0x574(0x04)
	float ShallowWaterTraceEndOffsetZ; // 0x578(0x04)
	int32_t MaximumTilesToProcessForWaterPerFrame; // 0x57c(0x04)
	bool bSuspendNavmeshWhenNoAIUsersAlive; // 0x580(0x01)
	char pad_581[0x7]; // 0x581(0x07)
	struct TArray<struct FBox> SerializedDirtyAreas; // 0x588(0x10)
	char pad_598[0xd8]; // 0x598(0xd8)

	void MoveTiles(struct FBox& SourceBox, struct FIntPoint& TileOffset, float RotationDeg, struct FVector2D& FillerTilePosition); // Function FortniteAI.AthenaNavMesh.MoveTiles // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x999efa8
	void ComputeOffsetForMoveTiles(struct FVector& StartPosition, struct FVector& DesiredPosition, struct FVector& OutEndPosition, struct FIntPoint& OutTileOffset); // Function FortniteAI.AthenaNavMesh.ComputeOffsetForMoveTiles // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x999ebdc
};

// Class FortniteAI.AthenaNavMeshRenderingComponent
// Size: 0x590 (Inherited: 0x590)
struct UAthenaNavMeshRenderingComponent : UNavMeshRenderingComponent {
};

// Class FortniteAI.AthenaNavMesh_Big
// Size: 0x678 (Inherited: 0x670)
struct AAthenaNavMesh_Big : AAthenaNavMesh {
	float MaximumDistanceToWaterForShallow; // 0x670(0x04)
	char pad_674[0x4]; // 0x674(0x04)
};

// Class FortniteAI.AthenaNavOctTreeInclusionBounds
// Size: 0x2c0 (Inherited: 0x2c0)
struct AAthenaNavOctTreeInclusionBounds : AVolume {
};

// Class FortniteAI.AthenaNavPresenceDetectorComponent
// Size: 0xe8 (Inherited: 0xa0)
struct UAthenaNavPresenceDetectorComponent : UActorComponent {
	bool bDisableUponNavMeshPresence; // 0xa0(0x01)
	bool bHasValidNavMesh; // 0xa1(0x01)
	char pad_A2[0x2]; // 0xa2(0x02)
	struct FName NavMeshNameToUse; // 0xa4(0x04)
	struct TArray<struct FNavMeshDetectedInfo> NavMeshesInfo; // 0xa8(0x10)
	struct FMulticastInlineDelegate NavMeshPresenceDetected; // 0xb8(0x10)
	struct FMulticastInlineDelegate NavMeshPresenceUndetected; // 0xc8(0x10)
	char pad_D8[0x10]; // 0xd8(0x10)

	void OnNavMeshTilesUpdated(struct FUpdatedNavMeshTiles& UpdatedNavMeshTiles); // Function FortniteAI.AthenaNavPresenceDetectorComponent.OnNavMeshTilesUpdated // (Final|Native|Protected|HasOutParms) // @ game+0x999f548
	bool HasValidNavMeshLocation(); // Function FortniteAI.AthenaNavPresenceDetectorComponent.HasValidNavMeshLocation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x999eec0
};

// Class FortniteAI.AthenaNavRelevantActorInterface
// Size: 0x28 (Inherited: 0x28)
struct UAthenaNavRelevantActorInterface : UInterface {
};

// Class FortniteAI.FortNavSystem
// Size: 0x1780 (Inherited: 0x1520)
struct UFortNavSystem : UNavigationSystemV1 {
	char pad_1520[0x10]; // 0x1520(0x10)
	struct TSoftClassPtr<UObject> DefaultSmashableArea; // 0x1530(0x28)
	struct TSoftClassPtr<UObject> JumpDownArea; // 0x1558(0x28)
	struct TSoftClassPtr<UObject> JumpDownSmashableArea; // 0x1580(0x28)
	struct TSoftClassPtr<UObject> JumpDownSmashableArea2; // 0x15a8(0x28)
	struct TSoftClassPtr<UObject> JumpDownSmashableArea3; // 0x15d0(0x28)
	struct TArray<struct UFortCustomNavLinkGlobalProxy*> LinkGlobalProxies; // 0x15f8(0x10)
	struct TArray<struct ARecastNavMesh*> NamedNavmeshes; // 0x1608(0x10)
	struct TArray<struct UFortNavLinkBlockerComponent*> NavLinkBlockers; // 0x1618(0x10)
	char pad_1628[0x10]; // 0x1628(0x10)
	struct TArray<struct UFortPathCostEstimator*> PathEstimators; // 0x1638(0x10)
	struct TArray<struct UFortInescapableZoneTracker*> InescapableZones; // 0x1648(0x10)
	char bAllowAutoRebuild : 1; // 0x1658(0x01)
	char bRebuildOnInitialUnlock : 1; // 0x1658(0x01)
	char bUsesStreamedInNavLevel : 1; // 0x1658(0x01)
	char bUseStaticMeshLinks : 1; // 0x1658(0x01)
	char bUseStaticWorldLinksDown : 1; // 0x1658(0x01)
	char bUseStaticWorldLinksUp : 1; // 0x1658(0x01)
	char bUseJumpLinkActors : 1; // 0x1658(0x01)
	char bGenerateWallClimbLinks : 1; // 0x1658(0x01)
	char bGenerateClamberLinks : 1; // 0x1659(0x01)
	char pad_1659_1 : 7; // 0x1659(0x01)
	char pad_165A[0x2]; // 0x165a(0x02)
	float DirtyAreasUpdateFreqInactive; // 0x165c(0x04)
	char pad_1660[0xd8]; // 0x1660(0xd8)
	struct AFortNavigationGraph* NavGraphData; // 0x1738(0x08)
	struct TArray<struct TWeakObjectPtr<struct AActor>> CompositePathGoals; // 0x1740(0x10)
	struct TArray<struct FBox> AtlasCells; // 0x1750(0x10)
	char pad_1760[0x10]; // 0x1760(0x10)
	struct TArray<struct FMetaNavCachedEntry> MetaNavCachedAreas; // 0x1770(0x10)

	void OnNavDataRegistered(struct ANavigationData* NavData); // Function FortniteAI.FortNavSystem.OnNavDataRegistered // (Final|Native|Protected) // @ game+0x99bebbc
	bool IsNavmeshInRadiusInitialized(struct UObject* WorldContext, struct FVector& TestLocation, float TestRadius); // Function FortniteAI.FortNavSystem.IsNavmeshInRadiusInitialized // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x99be82c
};

// Class FortniteAI.AthenaNavSystem
// Size: 0x1920 (Inherited: 0x1780)
struct UAthenaNavSystem : UFortNavSystem {
	char pad_1780[0x8]; // 0x1780(0x08)
	struct TArray<struct FNavDataSetVariantSettings> NavDataSetVariants; // 0x1788(0x10)
	char bUseNavDataSetVariants : 1; // 0x1798(0x01)
	char bMarkBuildingFoundationDirty : 1; // 0x1798(0x01)
	char bSupportRuntimeNavmeshDisabling : 1; // 0x1798(0x01)
	char pad_1798_3 : 5; // 0x1798(0x01)
	char pad_1799[0x3]; // 0x1799(0x03)
	float NavGenerationObserverCheckInterval; // 0x179c(0x04)
	char pad_17A0[0x20]; // 0x17a0(0x20)
	struct TArray<struct FBoxNavInvoker> BoxInvokers; // 0x17c0(0x10)
	char pad_17D0[0x138]; // 0x17d0(0x138)
	struct TArray<struct FBox> NavOctTreeInclusionBounds; // 0x1908(0x10)
	char pad_1918[0x8]; // 0x1918(0x08)

	void UnregisterNavGenerationObserver(struct USceneComponent* Component); // Function FortniteAI.AthenaNavSystem.UnregisterNavGenerationObserver // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x999f9c0
	void RegisterNavGenerationObserver(struct USceneComponent* Component, struct FDelegate event); // Function FortniteAI.AthenaNavSystem.RegisterNavGenerationObserver // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x999f664
	bool IsInitialNavigationLockActive(struct UObject* WorldContextObject); // Function FortniteAI.AthenaNavSystem.IsInitialNavigationLockActive // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x999eee4
};

// Class FortniteAI.FortNavSystemConfig
// Size: 0x60 (Inherited: 0x58)
struct UFortNavSystemConfig : UNavigationSystemModuleConfig {
	char bAllowAutoRebuild : 1; // 0x58(0x01)
	char bRebuildOnInitialUnlock : 1; // 0x58(0x01)
	char bUsesStreamedInNavLevel : 1; // 0x58(0x01)
	char pad_58_3 : 5; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class FortniteAI.AthenaNavSystemConfig
// Size: 0xa0 (Inherited: 0x60)
struct UAthenaNavSystemConfig : UFortNavSystemConfig {
	struct TArray<struct FNavDataSetVariantSettings> NavDataSetVariants; // 0x60(0x10)
	char bUseNavDataSetVariants : 1; // 0x70(0x01)
	char bDiscardNavDataFromSublevels : 1; // 0x70(0x01)
	char bUseNavigationInvokers : 1; // 0x70(0x01)
	char bLazyOctree : 1; // 0x70(0x01)
	char bUseNavOctTreeInclusionBounds : 1; // 0x70(0x01)
	char bPrioritizeNavigationAroundSpawners : 1; // 0x70(0x01)
	char bResetDirtyAreasOnInitialBuildingRelease : 1; // 0x70(0x01)
	char bSupportRuntimeNavmeshDisabling : 1; // 0x70(0x01)
	char bNavOctreeUnlockedByDefaultWhenNotPreloadingNavData : 1; // 0x71(0x01)
	char bConfigureDirtyAreaWarningSizeThreshold : 1; // 0x71(0x01)
	char pad_71_2 : 6; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float DirtyAreaWarningSizeThreshold; // 0x74(0x04)
	struct TArray<struct FOverriddenSupportedAgentsByReleaseVersion> OverriddenSupportedAgentsByReleaseVersion; // 0x78(0x10)
	bool bSuspendNavmeshWhenNoPossibleUsers; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TArray<struct FName> WhitelistedNavBoundsUniqueActorTags; // 0x90(0x10)
};

// Class FortniteAI.FortNavArea
// Size: 0x50 (Inherited: 0x48)
struct UFortNavArea : UNavArea {
	char bObstacle : 1; // 0x48(0x01)
	char bSmashable : 1; // 0x48(0x01)
	char pad_48_2 : 6; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class FortniteAI.FortNavArea_MetaReplacement
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_MetaReplacement : UFortNavArea {
};

// Class FortniteAI.FortNavArea_WallCornerReplacement
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_WallCornerReplacement : UFortNavArea {
};

// Class FortniteAI.FortNavArea_ObstacleReplacement
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_ObstacleReplacement : UFortNavArea {
};

// Class FortniteAI.FortNavAreaAutomatic
// Size: 0x68 (Inherited: 0x50)
struct UFortNavAreaAutomatic : UFortNavArea {
	struct FCurveTableRowHandle NavCostCurveHandle; // 0x50(0x10)
	int32_t NavAreaStrength; // 0x60(0x04)
	float AutomaticNavCost; // 0x64(0x04)
};

// Class FortniteAI.FortNavArea_TempWallReplacement
// Size: 0x68 (Inherited: 0x68)
struct UFortNavArea_TempWallReplacement : UFortNavAreaAutomatic {
};

// Class FortniteAI.FortPathFollowingComponentBase
// Size: 0x328 (Inherited: 0x308)
struct UFortPathFollowingComponentBase : UCrowdFollowingComponent {
	struct AAIController* AIController; // 0x308(0x08)
	char pad_310[0x18]; // 0x310(0x18)
};

// Class FortniteAI.FortPathFollowingComponent
// Size: 0x418 (Inherited: 0x328)
struct UFortPathFollowingComponent : UFortPathFollowingComponentBase {
	struct AFortAIController* MyAI; // 0x328(0x08)
	char pad_330[0x20]; // 0x330(0x20)
	float MovementBlockFrustrationCooldownSpeed; // 0x350(0x04)
	char pad_354[0xc4]; // 0x354(0xc4)
};

// Class FortniteAI.AthenaPathFollowingComponent
// Size: 0x450 (Inherited: 0x418)
struct UAthenaPathFollowingComponent : UFortPathFollowingComponent {
	char pad_418[0x18]; // 0x418(0x18)
	struct AAthenaAIController* AthenaAIController; // 0x430(0x08)
	char pad_438[0x18]; // 0x438(0x18)
};

// Class FortniteAI.AthenaPhysicsAIPerceptionStimuliSourceComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UAthenaPhysicsAIPerceptionStimuliSourceComponent : UAthenaAIPerceptionStimuliSourceComponent {
};

// Class FortniteAI.AthenaTrapAIPerceptionStimuliSourceComponent
// Size: 0x110 (Inherited: 0xb8)
struct UAthenaTrapAIPerceptionStimuliSourceComponent : UAIPerceptionStimuliSourceComponent {
	struct TMap<struct AActor*, struct FTrapDetectionState> TrapDiscoverabilityMap; // 0xb8(0x50)
	char bEnablePerceptionSystemOnTrap : 1; // 0x108(0x01)
	char pad_108_1 : 7; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// Class FortniteAI.BuildingActorHotSpotConfig
// Size: 0x158 (Inherited: 0x30)
struct UBuildingActorHotSpotConfig : UDataAsset {
	struct FBuildingActorHotSpotDirection DirectionSetup[0x6]; // 0x30(0xf0)
	struct FBuildingActorHotSpotDirection DefaultSetup; // 0x120(0x28)
	struct UAIHotSpotConfig* ExtraTypeConfig; // 0x148(0x08)
	char bHasDirectionalSetup : 1; // 0x150(0x01)
	char pad_150_1 : 7; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
};

// Class FortniteAI.BuildingActorHotSpotRenderingComponent
// Size: 0x580 (Inherited: 0x580)
struct UBuildingActorHotSpotRenderingComponent : UDebugDrawComponent {
};

// Class FortniteAI.DespawnExpiredPawnComponent
// Size: 0xa0 (Inherited: 0xa0)
struct UDespawnExpiredPawnComponent : UFortPawnComponent {

	struct TArray<struct ABuildingRift*> GetDespawnRifts(); // Function FortniteAI.DespawnExpiredPawnComponent.GetDespawnRifts // (Final|Native|Public|BlueprintCallable) // @ game+0x99a01fc
	void DespawnExpired(); // Function FortniteAI.DespawnExpiredPawnComponent.DespawnExpired // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x7440dc8
	void AddDespawnRift(struct ABuildingRift* NewRift); // Function FortniteAI.DespawnExpiredPawnComponent.AddDespawnRift // (Final|Native|Public|BlueprintCallable) // @ game+0x999ff3c
};

// Class FortniteAI.EdgeNavLinks
// Size: 0x328 (Inherited: 0x2d8)
struct AEdgeNavLinks : ANavLinkProxy {
	float DistanceBetweenLinks; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct FVector Start; // 0x2e0(0x18)
	struct FVector End; // 0x2f8(0x18)
	float SnapRadius; // 0x310(0x04)
	float SnapHeight; // 0x314(0x04)
	float LinkProjectionHeight; // 0x318(0x04)
	float RightLinkForwardOffset; // 0x31c(0x04)
	enum class ECollisionChannel CollisionChannel; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	char bManualAdjustment : 1; // 0x324(0x01)
	char pad_324_1 : 7; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
};

// Class FortniteAI.EdgeNavLinksRenderingComponent
// Size: 0x530 (Inherited: 0x530)
struct UEdgeNavLinksRenderingComponent : UNavLinkRenderingComponent {
};

// Class FortniteAI.FortAIAssetLoader
// Size: 0x50 (Inherited: 0x28)
struct UFortAIAssetLoader : UObject {
	struct TArray<struct FPendingRequestManager> PendingRequests; // 0x28(0x10)
	struct TArray<struct UObject*> AssetsLoaded; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class FortniteAI.FortAIAssignment
// Size: 0xd8 (Inherited: 0x28)
struct UFortAIAssignment : UObject {
	struct FFortAIAssignmentIdentifier AssignmentIdentifier; // 0x28(0x30)
	struct UFortAIAssignmentSettings* AssignmentSettings; // 0x58(0x08)
	struct UFortAIGoalProvider* GoalProvider; // 0x60(0x08)
	struct TArray<struct TWeakObjectPtr<struct UAIGoalComponent>> GoalComponentsOnAssignment; // 0x68(0x10)
	char pad_78[0x50]; // 0x78(0x50)
	struct TArray<struct FFortAIGoal> Goals; // 0xc8(0x10)
};

// Class FortniteAI.FortAIAssignmentSettings
// Size: 0x90 (Inherited: 0x30)
struct UFortAIAssignmentSettings : UDataAsset {
	struct TArray<struct FGoalSelectionQueryInfo> GoalSelectionQueryInfos; // 0x30(0x10)
	bool bGoalLocationsAlwaysKnown; // 0x40(0x01)
	bool bIsEnemyAssignment; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FGameplayTagContainer RequiredTags; // 0x48(0x20)
	struct FGameplayTagContainer ProhibitedTags; // 0x68(0x20)
	float MaxAIAllowedForAssignment; // 0x88(0x04)
	float MaxAIAllowedPerGoal; // 0x8c(0x04)
};

// Class FortniteAI.FortAthenaAITelemetryFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFortAthenaAITelemetryFunctionLibrary : UBlueprintFunctionLibrary {

	struct UFortAthenaAITelemetryData* GetOrCreateAITelemetryData(struct AActor* Owner, struct UFortAthenaAITelemetryData* TelemetryDataClass); // Function FortniteAI.FortAthenaAITelemetryFunctionLibrary.GetOrCreateAITelemetryData // (Final|BlueprintAuthorityOnly|Native|Static|Private|BlueprintCallable) // @ game+0x99a029c
};

// Class FortniteAI.FortAIComponent_Voice
// Size: 0xa8 (Inherited: 0xa0)
struct UFortAIComponent_Voice : UActorComponent {
	struct UFortTaggedSoundBank* VoiceSoundBank; // 0xa0(0x08)

	void SetVoiceSoundBank(struct UFortTaggedSoundBank* InSoundBank); // Function FortniteAI.FortAIComponent_Voice.SetVoiceSoundBank // (Final|Native|Public|BlueprintCallable) // @ game+0x99a124c
	struct UFortTaggedSoundBank* GetVoiceSoundBank(); // Function FortniteAI.FortAIComponent_Voice.GetVoiceSoundBank // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x248b320
};

// Class FortniteAI.FortAIControllerPerksComponent
// Size: 0xb8 (Inherited: 0xa0)
struct UFortAIControllerPerksComponent : UFortControllerComponent {
	char pad_A0[0x18]; // 0xa0(0x18)
};

// Class FortniteAI.FortAICustomTargetingComponent
// Size: 0x100 (Inherited: 0xa0)
struct UFortAICustomTargetingComponent : UActorComponent {
	struct TArray<struct FAICustomTargetConfiguration> Configurations; // 0xa0(0x10)
	char pad_B0[0x50]; // 0xb0(0x50)
};

// Class FortniteAI.FortAIDataProvider_Ability
// Size: 0x70 (Inherited: 0x28)
struct UFortAIDataProvider_Ability : UAIDataProvider {
	struct FGameplayTagContainer AbilityTag; // 0x28(0x20)
	struct FGameplayTagContainer AbilityBehaviorDistanceTag; // 0x48(0x20)
	float BehaviorDistance; // 0x68(0x04)
	float MaxTargetSelectionRange; // 0x6c(0x04)
};

// Class FortniteAI.FortAIDataProvider_AIDirector
// Size: 0x30 (Inherited: 0x28)
struct UFortAIDataProvider_AIDirector : UAIDataProvider {
	float AIRelevantDistanceToPlayer; // 0x28(0x04)
	float EncounterRelevantDistanceToPlayer; // 0x2c(0x04)
};

// Class FortniteAI.FortAIDataProvider_FloatCurveOverGameDifficulty
// Size: 0x58 (Inherited: 0x28)
struct UFortAIDataProvider_FloatCurveOverGameDifficulty : UAIDataProvider {
	struct FScalableFloat ScalableFloat; // 0x28(0x28)
	float FloatValue; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class FortniteAI.FortAIDataProvider_GoalProviderAbility
// Size: 0x70 (Inherited: 0x70)
struct UFortAIDataProvider_GoalProviderAbility : UFortAIDataProvider_Ability {
};

// Class FortniteAI.FortAIDataProvider_Pawn
// Size: 0x60 (Inherited: 0x28)
struct UFortAIDataProvider_Pawn : UAIDataProvider {
	float SightRadius; // 0x28(0x04)
	float HearingRadius; // 0x2c(0x04)
	float ViewLocationOffsetFromGround; // 0x30(0x04)
	float MaxStepHeight; // 0x34(0x04)
	struct FVector TetheredBoxCenterLocation; // 0x38(0x18)
	float TetheredBoxWidth; // 0x50(0x04)
	float TetheredBoxHeight; // 0x54(0x04)
	float TetheredBoxEQSGridSize; // 0x58(0x04)
	float TetheredBoxEQSSpaceBetween; // 0x5c(0x04)
};

// Class FortniteAI.FortAIDirectorLODAIConfig
// Size: 0x78 (Inherited: 0x28)
struct UFortAIDirectorLODAIConfig : UObject {
	struct FScalableFloat SingleAIUnitCost; // 0x28(0x28)
	struct FScalableFloat Priority; // 0x50(0x28)
};

// Class FortniteAI.FortAIDirectorDataManager
// Size: 0x368 (Inherited: 0x288)
struct AFortAIDirectorDataManager : AActor {
	struct UObject* OwnerObject; // 0x288(0x08)
	struct TArray<struct FAIDirectorEventData> EventsToTrack; // 0x290(0x10)
	struct TArray<struct FFortAIDirectorFactorData> FactorsToTrack; // 0x2a0(0x10)
	char pad_2B0[0xa0]; // 0x2b0(0xa0)
	struct TArray<enum class EFortAIDirectorFactor> FactorsBeingTracked; // 0x350(0x10)
	char pad_360[0x8]; // 0x360(0x08)

	void TriggerEvent(struct FFortAIDirectorEvent& TriggeredEvent); // Function FortniteAI.FortAIDirectorDataManager.TriggerEvent // (Native|Public|HasOutParms) // @ game+0x99a5c4c
	float GetAIDirectorFactorValue(enum class EFortAIDirectorFactor AIDirectorFactor); // Function FortniteAI.FortAIDirectorDataManager.GetAIDirectorFactorValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a48a8
};

// Class FortniteAI.FortAIDirectorDataTrackingSettings
// Size: 0x40 (Inherited: 0x30)
struct UFortAIDirectorDataTrackingSettings : UDataAsset {
	struct AFortAIDirectorDataManager* PlayerDataManager; // 0x30(0x08)
	struct AFortAIDirectorDataManager* EncounterDataManager; // 0x38(0x08)
};

// Class FortniteAI.FortAIDirectorEventManager
// Size: 0x2d8 (Inherited: 0x288)
struct AFortAIDirectorEventManager : AActor {
	char pad_288[0x50]; // 0x288(0x50)
};

// Class FortniteAI.FortAIEncounterInfo
// Size: 0xd98 (Inherited: 0x28)
struct UFortAIEncounterInfo : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct UFortAISpawnGroupProgressionInfo* SpawnGroupProgressionInfo; // 0x38(0x08)
	struct FFortSpawnPointsPercentageCurveSequenceInstanceInfo SpawnPointsPercentageCurveSequence; // 0x40(0x10)
	struct FFortIntensityCurveSequenceInstanceInfo IntensityCurveSequence; // 0x50(0x10)
	float BurstSpawnPointsPercentage; // 0x60(0x04)
	float SpawnPointsMultiplier; // 0x64(0x04)
	bool bUseBreathers; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FCurveTableRowHandle LowPlayerPerformanceBreatherTimeSecondsCurve; // 0x70(0x10)
	struct FCurveTableRowHandle NormalPlayerPerformanceBreatherTimeSecondsCurve; // 0x80(0x10)
	struct FCurveTableRowHandle HighPlayerPerformanceBreatherTimeSecondsCurve; // 0x90(0x10)
	float EncounterTimeSeconds; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct FUtilityTypeFloatPair> LockedUtilityValues; // 0xa8(0x10)
	int32_t NumFreeUtilities; // 0xb8(0x04)
	float UtilityAdjustmentPeriodSeconds; // 0xbc(0x04)
	float MinSpawnDistance; // 0xc0(0x04)
	float MaxSpawnDistance; // 0xc4(0x04)
	int32_t NumDirections; // 0xc8(0x04)
	bool bChangeDirectionsOnRest; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	float SpawnPointsPercentageLimit; // 0xd0(0x04)
	int32_t PawnNumberLimit; // 0xd4(0x04)
	struct FFortEncounterPawnNumberCaps PawnNumberCaps; // 0xd8(0x18)
	float SpawningIntervalSeconds; // 0xf0(0x04)
	float PreSpawnRequeryTime; // 0xf4(0x04)
	struct FFortEncounterSettingsFixedPace EncounterSettingsFixed; // 0xf8(0x14)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FMulticastInlineDelegate OnEncounterSpawnDirectionsChosen; // 0x110(0x10)
	float NextRiftReplacementTime; // 0x120(0x04)
	float NextSpawningTime; // 0x124(0x04)
	struct FFortAIEncounterSpawnGroupCapsProfile EncounterSpawnGroupCapsProfile; // 0x128(0x30)
	struct TArray<struct FFortAIEncounterSpawnGroupCapsCategory> AdditionalSpawnGroupCapsCategories; // 0x158(0x10)
	struct FFortAIEncounterSpawnPointsProfile EncounterSpawnPointsProfile; // 0x168(0x40)
	struct TArray<struct FFortAISpawnGroupUpgradeData> AvailableUpgrades; // 0x1a8(0x10)
	struct TArray<struct FCurveTableRowHandle> PawnDifficultyLevelModifiers; // 0x1b8(0x10)
	struct TArray<struct FFortAIBaseLootDropRow> BaseLootDropRows; // 0x1c8(0x10)
	struct TArray<struct FFortAILootDropModifierRow> LootDropModifierRows; // 0x1d8(0x10)
	bool bRequiresReinitializationFromProfile; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct FCurveTableRowHandle DesiredHostilityCurve; // 0x1f0(0x10)
	struct UFortIntensityCurveSequenceProgression* IntensitySequenceProgression; // 0x200(0x08)
	char pad_208[0x70]; // 0x208(0x70)
	float AliveMultiplier; // 0x278(0x04)
	enum class EFortEncounterSpawnLimitType SpawnLimitType; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	int32_t SpawnLimit; // 0x280(0x04)
	int32_t PawnNumberLimitProgress; // 0x284(0x04)
	int32_t SpawnPointsLimitProgress; // 0x288(0x04)
	bool bSpawnLimitReached; // 0x28c(0x01)
	bool bHasSpawnedAllBurstSpawnAI; // 0x28d(0x01)
	bool bOverrideAliveCounts; // 0x28e(0x01)
	char pad_28F[0x1]; // 0x28f(0x01)
	int32_t MinAliveOverride; // 0x290(0x04)
	int32_t MaxAliveOverride; // 0x294(0x04)
	float HostilityThreshold; // 0x298(0x04)
	float PeakTimeSeconds; // 0x29c(0x04)
	float BreatherTimeSeconds; // 0x2a0(0x04)
	float MaxRampTimeSeconds; // 0x2a4(0x04)
	float MinTimeBetweenBreathesSeconds; // 0x2a8(0x04)
	float MaxFadeTimeSeconds; // 0x2ac(0x04)
	float FadeEndIntensity; // 0x2b0(0x04)
	float FadeEndRemainingSpawnPointsPercentage; // 0x2b4(0x04)
	float CompletionPercentageToDisableBreathers; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct FMulticastInlineDelegate OnEncounterAllEnemiesKilled; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnEncounterEnemySpawned; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnEncounterEnemySpawnFailed; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnEncounterAllBurstEnemiesSpawned; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnEncounterCompleted; // 0x300(0x10)
	struct FMulticastInlineDelegate OnEncounterPawnDied; // 0x310(0x10)
	struct FMulticastInlineDelegate OnEncounterSpawnedFinalEnemy; // 0x320(0x10)
	struct FMulticastInlineDelegate OnEncounterRiftSpawned; // 0x330(0x10)
	struct FMulticastInlineDelegate OnBuildingRiftBlockedShouldDie; // 0x340(0x10)
	char pad_350[0x3]; // 0x350(0x03)
	bool bDisplayThreatVisuals; // 0x353(0x01)
	float BaseDesiredUtilities[0x10]; // 0x354(0x40)
	char pad_394[0x4]; // 0x394(0x04)
	struct FGameplayTagContainer UtilitiesRequiredTags[0x10]; // 0x398(0x200)
	struct FGameplayTagContainer InjectedTagForUtilityCheck; // 0x598(0x20)
	char pad_5B8[0x4]; // 0x5b8(0x04)
	float MaxLargeSpawnGroupDiscountInterval; // 0x5bc(0x04)
	float MaxSelectionToSpawningDelay; // 0x5c0(0x04)
	char pad_5C4[0x54]; // 0x5c4(0x54)
	struct TArray<struct FUtilityTypeFloatPair> CurrentDesiredUtilities; // 0x618(0x10)
	float UtilityRecentSelectionPenalties[0x10]; // 0x628(0x40)
	float UtilityEffectivenessMeasurements[0x10]; // 0x668(0x40)
	struct FCurveTableRowHandle UtilityEffectivenessMultiplierCurve; // 0x6a8(0x10)
	float UtilityEffectivenessInfluenceCap; // 0x6b8(0x04)
	char pad_6BC[0x4]; // 0x6bc(0x04)
	struct TArray<struct FUtilityTypeFloatPair> CurrentTopUtilityPercentages; // 0x6c0(0x10)
	struct TArray<enum class EFortAIUtility> UsedTopUtilities; // 0x6d0(0x10)
	struct TArray<enum class EFortAIUtility> CurrentlySelectedFreeUtilities; // 0x6e0(0x10)
	int32_t NumUtilitiesConsidered; // 0x6f0(0x04)
	float ReactivityPercentage; // 0x6f4(0x04)
	bool bAdjustUtilitiesDuringRest; // 0x6f8(0x01)
	bool bDespawnAIsDuringRest; // 0x6f9(0x01)
	char pad_6FA[0x2]; // 0x6fa(0x02)
	float LastPlayerCombatFactorUpdateTime; // 0x6fc(0x04)
	float LastUtilityAdjustTime; // 0x700(0x04)
	float LastSpawnPointAdjustmentTime; // 0x704(0x04)
	float LastLargeGroupSpawnTime; // 0x708(0x04)
	char pad_70C[0x4]; // 0x70c(0x04)
	struct TArray<struct FAIEncounterSpawnGroupWeights> EnemySpawnData; // 0x710(0x10)
	struct FFortAIEncounterPIDController EncounterPIDController; // 0x720(0x68)
	int32_t CurrentSpawnPointsCap; // 0x788(0x04)
	int32_t CurrentSpawnPointsUsed; // 0x78c(0x04)
	char pad_790[0x8]; // 0x790(0x08)
	int32_t FailSafeMinSpawnPoints; // 0x798(0x04)
	char pad_79C[0x4]; // 0x79c(0x04)
	struct TArray<struct FSpawnGroupInstanceInfo> ActiveSpawnGroups; // 0x7a0(0x10)
	float EncounterEngagementDistance; // 0x7b0(0x04)
	float MinRelevantBuildingDamagedDistance; // 0x7b4(0x04)
	float MaxRelevantBuildingDamagedDistance; // 0x7b8(0x04)
	char pad_7BC[0x14]; // 0x7bc(0x14)
	struct AActor* CurrentGroupSpawnPoint; // 0x7d0(0x08)
	enum class EFortEncounterState EncounterState; // 0x7d8(0x01)
	enum class EFortEncounterPacingState PacingState; // 0x7d9(0x01)
	char pad_7DA[0x2]; // 0x7da(0x02)
	float LastPacingStateTransitionTime; // 0x7dc(0x04)
	struct FFortAIEncounterWaveProgressEstimation WaveProgressEstimate; // 0x7e0(0x1c)
	float DesiredDifficultyLevel; // 0x7fc(0x04)
	float DifficultyLevelOverride; // 0x800(0x04)
	char pad_804[0x4]; // 0x804(0x04)
	struct AFortAIDirector* MyAIDirector; // 0x808(0x08)
	struct TArray<struct FFortGoalActorEncounterDataManagerPair> DataManagers; // 0x810(0x10)
	struct AActor* TargetObjective; // 0x820(0x08)
	bool bOnlyActiveAtNight; // 0x828(0x01)
	char pad_829[0x3]; // 0x829(0x03)
	int32_t NumRiftsToUse; // 0x82c(0x04)
	int32_t MinRiftsToUse; // 0x830(0x04)
	int32_t NumRiftsUsed; // 0x834(0x04)
	struct FFortEncounterSettings EncounterSettings; // 0x838(0xc0)
	float EncounterStartTime; // 0x8f8(0x04)
	float HostilityCurveStartTime; // 0x8fc(0x04)
	struct FEncounterEnvironmentQueryInfo DefaultEnvironmentQueryInfo; // 0x900(0x28)
	struct FEncounterEnvironmentQueryInfo FallbackEnvironmentQueryInfo; // 0x928(0x28)
	struct FEncounterEnvironmentQueryInfo OverrideEnvironmentQueryInfo; // 0x950(0x28)
	struct FEncounterEnvironmentQueryInfo CurrentEnvironmentQueryInfo; // 0x978(0x28)
	bool bNukeWavesAtDaybreak; // 0x9a0(0x01)
	bool bNukeWavesAtEncounterEnd; // 0x9a1(0x01)
	bool bNukeWavesAtEncounterDeactivation; // 0x9a2(0x01)
	char pad_9A3[0x1]; // 0x9a3(0x01)
	int32_t ActiveEnemyCap; // 0x9a4(0x04)
	char pad_9A8[0x8]; // 0x9a8(0x08)
	float CurrentHostilityLevel; // 0x9b0(0x04)
	char pad_9B4[0x4]; // 0x9b4(0x04)
	struct FMulticastInlineDelegate OnEncounterRampStarted; // 0x9b8(0x10)
	struct FMulticastInlineDelegate OnEncounterPeakStarted; // 0x9c8(0x10)
	struct FMulticastInlineDelegate OnEncounterFadeStarted; // 0x9d8(0x10)
	struct FMulticastInlineDelegate OnEncounterRestStarted; // 0x9e8(0x10)
	struct FMulticastInlineDelegate OnEncounterCombatParticipation; // 0x9f8(0x10)
	struct FMulticastInlineDelegate OnEncounterOptionsChanged; // 0xa08(0x10)
	struct ABuildingRift* RiftClassTemplate; // 0xa18(0x08)
	char pad_A20[0x20]; // 0xa20(0x20)
	struct TMap<struct TWeakObjectPtr<struct AActor>, struct FFortAISpawnerData> ExternalAISpawners; // 0xa40(0x50)
	struct FFortAIEncounterQueryData EncounterQueryData; // 0xa90(0x20)
	struct UFortAIEncounterRiftManager* RiftManager; // 0xab0(0x08)
	struct FString AssociatedMissionName; // 0xab8(0x10)
	enum class EFortMissionType AssociatedMissionType; // 0xac8(0x01)
	char pad_AC9[0x3]; // 0xac9(0x03)
	char bCanBeActive : 1; // 0xacc(0x01)
	char pad_ACC_1 : 7; // 0xacc(0x01)
	char pad_ACD[0x3]; // 0xacd(0x03)
	struct TArray<struct UFortAIAssignment*> EncounterAssignments; // 0xad0(0x10)
	struct UFortAIAssignmentSettings* DefaultEncounterAssignmentSettings; // 0xae0(0x08)
	char pad_AE8[0x30]; // 0xae8(0x30)
	int32_t MaxActiveAlive; // 0xb18(0x04)
	int32_t MaxSpawnPointsUsed; // 0xb1c(0x04)
	struct UCurveFloat* OverrideSpawnPointsCurve; // 0xb20(0x08)
	char pad_B28[0x1f8]; // 0xb28(0x1f8)
	bool bSendFullAnalyticsReport; // 0xd20(0x01)
	bool bUseAILifespans; // 0xd21(0x01)
	bool bTrackCombatParticipation; // 0xd22(0x01)
	char pad_D23[0x5]; // 0xd23(0x05)
	struct FGameplayTagContainer ModifierTags; // 0xd28(0x20)
	struct TArray<struct FFortAIEncounterTimedModifierTags> TimedModifierTags; // 0xd48(0x10)
	struct FGameplayTagContainer GameContextTags; // 0xd58(0x20)
	struct AFortGameplayMutator_AILevelVariance* AILevelMutator; // 0xd78(0x08)
	struct TArray<struct AFortGameplayMutator_AIEncounterModifierTags*> EncounterModifierTagsMutators; // 0xd80(0x10)
	char pad_D90[0x8]; // 0xd90(0x08)

	void UnRegisterAISpawner(struct AActor* InAISpawner); // Function FortniteAI.FortAIEncounterInfo.UnRegisterAISpawner // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99a5cf0
	void SpawnTestAIGroup(struct UFortAISpawnGroup* SpawnGroupToSpawn, struct FVector SpawnLocation, struct FRotator SpawnRotation, struct AActor* SpawnSource, struct TArray<struct UFortAbilitySet*> AbilitySetsToGrantOnSpawn, struct FFortAISpawnGroupUpgradeData UpgradeData, bool bAllowAssigningToExternalSpawners, float SecondsBetweenSpawns); // Function FortniteAI.FortAIEncounterInfo.SpawnTestAIGroup // (Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x99a5994
	struct AFortAIPawn* SpawnAIPawnReservedForEnemySpawner(struct AActor* EnemySpawner, struct FVector SpawnLocation, struct FRotator SpawnRotation); // Function FortniteAI.FortAIEncounterInfo.SpawnAIPawnReservedForEnemySpawner // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x99a5864
	void SetPawnNumberLimit(int32_t InPawnNumberLimit); // Function FortniteAI.FortAIEncounterInfo.SetPawnNumberLimit // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99a57e8
	void SetNukeWavesAtEncounterEnd(bool bNuke); // Function FortniteAI.FortAIEncounterInfo.SetNukeWavesAtEncounterEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x99a5768
	void SetEncounterActivationState(bool bEncounterActivityState); // Function FortniteAI.FortAIEncounterInfo.SetEncounterActivationState // (Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99a56e8
	void RequestActivation(int32_t ActivationDelay); // Function FortniteAI.FortAIEncounterInfo.RequestActivation // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99a5668
	void RegisterAISpawner(struct AActor* InAISpawner); // Function FortniteAI.FortAIEncounterInfo.RegisterAISpawner // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99a55e8
	void OnRestStarted(); // Function FortniteAI.FortAIEncounterInfo.OnRestStarted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnRampStarted(); // Function FortniteAI.FortAIEncounterInfo.OnRampStarted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPeakStarted(); // Function FortniteAI.FortAIEncounterInfo.OnPeakStarted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnGoalTakeDamage(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.FortAIEncounterInfo.OnGoalTakeDamage // (Final|Native|Public|HasDefaults) // @ game+0x99a536c
	void OnGameDifficultyChanged(); // Function FortniteAI.FortAIEncounterInfo.OnGameDifficultyChanged // (Final|Native|Private) // @ game+0x99a5358
	void OnFadeStarted(); // Function FortniteAI.FortAIEncounterInfo.OnFadeStarted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnEncounterPawnDamaged(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.FortAIEncounterInfo.OnEncounterPawnDamaged // (Final|Native|Protected|HasDefaults) // @ game+0x99a50dc
	void NotifyRiftDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.FortAIEncounterInfo.NotifyRiftDied // (Final|Native|Public|HasDefaults) // @ game+0x99a4e60
	bool GroupHasAIRemainingToSpawn(struct FFortAISpawnerData& FortAISpawnerData); // Function FortniteAI.FortAIEncounterInfo.GroupHasAIRemainingToSpawn // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x99a4d64
	int32_t GetPawnNumberLimit(); // Function FortniteAI.FortAIEncounterInfo.GetPawnNumberLimit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a4d44
	float GetEncounterTimeSeconds(); // Function FortniteAI.FortAIEncounterInfo.GetEncounterTimeSeconds // (Final|Native|Public|BlueprintCallable) // @ game+0x757523c
	void GetEncounterRifts(struct TArray<struct ABuildingRift*>& OutRifts); // Function FortniteAI.FortAIEncounterInfo.GetEncounterRifts // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a4be8
	struct AActor* GetEncounterQueryActor(); // Function FortniteAI.FortAIEncounterInfo.GetEncounterQueryActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a4b64
	void GetEncounterGameplayTags(struct FGameplayTagContainer& OutEncounterTags); // Function FortniteAI.FortAIEncounterInfo.GetEncounterGameplayTags // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a4aac
	struct AFortAIDirectorDataManager* GetEncounterDataManager(); // Function FortniteAI.FortAIEncounterInfo.GetEncounterDataManager // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x99a4a80
	void GetEncounterAssignmentGoalActors(struct TArray<struct AActor*>& OutGoalActors); // Function FortniteAI.FortAIEncounterInfo.GetEncounterAssignmentGoalActors // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a49e4
	bool GetCurrentSpawnAreaDirections(struct TArray<enum class EFortEncounterDirection>& OutDirections); // Function FortniteAI.FortAIEncounterInfo.GetCurrentSpawnAreaDirections // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a4938
	bool EncounterHasReservedSpawnRequestForEnemySpawner(struct AActor* EnemySpawner); // Function FortniteAI.FortAIEncounterInfo.EncounterHasReservedSpawnRequestForEnemySpawner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a476c
	void DespawnPendingAndCurrentAI(); // Function FortniteAI.FortAIEncounterInfo.DespawnPendingAndCurrentAI // (Final|Native|Public|BlueprintCallable) // @ game+0x99a4734
	struct UFortAIAssignment* CreateEncounterAssignment(struct UFortAIAssignmentSettings* AssignmentSettings, struct AActor* GoalActor); // Function FortniteAI.FortAIEncounterInfo.CreateEncounterAssignment // (Final|Native|Public|BlueprintCallable) // @ game+0x99a4670
};

// Class FortniteAI.FortAIEncounterInfoOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct UFortAIEncounterInfoOwnerInterface : UInterface {

	struct UFortAIEncounterInfo* GetEncounterInfo(); // Function FortniteAI.FortAIEncounterInfoOwnerInterface.GetEncounterInfo // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73c9c38
};

// Class FortniteAI.FortAIEncounterRiftManager
// Size: 0x2b0 (Inherited: 0x28)
struct UFortAIEncounterRiftManager : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct UFortAIEncounterInfo* MyEncounter; // 0x38(0x08)
	struct AFortAIDirector* AIDirector; // 0x40(0x08)
	struct FFortAIEncounterSpawnArea CurrentSpawnArea; // 0x48(0x58)
	struct FFortAIEncounterSpawnArea FutureSpawnArea; // 0xa0(0x58)
	float UpdateIntervalTimeSeconds; // 0xf8(0x04)
	int32_t NumRiftsToUse; // 0xfc(0x04)
	int32_t MinRiftsToUse; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FFortEncounterSettings EncounterSettings; // 0x108(0xc0)
	float ExtraSpawnLocationPercentage; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct FEncounterEnvironmentQueryInfo CurrentEnvironmentQueryInfo; // 0x1d0(0x28)
	struct FEncounterEnvironmentQueryInfo FallbackEnvironmentQueryInfo; // 0x1f8(0x28)
	struct FFortAIEncounterQueryDirectionTracker EncounterQueryDirectionTracker; // 0x220(0x48)
	struct ABuildingRift* RiftClassTemplate; // 0x268(0x08)
	float LastObjectiveBatchPathCostUpdateTime; // 0x270(0x04)
	float LastPlayerBatchPathCostUpdateTime; // 0x274(0x04)
	char pad_278[0x38]; // 0x278(0x38)

	void OnRiftDestroyed(struct AActor* Rift); // Function FortniteAI.FortAIEncounterRiftManager.OnRiftDestroyed // (Final|Native|Public) // @ game+0x99a88b4
	struct AFortMission* GetAssociatedMission(); // Function FortniteAI.FortAIEncounterRiftManager.GetAssociatedMission // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a7438
};

// Class FortniteAI.FortAIEncounterSequence
// Size: 0x1a0 (Inherited: 0x28)
struct UFortAIEncounterSequence : UObject {
	struct FFortGeneratedEncounterSequence GeneratedEncounterSequence; // 0x28(0x30)
	int32_t CurrentEncounterIndexInSequence; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UFortAIEncounterInfo* CurrentEncounter; // 0x60(0x08)
	struct AFortAIDirector* AssociatedAIDirector; // 0x68(0x08)
	struct AFortMission* AssociatedMission; // 0x70(0x08)
	struct TArray<struct AActor*> TargetActors; // 0x78(0x10)
	struct UFortAIAssignmentSettings* AssignmentSettings; // 0x88(0x08)
	struct FEncounterEnvironmentQueryInfo OverrideEnvironmentQueryInfo; // 0x90(0x28)
	struct AActor* OptionalQueryActor; // 0xb8(0x08)
	struct FGameplayTagContainer InjectedTags; // 0xc0(0x20)
	struct FFortEncounterSettings EncounterSettings; // 0xe0(0xc0)

	void StopCurrentEncounter(); // Function FortniteAI.FortAIEncounterSequence.StopCurrentEncounter // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99a95a4
	struct UFortAIEncounterInfo* StartCurrentEncounterWithSavedData(enum class EFortEncounterSequenceResult& OutRequestResult, int32_t ActivationDelay); // Function FortniteAI.FortAIEncounterSequence.StartCurrentEncounterWithSavedData // (Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x99a94c8
	struct UFortAIEncounterInfo* StartCurrentEncounter(enum class EFortEncounterSequenceResult& OutRequestResult, struct TArray<struct AActor*>& InTargetActors, struct UFortAIAssignmentSettings* InAssignmentSettings, struct FEncounterEnvironmentQueryInfo InOverrideEnvironmentQueryInfo, struct AActor* InOptionalQueryActor, struct FGameplayTagContainer InInjectedTags, struct FFortEncounterSettings InEncounterSettings, int32_t ActivationDelay); // Function FortniteAI.FortAIEncounterSequence.StartCurrentEncounter // (Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x99a917c
	void SetEncounterStartingData(struct TArray<struct AActor*>& InTargetActors, struct UFortAIAssignmentSettings* InAssignmentSettings, struct FEncounterEnvironmentQueryInfo InOverrideEnvironmentQueryInfo, struct AActor* InOptionalQueryActor, struct FGameplayTagContainer InInjectedTags, struct FFortEncounterSettings InEncounterSettings); // Function FortniteAI.FortAIEncounterSequence.SetEncounterStartingData // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x99a8ec4
	enum class EFortEncounterSequenceResult Previous(); // Function FortniteAI.FortAIEncounterSequence.Previous // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99a8934
	enum class EFortEncounterSequenceResult Next(); // Function FortniteAI.FortAIEncounterSequence.Next // (Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99a8890
	enum class EFortEncounterSequenceResult Last(); // Function FortniteAI.FortAIEncounterSequence.Last // (Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99a781c
	bool IsOnFinalIndexInSequence(); // Function FortniteAI.FortAIEncounterSequence.IsOnFinalIndexInSequence // (Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a7800
	bool HasEncounter(); // Function FortniteAI.FortAIEncounterSequence.HasEncounter // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a7674
	int32_t GetNumEncountersInSequence(); // Function FortniteAI.FortAIEncounterSequence.GetNumEncountersInSequence // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7273c24
	int32_t GetEncounterIndexInSequence(); // Function FortniteAI.FortAIEncounterSequence.GetEncounterIndexInSequence // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7137138
	struct UFortAIEncounterInfo* GetCurrentEncounter(); // Function FortniteAI.FortAIEncounterSequence.GetCurrentEncounter // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x686ef34
	bool EncounterBelongsToSequence(struct UFortAIEncounterInfo* InEncounter); // Function FortniteAI.FortAIEncounterSequence.EncounterBelongsToSequence // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a7314
};

// Class FortniteAI.FortAIEncounterTargetInterface
// Size: 0x28 (Inherited: 0x28)
struct UFortAIEncounterTargetInterface : UInterface {

	bool IsFloatingTarget(); // Function FortniteAI.FortAIEncounterTargetInterface.IsFloatingTarget // (Event|Public|BlueprintEvent) // @ game+0xd67374
	float GetObjectiveCompletionPercentage(); // Function FortniteAI.FortAIEncounterTargetInterface.GetObjectiveCompletionPercentage // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class FortniteAI.FortAIEnvironmentalDangerSourceInterface
// Size: 0x28 (Inherited: 0x28)
struct UFortAIEnvironmentalDangerSourceInterface : UInterface {

	struct FBox GetDangerSourceBounds(); // Function FortniteAI.FortAIEnvironmentalDangerSourceInterface.GetDangerSourceBounds // (Native|Event|Public|HasDefaults|BlueprintEvent|Const) // @ game+0x99a7528
	bool GetDangerSourceActive(); // Function FortniteAI.FortAIEnvironmentalDangerSourceInterface.GetDangerSourceActive // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x7341404
	float GetDangerAtLocation(struct FVector& Location); // Function FortniteAI.FortAIEnvironmentalDangerSourceInterface.GetDangerAtLocation // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x99a7490
};

// Class FortniteAI.FortAIFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFortAIFunctionLibrary : UBlueprintFunctionLibrary {

	bool TeleportAIPawn(struct AFortAIPawn* AIPawn, struct FVector DestLocation, struct FRotator DestRotation, bool bIgnoreCollision); // Function FortniteAI.FortAIFunctionLibrary.TeleportAIPawn // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x99a95b8
	void SetHearingRange(struct AActor* AIAgent, float Range); // Function FortniteAI.FortAIFunctionLibrary.SetHearingRange // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x7509ac0
	void RequestNavUpdateForBuilding(struct ABuildingActor* BuildingActor); // Function FortniteAI.FortAIFunctionLibrary.RequestNavUpdateForBuilding // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x99a8d90
	void MakeNoiseEventAtLocation(struct AActor* NoiseMaker, float MaxRange, struct FVector& NoiseLocation, struct FName NoiseTag); // Function FortniteAI.FortAIFunctionLibrary.MakeNoiseEventAtLocation // (Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x99a859c
	void MakeNoiseEvent(struct AActor* NoiseMaker, float MaxRange, struct FName NoiseTag); // Function FortniteAI.FortAIFunctionLibrary.MakeNoiseEvent // (Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x99a829c
	bool IsConcealedByPerceptionModifiers(struct UObject* WorldContextObject, struct FVector ObserverLocation, struct FVector TargetLocation, float& OutConcealment); // Function FortniteAI.FortAIFunctionLibrary.IsConcealedByPerceptionModifiers // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x99a7690
	struct UFortAthenaAIRuntimeParameters* GetOrCreateAIRuntimeParameters(struct AAIController* AIController, struct UFortAthenaAIRuntimeParameters* ParametersClass); // Function FortniteAI.FortAIFunctionLibrary.GetOrCreateAIRuntimeParameters // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x99a7570
	struct UAthenaAISpawner* GetAISpawner(struct UObject* WorldContextObject); // Function FortniteAI.FortAIFunctionLibrary.GetAISpawner // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x99a73a0
};

// Class FortniteAI.FortAIGoalComponent
// Size: 0x158 (Inherited: 0x108)
struct UFortAIGoalComponent : UAIGoalComponent {
	struct TMap<enum class EFortAILODLevel, struct FScalableFloat> AssignmentUpdatePeriods; // 0x108(0x50)
};

// Class FortniteAI.FortAIGoalManager
// Size: 0x3f0 (Inherited: 0x288)
struct AFortAIGoalManager : AActor {
	char pad_288[0x8]; // 0x288(0x08)
	struct TArray<struct UFortAIAssignment*> WorldAssignments; // 0x290(0x10)
	struct TArray<struct UFortAIAssignment*> WorldEnemyAssignments; // 0x2a0(0x10)
	struct UFortAIAssignment* DefaultAttackPlayersAssignment; // 0x2b0(0x08)
	char pad_2B8[0x60]; // 0x2b8(0x60)
	struct TArray<struct UEnvQuery*> CombinedQueries; // 0x318(0x10)
	char pad_328[0x50]; // 0x328(0x50)
	struct UFortAIAssignmentSettings* DefaultEncounterAssignmentSettings; // 0x378(0x08)
	struct UFortAIAssignmentSettings* DefaultEnemyAssignmentSettings; // 0x380(0x08)
	struct TArray<struct FPawnGoalSelectionTableEntry> PawnGoalSelectionTable; // 0x388(0x10)
	char pad_398[0x58]; // 0x398(0x58)

	void SetCurrentGoalDiscouragement(struct UObject* WorldContext, struct AFortAIController* AI); // Function FortniteAI.FortAIGoalManager.SetCurrentGoalDiscouragement // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x99a8e14
	void RemoveWorldAssignment(struct UObject* WorldContextObject, struct FFortAIAssignmentIdentifier AssignmentIdentifier); // Function FortniteAI.FortAIGoalManager.RemoveWorldAssignment // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x99a8ca8
	void RemoveGoalsFromWorldAssignment(struct UObject* WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, struct TArray<struct FFortAIGoalInfo>& GoalInfos); // Function FortniteAI.FortAIGoalManager.RemoveGoalsFromWorldAssignment // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x99a8aa8
	void RemoveGoalFromWorldAssignment(struct UObject* WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, struct FFortAIGoalInfo& GoalInfo); // Function FortniteAI.FortAIGoalManager.RemoveGoalFromWorldAssignment // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x99a8958
	void MakeGoalsFromLocationsAndActor(struct TArray<struct FFortAIGoalInfo>& Goals, struct UObject* WorldContextObject, struct TArray<struct FVector>& GoalLocations, struct AActor* GoalActor); // Function FortniteAI.FortAIGoalManager.MakeGoalsFromLocationsAndActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x99a805c
	void MakeGoalsFromLocations(struct TArray<struct FFortAIGoalInfo>& Goals, struct UObject* WorldContextObject, struct TArray<struct FVector>& GoalLocations); // Function FortniteAI.FortAIGoalManager.MakeGoalsFromLocations // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x99a7e58
	void MakeGoalsFromActors(struct TArray<struct FFortAIGoalInfo>& Goals, struct UObject* WorldContextObject, struct TArray<struct AActor*>& GoalActors, bool bActorsAlwaysPerceived, bool bGoalActorsAllowUndermining); // Function FortniteAI.FortAIGoalManager.MakeGoalsFromActors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x99a7bd8
	void MakeGoalFromLocation(struct FFortAIGoalInfo& Goal, struct UObject* WorldContextObject, struct FVector& GoalLocation); // Function FortniteAI.FortAIGoalManager.MakeGoalFromLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x99a7a70
	void MakeGoalFromActor(struct FFortAIGoalInfo& Goal, struct UObject* WorldContextObject, struct AActor* GoalActor, bool bActorAlwaysPerceived, bool bGoalActorAllowsUndermining); // Function FortniteAI.FortAIGoalManager.MakeGoalFromActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x99a7840
	void CreateWorldAssignment(struct UObject* WorldContextObject, struct FFortAIAssignmentIdentifier WorldAssignmentIdentifier, struct UFortAIAssignmentSettings* AssignmentSettings, struct UFortAIGoalProvider* GoalProvider, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, enum class EAssignmentCreationResult& CreationResult); // Function FortniteAI.FortAIGoalManager.CreateWorldAssignment // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x99a7100
	struct UFortAIAssignment* AddWorldAssignment(struct UFortAIAssignmentSettings* AssignmentSettings, struct AActor* GoalActor); // Function FortniteAI.FortAIGoalManager.AddWorldAssignment // (Final|Native|Public|BlueprintCallable) // @ game+0x99a703c
	void AddGoalToWorldAssignment(struct UObject* WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, struct FFortAIGoalInfo& GoalInfo); // Function FortniteAI.FortAIGoalManager.AddGoalToWorldAssignment // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x99a6cec
	void AddGoalsToWorldAssignment(struct UObject* WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, struct TArray<struct FFortAIGoalInfo>& GoalInfos); // Function FortniteAI.FortAIGoalManager.AddGoalsToWorldAssignment // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x99a6e3c
	void AddGoalActorToAssignment(struct UFortAIAssignment* Assignment, struct AActor* GoalActor); // Function FortniteAI.FortAIGoalManager.AddGoalActorToAssignment // (Final|Native|Public|BlueprintCallable) // @ game+0x99a6aa0
	void AddGoal(struct AActor* GoalActor, struct UFortAIAssignmentSettings* GoalSettings); // Function FortniteAI.FortAIGoalManager.AddGoal // (Final|Native|Public|BlueprintCallable) // @ game+0x99a69d8
};

// Class FortniteAI.FortAIGoalProvider
// Size: 0x48 (Inherited: 0x28)
struct UFortAIGoalProvider : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UWorld* World; // 0x30(0x08)
	struct UFortAIAssignment* AssignmentOwner; // 0x38(0x08)
	struct UFortAIEncounterInfo* EncounterInfo; // 0x40(0x08)

	void UpdateGoals(); // Function FortniteAI.FortAIGoalProvider.UpdateGoals // (Native|Public|BlueprintCallable) // @ game+0x67ce468
	bool InitializeGoalProvider(struct UWorld* ContextWorld, struct UFortAIAssignment* Assignment); // Function FortniteAI.FortAIGoalProvider.InitializeGoalProvider // (Native|Public|BlueprintCallable) // @ game+0x99a9f64
	struct UFortAIEncounterInfo* GetEncounterInfo(); // Function FortniteAI.FortAIGoalProvider.GetEncounterInfo // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a9c00
};

// Class FortniteAI.FortAIGoalProvider_EnvQuery
// Size: 0xd8 (Inherited: 0x48)
struct UFortAIGoalProvider_EnvQuery : UFortAIGoalProvider {
	char pad_48[0x8]; // 0x48(0x08)
	struct UEnvQuery* GoalQuery; // 0x50(0x08)
	float AutomaticUpdatePeriodInSeconds; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FFortAIAssignmentIdentifier SpecificAssignmentContext; // 0x60(0x30)
	struct TSoftClassPtr<UObject> AIPawnContext; // 0x90(0x28)
	char pad_B8[0x20]; // 0xb8(0x20)
};

// Class FortniteAI.FortAIEncounterGoalSelectionTable
// Size: 0x40 (Inherited: 0x30)
struct UFortAIEncounterGoalSelectionTable : UDataAsset {
	struct TArray<struct FEncounterGoalSelectionTableEntry> EncounterGoalSelectionCriteria; // 0x30(0x10)
};

// Class FortniteAI.FortAIHotSpot
// Size: 0x460 (Inherited: 0x438)
struct AFortAIHotSpot : AAIHotSpot {
	char pad_438[0x28]; // 0x438(0x28)
};

// Class FortniteAI.FortAIHotSpotManager
// Size: 0x1c8 (Inherited: 0x80)
struct UFortAIHotSpotManager : UAIHotSpotManagerProxy {
	struct TSoftObjectPtr<UBuildingActorHotSpotConfig> FallbackHotspotConfig; // 0x80(0x28)
	char pad_A8[0xf0]; // 0xa8(0xf0)
	struct TArray<struct FAutoAcquireSlot> AutoAcquireSlots; // 0x198(0x10)
	char pad_1A8[0x20]; // 0x1a8(0x20)
};

// Class FortniteAI.FortAIHotSpotSlot
// Size: 0x130 (Inherited: 0x120)
struct UFortAIHotSpotSlot : UAIHotSpotSlot {
	enum class EFortHotSpotSlot SlotType; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	char bHasProjectedLocation : 1; // 0x124(0x01)
	char bProjectedOnLowArea : 1; // 0x124(0x01)
	char bIsAutoGenerated : 1; // 0x124(0x01)
	char bCanDuplicateOnProjection : 1; // 0x124(0x01)
	char bCanProjectUp : 1; // 0x124(0x01)
	char pad_124_5 : 3; // 0x124(0x01)
	char pad_125[0xb]; // 0x125(0x0b)
};

// Class FortniteAI.FortAIHotSpotSlotGenerator_FromConfig
// Size: 0x50 (Inherited: 0x28)
struct UFortAIHotSpotSlotGenerator_FromConfig : UAIHotSpotSlotGenerator {
	struct UAIHotSpotConfig* BuildingConfig; // 0x28(0x08)
	struct FVector Offset; // 0x30(0x18)
	char bMirrorX : 1; // 0x48(0x01)
	char bMirrorY : 1; // 0x48(0x01)
	char pad_48_2 : 6; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class FortniteAI.FortAIHotSpotSlotGenerator_OnBoundingBox
// Size: 0xa0 (Inherited: 0x98)
struct UFortAIHotSpotSlotGenerator_OnBoundingBox : UAIHotSpotSlotGenerator_OnBoundingBox {
	float DistanceForRangedSlots; // 0x98(0x04)
	float DistanceForHugeSlots; // 0x9c(0x04)
};

// Class FortniteAI.FortAIHotSpotSlotGenerator_RampTrace
// Size: 0x58 (Inherited: 0x28)
struct UFortAIHotSpotSlotGenerator_RampTrace : UAIHotSpotSlotGenerator {
	char pad_28[0x30]; // 0x28(0x30)
};

// Class FortniteAI.FortAIHotSpot_Building
// Size: 0x550 (Inherited: 0x460)
struct AFortAIHotSpot_Building : AFortAIHotSpot {
	struct UAIHotSpotConfig* ExtraTypeConfig; // 0x460(0x08)
	char pad_468[0xe8]; // 0x468(0xe8)
};

// Class FortniteAI.FortAIHotSpot_FakeBuilding
// Size: 0x460 (Inherited: 0x460)
struct AFortAIHotSpot_FakeBuilding : AFortAIHotSpot {
};

// Class FortniteAI.FortAIHotSpot_Shooting
// Size: 0x460 (Inherited: 0x460)
struct AFortAIHotSpot_Shooting : AFortAIHotSpot {
};

// Class FortniteAI.FortAIManagerMinigameComponent
// Size: 0x110 (Inherited: 0xa0)
struct UFortAIManagerMinigameComponent : UActorComponent {
	char pad_A0[0x60]; // 0xa0(0x60)
	struct TArray<struct FGameplayTag> SpawnableAITypeTags; // 0x100(0x10)

	void OnPawnSpawned(struct APawn* Pawn, int32_t RequestId); // Function FortniteAI.FortAIManagerMinigameComponent.OnPawnSpawned // (Final|Native|Public) // @ game+0x99aa2dc
	void OnPawnDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.FortAIManagerMinigameComponent.OnPawnDied // (Final|Native|Public|HasDefaults) // @ game+0x99aa060
	void HandleMinigameStarted(); // Function FortniteAI.FortAIManagerMinigameComponent.HandleMinigameStarted // (Final|Native|Public) // @ game+0x99a9cfc
};

// Class FortniteAI.FortAINearbyActorsPerceptionComponent
// Size: 0xe0 (Inherited: 0xc8)
struct UFortAINearbyActorsPerceptionComponent : UFortNearbyActorsPerceptionComponent {
	char pad_C8[0x8]; // 0xc8(0x08)
	struct TScriptInterface<IFortAthenaAILODSettings> CachedLODSettingsManager; // 0xd0(0x10)
};

// Class FortniteAI.FortAIObjectiveInterface
// Size: 0x28 (Inherited: 0x28)
struct UFortAIObjectiveInterface : UInterface {
};

// Class FortniteAI.FortAIPawnCustomizationDefinition
// Size: 0xa8 (Inherited: 0x30)
struct UFortAIPawnCustomizationDefinition : UPrimaryDataAsset {
	char pad_30[0x8]; // 0x30(0x08)
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x38(0x28)
	struct TArray<struct FFortAIPawnMaterialDefinition> OverrideMaterials; // 0x60(0x10)
	struct TSoftClassPtr<UObject> AnimationBP; // 0x70(0x28)
	struct TArray<struct UCustomCharacterPart*> CharacterParts; // 0x98(0x10)
};

// Class FortniteAI.FortAIPawnVariant
// Size: 0x70 (Inherited: 0x28)
struct UFortAIPawnVariant : UObject {
	struct TArray<struct AFortAIPawn*> PawnClasses; // 0x28(0x10)
	struct TArray<struct FFortAIPawnVariantDefinition> PawnVariantDefinitions; // 0x38(0x10)
	int32_t MinPlayersToSpawnVariant; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FDataTableRowHandle SpawnPointValueHandle; // 0x50(0x10)
	int32_t CachedSpawnPointValue; // 0x60(0x04)
	float EncounterExpectedLifespan; // 0x64(0x04)
	int32_t VersionNum; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class FortniteAI.FortAIPerceptionSystem
// Size: 0x128 (Inherited: 0x128)
struct UFortAIPerceptionSystem : UAIPerceptionSystem {
};

// Class FortniteAI.FortAIPerkBase
// Size: 0x168 (Inherited: 0x28)
struct UFortAIPerkBase : UObject {
	struct FScalableFloat CooldownDuration; // 0x28(0x28)
	struct FScalableFloat CooldownDurationRandomDeviation; // 0x50(0x28)
	struct FScalableFloat ActivationCountBeforeCooldown; // 0x78(0x28)
	struct FScalableFloat ActivationDuration; // 0xa0(0x28)
	struct FScalableFloat ActivationDurationRandomDeviation; // 0xc8(0x28)
	struct FScalableFloat OddsToActivate; // 0xf0(0x28)
	struct FScalableFloat FailedActivationCooldownDuration; // 0x118(0x28)
	struct FScalableFloat FailedActivationCooldownDurationRandomDeviation; // 0x140(0x28)
};

// Class FortniteAI.FortAIRootAssignmentProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UFortAIRootAssignmentProviderInterface : UInterface {

	struct FFortAIAssignmentIdentifier GetRootAssignmentIdentifier(); // Function FortniteAI.FortAIRootAssignmentProviderInterface.GetRootAssignmentIdentifier // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a9cb4
};

// Class FortniteAI.FortAISpawnerActorBase
// Size: 0x288 (Inherited: 0x288)
struct AFortAISpawnerActorBase : AActor {
};

// Class FortniteAI.FortAISpawnerInterface
// Size: 0x28 (Inherited: 0x28)
struct UFortAISpawnerInterface : UInterface {

	bool OnReceiveSpawnGroup(); // Function FortniteAI.FortAISpawnerInterface.OnReceiveSpawnGroup // (Event|Public|BlueprintEvent) // @ game+0xd67374
	bool IsReadyToReceiveNewSpawnGroup(); // Function FortniteAI.FortAISpawnerInterface.IsReadyToReceiveNewSpawnGroup // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class FortniteAI.FortAISpawnerUtilityComponent
// Size: 0x130 (Inherited: 0xa0)
struct UFortAISpawnerUtilityComponent : UActorComponent {
	struct FGameplayTag AIPawnSpawnTypeTag; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UEnvQuery* EnvironmentQuery; // 0xa8(0x08)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0xb0(0x10)
	float QueryRadius; // 0xc0(0x04)
	float QueryMinDistance; // 0xc4(0x04)
	struct FMulticastInlineDelegate OnEnvironmentQueryFinishedDelegate; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnUnownedPawnDiedDelegate; // 0xd8(0x10)
	char pad_E8[0x10]; // 0xe8(0x10)
	struct TArray<struct FVector> FreeSpawnSlots; // 0xf8(0x10)
	char pad_108[0x18]; // 0x108(0x18)
	struct TScriptInterface<IFortSpatialGameplayInterface> CachedFortSpatialGameplay; // 0x120(0x10)

	void StartEnvironmentQuery(); // Function FortniteAI.FortAISpawnerUtilityComponent.StartEnvironmentQuery // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x99aa9cc
	void SetQueryRadius(float Radius); // Function FortniteAI.FortAISpawnerUtilityComponent.SetQueryRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x99aa948
	void SetMinigame(struct AFortMinigame* Minigame); // Function FortniteAI.FortAISpawnerUtilityComponent.SetMinigame // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x99aa8bc
	void SetEQSQuery(struct TSoftObjectPtr<UEnvQuery> SelectedEQSQuery); // Function FortniteAI.FortAISpawnerUtilityComponent.SetEQSQuery // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x99aa804
	int32_t RequestSpawn(struct UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList, struct FTransform& SpawnTransform); // Function FortniteAI.FortAISpawnerUtilityComponent.RequestSpawn // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x99aa6e4
	void OnUnownedPawnDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.FortAISpawnerUtilityComponent.OnUnownedPawnDied // (Final|Native|Private|HasDefaults) // @ game+0x99aa3a0
	bool IsSpawnCountCapped(); // Function FortniteAI.FortAISpawnerUtilityComponent.IsSpawnCountCapped // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22fb320
	void HandleUnownedPawnSpawned(struct AFortPawn* FortPawn); // Function FortniteAI.FortAISpawnerUtilityComponent.HandleUnownedPawnSpawned // (Final|Native|Public|BlueprintCallable) // @ game+0x99a9d10
};

// Class FortniteAI.FortAISpawnGroup
// Size: 0x190 (Inherited: 0x30)
struct UFortAISpawnGroup : UPrimaryDataAsset {
	float EnemyUtilities[0x10]; // 0x30(0x40)
	struct TArray<struct FSpawnGroupEnemy> EnemiesToSpawn; // 0x70(0x10)
	bool bIsPrototype; // 0x80(0x01)
	bool bIsValidForEnemySpawners; // 0x81(0x01)
	bool bIsLargeSpawnGroup; // 0x82(0x01)
	char pad_83[0x1]; // 0x83(0x01)
	float MaxDiscountRatio; // 0x84(0x04)
	bool bUseWeightSystem; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FScalableFloat Weight; // 0x90(0x28)
	struct FScalableFloat MinNumber; // 0xb8(0x28)
	struct FScalableFloat MaxNumber; // 0xe0(0x28)
	struct FCurveTableRowHandle MaxGroupCategoryPopulationDensityCurve; // 0x108(0x10)
	struct TArray<struct FFortSpawnGroupEncounterTypeData> EncounterTypeData; // 0x118(0x10)
	struct FGameplayTagContainer SpawnGroupGameplayTags; // 0x128(0x20)
	struct FGameplayTagQuery RequiredTagQuery; // 0x148(0x48)

	bool IsValidForEnemySpawners(); // Function FortniteAI.FortAISpawnGroup.IsValidForEnemySpawners // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2289794
	bool IsPrototype(); // Function FortniteAI.FortAISpawnGroup.IsPrototype // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99aa048
	bool IsLargeSpawnGroup(); // Function FortniteAI.FortAISpawnGroup.IsLargeSpawnGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99aa030
	int32_t GetNumberOfEnemies(); // Function FortniteAI.FortAISpawnGroup.GetNumberOfEnemies // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x686ef84
	struct UFortAIPawnVariant* GetEnemy(int32_t EnemyIndex); // Function FortniteAI.FortAISpawnGroup.GetEnemy // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99a9c2c
};

// Class FortniteAI.FortAISpawnGroupCapsCategorySet
// Size: 0x38 (Inherited: 0x28)
struct UFortAISpawnGroupCapsCategorySet : UObject {
	struct TArray<struct FFortAIEncounterSpawnGroupCapsCategory> SpawnGroupCapsCategories; // 0x28(0x10)
};

// Class FortniteAI.FortAISpawnGroupProgressionInfo
// Size: 0x40 (Inherited: 0x30)
struct UFortAISpawnGroupProgressionInfo : UDataAsset {
	struct TArray<struct FSpawnGroupProgression> SpawnGroups; // 0x30(0x10)
};

// Class FortniteAI.FortAISpawnGroupUpgrade
// Size: 0x120 (Inherited: 0x28)
struct UFortAISpawnGroupUpgrade : UObject {
	struct FGameplayTagContainer UpgradeTags; // 0x28(0x20)
	struct FGameplayTagQuery GroupRequiredTagQuery; // 0x48(0x48)
	struct TArray<struct FFortAIPawnUpgrade> BasePawnUpgrades; // 0x90(0x10)
	struct FName AdditionalModifiersLootTierGroup; // 0xa0(0x04)
	bool bInvalidForEnemySpawners; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	float SpawnGroupDiscountPercentage; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FFortAISpawnGroupUpgradeUIData UIData; // 0xb0(0x70)
};

// Class FortniteAI.FortAISpawnGroupUpgradeProbabilities
// Size: 0x40 (Inherited: 0x28)
struct UFortAISpawnGroupUpgradeProbabilities : UObject {
	bool bIsGuaranteedUpgrade; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FFortAIPawnUpgradeProbability> UpgradeProbabilities; // 0x30(0x10)
};

// Class FortniteAI.FortAITask_AdjustToSlot
// Size: 0xc0 (Inherited: 0x68)
struct UFortAITask_AdjustToSlot : UAITask {
	struct FVector SlotLocation; // 0x68(0x18)
	struct FVector SlotDirection; // 0x80(0x18)
	char pad_98[0x28]; // 0x98(0x28)
};

// Class FortniteAI.FortAITask_ExecuteAbility
// Size: 0xb8 (Inherited: 0x90)
struct UFortAITask_ExecuteAbility : UAITask_ExecuteAbility {
	char pad_90[0x28]; // 0x90(0x28)

	void OnInjectedHitResultDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.FortAITask_ExecuteAbility.OnInjectedHitResultDied // (Final|Native|Protected|HasDefaults) // @ game+0x99ac5dc
};

// Class FortniteAI.FortAITask_FuzzyQueue
// Size: 0x130 (Inherited: 0x110)
struct UFortAITask_FuzzyQueue : UAITask_MoveTo {
	char pad_110[0x20]; // 0x110(0x20)
};

// Class FortniteAI.FortAITask_MoveTo
// Size: 0x110 (Inherited: 0x110)
struct UFortAITask_MoveTo : UAITask_MoveTo {
};

// Class FortniteAI.FortAITask_NavmeshWait
// Size: 0x78 (Inherited: 0x68)
struct UFortAITask_NavmeshWait : UAITask {
	char pad_68[0x10]; // 0x68(0x10)
};

// Class FortniteAI.FortAITask_RotateToFace
// Size: 0x90 (Inherited: 0x68)
struct UFortAITask_RotateToFace : UAITask {
	struct AActor* FocusTarget; // 0x68(0x08)
	struct FVector FocalPoint; // 0x70(0x18)
	char pad_88[0x8]; // 0x88(0x08)
};

// Class FortniteAI.FortAITask_StepAside
// Size: 0x1a0 (Inherited: 0x158)
struct UFortAITask_StepAside : UFortAITask_Move {
	char pad_158[0x18]; // 0x158(0x18)
	struct AActor* GoalActor; // 0x170(0x08)
	char pad_178[0x28]; // 0x178(0x28)
};

// Class FortniteAI.FortAITetheringBoxBoundsInterface
// Size: 0x28 (Inherited: 0x28)
struct UFortAITetheringBoxBoundsInterface : UInterface {

	float GetTetheredBoxBoundsWidth(); // Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsWidth // (RequiredAPI|BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xd67374
	float GetTetheredBoxBoundsHeight(); // Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsHeight // (RequiredAPI|BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xd67374
	float GetTetheredBoxBoundsEQSSpaceBetween(); // Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsEQSSpaceBetween // (RequiredAPI|BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xd67374
	float GetTetheredBoxBoundsEQSGridSize(); // Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsEQSGridSize // (RequiredAPI|BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xd67374
	struct FVector GetTetheredBoxBoundsCenter(); // Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsCenter // (RequiredAPI|BlueprintAuthorityOnly|Event|Public|HasDefaults|BlueprintEvent) // @ game+0xd67374
};

// Class FortniteAI.FortAsyncAction_MakeTieredWaveEncounterSettings
// Size: 0x2d8 (Inherited: 0x30)
struct UFortAsyncAction_MakeTieredWaveEncounterSettings : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnComplete; // 0x30(0x10)
	struct FTieredWaveSetData WaveData; // 0x40(0x1c8)
	struct FFortEncounterSettings EncounterSettings; // 0x208(0xc0)
	char pad_2C8[0x10]; // 0x2c8(0x10)

	struct UFortAsyncAction_MakeTieredWaveEncounterSettings* CreateAsyncAction_MakeTieredWaveEncounterSettings(struct FTieredWaveSetData& WaveData, struct FFortEncounterSettings& InEncounterSettings); // Function FortniteAI.FortAsyncAction_MakeTieredWaveEncounterSettings.CreateAsyncAction_MakeTieredWaveEncounterSettings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x99ac314
};

// Class FortniteAI.FortAthenaAIRuntimeParameters
// Size: 0x30 (Inherited: 0x28)
struct UFortAthenaAIRuntimeParameters : UObject {
	int32_t ExtractedLevel; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class FortniteAI.FortAthenaAIBotDigestedSkillSet
// Size: 0x30 (Inherited: 0x30)
struct UFortAthenaAIBotDigestedSkillSet : UFortAthenaAIRuntimeParameters {
};

// Class FortniteAI.FortAthenaAIBotAimingDigestedSkillSet
// Size: 0x700 (Inherited: 0x30)
struct UFortAthenaAIBotAimingDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	struct FDigestedFocusSetting DefaultFocusSetting; // 0x30(0x60)
	struct TArray<struct FDigestedFocusSetting> FocusSettings; // 0x90(0x10)
	struct FLookAtDigestedSetting LookAtSettings[0x4]; // 0xa0(0x40)
	bool bAllowScanAroundWhileSwimming; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float TrackingReactionTime; // 0xe4(0x04)
	float TrackingInterpTime; // 0xe8(0x04)
	float TrackingInterpTimeMultForGroundVehicles; // 0xec(0x04)
	float TrackingInterpTimeMultForFlyingVehicles; // 0xf0(0x04)
	float MaxTrackingPredictionError; // 0xf4(0x04)
	float MaxTrackingOffsetErrorMultiplier; // 0xf8(0x04)
	float AdjustedTrackingOffsetErrorMultiplierAgainstAIs; // 0xfc(0x04)
	float TrackingErrorUpdateInterval; // 0x100(0x04)
	float TrackingInAirVelocityThreshold; // 0x104(0x04)
	float TrackingInAirHeightDeltaThreshold; // 0x108(0x04)
	float TargetAcquisitionRate; // 0x10c(0x04)
	float MaxDistanceEvaluationErrorRatio; // 0x110(0x04)
	float TargetingUpdateInterval; // 0x114(0x04)
	float TargetingUpdateIntervalMaxDeviation; // 0x118(0x04)
	float ReachLeashLimitToleranceDistance; // 0x11c(0x04)
	bool bShootFloorTrapOnlyWhenHigherThanTrap; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float TargetingRotationSpeedLimit; // 0x124(0x04)
	float TargetingRotationSnapThreshold; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FDigestedWeaponAccuracy NoWeaponAccuracy; // 0x130(0x320)
	struct TArray<struct FDigestedWeaponAccuracyCategory> WeaponAccuracies; // 0x450(0x10)
	struct TArray<struct FDigestedTargetBasedAccuracyCategory> DigestedTargetBasedAccuracies; // 0x460(0x10)
	struct FDigestedTrackingOffsetModifiers TrackingOffsetModifiers; // 0x470(0x120)
	struct FDigestedAimingCircleSettings DefaultAimingCircleSettings; // 0x590(0x160)
	struct AFortWeapon* CachedWeaponUsedToCalculateAccuracy; // 0x6f0(0x08)
	char pad_6F8[0x8]; // 0x6f8(0x08)
};

// Class FortniteAI.FortAthenaAIBotSkillSet
// Size: 0x30 (Inherited: 0x28)
struct UFortAthenaAIBotSkillSet : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class FortniteAI.FortAthenaAIBotAimingSkillSet
// Size: 0x1200 (Inherited: 0x30)
struct UFortAthenaAIBotAimingSkillSet : UFortAthenaAIBotSkillSet {
	struct FFocusSetting DefaultFocusSetting; // 0x30(0xf0)
	struct TArray<struct FFocusSetting> FocusSettings; // 0x120(0x10)
	struct FLookAtSetting LookAtSettings[0x4]; // 0x130(0x280)
	struct FScalableFloat AllowScanAroundWhileSwimming; // 0x3b0(0x28)
	struct FScalableFloat TrackingReactionTime; // 0x3d8(0x28)
	struct FScalableFloat TrackingInterpTime; // 0x400(0x28)
	struct FScalableFloat TrackingInterpTimeMultForGroundVehicles; // 0x428(0x28)
	struct FScalableFloat TrackingInterpTimeMultForFlyingVehicles; // 0x450(0x28)
	struct FScalableFloat MaxTrackingPredictionError; // 0x478(0x28)
	struct FScalableFloat MaxTrackingOffsetErrorMultiplier; // 0x4a0(0x28)
	struct FScalableFloat AdjustedTrackingOffsetErrorMultiplierAgainstAIs; // 0x4c8(0x28)
	struct FScalableFloat TrackingErrorUpdateInterval; // 0x4f0(0x28)
	struct FScalableFloat TrackingInAirVelocityThreshold; // 0x518(0x28)
	struct FScalableFloat TrackingInAirHeightDeltaThreshold; // 0x540(0x28)
	struct FScalableFloat TargetAcquisitionRate; // 0x568(0x28)
	struct FScalableFloat MaxDistanceEvaluationErrorRatio; // 0x590(0x28)
	struct FScalableFloat TargetingUpdateInterval; // 0x5b8(0x28)
	struct FScalableFloat TargetingUpdateIntervalMaxDeviation; // 0x5e0(0x28)
	struct FScalableFloat ReachLeashLimitToleranceDistance; // 0x608(0x28)
	struct FScalableFloat ShootFloorTrapOnlyWhenHigherThanTrap; // 0x630(0x28)
	struct FScalableFloat TargetingRotationSpeedLimit; // 0x658(0x28)
	struct FScalableFloat TargetingRotationSnapThreshold; // 0x680(0x28)
	struct FWeaponAccuracy NoWeaponAccuracy; // 0x6a8(0x738)
	struct TArray<struct FWeaponAccuracyCategory> WeaponAccuracies; // 0xde0(0x10)
	struct TArray<struct FTargetBasedAccuracyCategory> TargetBasedAccuracies; // 0xdf0(0x10)
	char bDigestTrackingOffsetModifiersWithAvgMatchMMR : 1; // 0xe00(0x01)
	char pad_E00_1 : 7; // 0xe00(0x01)
	char pad_E01[0x7]; // 0xe01(0x07)
	struct TArray<struct FTrackingOffsetModifierInfo> TrackingOffsetModifiers; // 0xe08(0x10)
	struct FAimingCircleSettings DefaultAimingCircleSettings; // 0xe18(0x3e8)
};

// Class FortniteAI.AISenseScalableConfig
// Size: 0x28 (Inherited: 0x28)
struct UAISenseScalableConfig : UObject {
};

// Class FortniteAI.AISenseScalableConfig_Sight
// Size: 0xf0 (Inherited: 0x28)
struct UAISenseScalableConfig_Sight : UAISenseScalableConfig {
	struct FScalableFloat SightRadius; // 0x28(0x28)
	struct FScalableFloat LoseSightRadius; // 0x50(0x28)
	struct FScalableFloat PeripheralVisionAngleDegrees; // 0x78(0x28)
	struct FScalableFloat PointOfViewBackwardOffset; // 0xa0(0x28)
	struct FScalableFloat NearClippingRadius; // 0xc8(0x28)
};

// Class FortniteAI.AISenseScalableConfig_Hearing
// Size: 0x50 (Inherited: 0x28)
struct UAISenseScalableConfig_Hearing : UAISenseScalableConfig {
	struct FScalableFloat HearingRange; // 0x28(0x28)
};

// Class FortniteAI.FortAthenaAIBotAlertLevelConfig
// Size: 0x38 (Inherited: 0x28)
struct UFortAthenaAIBotAlertLevelConfig : UObject {
	int32_t AlertLevels; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UAISenseScalableConfig* ScalableSenseConfig; // 0x30(0x08)
};

// Class FortniteAI.FortAthenaAIBotAttackingDigestedSkillSet
// Size: 0xf0 (Inherited: 0x30)
struct UFortAthenaAIBotAttackingDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	float MaxDistanceToEngageMeleeSq; // 0x30(0x04)
	float MinDistanceToGiveUpMeleeSq; // 0x34(0x04)
	float MaxDistanceToThrowMeleeAttackSq; // 0x38(0x04)
	bool bUseContinuousMeleeAttack; // 0x3c(0x01)
	bool bOnlyEngageMeleeAgainstThreatThatHasNoRangeWeapon; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	float MaxDistanceToConsiderAsAnAlternateTargetSq; // 0x40(0x04)
	bool bEnableAlternateTargetRequiredTags; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FGameplayTagContainer AlternateTargetRequiredTags; // 0x48(0x20)
	bool bEnableWTFBehavior; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float MinCooldownDelayBetweenMeleeAttackAttempts; // 0x6c(0x04)
	float MaxCooldownDelayBetweenMeleeAttackAttempts; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FGameplayTagContainer ThrowableGameplayTags; // 0x78(0x20)
	int32_t MinThrowableCount; // 0x98(0x04)
	int32_t MaxThrowableCount; // 0x9c(0x04)
	float ThrowableCooldownMin; // 0xa0(0x04)
	float ThrowableCooldownMax; // 0xa4(0x04)
	float ThrowableMinimumRangeSquared; // 0xa8(0x04)
	bool bThrowableEvaluatorActive; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float RetreatMinHealthRange; // 0xb0(0x04)
	float RetreatMaxHealthRange; // 0xb4(0x04)
	float RetreatProbability; // 0xb8(0x04)
	float RetreatRangeMinSquared; // 0xbc(0x04)
	float RetreatRangeMaxSquared; // 0xc0(0x04)
	float RetreatMaxDuration; // 0xc4(0x04)
	struct FVector RetreatPositionBoxExtent; // 0xc8(0x18)
	bool CautiousInvestigationEnabled; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float TimeSinceLastStimToBeCautious; // 0xe4(0x04)
	float CautiousInvestigationTimeMax; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// Class FortniteAI.FortAthenaAIBotAttackingSkillSet
// Size: 0x470 (Inherited: 0x30)
struct UFortAthenaAIBotAttackingSkillSet : UFortAthenaAIBotSkillSet {
	struct FScalableFloat MaxDistanceToEngageMelee; // 0x30(0x28)
	struct FScalableFloat MinDistanceToGiveUpMelee; // 0x58(0x28)
	struct FScalableFloat MaxDistanceToThrowMeleeAttack; // 0x80(0x28)
	struct FScalableFloat UseContinuousMeleeAttack; // 0xa8(0x28)
	struct FScalableFloat OnlyEngageMeleeAgainstThreatThatHasNoRangeWeapon; // 0xd0(0x28)
	struct FScalableFloat MaxDistanceToConsiderAsAnAlternateTarget; // 0xf8(0x28)
	struct FScalableFloat EnableAlternateTargetRequiredTags; // 0x120(0x28)
	struct FGameplayTagContainer AlternateTargetRequiredTags; // 0x148(0x20)
	struct FScalableFloat EnableWTFBehavior; // 0x168(0x28)
	struct FScalableFloat MinCooldownDelayBetweenMeleeAttackAttempts; // 0x190(0x28)
	struct FScalableFloat MaxCooldownDelayBetweenMeleeAttackAttempts; // 0x1b8(0x28)
	struct FGameplayTagContainer ThrowableGameplayTags; // 0x1e0(0x20)
	struct FScalableFloat MinThrowableCount; // 0x200(0x28)
	struct FScalableFloat MaxThrowableCount; // 0x228(0x28)
	struct FScalableFloat ThrowableCooldownMin; // 0x250(0x28)
	struct FScalableFloat ThrowableCooldownMax; // 0x278(0x28)
	struct FScalableFloat ThrowableMinimumRange; // 0x2a0(0x28)
	struct FScalableFloat ThrowableEvaluatorActive; // 0x2c8(0x28)
	struct FScalableFloat RetreatMinHealthRange; // 0x2f0(0x28)
	struct FScalableFloat RetreatMaxHealthRange; // 0x318(0x28)
	struct FScalableFloat RetreatProbability; // 0x340(0x28)
	struct FScalableFloat RetreatRangeMin; // 0x368(0x28)
	struct FScalableFloat RetreatRangeMax; // 0x390(0x28)
	struct FScalableFloat RetreatMaxDuration; // 0x3b8(0x28)
	struct FVector RetreatPositionBoxExtent; // 0x3e0(0x18)
	struct FScalableFloat CautiousInvestigationEnabled; // 0x3f8(0x28)
	struct FScalableFloat TimeSinceLastStimToBeCautious; // 0x420(0x28)
	struct FScalableFloat CautiousInvestigationTimeMax; // 0x448(0x28)
};

// Class FortniteAI.FortAthenaAIBotBuildingComponent
// Size: 0xd8 (Inherited: 0xa0)
struct UFortAthenaAIBotBuildingComponent : UActorComponent {
	char pad_A0[0x38]; // 0xa0(0x38)
};

// Class FortniteAI.FortAthenaAIBotBuildingDigestedSkillSet
// Size: 0x70 (Inherited: 0x30)
struct UFortAthenaAIBotBuildingDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	float DefensiveBuildingDelayBetweenBuilds; // 0x30(0x04)
	float DefensiveBuildingDelayDeviationBetweenBuilds; // 0x34(0x04)
	float DelayBetweenBuildPieces; // 0x38(0x04)
	float ForceEquipBuildToolDuration; // 0x3c(0x04)
	float StealWallTurboBuildDetectionTime; // 0x40(0x04)
	int32_t StealWallAfterNumberOfTurboBuiltWall; // 0x44(0x04)
	float StealWallEfficiency; // 0x48(0x04)
	float StealWallBuildingTemplateWeights[0x5]; // 0x4c(0x14)
	struct TArray<struct FAthenaFortAIBotDigestedWeightedBuildingList> WeightedBuildingLists; // 0x60(0x10)
};

// Class FortniteAI.FortAthenaAIBotBuildingSkillSet
// Size: 0x220 (Inherited: 0x30)
struct UFortAthenaAIBotBuildingSkillSet : UFortAthenaAIBotSkillSet {
	struct FScalableFloat DefensiveBuildingDelayBetweenBuilds; // 0x30(0x28)
	struct FScalableFloat DefensiveBuildingDelayDeviationBetweenBuilds; // 0x58(0x28)
	struct FScalableFloat DelayBetweenBuildPieces; // 0x80(0x28)
	struct FScalableFloat ForceEquipBuildToolDuration; // 0xa8(0x28)
	struct TArray<struct FAthenaFortAIBotWeightedBuildingList> WeightedBuildingLists; // 0xd0(0x10)
	struct FScalableFloat StealWallTurboBuildDetectionTime; // 0xe0(0x28)
	struct FScalableFloat StealWallAfterNumberOfTurboBuiltWall; // 0x108(0x28)
	struct FScalableFloat StealWallEfficiency; // 0x130(0x28)
	struct FScalableFloat StealWallBuildingTemplateWeights[0x5]; // 0x158(0xc8)
};

// Class FortniteAI.FortAthenaAIBotCharacterCustomization
// Size: 0x190 (Inherited: 0x28)
struct UFortAthenaAIBotCharacterCustomization : UObject {
	struct FFortAthenaLoadout CustomizationLoadout; // 0x28(0x168)
};

// Class FortniteAI.FortAthenaAIBotCosmeticData
// Size: 0x40 (Inherited: 0x30)
struct UFortAthenaAIBotCosmeticData : UDataAsset {
	struct TArray<struct TSoftObjectPtr<UFortAthenaAIBotCosmeticLibraryData>> CosmeticLibraries; // 0x30(0x10)

	struct TSoftObjectPtr<UFortAthenaAIBotCosmeticLibraryData> FindLibraryDataFromName(struct FString PartialName); // Function FortniteAI.FortAthenaAIBotCosmeticData.FindLibraryDataFromName // (Final|Native|Public|BlueprintCallable) // @ game+0x99afe4c
};

// Class FortniteAI.FortAthenaAIBotCosmeticLibraryData
// Size: 0x1c0 (Inherited: 0x30)
struct UFortAthenaAIBotCosmeticLibraryData : UPrimaryDataAsset {
	struct TSoftObjectPtr<UDataTable> PredefineSetsDataTable; // 0x30(0x28)
	struct TSoftObjectPtr<UDataTable> CharactersDataTable; // 0x58(0x28)
	struct TSoftObjectPtr<UDataTable> GlidersDataTable; // 0x80(0x28)
	struct TSoftObjectPtr<UDataTable> SkyDiveContrailsDataTable; // 0xa8(0x28)
	struct TSoftObjectPtr<UDataTable> BackpacksDataTable; // 0xd0(0x28)
	struct TSoftObjectPtr<UDataTable> PickaxesDataTable; // 0xf8(0x28)
	struct TSoftObjectPtr<UDataTable> FallbackCharactersDataTable; // 0x120(0x28)
	struct TSoftObjectPtr<UDataTable> EmotesDataTable; // 0x148(0x28)
	struct FScalableFloat OddsToUseSameSetCosmeticItems; // 0x170(0x28)
	struct FScalableFloat OddsToUseRandomItemWhenNoneFromSetAvailable; // 0x198(0x28)

	struct TArray<struct UDataTable*> RetrieveDataTables(); // Function FortniteAI.FortAthenaAIBotCosmeticLibraryData.RetrieveDataTables // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b0a10
	struct UDataTable* FindDataTableFromAssetType(struct FString AssetType); // Function FortniteAI.FortAthenaAIBotCosmeticLibraryData.FindDataTableFromAssetType // (Final|Native|Public|BlueprintCallable) // @ game+0x99afce8
	bool FillDataTableValuesFromSourceLibrary(struct UFortAthenaAIBotCosmeticLibraryData* SourceLibrary); // Function FortniteAI.FortAthenaAIBotCosmeticLibraryData.FillDataTableValuesFromSourceLibrary // (Final|Native|Public|BlueprintCallable) // @ game+0x99afb50
};

// Class FortniteAI.BotCosmeticBlueprintHelperLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBotCosmeticBlueprintHelperLibrary : UBlueprintFunctionLibrary {

	bool SplitDataArrayByType(struct TArray<struct FString>& InAssetNames, struct TArray<struct FString>& InAssetTypes, struct TArray<int32_t>& InAssetUsageCounts, struct TArray<int32_t>& InAssetTypeSplitIndices, int32_t CurrentSplitIndex, struct FString& OutAssetType, struct TArray<struct FString>& OutAssetNames, struct TArray<int32_t>& OutAssetUsageCounts); // Function FortniteAI.BotCosmeticBlueprintHelperLibrary.SplitDataArrayByType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x99b0b14
	struct TArray<struct FString> OpenCSVFileDialog(struct FString TitleDetails, bool bAllowMultipleFiles); // Function FortniteAI.BotCosmeticBlueprintHelperLibrary.OpenCSVFileDialog // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x99b0868
	bool LoadDataFromCSV(struct FString FilePath, struct TArray<struct FString>& ForbiddenAssetNames, struct TArray<struct FString>& ForbiddenAssetPrefix, struct TArray<struct FString>& AssetNames, struct TArray<struct FString>& AssetTypes, struct TArray<int32_t>& AssetUsageCounts, struct TArray<int32_t>& AssetTypeSplitIndices); // Function FortniteAI.BotCosmeticBlueprintHelperLibrary.LoadDataFromCSV // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x99b03c8
	bool GenerateWeightedCSV(struct FString AssetTypeName, struct TArray<struct FString>& AssetNames, struct TArray<int32_t>& AssetWeight, struct FString& CSV); // Function FortniteAI.BotCosmeticBlueprintHelperLibrary.GenerateWeightedCSV // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x99b0018
	bool ExportDataTableToSourceCSV(struct UDataTable* DataTable, bool bCanCheckOutFile); // Function FortniteAI.BotCosmeticBlueprintHelperLibrary.ExportDataTableToSourceCSV // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x99afaa4
};

// Class FortniteAI.FortAthenaAIBotCustomizationData
// Size: 0x190 (Inherited: 0x30)
struct UFortAthenaAIBotCustomizationData : UPrimaryDataAsset {
	struct AFortPlayerPawnAthena* PawnClass; // 0x30(0x08)
	char bRequiresUniqueNetId : 1; // 0x38(0x01)
	char bHasCustomSquadId : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char CustomSquadId; // 0x39(0x01)
	char bOverrideCanRespawnOnDeath : 1; // 0x3a(0x01)
	char bCanRespawnOnDeath : 1; // 0x3a(0x01)
	char bOverrideBehaviorTree : 1; // 0x3a(0x01)
	char bOverrideCharacterCustomization : 1; // 0x3a(0x01)
	char bOverrideDBNOPlayStyle : 1; // 0x3a(0x01)
	char bOverrideSkillLevel : 1; // 0x3a(0x01)
	char bUseMatchMMRToOverrideSkillLevel : 1; // 0x3a(0x01)
	char bOverrideSkillSets : 1; // 0x3a(0x01)
	char bOverrideStartupInventory : 1; // 0x3b(0x01)
	char bOverrideBotNameSettings : 1; // 0x3b(0x01)
	char bOverrideBotIDAnalyticsSuffix : 1; // 0x3b(0x01)
	char bOverrideConstructionBuildingInfo : 1; // 0x3b(0x01)
	char pad_3B_4 : 4; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TSoftObjectPtr<UDataTable> OverrideSkillLevelMMRTable; // 0x40(0x28)
	struct UBehaviorTree* BehaviorTree; // 0x68(0x08)
	enum class BotDataOverrideCosmeticMode OverrideCosmeticMode; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct UFortAthenaAIBotCharacterCustomization* CharacterCustomization; // 0x78(0x08)
	struct TSoftObjectPtr<UFortAthenaAIBotCosmeticLibraryData> CosmeticCustomizationLibrary; // 0x80(0x28)
	enum class EDBNOPlayStyle DBNOPlayStyle; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float SkillLevel; // 0xac(0x04)
	char pad_B0[0x8]; // 0xb0(0x08)
	struct TArray<struct UFortAthenaAIBotSkillSet*> SkillSetOverrideClasses; // 0xb8(0x10)
	struct UFortAthenaAIBotInventoryItems* StartupInventory; // 0xc8(0x08)
	struct UFortBotNameSettings* BotNameSettings; // 0xd0(0x08)
	struct FString BotAnalyticsSuffix; // 0xd8(0x10)
	float SpawnTracePadding; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FConstructionBuildingInfo OverrideConstructionBuildingInfo[0x6]; // 0xf0(0x90)
	struct UFortAthenaAILODSettingsContainer* AILODSettingsContainer; // 0x180(0x08)
	struct UFortAthenaAILODSettingsContainer* AILODSettingsContainerLoaded; // 0x188(0x08)

	void SetCharacterCustomizationFromPlayerPawn(struct AFortPlayerPawn* InFortPawn); // Function FortniteAI.FortAthenaAIBotCustomizationData.SetCharacterCustomizationFromPlayerPawn // (Final|Native|Public|BlueprintCallable) // @ game+0x99b0a84
};

// Class FortniteAI.FortAthenaAIBotDBNODigestedSkillSet
// Size: 0x50 (Inherited: 0x30)
struct UFortAthenaAIBotDBNODigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	float MaxDBNOCrawlingResponseTime; // 0x30(0x04)
	float MaxDBNOCrawlingResponseTimeDeviation; // 0x34(0x04)
	float AllyEvaluationTime; // 0x38(0x04)
	float AllyEvaluationTimeDeviation; // 0x3c(0x04)
	float AllyEvaluationMaxDistanceSquared; // 0x40(0x04)
	float OddsToLookForCover; // 0x44(0x04)
	float CoverEvaluationTime; // 0x48(0x04)
	float CoverEvaluationTimeDeviation; // 0x4c(0x04)
};

// Class FortniteAI.FortAthenaAIBotDBNOSkillSet
// Size: 0x170 (Inherited: 0x30)
struct UFortAthenaAIBotDBNOSkillSet : UFortAthenaAIBotSkillSet {
	struct FScalableFloat MaxDBNOCrawlingResponseTime; // 0x30(0x28)
	struct FScalableFloat MaxDBNOCrawlingResponseTimeDeviation; // 0x58(0x28)
	struct FScalableFloat AllyEvaluationTime; // 0x80(0x28)
	struct FScalableFloat AllyEvaluationTimeDeviation; // 0xa8(0x28)
	struct FScalableFloat AllyEvaluationMaxDistance; // 0xd0(0x28)
	struct FScalableFloat OddsToLookForCover; // 0xf8(0x28)
	struct FScalableFloat CoverEvaluationTime; // 0x120(0x28)
	struct FScalableFloat CoverEvaluationTimeDeviation; // 0x148(0x28)
};

// Class FortniteAI.FortAthenaAIBotEmoteDigestedSkillSet
// Size: 0x50 (Inherited: 0x30)
struct UFortAthenaAIBotEmoteDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	float InfiniteEmoteMinDuration; // 0x30(0x04)
	float InfiniteEmoteMaxDuration; // 0x34(0x04)
	int32_t EmotesMaxCount; // 0x38(0x04)
	float DanceOnKillMaxDistanceFromKillSqr; // 0x3c(0x04)
	float DanceOnKillMaxTimeFromKill; // 0x40(0x04)
	float DanceOnKillMinTimeFromLastTry; // 0x44(0x04)
	float DanceOnKillChanceToDanceOnBots; // 0x48(0x04)
	float DanceOnKillChanceToDanceOnPlayers; // 0x4c(0x04)
};

// Class FortniteAI.FortAthenaAIBotEmoteSkillSet
// Size: 0x148 (Inherited: 0x30)
struct UFortAthenaAIBotEmoteSkillSet : UFortAthenaAIBotSkillSet {
	struct FScalableFloat InfiniteEmoteMinDuration; // 0x30(0x28)
	struct FScalableFloat InfiniteEmoteMaxDuration; // 0x58(0x28)
	struct FScalableFloat DanceOnKillMaxDistanceFromKill; // 0x80(0x28)
	struct FScalableFloat DanceOnKillMaxTimeFromKill; // 0xa8(0x28)
	struct FScalableFloat DanceOnKillMinTimeFromLastTry; // 0xd0(0x28)
	struct FScalableFloat DanceOnKillChanceToDanceOnBots; // 0xf8(0x28)
	struct FScalableFloat DanceOnKillChanceToDanceOnPlayers; // 0x120(0x28)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_AimDownSight
// Size: 0xb0 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_AimDownSight : UFortAthenaAIBotEvaluator {
	struct FName WeaponKeyName; // 0x88(0x04)
	struct FName ThrowableAttacksName; // 0x8c(0x04)
	struct FName TargetActorName; // 0x90(0x04)
	struct FName UrgentMovementName; // 0x94(0x04)
	bool bSkipTargetChecks; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet; // 0xa0(0x08)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_Movement
// Size: 0x218 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_Movement : UFortAthenaAIBotEvaluator {
	struct FName MovementStateKeyName; // 0x88(0x04)
	struct FName MovementDestinationKeyName; // 0x8c(0x04)
	struct FName LastPartialPathTimeKeyName; // 0x90(0x04)
	struct FName LastPartialPathCountKeyName; // 0x94(0x04)
	struct FName LastBlockedPathCountKeyName; // 0x98(0x04)
	struct FName UnstuckInWaterExecutionStatusName; // 0x9c(0x04)
	struct FName UnstuckLastBlockedByActorKeyName; // 0xa0(0x04)
	struct FName UnstuckExecutionStatusKeyName; // 0xa4(0x04)
	struct FName TeleportExecutionStatusKeyName; // 0xa8(0x04)
	struct FName UndermineExecutionStatusKeyName; // 0xac(0x04)
	struct FName UndermineTargetKeyName; // 0xb0(0x04)
	struct FName UndermineLocationImpactName; // 0xb4(0x04)
	struct FName UnstuckSteerExecutionStatusKeyName; // 0xb8(0x04)
	struct FName UnstuckSteerDirectionKeyName; // 0xbc(0x04)
	struct FName ZiplineTargetKeyName; // 0xc0(0x04)
	struct FName LastZiplineUsedName; // 0xc4(0x04)
	struct FName ZiplineMoveExecutionStatusKeyName; // 0xc8(0x04)
	struct FName ZiplineMovementStateName; // 0xcc(0x04)
	struct FName ZiplineEntryLocationKeyName; // 0xd0(0x04)
	struct FName ZiplineExitLocationKeyName; // 0xd4(0x04)
	struct FName ZiplineLastUsageTimeName; // 0xd8(0x04)
	struct FName ZiplineUsageExecutionStatusName; // 0xdc(0x04)
	struct FScalableFloat WaitTimeBetweenZiplineRandomChoices; // 0xe0(0x28)
	struct FScalableFloat ProbabilityToUseZipline; // 0x108(0x28)
	struct UAthenaAIServicePlayerBots* CachedAIServicePlayerBots; // 0x130(0x08)
	char pad_138[0x10]; // 0x138(0x10)
	struct UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementDigestedSkillSet; // 0x148(0x08)
	struct UFortAthenaAIBotUnstuckDigestedSkillSet* UnstuckSkillSet; // 0x150(0x08)
	char pad_158[0xc0]; // 0x158(0xc0)

	void OnCurrentUnstuckSteeringAttemptFinished(enum class EBotUnstuckSteeringReason UnstuckSteeringReason); // Function FortniteAI.FortAthenaAIBotEvaluator_Movement.OnCurrentUnstuckSteeringAttemptFinished // (Final|Native|Private) // @ game+0x99b10e0
	void EvaluateIsolatedIslandSteering(); // Function FortniteAI.FortAthenaAIBotEvaluator_Movement.EvaluateIsolatedIslandSteering // (Final|Native|Private) // @ game+0x99b0ff0
};

// Class FortniteAI.FortAthenaAIBotEvaluator_Ambush
// Size: 0x278 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_Ambush : UFortAthenaAIBotEvaluator_Movement {
	struct FName LastKnownPositionName; // 0x218(0x04)
	struct FName DestinationKeyName; // 0x21c(0x04)
	struct FName MoveToDestinationKeyName; // 0x220(0x04)
	struct FName AggressivenessName; // 0x224(0x04)
	char pad_228[0x50]; // 0x228(0x50)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_Attack
// Size: 0x238 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_Attack : UFortAthenaAIBotEvaluator_Movement {
	char pad_218[0x4]; // 0x218(0x04)
	struct FName WeaponKeyName; // 0x21c(0x04)
	struct UFortWorldItem* Weapon; // 0x220(0x08)
	struct FName MoveToDestinationKeyName; // 0x228(0x04)
	struct FName TargetActorName; // 0x22c(0x04)
	char pad_230[0x8]; // 0x230(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_AvoidThreat
// Size: 0x238 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_AvoidThreat : UFortAthenaAIBotEvaluator_Movement {
	struct FName AvoidThreatKeyName; // 0x218(0x04)
	struct FName AvoidThreatMovementStateKeyName; // 0x21c(0x04)
	struct FName AvoidThreatDestinationKeyName; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)
	struct AActor* CurrentThreatActorAvoiding; // 0x228(0x08)
	struct UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* CacheEMDigestedSkillSet; // 0x230(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_Bunker
// Size: 0x2b0 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_Bunker : UFortAthenaAIBotEvaluator_Movement {
	struct FName BuildExecutionStatusKeyName; // 0x218(0x04)
	struct FName HealingStatusKeyName; // 0x21c(0x04)
	char pad_220[0x90]; // 0x220(0x90)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_CanMove
// Size: 0x90 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_CanMove : UFortAthenaAIBotEvaluator {
	struct FName CanMoveKeyName; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_CharacterLaunched
// Size: 0xc8 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_CharacterLaunched : UFortAthenaAIBotEvaluator {
	bool bSteerInSameDirectionAsLaunchVelocity; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	struct FName CharacterLaunchedExecutionStatusKeyName; // 0x8c(0x04)
	struct FName SteerDirectionKeyName; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FVector LastLaunchVelocity; // 0x98(0x18)
	struct UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementSkillSet; // 0xb0(0x08)
	char pad_B8[0x10]; // 0xb8(0x10)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_Conversation
// Size: 0x190 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_Conversation : UFortAthenaAIBotEvaluator {
	struct UFortAthenaAIRuntimeParameters_Conversation* ConversationRuntimeParameters; // 0x88(0x08)
	struct AActor* ActorToFocus; // 0x90(0x08)
	char pad_98[0xf8]; // 0x98(0xf8)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_Converted
// Size: 0x268 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_Converted : UFortAthenaAIBotEvaluator_Movement {
	struct FName ShouldMoveTowardsConverterName; // 0x218(0x04)
	struct FName ShouldTeleportTowardsConverterName; // 0x21c(0x04)
	struct FName ConvertedAllowPatrolAroundName; // 0x220(0x04)
	struct FName ConvertedAllowScanAroundWhenWaitingName; // 0x224(0x04)
	struct FName ConvertedDestinationName; // 0x228(0x04)
	struct FName CrouchExecutionStatusName; // 0x22c(0x04)
	struct FName SprintExecutionStatusName; // 0x230(0x04)
	struct FName UrgentMovementKeyName; // 0x234(0x04)
	struct FVector TeleportLocationProjectionExtent; // 0x238(0x18)
	struct AFortPawn* ConverterPawn; // 0x250(0x08)
	struct UFortAthenaAIRuntimeParameters_AIBotConvert* CachedAIBotConvertParameters; // 0x258(0x08)
	char pad_260[0x8]; // 0x260(0x08)

	void OnUnconvertedEvent(struct AFortPawn* UnconvertedPawn, enum class EUnconvertReason UnconvertReason); // Function FortniteAI.FortAthenaAIBotEvaluator_Converted.OnUnconvertedEvent // (Final|Native|Protected) // @ game+0x99b07b4
	void OnConvertedEvent(struct AFortPawn* InstigatorPawn, struct AFortPawn* ConvertedPawn); // Function FortniteAI.FortAthenaAIBotEvaluator_Converted.OnConvertedEvent // (Final|Native|Protected) // @ game+0x99b06f4
};

// Class FortniteAI.FortAthenaAIBotEvaluator_DanceOnKill
// Size: 0xa8 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_DanceOnKill : UFortAthenaAIBotEvaluator {
	struct FName LastKillPositionKeyName; // 0x88(0x04)
	struct FName LastKillTimeKeyName; // 0x8c(0x04)
	struct FName LastKillWasABotKeyName; // 0x90(0x04)
	struct FName PlayEmoteExecutionStatusKeyName; // 0x94(0x04)
	char pad_98[0x8]; // 0x98(0x08)
	struct UFortAthenaAIBotEmoteDigestedSkillSet* CacheEmoteDigestedSkillSet; // 0xa0(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_TagQuery
// Size: 0xd8 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_TagQuery : UFortAthenaAIBotEvaluator {
	struct FGameplayTagQuery TagQuery; // 0x88(0x48)
	struct UAbilitySystemComponent* CachedAbilitySystemComponent; // 0xd0(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_DangerDetection
// Size: 0x120 (Inherited: 0xd8)
struct UFortAthenaAIBotEvaluator_DangerDetection : UFortAthenaAIBotEvaluator_TagQuery {
	char pad_D8[0x10]; // 0xd8(0x10)
	struct UFortNavArea* DangerNavAreaClass; // 0xe8(0x08)
	float TimeToCheckForDangerAfterValidQuery; // 0xf0(0x04)
	float MaxRadiusToSearchForSafePlace; // 0xf4(0x04)
	struct FName DangerZoneDetectedExecutionStatusName; // 0xf8(0x04)
	struct FName DangerZoneDetectedSafeLocationKeyName; // 0xfc(0x04)
	char pad_100[0x8]; // 0x100(0x08)
	struct UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementSkillSet; // 0x108(0x08)
	char pad_110[0x10]; // 0x110(0x10)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_DBNO
// Size: 0x270 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_DBNO : UFortAthenaAIBotEvaluator_Movement {
	struct FName DBNODestinationKeyName; // 0x218(0x04)
	char pad_21C[0x1]; // 0x21c(0x01)
	char bAllowReachSquadmates : 1; // 0x21d(0x01)
	char bAllowReachSameFactionNPCs : 1; // 0x21d(0x01)
	char pad_21D_2 : 6; // 0x21d(0x01)
	char pad_21E[0x2]; // 0x21e(0x02)
	struct TArray<struct AFortPlayerPawnAthena*> AllyPawns; // 0x220(0x10)
	struct FVector CachedCurrentDestination; // 0x230(0x18)
	struct UFortAthenaAIBotDBNODigestedSkillSet* DBNOSkillSet; // 0x248(0x08)
	struct UFortAthenaAICoverComponent* CachedCoverComponent; // 0x250(0x08)
	struct UFortAthenaAIRuntimeParameters_DBNOBehavior* DBNOBehaviorRuntimeParameters; // 0x258(0x08)
	char pad_260[0x10]; // 0x260(0x10)

	void OnAllyPawnDBNOStateChanged(struct AFortPawn* InPlayer, bool bInIsDBNO); // Function FortniteAI.FortAthenaAIBotEvaluator_DBNO.OnAllyPawnDBNOStateChanged // (Final|Native|Private) // @ game+0x99b1018
};

// Class FortniteAI.FortAthenaAIBotEvaluator_DefensiveBuilding
// Size: 0xa0 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_DefensiveBuilding : UFortAthenaAIBotEvaluator {
	char pad_88[0x8]; // 0x88(0x08)
	struct UFortAthenaAIBotBuildingDigestedSkillSet* CachedBuildingDigestedSkillSet; // 0x90(0x08)
	struct UFortAthenaAIBotBuildingComponent* CachedBuildingComponent; // 0x98(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_Escape
// Size: 0x248 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_Escape : UFortAthenaAIBotEvaluator_Movement {
	struct FGameplayTagContainer EscapeTags; // 0x218(0x20)
	float CooldownBetweenAggressivenessChanges; // 0x238(0x04)
	struct FName AggressivenessName; // 0x23c(0x04)
	char pad_240[0x8]; // 0x240(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_EvasiveManeuvers
// Size: 0x268 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_EvasiveManeuvers : UFortAthenaAIBotEvaluator {
	char pad_88[0xa8]; // 0x88(0xa8)
	struct FName CrouchExecutionStatusName; // 0x130(0x04)
	struct FName JumpExecutionStatusName; // 0x134(0x04)
	struct FName JetpackStrafeExecutionStatusName; // 0x138(0x04)
	struct FName DodgeName; // 0x13c(0x04)
	struct FName DestinationKeyName; // 0x140(0x04)
	struct FName UrgentMoveKeyName; // 0x144(0x04)
	char pad_148[0x6]; // 0x148(0x06)
	bool bDoCrouching; // 0x14e(0x01)
	bool bDoDodging; // 0x14f(0x01)
	bool bDoJumping; // 0x150(0x01)
	bool bDoJumpingDistanceCheck; // 0x151(0x01)
	bool bDoJetpackStrafing; // 0x152(0x01)
	bool bDoJetpackStrafingDistanceCheck; // 0x153(0x01)
	float JetpackStrafingRequiredFuelPercent; // 0x154(0x04)
	float JetpackStrafeNavPadding; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FGameplayTagQuery RequiredTagQuery; // 0x160(0x48)
	struct FGameplayTagQuery JetpackRequiredTagQuery; // 0x1a8(0x48)
	struct FGameplayTagQuery JumpRequiredTagQuery; // 0x1f0(0x48)
	struct UFortAthenaAIPerk_EvasiveManeuvers* ForcedPerkClass; // 0x238(0x08)
	struct UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* CacheEMDigestedSkillSet; // 0x240(0x08)
	char pad_248[0x20]; // 0x248(0x20)

	void OnMoveCompleted(struct FAIRequestID RequestId, enum class EPathFollowingResult MovementResult); // Function FortniteAI.FortAthenaAIBotEvaluator_EvasiveManeuvers.OnMoveCompleted // (Final|Native|Public) // @ game+0x99b1160
};

// Class FortniteAI.FortAthenaAIBotEvaluator_FreeFalling
// Size: 0x190 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_FreeFalling : UFortAthenaAIBotEvaluator {
	struct FName DiveExecutionStatusKeyName; // 0x88(0x04)
	struct FName DiveDestinationKeyName; // 0x8c(0x04)
	struct FName GlideExecutionStatusKeyName; // 0x90(0x04)
	struct FName GlideDestinationKeyName; // 0x94(0x04)
	struct FName JumpOffBusDestinationName; // 0x98(0x04)
	char pad_9C[0x5]; // 0x9c(0x05)
	bool bRandomlySelectFreeFallingMode; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
	struct FScalableFloat IdleWeight; // 0xa8(0x28)
	struct FScalableFloat RandomWeight; // 0xd0(0x28)
	struct FScalableFloat TowardNearestAllyWeight; // 0xf8(0x28)
	enum class EFreeFallingMode FreeFallingMode; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float MaxOffsetRangeFromNearestAlly; // 0x124(0x04)
	char bShouldRecomputeDestinationWhenTowardNearestAlly : 1; // 0x128(0x01)
	char bShouldSearchAllyInSquad : 1; // 0x128(0x01)
	char bShouldSearchAllyInTeam : 1; // 0x128(0x01)
	char bGlideAllowed : 1; // 0x128(0x01)
	char pad_128_4 : 4; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float SkyTubeDivingStuckTimeThreshold; // 0x12c(0x04)
	char pad_130[0x20]; // 0x130(0x20)
	struct AFortPlayerStateAthena* NearestAlly; // 0x150(0x08)
	struct FVector CachedLatestDestination; // 0x158(0x18)
	struct UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet; // 0x170(0x08)
	char pad_178[0x8]; // 0x178(0x08)
	struct AFortSkyTube* CachedSkyTube; // 0x180(0x08)
	char pad_188[0x8]; // 0x188(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_Ground
// Size: 0x110 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_Ground : UFortAthenaAIBotEvaluator {
	struct FVector SurfaceTypeRaycastDir; // 0x88(0x18)
	char pad_A0[0x68]; // 0xa0(0x68)
	struct UFortAthenaAIRuntimeParameters_Behavior* CachedBehaviorRuntimeParameters; // 0x108(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_HandleFocusing
// Size: 0x128 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_HandleFocusing : UFortAthenaAIBotEvaluator {
	struct FName TargetActorName; // 0x88(0x04)
	struct FName InteractActorName; // 0x8c(0x04)
	struct FName TargetLocationName; // 0x90(0x04)
	struct FName FocusActorName; // 0x94(0x04)
	struct FName FocalPointName; // 0x98(0x04)
	struct FName WeaponFireName; // 0x9c(0x04)
	struct FName RangeAttackIsReadyToFireName; // 0xa0(0x04)
	struct FName WeaponTriggerMeleeName; // 0xa4(0x04)
	struct FName LastKnownPositionName; // 0xa8(0x04)
	struct FName TacticalSprintExecutionStatusName; // 0xac(0x04)
	char pad_B0[0xa]; // 0xb0(0x0a)
	enum class EFocusingBehavior FocusingBehavior; // 0xba(0x01)
	enum class EFocusingBehavior NoRangedWeaponFocusBehavior; // 0xbb(0x01)
	bool bPrioritizeThreatOverCurrentTarget; // 0xbc(0x01)
	bool bUseTargetActorKeyAsFocusTarget; // 0xbd(0x01)
	bool bFocusOnTargetLocation; // 0xbe(0x01)
	char pad_BF[0x1]; // 0xbf(0x01)
	float AmbushMaxLKPLookAtAngleDegree; // 0xc0(0x04)
	bool bStopFocusingWhenMoving; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float ResumeFocusingWhenMovingDist; // 0xc8(0x04)
	float StopFocusingWhenMovingDist; // 0xcc(0x04)
	bool bResumeFocusWhileSliding; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet; // 0xd8(0x08)
	struct UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet; // 0xe0(0x08)
	struct AActor* LastTargetedThreat; // 0xe8(0x08)
	char pad_F0[0x8]; // 0xf0(0x08)
	struct AActor* FocusActor; // 0xf8(0x08)
	char pad_100[0x28]; // 0x100(0x28)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_Heal
// Size: 0xf0 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_Heal : UFortAthenaAIBotEvaluator {
	struct FName HealingObjectKeyName; // 0x88(0x04)
	char pad_8C[0x14]; // 0x8c(0x14)
	struct FGameplayTagQuery RequiredTagQuery; // 0xa0(0x48)
	struct UFortAthenaAIBotHealingDigestedSkillSet* HealingSkillSet; // 0xe8(0x08)

	void HandlePlayerHealthOrShieldChanged(); // Function FortniteAI.FortAthenaAIBotEvaluator_Heal.HandlePlayerHealthOrShieldChanged // (Final|Native|Private) // @ game+0x99b1004
};

// Class FortniteAI.FortAthenaAIBotEvaluator_HitAndRun
// Size: 0x310 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_HitAndRun : UFortAthenaAIBotEvaluator_Movement {
	struct FScalableFloat AttackDurationBeforeEvade; // 0x218(0x28)
	struct FScalableFloat MeleeAttackMaxDistToEvade; // 0x240(0x28)
	struct FScalableFloat ClampEvadeDistanceEnable; // 0x268(0x28)
	struct FScalableFloat MinDistanceToEvade; // 0x290(0x28)
	struct FScalableFloat MaxDistanceToEvade; // 0x2b8(0x28)
	struct FName EvadeKeyName; // 0x2e0(0x04)
	struct FName EvadeMovementStateKeyName; // 0x2e4(0x04)
	struct FName EvadeDestinationKeyName; // 0x2e8(0x04)
	struct FName WeaponTriggerMeleeName; // 0x2ec(0x04)
	char pad_2F0[0x10]; // 0x2f0(0x10)
	float MeleeAttackMaxDistToEvadeSqr; // 0x300(0x04)
	float MaxDistanceToEvadeSqr; // 0x304(0x04)
	char pad_308[0x8]; // 0x308(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_HolsterWeapon
// Size: 0x90 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_HolsterWeapon : UFortAthenaAIBotEvaluator {
	struct UFortAthenaAIRuntimeParameters_NPCBehavior* CachedNPCBehaviorParameters; // 0x88(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_Investigate
// Size: 0x2c8 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_Investigate : UFortAthenaAIBotEvaluator_Movement {
	struct FName LastKnownPositionName; // 0x218(0x04)
	struct FName DestinationKeyName; // 0x21c(0x04)
	struct FName MoveToDestinationKeyName; // 0x220(0x04)
	struct FName AggressivenessName; // 0x224(0x04)
	struct FName CautiousKeyName; // 0x228(0x04)
	char pad_22C[0xc]; // 0x22c(0x0c)
	struct UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet; // 0x238(0x08)
	struct UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingDigestedSkillSet; // 0x240(0x08)
	char pad_248[0x38]; // 0x248(0x38)
	struct AActor* InvestigatingSupportingActor; // 0x280(0x08)
	char pad_288[0x8]; // 0x288(0x08)
	struct ABuildingSMActor* UnderminingBuildingActor; // 0x290(0x08)
	struct AActor* ExcludeReachingTarget; // 0x298(0x08)
	char pad_2A0[0x28]; // 0x2a0(0x28)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_JumpOffBus
// Size: 0xd0 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_JumpOffBus : UFortAthenaAIBotEvaluator {
	struct FName JumpOffBusDestinationName; // 0x88(0x04)
	struct FName JumpOffBusDestinationVolumeKeyName; // 0x8c(0x04)
	char pad_90[0x20]; // 0x90(0x20)
	struct AFortPoiVolume* BusDroppingVolume; // 0xb0(0x08)
	struct AFortGameStateAthena* CachedAthenaGameState; // 0xb8(0x08)
	struct UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet; // 0xc0(0x08)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_Loot
// Size: 0x3e0 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_Loot : UFortAthenaAIBotEvaluator_Movement {
	struct UAthenaAIServiceLoot* CachedAIServiceLoot; // 0x218(0x08)
	struct UFortAthenaAIBotLootingDigestedSkillSet* LootingSkillSet; // 0x220(0x08)
	char pad_228[0x10]; // 0x228(0x10)
	struct FName LootDestinationKeyName; // 0x238(0x04)
	struct FName LootObjectKeyName; // 0x23c(0x04)
	struct FName LootTypeKeyName; // 0x240(0x04)
	struct FName POINavigationExecutionStatusKeyName; // 0x244(0x04)
	char pad_248[0x4]; // 0x248(0x04)
	enum class EExecutionStatus POINavigationExecutionStatus; // 0x24c(0x01)
	char pad_24D[0x183]; // 0x24d(0x183)
	uint32_t CurrentLootOctreeElementId; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct AFortTeamInfoAthena* CachedTeamInfo; // 0x3d8(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_MeleeAttack
// Size: 0x268 (Inherited: 0x238)
struct UFortAthenaAIBotEvaluator_MeleeAttack : UFortAthenaAIBotEvaluator_Attack {
	char pad_238[0x4]; // 0x238(0x04)
	struct FName WeaponTriggerMeleeName; // 0x23c(0x04)
	struct FName ThrowableAttacksAllowedName; // 0x240(0x04)
	struct FName TraversalBlockMeleeAttackName; // 0x244(0x04)
	char pad_248[0x8]; // 0x248(0x08)
	struct UFortAthenaAIBotAttackingDigestedSkillSet* AttackingSkillSet; // 0x250(0x08)
	struct AActor* ExcludeReachingTarget; // 0x258(0x08)
	char pad_260[0x8]; // 0x260(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_Observe
// Size: 0xa0 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_Observe : UFortAthenaAIBotEvaluator {
	struct FName AggressivenessName; // 0x88(0x04)
	struct FName ObserveDestinationKeyName; // 0x8c(0x04)
	char pad_90[0x2]; // 0x90(0x02)
	bool bContinueMovementOnStart; // 0x92(0x01)
	char pad_93[0x1]; // 0x93(0x01)
	float MaxMovementDuration; // 0x94(0x04)
	char pad_98[0x8]; // 0x98(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_PathExists
// Size: 0xa8 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_PathExists : UFortAthenaAIBotEvaluator {
	struct FName PathExistsKeyName; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FName GoalKeyName; // 0x90(0x04)
	float AcceptableRadius; // 0x94(0x04)
	struct UNavigationQueryFilter* FilterClass; // 0x98(0x08)
	enum class EPathTestQueryType PathQueryType; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	char bProjectGoalLocation : 1; // 0xa4(0x01)
	char bReachTestIncludesAgentRadius : 1; // 0xa4(0x01)
	char bReachTestIncludesGoalRadius : 1; // 0xa4(0x01)
	char pad_A4_3 : 5; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_PatrolAround
// Size: 0x248 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_PatrolAround : UFortAthenaAIBotEvaluator_Movement {
	struct UNavigationQueryFilter* NavigationQueryFilterClass; // 0x218(0x08)
	struct FName PatrolDestinationName; // 0x220(0x04)
	struct FName PatrolExecutionStatusName; // 0x224(0x04)
	struct FName PatrolMovementStateName; // 0x228(0x04)
	struct FName BestTargetActorName; // 0x22c(0x04)
	char pad_230[0x8]; // 0x230(0x08)
	struct AFortGameModeAthena* CacheAthenaGameMode; // 0x238(0x08)
	char pad_240[0x8]; // 0x240(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_PlayEmote
// Size: 0x238 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_PlayEmote : UFortAthenaAIBotEvaluator_Movement {
	struct FName PlayEmoteExecutionStatusKeyName; // 0x218(0x04)
	struct FName PlayEmoteDestinationKeyName; // 0x21c(0x04)
	char pad_220[0x8]; // 0x220(0x08)
	struct AActor* ExcludeReachingTarget; // 0x228(0x08)
	char pad_230[0x8]; // 0x230(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_PropagateAwareness
// Size: 0x110 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_PropagateAwareness : UFortAthenaAIBotEvaluator {
	struct FGameplayTagQuery AwarenessTagQuery; // 0x88(0x48)
	struct UGameplayEffect* AwarenessGameplayEffectClass; // 0xd0(0x08)
	struct TArray<struct AFortPlayerPawnAthena*> AwareAllyPawns; // 0xd8(0x10)
	struct TArray<struct AFortPlayerPawnAthena*> AlreadyTestedPawns; // 0xe8(0x10)
	struct UFortAthenaAIBotPropagateAwarenessDigestedSkillSet* PropagateAwarenessSkillSet; // 0xf8(0x08)
	struct UFortAthenaAIRuntimeParameters_BehaviorTreeControl* BehaviorControlsRuntimeParameters; // 0x100(0x08)
	struct UFortAthenaAIRuntimeParameters_AffiliationBase* AffiliationRuntimeParameters; // 0x108(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_RangeAttack
// Size: 0x360 (Inherited: 0x238)
struct UFortAthenaAIBotEvaluator_RangeAttack : UFortAthenaAIBotEvaluator_Attack {
	struct FName WeaponReloadName; // 0x238(0x04)
	struct FName WeaponFireName; // 0x23c(0x04)
	struct FName RangeAttackIsReadyToFireName; // 0x240(0x04)
	struct FName WeaponTargetingName; // 0x244(0x04)
	struct FName AggressivenessName; // 0x248(0x04)
	struct FName HasLoSOnThreatName; // 0x24c(0x04)
	struct FName UrgentMovementKeyName; // 0x250(0x04)
	char pad_254[0x7]; // 0x254(0x07)
	bool bAlwaysAllowTargetingEvaluation; // 0x25b(0x01)
	bool bSkipADSEvaluation; // 0x25c(0x01)
	bool bConsiderLoF; // 0x25d(0x01)
	char pad_25E[0x2]; // 0x25e(0x02)
	float RangeReachHysteresisRatio; // 0x260(0x04)
	char pad_264[0x24]; // 0x264(0x24)
	struct UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackDigestedSkillSet; // 0x288(0x08)
	struct UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet; // 0x290(0x08)
	struct UFortAthenaAIBotPerceptionDigestedSkillSet* CachePerceptionDigestedSkillSet; // 0x298(0x08)
	struct UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingDigestedSkillSet; // 0x2a0(0x08)
	struct UAthenaAIServiceLOFOccluder* CacheLOFOccluderTracker; // 0x2a8(0x08)
	struct AActor* ExcludeReachingTarget; // 0x2b0(0x08)
	char pad_2B8[0x38]; // 0x2b8(0x38)
	struct AActor* CachedLastMoveToRangeTarget; // 0x2f0(0x08)
	char pad_2F8[0x68]; // 0x2f8(0x68)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_ReachBeacon
// Size: 0x230 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_ReachBeacon : UFortAthenaAIBotEvaluator_Movement {
	struct FName ReachBeaconStatusKeyName; // 0x218(0x04)
	struct FName ReachBeaconMovementStateKeyName; // 0x21c(0x04)
	struct FName ReachBeaconTargetKeyName; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)
	struct TWeakObjectPtr<struct UFortAthenaBeaconComponent> CurrentBeacon; // 0x228(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_ReloadWeapon
// Size: 0x90 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_ReloadWeapon : UFortAthenaAIBotEvaluator {
	struct FName WeaponKeyName; // 0x88(0x04)
	char pad_8C[0x1]; // 0x8c(0x01)
	bool bCanReloadWeaponsInInventory; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_Retreat
// Size: 0x240 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_Retreat : UFortAthenaAIBotEvaluator_Movement {
	struct FName RetreatDestinationName; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingDigestedSkillSet; // 0x220(0x08)
	struct UFortAthenaAICoverComponent* CachedCoverComponent; // 0x228(0x08)
	char pad_230[0x10]; // 0x230(0x10)

	void HandlePlayerHealthOrShieldChanged(); // Function FortniteAI.FortAthenaAIBotEvaluator_Retreat.HandlePlayerHealthOrShieldChanged // (Final|Native|Protected) // @ game+0x99b1224
};

// Class FortniteAI.FortAthenaAIBotEvaluator_Revive
// Size: 0x250 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_Revive : UFortAthenaAIBotEvaluator_Movement {
	struct FName ReviveTargetKeyName; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct UFortAthenaAIRuntimeParameters_ReviveBehavior* ReviveBehaviorRuntimeParameters; // 0x220(0x08)
	struct AFortPlayerPawnAthena* CurrentReviveTarget; // 0x228(0x08)
	struct TArray<struct AFortPlayerPawnAthena*> DBNOAllyPawns; // 0x230(0x10)
	struct UFortAthenaAIBotReviveDigestedSkillSet* ReviveSkillSet; // 0x240(0x08)
	char pad_248[0x8]; // 0x248(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_SandTunnel
// Size: 0x150 (Inherited: 0xd8)
struct UFortAthenaAIBotEvaluator_SandTunnel : UFortAthenaAIBotEvaluator_TagQuery {
	struct FName JumpExecutionStatusName; // 0xd8(0x04)
	struct FName LootInteractionExecutionStatusName; // 0xdc(0x04)
	struct FName WeaponTriggerMeleeName; // 0xe0(0x04)
	struct FName WeaponFireName; // 0xe4(0x04)
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FGameplayTagQuery BuriedTagQuery; // 0xf0(0x48)
	struct UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet; // 0x138(0x08)
	char pad_140[0x10]; // 0x140(0x10)

	void OnBotControllerAlertLevelChanged(struct AFortAthenaAIBotController* BotController, enum class EAlertLevel OldAlertLevel, enum class EAlertLevel NewAlertLevel); // Function FortniteAI.FortAthenaAIBotEvaluator_SandTunnel.OnBotControllerAlertLevelChanged // (Final|Native|Private) // @ game+0x99b124c
	void Jump(); // Function FortniteAI.FortAthenaAIBotEvaluator_SandTunnel.Jump // (Final|Native|Protected) // @ game+0x99b1238
};

// Class FortniteAI.FortAthenaAIBotEvaluator_SelectNextPOI
// Size: 0x250 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_SelectNextPOI : UFortAthenaAIBotEvaluator_Movement {
	struct FName NextPOIKeyName; // 0x218(0x04)
	struct FName MarkerLocationKeyName; // 0x21c(0x04)
	char pad_220[0x8]; // 0x220(0x08)
	struct AFortPoiVolume* StartingGroundPOI; // 0x228(0x08)
	bool bCheckForStartingGroundPOI; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	float CurrentPOICompletionTime; // 0x234(0x04)
	float DurationInsideCurrentPOI; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct AFortTeamInfoAthena* CachedTeamInfo; // 0x240(0x08)
	struct UFortAthenaAIBotLootingDigestedSkillSet* CachedLootingSkillSet; // 0x248(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_SelectVehicle
// Size: 0x258 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_SelectVehicle : UFortAthenaAIBotEvaluator_Movement {
	struct FName VehicleDestinationKeyName; // 0x218(0x04)
	struct FName SelectVehicleMovementStateKeyName; // 0x21c(0x04)
	struct FName SelectVehicleStatusKeyName; // 0x220(0x04)
	struct FName SelectedVehicleKeyName; // 0x224(0x04)
	char pad_228[0x4]; // 0x228(0x04)
	float VehicleSearchRadius; // 0x22c(0x04)
	bool bCanEnterOnlyMatchingPatrols; // 0x230(0x01)
	bool bCanEnterVehiclesInWater; // 0x231(0x01)
	bool bCanEnterOutOfFuelVehicles; // 0x232(0x01)
	char pad_233[0x5]; // 0x233(0x05)
	struct FGameplayTagContainer DesiredVehicleTags; // 0x238(0x20)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_SmartObjects
// Size: 0x240 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_SmartObjects : UFortAthenaAIBotEvaluator_Movement {
	struct UFortAthenaAIRuntimeParameters_SmartObjectBase* SmartObjectRuntimeParameters; // 0x218(0x08)
	struct USmartObjectSubsystem* SmartObjectSubsystem; // 0x220(0x08)
	struct FName SmartObjectExecutionStatusKeyName; // 0x228(0x04)
	struct FName SmartObjectMovementStateKeyName; // 0x22c(0x04)
	struct FName SmartObjectDestinationKeyName; // 0x230(0x04)
	struct FName SmartObjectShouldMoveKeyName; // 0x234(0x04)
	char pad_238[0x8]; // 0x238(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_Sprinting
// Size: 0x100 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_Sprinting : UFortAthenaAIBotEvaluator {
	struct FName AllowSprintKeyName; // 0x88(0x04)
	struct FName AllowSlideKeyName; // 0x8c(0x04)
	struct FName JumpExecutionStatusName; // 0x90(0x04)
	struct FName TacticalSprintExecutionStatusName; // 0x94(0x04)
	struct FName SlideExecutionStatusName; // 0x98(0x04)
	struct FName UrgentMovementKeyName; // 0x9c(0x04)
	struct FName RangeAttackExecutionStatusName; // 0xa0(0x04)
	struct FName MeleeAttackExecutionStatusName; // 0xa4(0x04)
	struct FName ThrowableAttackExecutionStatusName; // 0xa8(0x04)
	char pad_AC[0x9]; // 0xac(0x09)
	bool bSprintOnlyInWater; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
	struct UFortAthenaAIBotMovementDigestedSkillSet* MovementSkillSet; // 0xb8(0x08)
	struct UFortAthenaAIBotAimingDigestedSkillSet* AimingSkillSet; // 0xc0(0x08)
	float TacticalSprintTriggerChance; // 0xc8(0x04)
	float TacticalSprintTriggerChanceInUrgentMovement; // 0xcc(0x04)
	float TacticalSprintJumpTriggerChance; // 0xd0(0x04)
	char pad_D4[0x2c]; // 0xd4(0x2c)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_StealWall
// Size: 0x130 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_StealWall : UFortAthenaAIBotEvaluator {
	struct FName StealWallBuildTypeName; // 0x88(0x04)
	struct FName StealWallBuildGridCoordName; // 0x8c(0x04)
	struct FName TargetActorName; // 0x90(0x04)
	char pad_94[0xc]; // 0x94(0x0c)
	struct UFortAthenaAIBotBuildingDigestedSkillSet* CacheBuildingDigestedSkillSet; // 0xa0(0x08)
	struct ABuildingActor* CurrentBuildingTarget; // 0xa8(0x08)
	char pad_B0[0x80]; // 0xb0(0x80)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_Storm
// Size: 0x258 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_Storm : UFortAthenaAIBotEvaluator_Movement {
	struct FName StormDestinationName; // 0x218(0x04)
	char pad_21C[0xc]; // 0x21c(0x0c)
	struct AFortGameModeAthena* CacheAthenaGameMode; // 0x228(0x08)
	struct UBehaviorTreeComponent* CachedBTComp; // 0x230(0x08)
	char pad_238[0x20]; // 0x238(0x20)

	void OnSafezoneStateChanged(enum class EFortSafeZoneState NewState); // Function FortniteAI.FortAthenaAIBotEvaluator_Storm.OnSafezoneStateChanged // (Final|Native|Public) // @ game+0x99b1364
	void OnSafeZonePhaseChanged(); // Function FortniteAI.FortAthenaAIBotEvaluator_Storm.OnSafeZonePhaseChanged // (Final|Native|Public) // @ game+0x99b1350
};

// Class FortniteAI.FortAthenaAIBotEvaluator_TagQueryToBBKey
// Size: 0xe0 (Inherited: 0xd8)
struct UFortAthenaAIBotEvaluator_TagQueryToBBKey : UFortAthenaAIBotEvaluator_TagQuery {
	struct FName LinkedBBKeyName; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_TakeCover
// Size: 0x2a0 (Inherited: 0x218)
struct UFortAthenaAIBotEvaluator_TakeCover : UFortAthenaAIBotEvaluator_Movement {
	struct UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackDigestedSkillSet; // 0x218(0x08)
	struct UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet; // 0x220(0x08)
	struct UAthenaAIServiceCover* CachedAIServiceCover; // 0x228(0x08)
	struct FName DestinationKeyName; // 0x230(0x04)
	struct FName MoveToDestinationKeyName; // 0x234(0x04)
	struct FName HealingStatusKeyName; // 0x238(0x04)
	struct FName WeaponFireName; // 0x23c(0x04)
	struct FName TargetActorName; // 0x240(0x04)
	struct FName BunkerStatusKeyName; // 0x244(0x04)
	char pad_248[0x8]; // 0x248(0x08)
	struct ABuildingActor* CachedCoverBuildingActor; // 0x250(0x08)
	struct TArray<struct ABuildingActor*> ExcludedBuildingActors; // 0x258(0x10)
	char pad_268[0x38]; // 0x268(0x38)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_ThrowableAttack
// Size: 0x280 (Inherited: 0x238)
struct UFortAthenaAIBotEvaluator_ThrowableAttack : UFortAthenaAIBotEvaluator_Attack {
	struct FName WeaponTriggerThrowableName; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct UFortAthenaAIBotAttackingDigestedSkillSet* AttackingSkillSet; // 0x240(0x08)
	struct UFortAthenaAIBotRangeAttackDigestedSkillSet* RangeAttackSkillSet; // 0x248(0x08)
	struct UFortAthenaAIBotAimingDigestedSkillSet* AimingSkillSet; // 0x250(0x08)
	struct UFortWorldItem* BestWeapon; // 0x258(0x08)
	struct AFortPawn* CachedFortPawn; // 0x260(0x08)
	char pad_268[0x18]; // 0x268(0x18)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_TrapOnPathDetected
// Size: 0xb0 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_TrapOnPathDetected : UFortAthenaAIBotEvaluator {
	struct UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet; // 0x88(0x08)
	struct FName TrapOnPathKeyName; // 0x90(0x04)
	struct FName TrapActorOnPathKeyName; // 0x94(0x04)
	struct FName TargetActorName; // 0x98(0x04)
	struct FName AlertLevelName; // 0x9c(0x04)
	struct FName RangeAttackExecutionStatusName; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct ABuildingTrap* CurrentTrapTarget; // 0xa8(0x08)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_VehicleLeaveSeat
// Size: 0x90 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_VehicleLeaveSeat : UFortAthenaAIBotEvaluator {
	struct FName LeaveSeatStatusKeyName; // 0x88(0x04)
	char pad_8C[0x1]; // 0x8c(0x01)
	bool bLeaveSeatWhenPlayerInVehicle; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_VehicleSwitchSeat
// Size: 0x90 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_VehicleSwitchSeat : UFortAthenaAIBotEvaluator {
	struct FName SwitchSeatStatusKeyName; // 0x88(0x04)
	char pad_8C[0x1]; // 0x8c(0x01)
	bool bSwitchToEmptyDriverSeat; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_WaitForPassengers
// Size: 0x90 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_WaitForPassengers : UFortAthenaAIBotEvaluator {
	struct FName WaitForPassengersStatusKeyName; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class FortniteAI.FortAthenaAIBotEvaluator_Warmup
// Size: 0xb0 (Inherited: 0x88)
struct UFortAthenaAIBotEvaluator_Warmup : UFortAthenaAIBotEvaluator {
	struct FName WarmupPlayEmoteExecutionStatusKeyName; // 0x88(0x04)
	struct FName WarmupLootAndShootExecutionStatusKeyName; // 0x8c(0x04)
	struct FName WarmupIdleExecutionStatusKeyName; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct UFortAthenaAIBotWarmupDigestedSkillSet* CacheWarmupDigestedSkillSet; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class FortniteAI.FortAthenaAIBotEvasiveManeuversDigestedSkillSet
// Size: 0x148 (Inherited: 0x30)
struct UFortAthenaAIBotEvasiveManeuversDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	char pad_30[0x8]; // 0x30(0x08)
	struct FDigestedEvasiveManeuverSkillSettings DefaultEvasiveManeuverSkillSettings; // 0x38(0x58)
	struct TArray<struct FDigestedEvasiveManeuverSkillSettingsSpecialization> EvasiveManeuverSkillSettingsSpecializations; // 0x90(0x10)
	float JetpackStrafeDelay; // 0xa0(0x04)
	float JetpackStrafeRandomDeviationDelay; // 0xa4(0x04)
	float JetpackStrafeOverlayWeight; // 0xa8(0x04)
	float JetpackStrafeDistanceMax; // 0xac(0x04)
	float JetpackStrafeDistanceMin; // 0xb0(0x04)
	float JetpackStrafeActivationTime; // 0xb4(0x04)
	float JetpackStrafeActivationTimeRandomDeviation; // 0xb8(0x04)
	float JetpackStrafeTime; // 0xbc(0x04)
	float JetpackStrafeTimeRandomDeviation; // 0xc0(0x04)
	float DodgeMaxDistanceSquared; // 0xc4(0x04)
	float CrouchMaxDistanceSquared; // 0xc8(0x04)
	float JumpMaxDistanceSquared; // 0xcc(0x04)
	float JetpackStrafeMaxDistanceSquared; // 0xd0(0x04)
	float AvoidProjectilesReactionDistanceSqr; // 0xd4(0x04)
	float AvoidProjectilesReactionTimeMin; // 0xd8(0x04)
	float AvoidProjectilesReactionTimeMax; // 0xdc(0x04)
	float AvoidProjectilesEvasiveDistanceMin; // 0xe0(0x04)
	float AvoidProjectilesEvasiveDistanceMax; // 0xe4(0x04)
	float AvoidPhysicsObjectsReactionDistanceMin; // 0xe8(0x04)
	float AvoidPhysicsObjectsReactionDistanceMax; // 0xec(0x04)
	float AvoidPhysicsObjectsSpeedMin; // 0xf0(0x04)
	float AvoidPhysicsObjectsSpeedMax; // 0xf4(0x04)
	struct FGameplayTagQuery CanUseEvasiveManeuversTagQuery; // 0xf8(0x48)
	bool bCanCrouchInUrgentMovement; // 0x140(0x01)
	bool bCanDodgeInUrgentMovement; // 0x141(0x01)
	bool bCanJumpInUrgentMovement; // 0x142(0x01)
	char pad_143[0x5]; // 0x143(0x05)
};

// Class FortniteAI.FortAthenaAIBotEvasiveManeuversSkillSet
// Size: 0x6c8 (Inherited: 0x30)
struct UFortAthenaAIBotEvasiveManeuversSkillSet : UFortAthenaAIBotSkillSet {
	struct FEvasiveManeuverSkillSettings DefaultEvasiveManeuverSkillSettings; // 0x30(0x258)
	struct TArray<struct FEvasiveManeuverSkillSettingsSpecialization> EvasiveManeuverSkillSettingsSpecializations; // 0x288(0x10)
	struct FScalableFloat JetpackStrafeOverlayWeight; // 0x298(0x28)
	struct FScalableFloat JetpackStrafeDelay; // 0x2c0(0x28)
	struct FScalableFloat JetpackStrafeRandomDeviationDelay; // 0x2e8(0x28)
	struct FScalableFloat JetpackStrafeDistanceMax; // 0x310(0x28)
	struct FScalableFloat JetpackStrafeDistanceMin; // 0x338(0x28)
	struct FScalableFloat JetpackStrafeActivationTime; // 0x360(0x28)
	struct FScalableFloat JetpackStrafeActivationTimeRandomDeviation; // 0x388(0x28)
	struct FScalableFloat JetpackStrafeTime; // 0x3b0(0x28)
	struct FScalableFloat JetpackStrafeTimeRandomDeviation; // 0x3d8(0x28)
	struct FScalableFloat DodgeMaxDistance; // 0x400(0x28)
	struct FScalableFloat CanDodgeInUrgentMovement; // 0x428(0x28)
	struct FScalableFloat CrouchMaxDistance; // 0x450(0x28)
	struct FScalableFloat CanCrouchInUrgentMovement; // 0x478(0x28)
	struct FScalableFloat JumpMaxDistance; // 0x4a0(0x28)
	struct FScalableFloat CanJumpInUrgentMovement; // 0x4c8(0x28)
	struct FScalableFloat JetpackStrafeMaxDistance; // 0x4f0(0x28)
	struct FScalableFloat AvoidProjectilesReactionDistanceMax; // 0x518(0x28)
	struct FScalableFloat AvoidProjectilesReactionTimeMin; // 0x540(0x28)
	struct FScalableFloat AvoidProjectilesReactionTimeMax; // 0x568(0x28)
	struct FScalableFloat AvoidProjectilesEvasiveDistanceMin; // 0x590(0x28)
	struct FScalableFloat AvoidProjectilesEvasiveDistanceMax; // 0x5b8(0x28)
	struct FScalableFloat AvoidPhysicsObjectsReactionDistanceMin; // 0x5e0(0x28)
	struct FScalableFloat AvoidPhysicsObjectsReactionDistanceMax; // 0x608(0x28)
	struct FScalableFloat AvoidPhysicsObjectsSpeedMin; // 0x630(0x28)
	struct FScalableFloat AvoidPhysicsObjectsSpeedMax; // 0x658(0x28)
	struct FGameplayTagQuery CanUseEvasiveManeuversTagQuery; // 0x680(0x48)
};

// Class FortniteAI.FortAthenaAIBotHarvestDigestedSkillSet
// Size: 0x40 (Inherited: 0x30)
struct UFortAthenaAIBotHarvestDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	float DelayBetweenHarvest; // 0x30(0x04)
	float DeviationTimeBetweenHarvest; // 0x34(0x04)
	float HarvestingMaxDistanceSquared; // 0x38(0x04)
	float WeakSpotHitProbability; // 0x3c(0x04)
};

// Class FortniteAI.FortAthenaAIBotHarvestSkillSet
// Size: 0xd0 (Inherited: 0x30)
struct UFortAthenaAIBotHarvestSkillSet : UFortAthenaAIBotSkillSet {
	struct FScalableFloat DelayBetweenHarvest; // 0x30(0x28)
	struct FScalableFloat DeviationTimeBetweenHarvest; // 0x58(0x28)
	struct FScalableFloat HarvestingMaxDistance; // 0x80(0x28)
	struct FScalableFloat WeakSpotHitProbability; // 0xa8(0x28)
};

// Class FortniteAI.FortAthenaAIBotHealingDigestedSkillSet
// Size: 0x70 (Inherited: 0x30)
struct UFortAthenaAIBotHealingDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	struct FFortBotDigestedHealingItemsList HealthItemsList; // 0x30(0x10)
	struct TArray<struct FFortBotDigestedHealingItemsSpec> HealthItemsSpecializations; // 0x40(0x10)
	struct FFortBotDigestedHealingItemsList ShieldItemsList; // 0x50(0x10)
	struct TArray<struct FFortBotDigestedHealingItemsSpec> ShieldItemsSpecializations; // 0x60(0x10)
};

// Class FortniteAI.FortAthenaAIBotHealingSkillSet
// Size: 0x70 (Inherited: 0x30)
struct UFortAthenaAIBotHealingSkillSet : UFortAthenaAIBotSkillSet {
	struct FFortBotHealingItemsList HealthItemsList; // 0x30(0x10)
	struct TArray<struct FFortBotHealingItemsSpec> HealthItemsSpecializations; // 0x40(0x10)
	struct FFortBotHealingItemsList ShieldItemsList; // 0x50(0x10)
	struct TArray<struct FFortBotHealingItemsSpec> ShieldItemsSpecializations; // 0x60(0x10)
};

// Class FortniteAI.FortAthenaAIBotInventoryItems
// Size: 0x38 (Inherited: 0x28)
struct UFortAthenaAIBotInventoryItems : UObject {
	struct TArray<struct FItemAndCount> Items; // 0x28(0x10)
};

// Class FortniteAI.FortAthenaAIBotInventoryDigestedSkillSet
// Size: 0x198 (Inherited: 0x30)
struct UFortAthenaAIBotInventoryDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	float DefaultWeaponSelectionDistance; // 0x30(0x04)
	float DefaultWeaponSelectionDistanceDeviation; // 0x34(0x04)
	bool bHasInfiniteResources; // 0x38(0x01)
	bool bHasInfiniteAmmoForAllWeapons; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct FGameplayTagContainer InventorySlotPreference[0x6]; // 0x40(0xc0)
	struct TArray<struct FDigestedBotEquipWeaponInfo> EquipWeaponInfo; // 0x100(0x10)
	struct FGameplayTagContainer InfiniteAmmoCheats; // 0x110(0x20)
	struct TArray<struct FItemAndCount> MaterialItems; // 0x130(0x10)
	float GiveMaterialsToBotFrequency; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct FGameplayTagContainer CheckLoadedAmmoForInfiniteAmmoCheats; // 0x148(0x20)
	float NoWeaponGiveWeaponAfterTime; // 0x168(0x04)
	float NoWeaponNoPlayerConeDistance; // 0x16c(0x04)
	float NoWeaponNoPlayerConeFOV; // 0x170(0x04)
	struct FName NoWeaponLootTierGroup; // 0x174(0x04)
	struct FGameplayTagContainer IgnoredAsWeaponTags; // 0x178(0x20)
};

// Class FortniteAI.FortAthenaAIBotInventorySkillSet
// Size: 0x288 (Inherited: 0x30)
struct UFortAthenaAIBotInventorySkillSet : UFortAthenaAIBotSkillSet {
	struct FScalableFloat DefaultWeaponSelectionDistance; // 0x30(0x28)
	struct FScalableFloat DefaultWeaponSelectionDistanceDeviation; // 0x58(0x28)
	struct FScalableFloat HasInfiniteResources; // 0x80(0x28)
	struct FGameplayTagContainer InventorySlotPreference[0x6]; // 0xa8(0xc0)
	struct TArray<struct FBotEquipWeaponInfo> EquipWeaponInfo; // 0x168(0x10)
	struct FScalableFloat HasInfiniteAmmoForAllWeapons; // 0x178(0x28)
	struct TArray<struct FWeaponAmmoCheat> AmmoCheats; // 0x1a0(0x10)
	struct TArray<struct FItemAndCount> MaterialItems; // 0x1b0(0x10)
	struct FScalableFloat GiveMaterialsToBotFrequency; // 0x1c0(0x28)
	struct FScalableFloat NoWeaponGiveWeaponAfterTime; // 0x1e8(0x28)
	struct FScalableFloat NoWeaponNoPlayerConeDistance; // 0x210(0x28)
	struct FScalableFloat NoWeaponNoPlayerConeFOV; // 0x238(0x28)
	struct FName NoWeaponLootTierGroup; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct FGameplayTagContainer IgnoredAsWeaponTags; // 0x268(0x20)
};

// Class FortniteAI.FortAthenaAIBotLootingDigestedSkillSet
// Size: 0xb0 (Inherited: 0x30)
struct UFortAthenaAIBotLootingDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	float ThresholdDistanceToSwitchLootItem; // 0x30(0x04)
	float ThresholdDistanceSquaredToRescanForBetterLoot; // 0x34(0x04)
	float ThresholdTimeToRescanForBetterLoot; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FVector OctreeBoxHalfExtent; // 0x40(0x18)
	float LootStateEvaluationRadiusSq; // 0x58(0x04)
	float MinLootDurationPerPOI; // 0x5c(0x04)
	float MaxLootDurationPerPOI; // 0x60(0x04)
	float LootPickupInteractionTime; // 0x64(0x04)
	float LootPickupInteractionDeviationTime; // 0x68(0x04)
	float Distance2DScore; // 0x6c(0x04)
	float HeightScore; // 0x70(0x04)
	float ThreatMaxScore; // 0x74(0x04)
	struct FScalableFloat ThreatProximityScoreTable; // 0x78(0x28)
	float PrioritizeWeaponScore; // 0xa0(0x04)
	float PoiSelectionDistanceScore; // 0xa4(0x04)
	float PoiSelectionBotPresenceScore; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class FortniteAI.FortAthenaAIBotLootingSkillSet
// Size: 0x2a0 (Inherited: 0x30)
struct UFortAthenaAIBotLootingSkillSet : UFortAthenaAIBotSkillSet {
	struct FScalableFloat ThresholdDistanceToSwitchLootItem; // 0x30(0x28)
	struct FScalableFloat ThresholdDistanceToRescanForBetterLoot; // 0x58(0x28)
	struct FScalableFloat ThresholdTimeToRescanForBetterLoot; // 0x80(0x28)
	struct FVector OctreeBoxExtent; // 0xa8(0x18)
	struct FScalableFloat LootStateEvaluationRadius; // 0xc0(0x28)
	struct FScalableFloat MinLootDurationPerPOI; // 0xe8(0x28)
	struct FScalableFloat MaxLootDurationPerPOI; // 0x110(0x28)
	struct FScalableFloat LootPickupInteractionTime; // 0x138(0x28)
	struct FScalableFloat LootPickupInteractionDeviationTime; // 0x160(0x28)
	struct FScalableFloat Distance2DScore; // 0x188(0x28)
	struct FScalableFloat HeightScore; // 0x1b0(0x28)
	struct FScalableFloat ThreatMaxScore; // 0x1d8(0x28)
	struct FScalableFloat ThreatProximityScoreTable; // 0x200(0x28)
	struct FScalableFloat PrioritizeWeaponScore; // 0x228(0x28)
	struct FScalableFloat PoiSelectionDistanceScore; // 0x250(0x28)
	struct FScalableFloat PoiSelectionBotPresenceScore; // 0x278(0x28)
};

// Class FortniteAI.FortAthenaAIBotMovementDigestedSkillSet
// Size: 0x298 (Inherited: 0x30)
struct UFortAthenaAIBotMovementDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	float SlowDownDistanceSquared; // 0x30(0x04)
	float TraversalSpeedEstimation; // 0x34(0x04)
	float TraversalSpeedEstimationWithThreat; // 0x38(0x04)
	float GliderDeployMinAngle; // 0x3c(0x04)
	float GliderDeployMaxAngle; // 0x40(0x04)
	float GliderNoiseMinDistance; // 0x44(0x04)
	float GliderNoiseMaxDistance; // 0x48(0x04)
	float GliderNoiseMinDelay; // 0x4c(0x04)
	float GliderNoiseMaxDelay; // 0x50(0x04)
	float GliderNoiseDistanceTreshold; // 0x54(0x04)
	float GliderStopRotationDistance; // 0x58(0x04)
	float GliderLandingDistance; // 0x5c(0x04)
	float GliderRotationLerpDuration; // 0x60(0x04)
	bool GliderBehaviorEnableFlag; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float GliderBehaviorMinInterval; // 0x68(0x04)
	float GliderBehaviorMaxInterval; // 0x6c(0x04)
	float GliderBehaviorMinRadius; // 0x70(0x04)
	float GliderBehaviorMaxRadius; // 0x74(0x04)
	float GliderBehaviorSurveyProbability; // 0x78(0x04)
	bool GliderMovementTypeEnableFlag; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float GliderLinearProbability; // 0x80(0x04)
	float GliderSpiralMinRadius; // 0x84(0x04)
	float GliderSpiralMaxRadius; // 0x88(0x04)
	float GliderSpiralMinAngle; // 0x8c(0x04)
	float GliderSpiralMaxAngle; // 0x90(0x04)
	float GliderSpiralMinInterval; // 0x94(0x04)
	float GliderSpiralMaxInterval; // 0x98(0x04)
	float GliderSpiralProbability; // 0x9c(0x04)
	float GliderSerpentineMinAngle; // 0xa0(0x04)
	float GliderSerpentineMaxAngle; // 0xa4(0x04)
	float GliderSerpentineMinRadius; // 0xa8(0x04)
	float GliderSerpentineMaxRadius; // 0xac(0x04)
	float GliderSerpentineMinInterval; // 0xb0(0x04)
	float GliderSerpentineMaxInterval; // 0xb4(0x04)
	float GliderSerpentineMinPeriod; // 0xb8(0x04)
	float GliderSerpentineMaxPeriod; // 0xbc(0x04)
	float GliderSerpentineProbability; // 0xc0(0x04)
	float JumpOffMinAngle; // 0xc4(0x04)
	float JumpOffMaxAngle; // 0xc8(0x04)
	float MaxPatrolDistance; // 0xcc(0x04)
	float MaxPatrolDistanceRandomDeviation; // 0xd0(0x04)
	float WobbleProbability; // 0xd4(0x04)
	float MaxDelayBetweenWobblingMovement; // 0xd8(0x04)
	float MaxDelayBetweenWobblingMovementRandomDeviation; // 0xdc(0x04)
	bool bAllowSwimWobble; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float MaxWobblingDuration; // 0xe4(0x04)
	float MaxWobblingDurationRandomDeviation; // 0xe8(0x04)
	float MaxWobblingIntensity; // 0xec(0x04)
	float WobblingIntensityDeviation; // 0xf0(0x04)
	float MaxWobblingFrequency; // 0xf4(0x04)
	float WobblingFrequencyDeviation; // 0xf8(0x04)
	float WobblingStickToPathCorridorStrength; // 0xfc(0x04)
	float MaxAfterLaunchedPauseTime; // 0x100(0x04)
	float MaxAfterLaunchedFromVortexPauseTime; // 0x104(0x04)
	float AfterLaunchedPauseTimeDeviation; // 0x108(0x04)
	bool bSteerMovementWhenLaunched; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	float SteerMovementWhenLaunchedDirectionUpdateTime; // 0x110(0x04)
	float MaxReactionTimeToDangerZone; // 0x114(0x04)
	float MaxReactionTimeToDangerZoneDeviation; // 0x118(0x04)
	bool bLimitBlockingObstacleAngle; // 0x11c(0x01)
	bool bEnableSwimSprintJump; // 0x11d(0x01)
	char pad_11E[0x2]; // 0x11e(0x02)
	float SwimSprintJumpDelay; // 0x120(0x04)
	float SwimSprintJumpDelayDeviation; // 0x124(0x04)
	float SwimUnblockJumpHeightThreshold; // 0x128(0x04)
	bool bSwimSprintJumpNav2D; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	float TacticalSprintEvaluationMinTime; // 0x130(0x04)
	float TacticalSprintEvaluationMaxTime; // 0x134(0x04)
	float TacticalSprintMinTriggerChance; // 0x138(0x04)
	float TacticalSprintMaxTriggerChance; // 0x13c(0x04)
	float TacticalSprintMinTriggerChanceInUrgentMovement; // 0x140(0x04)
	float TacticalSprintMaxTriggerChanceInUrgentMovement; // 0x144(0x04)
	float TacticalSprintMaxSlopeAngle; // 0x148(0x04)
	float TacticalSprintMinPathTargetDistance; // 0x14c(0x04)
	float TacticalSprintMaxPathAlignmentAngle; // 0x150(0x04)
	float TacticalSprintMaxPathConeAngle; // 0x154(0x04)
	float TacticalSprintPathConeRearOffset; // 0x158(0x04)
	bool TacticalSprintUsageEnabled; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	float TacticalSprintJumpTriggerChance; // 0x160(0x04)
	float TacticalSprintJumpDelay; // 0x164(0x04)
	float TacticalSprintJumpDelayDeviation; // 0x168(0x04)
	float TacticalSprintJumpDelayInitialRatio; // 0x16c(0x04)
	struct FVector SlidingBoxExtent; // 0x170(0x18)
	float SlidingEnabled[0x4]; // 0x188(0x10)
	float SlidingEvaluationMinTime; // 0x198(0x04)
	float SlidingEvaluationMaxTime; // 0x19c(0x04)
	float SlidingTriggerChanceStyleMalus; // 0x1a0(0x04)
	float SlidingTriggerChanceStyleMalusRandomDeviation; // 0x1a4(0x04)
	float SlidingTriggerChanceFlat; // 0x1a8(0x04)
	float SlidingTriggerChanceLittleSlope; // 0x1ac(0x04)
	float SlidingTriggerChanceSteepSlope; // 0x1b0(0x04)
	float SlidingDuringUrgentMovementTriggerChanceFlat; // 0x1b4(0x04)
	float SlidingDuringUrgentMovementTriggerChanceLittleSlope; // 0x1b8(0x04)
	float SlidingDuringUrgentMovementTriggerChanceSteepSlope; // 0x1bc(0x04)
	float MinSlidingDuration; // 0x1c0(0x04)
	float SlidingCooldownMinTime; // 0x1c4(0x04)
	float SlidingCooldownMaxTime; // 0x1c8(0x04)
	float SlidingStopMinDelay; // 0x1cc(0x04)
	float SlidingStopMaxDelay; // 0x1d0(0x04)
	float SlidingMaxPathConeAngle; // 0x1d4(0x04)
	float SlidingMinPathTargetDistance; // 0x1d8(0x04)
	float SlidingAllowResumeFocusOnTargetTriggerChance; // 0x1dc(0x04)
	float MoveToRangeAttackMinOffset; // 0x1e0(0x04)
	float MoveToRangeAttackMaxOffset; // 0x1e4(0x04)
	float LKPMinOffset; // 0x1e8(0x04)
	float LKPMaxOffset; // 0x1ec(0x04)
	float SandTunnelJumpMinTime; // 0x1f0(0x04)
	float SandTunnelJumpMaxTime; // 0x1f4(0x04)
	float SandTunnelBurrowedAndHiddenChance; // 0x1f8(0x04)
	float SandTunnelBurrowedAndHiddenMinTime; // 0x1fc(0x04)
	float SandTunnelBurrowedAndHiddenMaxTime; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)
	struct FVector ZiplineOctreeBoxExtent; // 0x208(0x18)
	float ThresholdDistanceToRescanForZiplines; // 0x220(0x04)
	float CooldownBetweenZiplineUsages; // 0x224(0x04)
	float DistanceToAddToZiplineStartPosition; // 0x228(0x04)
	float RadiusFromZiplineEnterPointToLookAtExit; // 0x22c(0x04)
	bool ZiplineUsageEnabled; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct FDigestedBotKnockbackSettings DefaultKnockbackSettings; // 0x238(0x50)
	struct TArray<struct FDigestedBotKnockbackSettings> KnockbackSettingsSpecializations; // 0x288(0x10)
};

// Class FortniteAI.FortAthenaAIBotMovementSkillSet
// Size: 0x12b8 (Inherited: 0x30)
struct UFortAthenaAIBotMovementSkillSet : UFortAthenaAIBotSkillSet {
	struct FScalableFloat SlowDownDistance; // 0x30(0x28)
	struct FScalableFloat TraversalSpeedEstimation; // 0x58(0x28)
	struct FScalableFloat TraversalSpeedEstimationWithThreat; // 0x80(0x28)
	struct FScalableFloat GliderDeployMinAngle; // 0xa8(0x28)
	struct FScalableFloat GliderDeployMaxAngle; // 0xd0(0x28)
	struct FScalableFloat GliderNoiseMinDistance; // 0xf8(0x28)
	struct FScalableFloat GliderNoiseMaxDistance; // 0x120(0x28)
	struct FScalableFloat GliderNoiseMinDelay; // 0x148(0x28)
	struct FScalableFloat GliderNoiseMaxDelay; // 0x170(0x28)
	struct FScalableFloat GliderNoiseDistanceTreshold; // 0x198(0x28)
	struct FScalableFloat GliderStopRotationDistance; // 0x1c0(0x28)
	struct FScalableFloat GliderLandingDistance; // 0x1e8(0x28)
	struct FScalableFloat GliderRotationLerpDuration; // 0x210(0x28)
	struct FScalableFloat GliderBehaviorEnableFlag; // 0x238(0x28)
	struct FScalableFloat GliderBehaviorMinInterval; // 0x260(0x28)
	struct FScalableFloat GliderBehaviorMaxInterval; // 0x288(0x28)
	struct FScalableFloat GliderBehaviorMinRadius; // 0x2b0(0x28)
	struct FScalableFloat GliderBehaviorMaxRadius; // 0x2d8(0x28)
	struct FScalableFloat GliderBehaviorSurveyProbability; // 0x300(0x28)
	struct FScalableFloat GliderMovementTypeEnableFlag; // 0x328(0x28)
	struct FScalableFloat GliderLinearProbability; // 0x350(0x28)
	struct FScalableFloat GliderSpiralMinRadius; // 0x378(0x28)
	struct FScalableFloat GliderSpiralMaxRadius; // 0x3a0(0x28)
	struct FScalableFloat GliderSpiralMinAngle; // 0x3c8(0x28)
	struct FScalableFloat GliderSpiralMaxAngle; // 0x3f0(0x28)
	struct FScalableFloat GliderSpiralMinInterval; // 0x418(0x28)
	struct FScalableFloat GliderSpiralMaxInterval; // 0x440(0x28)
	struct FScalableFloat GliderSpiralProbability; // 0x468(0x28)
	struct FScalableFloat GliderSerpentineMinAngle; // 0x490(0x28)
	struct FScalableFloat GliderSerpentineMaxAngle; // 0x4b8(0x28)
	struct FScalableFloat GliderSerpentineMinRadius; // 0x4e0(0x28)
	struct FScalableFloat GliderSerpentineMaxRadius; // 0x508(0x28)
	struct FScalableFloat GliderSerpentineMinInterval; // 0x530(0x28)
	struct FScalableFloat GliderSerpentineMaxInterval; // 0x558(0x28)
	struct FScalableFloat GliderSerpentineMinPeriod; // 0x580(0x28)
	struct FScalableFloat GliderSerpentineMaxPeriod; // 0x5a8(0x28)
	struct FScalableFloat GliderSerpentineProbability; // 0x5d0(0x28)
	struct FScalableFloat JumpOffMinAngle; // 0x5f8(0x28)
	struct FScalableFloat JumpOffMaxAngle; // 0x620(0x28)
	struct FScalableFloat MaxPatrolDistance; // 0x648(0x28)
	struct FScalableFloat MaxPatrolDistanceRandomDeviation; // 0x670(0x28)
	struct FScalableFloat MoveToRangeAttackMinOffset; // 0x698(0x28)
	struct FScalableFloat MoveToRangeAttackMaxOffset; // 0x6c0(0x28)
	struct FScalableFloat LKPMinOffset; // 0x6e8(0x28)
	struct FScalableFloat LKPMaxOffset; // 0x710(0x28)
	struct FScalableFloat SandTunnelJumpMinTime; // 0x738(0x28)
	struct FScalableFloat SandTunnelJumpMaxTime; // 0x760(0x28)
	struct FScalableFloat SandTunnelBurrowedAndHiddenChance; // 0x788(0x28)
	struct FScalableFloat SandTunnelBurrowedAndHiddenMinTime; // 0x7b0(0x28)
	struct FScalableFloat SandTunnelBurrowedAndHiddenMaxTime; // 0x7d8(0x28)
	struct FScalableFloat WobblingProbability; // 0x800(0x28)
	struct FScalableFloat MaxDelayBetweenWobblingMovement; // 0x828(0x28)
	struct FScalableFloat MaxDelayBetweenWobblingMovementRandomDeviation; // 0x850(0x28)
	struct FScalableFloat MaxWobblingDuration; // 0x878(0x28)
	struct FScalableFloat MaxWobblingDurationRandomDeviation; // 0x8a0(0x28)
	struct FScalableFloat MaxWobblingIntensity; // 0x8c8(0x28)
	struct FScalableFloat WobblingIntensityDeviation; // 0x8f0(0x28)
	struct FScalableFloat MaxWobblingFrequency; // 0x918(0x28)
	struct FScalableFloat WobblingFrequencyDeviation; // 0x940(0x28)
	struct FScalableFloat WobblingStickToPathCorridorStrength; // 0x968(0x28)
	struct FScalableFloat LimitBlockingObstacleAngle; // 0x990(0x28)
	struct FScalableFloat MaxAfterLaunchedPauseTime; // 0x9b8(0x28)
	struct FScalableFloat MaxAfterLaunchedFromVortexPauseTime; // 0x9e0(0x28)
	struct FScalableFloat AfterLaunchedPauseTimeDeviation; // 0xa08(0x28)
	struct FScalableFloat SteerMovementWhenLaunched; // 0xa30(0x28)
	struct FScalableFloat SteerMovementWhenLaunchedDirectionUpdateTime; // 0xa58(0x28)
	struct FScalableFloat MaxReactionTimeToDangerZone; // 0xa80(0x28)
	struct FScalableFloat MaxReactionTimeToDangerZoneDeviation; // 0xaa8(0x28)
	struct FScalableFloat AllowSwimWobble; // 0xad0(0x28)
	struct FScalableFloat EnableSwimSprintJump; // 0xaf8(0x28)
	struct FScalableFloat SwimSprintJumpDelay; // 0xb20(0x28)
	struct FScalableFloat SwimSprintJumpDelayDeviation; // 0xb48(0x28)
	struct FScalableFloat SwimUnblockJumpHeightThreshold; // 0xb70(0x28)
	struct FScalableFloat SwimSprintJumpNav2D; // 0xb98(0x28)
	struct FScalableFloat TacticalSprintEvaluationMinTime; // 0xbc0(0x28)
	struct FScalableFloat TacticalSprintEvaluationMaxTime; // 0xbe8(0x28)
	struct FScalableFloat TacticalSprintMinTriggerChance; // 0xc10(0x28)
	struct FScalableFloat TacticalSprintMaxTriggerChance; // 0xc38(0x28)
	struct FScalableFloat TacticalSprintMinTriggerChanceInUrgentMovement; // 0xc60(0x28)
	struct FScalableFloat TacticalSprintMaxTriggerChanceInUrgentMovement; // 0xc88(0x28)
	struct FScalableFloat TacticalSprintMaxSlopeAngle; // 0xcb0(0x28)
	struct FScalableFloat TacticalSprintMinPathTargetDistance; // 0xcd8(0x28)
	struct FScalableFloat TacticalSprintMaxPathAlignmentAngle; // 0xd00(0x28)
	struct FScalableFloat TacticalSprintMaxPathConeAngle; // 0xd28(0x28)
	struct FScalableFloat TacticalSprintPathConeRearOffset; // 0xd50(0x28)
	struct FScalableFloat TacticalSprintUsageEnabled; // 0xd78(0x28)
	struct FScalableFloat TacticalSprintJumpTriggerChance; // 0xda0(0x28)
	struct FScalableFloat TacticalSprintJumpDelay; // 0xdc8(0x28)
	struct FScalableFloat TacticalSprintJumpDelayDeviation; // 0xdf0(0x28)
	struct FScalableFloat TacticalSprintJumpDelayInitialRatio; // 0xe18(0x28)
	struct FVector SlidingBoxExtent; // 0xe40(0x18)
	struct FScalableFloat SlidingEnabled[0x4]; // 0xe58(0xa0)
	struct FScalableFloat SlidingEvaluationMinTime; // 0xef8(0x28)
	struct FScalableFloat SlidingEvaluationMaxTime; // 0xf20(0x28)
	struct FScalableFloat SlidingTriggerChanceStyleMalus; // 0xf48(0x28)
	struct FScalableFloat SlidingTriggerChanceStyleMalusRandomDeviation; // 0xf70(0x28)
	struct FScalableFloat SlidingTriggerChanceFlat; // 0xf98(0x28)
	struct FScalableFloat SlidingTriggerChanceLittleSlope; // 0xfc0(0x28)
	struct FScalableFloat SlidingTriggerChanceSteepSlope; // 0xfe8(0x28)
	struct FScalableFloat SlidingDuringUrgentMovementTriggerChanceFlat; // 0x1010(0x28)
	struct FScalableFloat SlidingDuringUrgentMovementTriggerChanceLittleSlope; // 0x1038(0x28)
	struct FScalableFloat SlidingDuringUrgentMovementTriggerChanceSteepSlope; // 0x1060(0x28)
	struct FScalableFloat MinSlidingDuration; // 0x1088(0x28)
	struct FScalableFloat SlidingCooldownMinTime; // 0x10b0(0x28)
	struct FScalableFloat SlidingCooldownMaxTime; // 0x10d8(0x28)
	struct FScalableFloat SlidingStopMinDelay; // 0x1100(0x28)
	struct FScalableFloat SlidingStopMaxDelay; // 0x1128(0x28)
	struct FScalableFloat SlidingMaxPathConeAngle; // 0x1150(0x28)
	struct FScalableFloat SlidingMinPathTargetDistance; // 0x1178(0x28)
	struct FScalableFloat SlidingAllowResumeFocusOnTargetTriggerChance; // 0x11a0(0x28)
	struct FVector ZiplineOctreeBoxExtent; // 0x11c8(0x18)
	struct FScalableFloat ThresholdDistanceToRescanForZiplines; // 0x11e0(0x28)
	struct FScalableFloat CooldownBetweenZiplineUsages; // 0x1208(0x28)
	struct FScalableFloat DistanceToAddToZiplineStartPosition; // 0x1230(0x28)
	struct FScalableFloat RadiusFromZiplineEnterPointToLookAtExit; // 0x1258(0x28)
	struct FScalableFloat ZiplineUsageEnabled; // 0x1280(0x28)
	struct TArray<struct FBotKnockbackSettings> KnockbackSettings; // 0x12a8(0x10)
};

// Class FortniteAI.FortAthenaAIBotNameDataAsset
// Size: 0x90 (Inherited: 0x30)
struct UFortAthenaAIBotNameDataAsset : UDataAsset {
	struct TSoftObjectPtr<UDataTable> DefaultNameDataTable; // 0x30(0x28)
	struct TSoftObjectPtr<UDataTable> ChinaNameDataTable; // 0x58(0x28)
	struct TArray<struct FFortAthenaAIBotNameRegionData> RegionData; // 0x80(0x10)
};

// Class FortniteAI.FortAthenaAIBotPathFollowingComponent
// Size: 0x558 (Inherited: 0x328)
struct UFortAthenaAIBotPathFollowingComponent : UFortPathFollowingComponentBase {
	struct AFortAthenaAIBotController* BotController; // 0x328(0x08)
	struct ABuildingActor* HitBuilding; // 0x330(0x08)
	struct UFortAthenaAIBotUnstuckDigestedSkillSet* CachedUnstuckSkillSet; // 0x338(0x08)
	struct UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementSkillSet; // 0x340(0x08)
	struct UFortAthenaAIBotVehicleDigestedSkillSet* CachedVehicleSkillSet; // 0x348(0x08)
	char pad_350[0x208]; // 0x350(0x208)

	void HandlePawnTeleported(struct AFortPawn* TeleportedPawn); // Function FortniteAI.FortAthenaAIBotPathFollowingComponent.HandlePawnTeleported // (Final|Native|Public) // @ game+0x99b30d4
};

// Class FortniteAI.FortAthenaAIBotPerceptionDigestedSkillSet
// Size: 0x348 (Inherited: 0x30)
struct UFortAthenaAIBotPerceptionDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	float SightReactionTime; // 0x30(0x04)
	float SightRandomDeviation; // 0x34(0x04)
	char pad_38[0x28]; // 0x38(0x28)
	struct TArray<struct FDigestedSightReactionSpecialization> SightReactionSpecializations; // 0x60(0x10)
	float LoseSightTime; // 0x70(0x04)
	float LoseSightRandomDeviation; // 0x74(0x04)
	float SightSuspicionTime; // 0x78(0x04)
	float SightSuspicionRandomDeviation; // 0x7c(0x04)
	float EnemyMarkedReactionTime; // 0x80(0x04)
	float EnemyMarkedReactionRandomDeviation; // 0x84(0x04)
	float ChancesToHelpOnMarkedEnemy; // 0x88(0x04)
	float DamageReactionTime; // 0x8c(0x04)
	float DamageRandomDeviation; // 0x90(0x04)
	float HearingReactionTime; // 0x94(0x04)
	float HearingRandomDeviation; // 0x98(0x04)
	float MaxHearingLocationError; // 0x9c(0x04)
	float ObstacleDistanceOverrideTargetingSq; // 0xa0(0x04)
	float ObstacleForgetDistanceSq; // 0xa4(0x04)
	float ObstacleMinimumBlockingTime; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FFortAthenaAIBotDigestedTargetHeuristicSettings DefaultTargetHeuristicSettings; // 0xb0(0x188)
	struct TArray<struct FFortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization> TargetHeuristicsSettingsSpecializations; // 0x238(0x10)
	struct FSoundPerceptionDigestedSetting SoundSettings[0x7]; // 0x248(0x54)
	float AlertedAccumulatedLoudnessLimit; // 0x29c(0x04)
	float AlertedAccumulatedDamageLimit; // 0x2a0(0x04)
	float LKPAccumulatedLoudnessLimit; // 0x2a4(0x04)
	float EnemyMarkingDelay; // 0x2a8(0x04)
	float EnemyMarkingDelayRandomDeviation; // 0x2ac(0x04)
	float AdditionalMarkedEnemyLKPForgetTime; // 0x2b0(0x04)
	float AdditionalMarkedEnemyLKPForgetDistance; // 0x2b4(0x04)
	struct FAlertLevelInfo AlertLevelInfos[0x4]; // 0x2b8(0x40)
	float ProjectileThreatForgetTime; // 0x2f8(0x04)
	struct FTrapPerceptionSettings TrapPerceptionSettings; // 0x2fc(0x14)
	bool bStealthMeterEnable; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	float StealthMeterThreshold; // 0x314(0x04)
	struct FScalableFloat StealthMeterIncreaseSpeed; // 0x318(0x28)
	float StealthMeterDecreaseSpeed; // 0x340(0x04)
	bool bStealthMeterAllowSharedTarget; // 0x344(0x01)
	bool bStealthMeterForceLKPWhenDamagedAndThreatened; // 0x345(0x01)
	char pad_346[0x2]; // 0x346(0x02)
};

// Class FortniteAI.FortAthenaAIBotPerceptionSkillSet
// Size: 0xcb8 (Inherited: 0x30)
struct UFortAthenaAIBotPerceptionSkillSet : UFortAthenaAIBotSkillSet {
	struct FScalableFloat SightReactionTime; // 0x30(0x28)
	struct FScalableFloat SightRandomDeviation; // 0x58(0x28)
	struct FScalableFloat SightRandomAddition; // 0x80(0x28)
	struct TArray<struct FSightReactionSpecialization> SightReactionSpecializations; // 0xa8(0x10)
	struct FScalableFloat LoseSightTime; // 0xb8(0x28)
	struct FScalableFloat LoseSightRandomDeviation; // 0xe0(0x28)
	struct FScalableFloat SightSuspicionTime; // 0x108(0x28)
	struct FScalableFloat SightSuspicionRandomDeviation; // 0x130(0x28)
	struct FScalableFloat EnemyMarkedReactionTime; // 0x158(0x28)
	struct FScalableFloat EnemyMarkedReactionRandomDeviation; // 0x180(0x28)
	struct FScalableFloat ChancesToHelpOnMarkedEnemy; // 0x1a8(0x28)
	struct FScalableFloat DamageReactionTime; // 0x1d0(0x28)
	struct FScalableFloat DamageRandomDeviation; // 0x1f8(0x28)
	struct FScalableFloat HearingReactionTime; // 0x220(0x28)
	struct FScalableFloat HearingRandomDeviation; // 0x248(0x28)
	struct FScalableFloat MaxHearingLocationError; // 0x270(0x28)
	struct FFortAthenaAIBotTargetHeuristicSettings DefaultTargetHeuristicSettings; // 0x298(0x320)
	struct TArray<struct FFortAthenaAIBotTargetHeuristicSettingsSpecialization> TargetHeuristicSettingsSpecializations; // 0x5b8(0x10)
	struct FScalableFloat ObstacleDistanceOverrideTargeting; // 0x5c8(0x28)
	struct FScalableFloat ObstacleForgetDistance; // 0x5f0(0x28)
	struct FScalableFloat ObstacleMinimumBlockingTime; // 0x618(0x28)
	struct FSoundPerceptionSetting SoundSettings[0x7]; // 0x640(0x348)
	struct FScalableFloat AlertedAccumulatedLoudnessLimit; // 0x988(0x28)
	struct FScalableFloat AlertedAccumulatedDamageLimit; // 0x9b0(0x28)
	struct FScalableFloat LKPAccumulatedLoudnessLimit; // 0x9d8(0x28)
	struct FScalableFloat EnemyMarkingDelay; // 0xa00(0x28)
	struct FScalableFloat EnemyMarkingDelayRandomDeviation; // 0xa28(0x28)
	struct FScalableFloat AdditionalMarkedEnemyLKPForgetTime; // 0xa50(0x28)
	struct FScalableFloat AdditionalMarkedEnemyLKPForgetDistance; // 0xa78(0x28)
	struct TArray<struct UFortAthenaAIBotAlertLevelConfig*> AlertLevelConfigs; // 0xaa0(0x10)
	struct FScalableFloat ProjectileThreatForgetTime; // 0xab0(0x28)
	struct FScalableFloat TrapDetectionDistanceMax; // 0xad8(0x28)
	struct FScalableFloat TrapDetectionDistanceMaxDeviation; // 0xb00(0x28)
	struct FScalableFloat TrapDetectionChanceWhenPerpendicular; // 0xb28(0x28)
	struct FScalableFloat TrapDetectionChanceWhenParallel; // 0xb50(0x28)
	struct FScalableFloat TrapDetectionEvaluationAngleThreshold; // 0xb78(0x28)
	struct FScalableFloat TrapDetectionAutomaticIfWithinCreationTime; // 0xba0(0x28)
	struct FScalableFloat StealthMeterEnable; // 0xbc8(0x28)
	struct FScalableFloat StealthMeterThreshold; // 0xbf0(0x28)
	struct FScalableFloat StealthMeterIncreaseSpeed; // 0xc18(0x28)
	struct FScalableFloat StealthMeterDecreaseSpeed; // 0xc40(0x28)
	struct FScalableFloat StealthMeterAllowSharedTarget; // 0xc68(0x28)
	struct FScalableFloat bStealthMeterForceLKPWhenDamagedAndThreatened; // 0xc90(0x28)
};

// Class FortniteAI.FortAthenaAIBotPlayStyleDigestedSkillSet
// Size: 0x98 (Inherited: 0x30)
struct UFortAthenaAIBotPlayStyleDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	struct FScalableFloat AggressiveTowardsThreatWeight; // 0x30(0x28)
	struct FScalableFloat DefensiveTowardsThreatWeight; // 0x58(0x28)
	enum class EDBNOPlayStyle DBNOPlayStyle; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<struct FPlaystyleSwitchToAggressiveDataDigested> ChangeToAggressiveData; // 0x88(0x10)
};

// Class FortniteAI.FortAthenaAIBotPlayStyleSkillSet
// Size: 0x108 (Inherited: 0x30)
struct UFortAthenaAIBotPlayStyleSkillSet : UFortAthenaAIBotSkillSet {
	struct FScalableFloat AggressiveTowardsThreatWeight; // 0x30(0x28)
	struct FScalableFloat DefensiveTowardsThreatWeight; // 0x58(0x28)
	struct FScalableFloat PassiveDBNOPlayStyle; // 0x80(0x28)
	struct FScalableFloat ThirstyDBNOPlayStyle; // 0xa8(0x28)
	struct FScalableFloat PassiveOnHumansDBNOPlayStyle; // 0xd0(0x28)
	struct TArray<struct FPlaystyleSwitchToAggressiveData> ChangeToAggressiveData; // 0xf8(0x10)
};

// Class FortniteAI.FortAthenaAIBotPropagateAwarenessDigestedSkillSet
// Size: 0x38 (Inherited: 0x30)
struct UFortAthenaAIBotPropagateAwarenessDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	float PropagationMaxDistanceSQ; // 0x30(0x04)
	float CosineFOV; // 0x34(0x04)
};

// Class FortniteAI.FortAthenaAIBotPropagateAwarenessSkillSet
// Size: 0x80 (Inherited: 0x30)
struct UFortAthenaAIBotPropagateAwarenessSkillSet : UFortAthenaAIBotSkillSet {
	struct FScalableFloat PropagationMaxDistance; // 0x30(0x28)
	struct FScalableFloat FOV; // 0x58(0x28)
};

// Class FortniteAI.FortAthenaAIBotRangeAttackDigestedSkillSet
// Size: 0xd8 (Inherited: 0x30)
struct UFortAthenaAIBotRangeAttackDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	struct AFortWeapon* CachedWeaponUsedToCalculateSkillSet; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct TArray<struct FDigestedRangedWeaponSkillCategory> RangedWeaponCategorySkills; // 0x40(0x10)
	float ChangeWeaponDelay; // 0x50(0x04)
	float ChangeWeaponDelayDeviation; // 0x54(0x04)
	float SwapInsteadOfReloadOdds; // 0x58(0x04)
	float SwapInsteadOfReloadRangeMax; // 0x5c(0x04)
	struct FGameplayTagContainer SwapInsteadOfReloadIgnoredWeaponTags; // 0x60(0x20)
	float InterruptReloadToShootOdds; // 0x80(0x04)
	float ReloadPartiallyEmptyWeaponsOdds; // 0x84(0x04)
	float UseCoverOdds; // 0x88(0x04)
	float CoverDistanceMin; // 0x8c(0x04)
	struct FScalableFloat CoverDistanceMaxCurve; // 0x90(0x28)
	float CoverDistanceToTargetMin; // 0xb8(0x04)
	float CoverSearchCooldown; // 0xbc(0x04)
	float PostCoverCooldownMin; // 0xc0(0x04)
	float PostCoverCooldownMax; // 0xc4(0x04)
	bool bCanFindShootingPositionAround; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	int32_t CoverPeekCountMin; // 0xcc(0x04)
	int32_t CoverPeekCountMax; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class FortniteAI.FortAthenaAIBotRangeAttackSkillSet
// Size: 0x2e0 (Inherited: 0x30)
struct UFortAthenaAIBotRangeAttackSkillSet : UFortAthenaAIBotSkillSet {
	struct TArray<struct FRangedWeaponSkillCategory> RangedWeaponSkills; // 0x30(0x10)
	struct FScalableFloat ChangeWeaponDelay; // 0x40(0x28)
	struct FScalableFloat ChangeWeaponDelayDeviation; // 0x68(0x28)
	struct FScalableFloat SwapInsteadOfReloadOdds; // 0x90(0x28)
	struct FScalableFloat SwapInsteadOfReloadRangeMax; // 0xb8(0x28)
	struct FGameplayTagContainer SwapInsteadOfReloadIgnoredWeaponTags; // 0xe0(0x20)
	struct FScalableFloat InterruptReloadToShootOdds; // 0x100(0x28)
	struct FScalableFloat ReloadPartiallyEmptyWeaponsOdds; // 0x128(0x28)
	struct FScalableFloat UseCoverOdds; // 0x150(0x28)
	struct FScalableFloat CoverDistanceMin; // 0x178(0x28)
	struct FScalableFloat CoverDistanceMaxCurve; // 0x1a0(0x28)
	struct FScalableFloat CoverDistanceToTargetMin; // 0x1c8(0x28)
	struct FScalableFloat CoverSearchCooldown; // 0x1f0(0x28)
	struct FScalableFloat PostCoverCooldownMin; // 0x218(0x28)
	struct FScalableFloat PostCoverCooldownMax; // 0x240(0x28)
	struct FScalableFloat CanFindShootingPositionAround; // 0x268(0x28)
	struct FScalableFloat CoverPeekCountMin; // 0x290(0x28)
	struct FScalableFloat CoverPeekCountMax; // 0x2b8(0x28)
};

// Class FortniteAI.FortAthenaAIBotReviveDigestedSkillSet
// Size: 0x40 (Inherited: 0x30)
struct UFortAthenaAIBotReviveDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	float AllyEvaluationTime; // 0x30(0x04)
	float AllyEvaluationTimeDeviation; // 0x34(0x04)
	float CooldownOnCancel; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class FortniteAI.FortAthenaAIBotReviveSkillSet
// Size: 0xa8 (Inherited: 0x30)
struct UFortAthenaAIBotReviveSkillSet : UFortAthenaAIBotSkillSet {
	struct FScalableFloat AllyEvaluationTime; // 0x30(0x28)
	struct FScalableFloat AllyEvaluationTimeDeviation; // 0x58(0x28)
	struct FScalableFloat CooldownOnCancel; // 0x80(0x28)
};

// Class FortniteAI.FortAthenaAISpawnerData
// Size: 0xe8 (Inherited: 0x48)
struct UFortAthenaAISpawnerData : UFortAthenaSpawnerDataBase {
	struct TArray<struct UFortAthenaAISpawnerDataComponent*> ClassComponentList; // 0x48(0x10)
	struct UFortAthenaAISpawnerDataComponent_InventoryBase* InventoryComponent; // 0x58(0x08)
	struct UFortAthenaAISpawnerDataComponent_SpawnParamsBase* SpawnParamsComponent; // 0x60(0x08)
	struct UFortAthenaAISpawnerDataComponent_BehaviorBase* BehaviorComponent; // 0x68(0x08)
	struct UFortAthenaAISpawnerDataComponent_AffiliationBase* AffiliationComponent; // 0x70(0x08)
	struct UFortAthenaAISpawnerDataComponent_LODBase* LODComponent; // 0x78(0x08)
	struct UFortAthenaAISpawnerDataComponent_DebugBase* DebugComponent; // 0x80(0x08)
	struct UFortAthenaAISpawnerDataComponent_AnalyticBase* AnalyticComponent; // 0x88(0x08)
	struct UFortAthenaAISpawnerDataComponent_GameplayBase* GameplayComponent; // 0x90(0x08)
	struct UFortAthenaAISpawnerDataComponent_ConversationBase* ConversationComponent; // 0x98(0x08)
	struct UFortAthenaAISpawnerDataComponent_VoiceBase* VoiceComponent; // 0xa0(0x08)
	struct UFortAthenaAISpawnerDataComponent_CosmeticBase* CosmeticComponent; // 0xa8(0x08)
	struct UFortAthenaAISpawnerDataComponent_ChanceEncounterBase* ChanceEncounterComponent; // 0xb0(0x08)
	struct UFortAthenaAISpawnerDataComponent_OptimBase* OptimizationComponent; // 0xb8(0x08)
	struct UFortAthenaAISpawnerDataComponent_GameplayAbilityBase* GameplayAbilityComponent; // 0xc0(0x08)
	struct UFortAthenaAISpawnerDataComponent_PerceptionBase* PerceptionComponent; // 0xc8(0x08)
	struct UFortAthenaAISpawnerDataComponent_SmartObjectBase* SmartObjectComponent; // 0xd0(0x08)
	struct UFortAthenaAISpawnerDataComponent_GroupBase* GroupComponent; // 0xd8(0x08)
	struct UFortAthenaAISpawnerDataComponent_ScriptBase* ScriptComponent; // 0xe0(0x08)

	struct UFortAthenaAISpawnerDataComponent_VoiceBase* GetVoiceComponent(); // Function FortniteAI.FortAthenaAISpawnerData.GetVoiceComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b68f4
	struct UFortAthenaAISpawnerDataComponent_SpawnParamsBase* GetSpawnParamsComponent(); // Function FortniteAI.FortAthenaAISpawnerData.GetSpawnParamsComponent // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b677c
	struct UFortAthenaAISpawnerDataComponent_SmartObjectBase* GetSmartObjectComponent(); // Function FortniteAI.FortAthenaAISpawnerData.GetSmartObjectComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b6740
	struct UFortAthenaAISpawnerDataComponent_ScriptBase* GetScriptComponent(); // Function FortniteAI.FortAthenaAISpawnerData.GetScriptComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b6704
	struct UFortAthenaAISpawnerDataComponent_PerceptionBase* GetPerceptionComponent(); // Function FortniteAI.FortAthenaAISpawnerData.GetPerceptionComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b66c8
	struct UFortAthenaAISpawnerDataComponent_OptimBase* GetOptimizationComponent(); // Function FortniteAI.FortAthenaAISpawnerData.GetOptimizationComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b65c8
	struct UFortAthenaAISpawnerDataComponent_InventoryBase* GetInventoryComponent(); // Function FortniteAI.FortAthenaAISpawnerData.GetInventoryComponent // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b651c
	struct UFortAthenaAISpawnerDataComponent_GroupBase* GetGroupComponent(); // Function FortniteAI.FortAthenaAISpawnerData.GetGroupComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b64e0
	struct UFortAthenaAISpawnerDataComponent_GameplayBase* GetGameplayComponent(); // Function FortniteAI.FortAthenaAISpawnerData.GetGameplayComponent // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b64a4
	struct UFortAthenaAISpawnerDataComponent_GameplayAbilityBase* GetGameplayAbilityComponent(); // Function FortniteAI.FortAthenaAISpawnerData.GetGameplayAbilityComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b6468
	struct UFortAthenaAISpawnerDataComponent_DebugBase* GetDebugComponent(); // Function FortniteAI.FortAthenaAISpawnerData.GetDebugComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b6410
	struct UFortAthenaAISpawnerDataComponent_CosmeticBase* GetCosmeticComponent(); // Function FortniteAI.FortAthenaAISpawnerData.GetCosmeticComponent // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b63d4
	struct UFortAthenaAISpawnerDataComponent_ConversationBase* GetConversationComponent(); // Function FortniteAI.FortAthenaAISpawnerData.GetConversationComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b6398
	struct UFortAthenaAISpawnerDataComponent_ChanceEncounterBase* GetChanceEncounterComponent(); // Function FortniteAI.FortAthenaAISpawnerData.GetChanceEncounterComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b635c
	struct UFortAthenaAISpawnerDataComponent_BehaviorBase* GetBehaviorComponent(); // Function FortniteAI.FortAthenaAISpawnerData.GetBehaviorComponent // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b6324
	struct UFortAthenaAISpawnerDataComponent_AnalyticBase* GetAnalyticComponent(); // Function FortniteAI.FortAthenaAISpawnerData.GetAnalyticComponent // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x273be80
	struct UFortAthenaAISpawnerDataComponent_LODBase* GetAILODComponent(); // Function FortniteAI.FortAthenaAISpawnerData.GetAILODComponent // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b6298
	struct UFortAthenaAISpawnerDataComponent_AffiliationBase* GetAffiliationComponent(); // Function FortniteAI.FortAthenaAISpawnerData.GetAffiliationComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b62d0
	struct UFortAthenaAISpawnerDataComponentList* CreateComponentListFromClass(struct UFortAthenaAISpawnerData* AISpawnerDataClass, struct UObject* OuterObject); // Function FortniteAI.FortAthenaAISpawnerData.CreateComponentListFromClass // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x99b5fcc
	struct UFortAthenaAISpawnerDataComponentList* CreateComponentList(struct UObject* OuterObject); // Function FortniteAI.FortAthenaAISpawnerData.CreateComponentList // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b5f3c
};

// Class FortniteAI.FortAthenaAIBotSpawnerData
// Size: 0x110 (Inherited: 0xe8)
struct UFortAthenaAIBotSpawnerData : UFortAthenaAISpawnerData {
	struct UFortAthenaAISpawnerDataComponent_SkillsetBase* SkillSetComponent; // 0xe8(0x08)
	struct UFortAthenaAISpawnerDataComponent_ConstructionBase* ConstructionComponent; // 0xf0(0x08)
	struct UFortAthenaAISpawnerDataComponent_VehicleBase* VehicleComponent; // 0xf8(0x08)
	struct UFortAthenaAISpawnerDataComponent_CoverBase* CoverComponent; // 0x100(0x08)
	struct UFortAthenaAISpawnerDataComponent_PerksBase* PerksComponent; // 0x108(0x08)

	struct UFortAthenaAISpawnerDataComponent_VehicleBase* GetVehicleComponent(); // Function FortniteAI.FortAthenaAIBotSpawnerData.GetVehicleComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b39b4
	struct UFortAthenaAISpawnerDataComponent_SkillsetBase* GetSkillSetComponent(); // Function FortniteAI.FortAthenaAIBotSpawnerData.GetSkillSetComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b3978
	struct UFortAthenaAISpawnerDataComponent_PerksBase* GetPerksComponent(); // Function FortniteAI.FortAthenaAIBotSpawnerData.GetPerksComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b393c
	struct UFortAthenaAISpawnerDataComponent_CoverBase* GetCoverComponent(); // Function FortniteAI.FortAthenaAIBotSpawnerData.GetCoverComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b3900
	struct UFortAthenaAISpawnerDataComponent_ConstructionBase* GetConstructionComponent(); // Function FortniteAI.FortAthenaAIBotSpawnerData.GetConstructionComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b38c4
};

// Class FortniteAI.FortAthenaAIBotUnstuckDigestedSkillSet
// Size: 0x80 (Inherited: 0x30)
struct UFortAthenaAIBotUnstuckDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	bool bCanTeleportWhenStuck; // 0x30(0x01)
	bool bCanTeleportWhenStuckWithPlayerAround; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float MaxDistanceSqToPlayerToTeleport; // 0x34(0x04)
	float PlayerToPhoebeAngleVisibilityConeToTeleport; // 0x38(0x04)
	float TimeBetweenPartialPathToConsiderPathStuck; // 0x3c(0x04)
	int32_t ConsecutivePartialPathCountToConsiderPathStuck; // 0x40(0x04)
	float DistanceSqBetweenBlockedPathToConsiderPathStuck; // 0x44(0x04)
	float DistanceBetweenSampleToConsiderPathStuckInWater; // 0x48(0x04)
	float TimeBetweenSampleToConsiderPathStuckInWater; // 0x4c(0x04)
	float DistanceBetweenSampleToConsiderPathStuckOnGround; // 0x50(0x04)
	float TimeBetweenSampleToConsiderPathStuckOnGround; // 0x54(0x04)
	int32_t ConsecutiveBlockedPathCountToConsiderPathStuck; // 0x58(0x04)
	int32_t MaxSafeZoneIndexToAllowTeleport; // 0x5c(0x04)
	float TimeToBreakBlockingDoor; // 0x60(0x04)
	float TimeToCloseBlockingDoor; // 0x64(0x04)
	float RiverbedObstacleCollisionNormalThreshold; // 0x68(0x04)
	bool bCanUseSteeringWhenStuckOnIsolatedIsland; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	int32_t MaxSteeringDirectionAttempts; // 0x70(0x04)
	float SteeringAttemptDuration; // 0x74(0x04)
	float EvaluateIsolatedIslandSteeringTime; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class FortniteAI.FortAthenaAIBotUnstuckSkillSet
// Size: 0x350 (Inherited: 0x30)
struct UFortAthenaAIBotUnstuckSkillSet : UFortAthenaAIBotSkillSet {
	struct FScalableFloat CanTeleportWhenStuck; // 0x30(0x28)
	struct FScalableFloat CanTeleportWhenStuckWithPlayerAround; // 0x58(0x28)
	struct FScalableFloat MaxDistanceToPlayerToTeleport; // 0x80(0x28)
	struct FScalableFloat PlayerToPhoebeAngleVisibilityConeToTeleport; // 0xa8(0x28)
	struct FScalableFloat MaxSafeZoneIndexToAllowTeleport; // 0xd0(0x28)
	struct FScalableFloat TimeToCloseBlockingDoor; // 0xf8(0x28)
	struct FScalableFloat TimeToBreakBlockingDoor; // 0x120(0x28)
	struct FScalableFloat RiverbedObstacleCollisionNormalThreshold; // 0x148(0x28)
	struct FScalableFloat CanUseSteeringWhenStuckOnIsolatedIsland; // 0x170(0x28)
	struct FScalableFloat MaxSteeringDirectionAttempts; // 0x198(0x28)
	struct FScalableFloat SteeringAttemptDuration; // 0x1c0(0x28)
	struct FScalableFloat EvaluateIsolatedIslandSteeringTime; // 0x1e8(0x28)
	struct FScalableFloat TimeBetweenPartialPathToConsiderPathStuck; // 0x210(0x28)
	struct FScalableFloat ConsecutivePartialPathCountToConsiderPathStuck; // 0x238(0x28)
	struct FScalableFloat DistanceBetweenSampleToConsiderPathStuckInWater; // 0x260(0x28)
	struct FScalableFloat TimeBetweenSampleToConsiderPathStuckInWater; // 0x288(0x28)
	struct FScalableFloat DistanceBetweenSampleToConsiderPathStuckOnGround; // 0x2b0(0x28)
	struct FScalableFloat TimeBetweenSampleToConsiderPathStuckOnGround; // 0x2d8(0x28)
	struct FScalableFloat DistanceBetweenBlockedPathToConsiderPathStuck; // 0x300(0x28)
	struct FScalableFloat ConsecutiveBlockedPathCountToConsiderPathStuck; // 0x328(0x28)
};

// Class FortniteAI.FortAthenaAIBotVehicleDigestedSkillSet
// Size: 0xd8 (Inherited: 0x30)
struct UFortAthenaAIBotVehicleDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	struct FDigestedVehicleDriving NoMatchingVehicleDriving; // 0x30(0x98)
	struct TArray<struct FDigestedVehicleDrivingCategory> VehicleDrivingArray; // 0xc8(0x10)
};

// Class FortniteAI.FortAthenaAIBotVehicleSkillSet
// Size: 0x320 (Inherited: 0x30)
struct UFortAthenaAIBotVehicleSkillSet : UFortAthenaAIBotSkillSet {
	struct FVehicleDriving NoMatchingVehicleDriving; // 0x30(0x2e0)
	struct TArray<struct FVehicleDrivingCategory> VehicleDrivingArray; // 0x310(0x10)
};

// Class FortniteAI.FortAthenaAIBotWarmupDigestedSkillSet
// Size: 0x40 (Inherited: 0x30)
struct UFortAthenaAIBotWarmupDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	float WarmupPlayEmoteBehaviorWeight; // 0x30(0x04)
	float WarmupLootAndShootBehaviorWeight; // 0x34(0x04)
	float WarmupIdleBehaviorWeight; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class FortniteAI.FortAthenaAIBotWarmupSkillSet
// Size: 0xa8 (Inherited: 0x30)
struct UFortAthenaAIBotWarmupSkillSet : UFortAthenaAIBotSkillSet {
	struct FScalableFloat WarmupPlayEmoteBehaviorWeight; // 0x30(0x28)
	struct FScalableFloat WarmupLootAndShootBehaviorWeight; // 0x58(0x28)
	struct FScalableFloat WarmupIdleBehaviorWeight; // 0x80(0x28)
};

// Class FortniteAI.FortAthenaAIBot_EQSQueryContext_CurrentTarget
// Size: 0x28 (Inherited: 0x28)
struct UFortAthenaAIBot_EQSQueryContext_CurrentTarget : UEnvQueryContext {
};

// Class FortniteAI.FortAthenaAIControllerInterface
// Size: 0x28 (Inherited: 0x28)
struct UFortAthenaAIControllerInterface : UInterface {
};

// Class FortniteAI.FortAthenaAICoverComponent
// Size: 0xd8 (Inherited: 0xa0)
struct UFortAthenaAICoverComponent : UControllerComponent {
	struct UNavigationQueryFilter* CoverPositionFilterClass; // 0xa0(0x08)
	struct FVector CoverBoxExtent; // 0xa8(0x18)
	float CoverOffset; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct AAIController* CachedController; // 0xc8(0x08)
	struct TWeakObjectPtr<struct ABuildingActor> LastBuildingActorUsedForCover; // 0xd0(0x08)
};

// Class FortniteAI.BlackboardKeyAccessValidator
// Size: 0x28 (Inherited: 0x28)
struct UBlackboardKeyAccessValidator : UObject {
};

// Class FortniteAI.FortAthenaAIEvaluatorComponent
// Size: 0xc0 (Inherited: 0xa0)
struct UFortAthenaAIEvaluatorComponent : UActorComponent {
	struct TArray<struct FMovementEvaluatorInfo> MovementEvaluatorInfo; // 0xa0(0x10)
	struct TArray<struct UFortAthenaAIEvaluator*> AIEvaluators; // 0xb0(0x10)
};

// Class FortniteAI.FortAthenaAIEvaluator_DormantUntilPhase
// Size: 0xe8 (Inherited: 0x58)
struct UFortAthenaAIEvaluator_DormantUntilPhase : UFortAthenaAIEvaluator {
	struct FScalableFloat bIsEnabled; // 0x58(0x28)
	bool bDisabledInCreative; // 0x80(0x01)
	enum class EAthenaGamePhaseStep RequiredGamePhaseStep; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct FScalableFloat DelayAfterPhase; // 0x88(0x28)
	struct FScalableFloat RandomDeviationAfterPhase; // 0xb0(0x28)
	char pad_D8[0x10]; // 0xd8(0x10)

	void HandleGamePhaseStepChanged(struct TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep); // Function FortniteAI.FortAthenaAIEvaluator_DormantUntilPhase.HandleGamePhaseStepChanged // (Final|Native|Private|HasOutParms) // @ game+0x99b39f0
};

// Class FortniteAI.FortAthenaAIEvaluator_FollowGroupLeader
// Size: 0x240 (Inherited: 0x218)
struct UFortAthenaAIEvaluator_FollowGroupLeader : UFortAthenaAIBotEvaluator_Movement {
	struct FName FollowGroupLeaderStatusKeyName; // 0x218(0x04)
	struct FName FollowGroupLeaderMovementStateKeyName; // 0x21c(0x04)
	struct FName FollowGroupLeaderDestinationKeyName; // 0x220(0x04)
	struct FName TooFarFromLeaderKeyName; // 0x224(0x04)
	char pad_228[0x8]; // 0x228(0x08)
	struct AAIController* CachedAIController; // 0x230(0x08)
	struct UFortPawnComponent_AIGroup* CachedAIGroupComponent; // 0x238(0x08)
};

// Class FortniteAI.FortAthenaAIEvaluator_Leash
// Size: 0xb0 (Inherited: 0x88)
struct UFortAthenaAIEvaluator_Leash : UFortAthenaAIBotEvaluator {
	struct FName GoalIsInsideLeashKeyName; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FName AIIsInsideLeashKeyName; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct AAIController* CachedAIController; // 0x98(0x08)
	struct UFortAthenaLeashComponent* CachedLeashComponent; // 0xa0(0x08)
	struct UFortAIGoalComponent* CachedAIGoalComponent; // 0xa8(0x08)
};

// Class FortniteAI.FortAthenaAIEvaluator_NearbyActorsPerception
// Size: 0x210 (Inherited: 0x58)
struct UFortAthenaAIEvaluator_NearbyActorsPerception : UFortAthenaAIEvaluator {
	struct FName FoundNearbyActorKeyName; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FScalableFloat MinimumUpdateInterval; // 0x60(0x28)
	int32_t RequiredTypes; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FScalableFloat MinimumDistanceToActors; // 0x90(0x28)
	struct TArray<enum class ETeamAttitude> RequiredAttitudes; // 0xb8(0x10)
	bool bRequireLoS; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FGameplayTagQuery RequiredTagsQuery; // 0xd0(0x48)
	char pad_118[0xf8]; // 0x118(0xf8)
};

// Class FortniteAI.FortAthenaAIEvaluator_SpeechBubble
// Size: 0x210 (Inherited: 0x210)
struct UFortAthenaAIEvaluator_SpeechBubble : UFortAthenaAIEvaluator_NearbyActorsPerception {
	struct UFortPawnComponent_SpeechBubble* CachedSpeechBubbleComponent; // 0x208(0x08)
};

// Class FortniteAI.FortAthenaAILeashVolume
// Size: 0x2e0 (Inherited: 0x2c0)
struct AFortAthenaAILeashVolume : AVolume {
	struct FVector ProjectExtent; // 0x2c0(0x18)
	float IsInsideTolerance; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
};

// Class FortniteAI.FortAthenaAILODSettingsContainer
// Size: 0xc8 (Inherited: 0x28)
struct UFortAthenaAILODSettingsContainer : UObject {
	struct TMap<ClassPtrProperty, struct TScriptInterface<IFortAthenaAILODSettings>> ClassToSettings; // 0x28(0x50)
	struct TArray<struct UFortAthenaAILODSettings_AIEvaluator*> LODSettings_AIEvaluators; // 0x78(0x10)
	struct TArray<struct UFortAthenaAILODSettings_CharacterMovement*> LODSettings_CharacterMovement; // 0x88(0x10)
	struct TArray<struct UFortAthenaAILODSettings_FortWeaponRanged*> LODSettings_FortWeaponRanged; // 0x98(0x10)
	struct TArray<struct UFortAthenaAILODSettings_GenericTickingObject*> LODSettings_GenericTickingObject; // 0xa8(0x10)
	struct UFortAIDirectorLODAIConfig* FortAIDirectorLODConfig; // 0xb8(0x08)
	struct UFortAIDirectorLODAIConfig* FortAIDirectorObjectLODConfig; // 0xc0(0x08)
};

// Class FortniteAI.FortAthenaAILODComponent
// Size: 0xe8 (Inherited: 0xa0)
struct UFortAthenaAILODComponent : UActorComponent {
	enum class EFortAILODLevel CurrentFortAILODLevel; // 0xa0(0x01)
	char pad_A1[0x2]; // 0xa1(0x02)
	char pad_A3_0 : 1; // 0xa3(0x01)
	char bCouldBeVisibleToPlayers : 1; // 0xa3(0x01)
	char pad_A3_2 : 6; // 0xa3(0x01)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct AFortPawn* CachedFortPawn; // 0xa8(0x08)
	struct UFortAthenaAILODSettingsContainer* AILODSettingsContainer; // 0xb0(0x08)
	char pad_B8[0x30]; // 0xb8(0x30)

	void OnRep_CurrentFortAILODLevel(); // Function FortniteAI.FortAthenaAILODComponent.OnRep_CurrentFortAILODLevel // (Final|Native|Private) // @ game+0x24d9420
};

// Class FortniteAI.FortAthenaAILODSettings
// Size: 0x28 (Inherited: 0x28)
struct UFortAthenaAILODSettings : UInterface {
};

// Class FortniteAI.FortAthenaAILODSettings_AIEvaluator
// Size: 0x2b0 (Inherited: 0x28)
struct UFortAthenaAILODSettings_AIEvaluator : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct UFortAthenaAIEvaluator*> SystemClasses; // 0x30(0x10)
	struct FFortAILODSetting_AIEvaluator BelowLowerLODSettings; // 0x40(0x68)
	struct FFortAILODSetting_AIEvaluator LowerLODSettings; // 0xa8(0x68)
	struct FFortAILODSetting_AIEvaluator AboveLowerLODSettings; // 0x110(0x68)
	struct FFortAILODSetting_AIEvaluator BelowNormalLODSettings; // 0x178(0x68)
	struct FFortAILODSetting_AIEvaluator NormalLODSettings; // 0x1e0(0x68)
	struct FFortAILODSetting_AIEvaluator AboveNormalLODSettings; // 0x248(0x68)
};

// Class FortniteAI.FortAthenaAILODSettings_CharacterMovement
// Size: 0x970 (Inherited: 0x28)
struct UFortAthenaAILODSettings_CharacterMovement : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct UFortMovementComp_Character*> SystemClasses; // 0x30(0x10)
	struct FFortAILODSetting_CharacterMovement BelowLowerLODSettings; // 0x40(0x188)
	struct FFortAILODSetting_CharacterMovement LowerLODSettings; // 0x1c8(0x188)
	struct FFortAILODSetting_CharacterMovement AboveLowerLODSettings; // 0x350(0x188)
	struct FFortAILODSetting_CharacterMovement BelowNormalLODSettings; // 0x4d8(0x188)
	struct FFortAILODSetting_CharacterMovement NormalLODSettings; // 0x660(0x188)
	struct FFortAILODSetting_CharacterMovement AboveNormalLODSettings; // 0x7e8(0x188)
};

// Class FortniteAI.FortAthenaAILODSettings_FortWeaponRanged
// Size: 0x2b0 (Inherited: 0x28)
struct UFortAthenaAILODSettings_FortWeaponRanged : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct AFortWeaponRanged*> SystemClasses; // 0x30(0x10)
	struct FFortAILODSetting_FortWeaponRanged BelowLowerLODSettings; // 0x40(0x68)
	struct FFortAILODSetting_FortWeaponRanged LowerLODSettings; // 0xa8(0x68)
	struct FFortAILODSetting_FortWeaponRanged AboveLowerLODSettings; // 0x110(0x68)
	struct FFortAILODSetting_FortWeaponRanged BelowNormalLODSettings; // 0x178(0x68)
	struct FFortAILODSetting_FortWeaponRanged NormalLODSettings; // 0x1e0(0x68)
	struct FFortAILODSetting_FortWeaponRanged AboveNormalLODSettings; // 0x248(0x68)
};

// Class FortniteAI.FortAthenaAILODSettings_GenericTickingObject
// Size: 0x190 (Inherited: 0x28)
struct UFortAthenaAILODSettings_GenericTickingObject : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct UObject*> SystemClasses; // 0x30(0x10)
	struct FFortAILODSetting_GenericTickingObject BelowLowerLODSettings; // 0x40(0x38)
	struct FFortAILODSetting_GenericTickingObject LowerLODSettings; // 0x78(0x38)
	struct FFortAILODSetting_GenericTickingObject AboveLowerLODSettings; // 0xb0(0x38)
	struct FFortAILODSetting_GenericTickingObject BelowNormalLODSettings; // 0xe8(0x38)
	struct FFortAILODSetting_GenericTickingObject NormalLODSettings; // 0x120(0x38)
	struct FFortAILODSetting_GenericTickingObject AboveNormalLODSettings; // 0x158(0x38)
};

// Class FortniteAI.FortAthenaAIObjectTracker
// Size: 0xa8 (Inherited: 0x30)
struct UFortAthenaAIObjectTracker : UWorldSubsystem {
	char pad_30[0x28]; // 0x30(0x28)
	struct TMap<ClassPtrProperty, struct FAITrackedObjectsSet> TrackedObjects; // 0x58(0x50)

	struct FFortAthenaAIObjectTrackerQuery BP_MakeFullAthenaAIObjectTrackerQueryFromSimplified(struct FFortAthenaAIObjectTrackerQuerySimplified& SimplifiedQuery, struct AActor* OptionalQuerier); // Function FortniteAI.FortAthenaAIObjectTracker.BP_MakeFullAthenaAIObjectTrackerQueryFromSimplified // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x99b5b74
};

// Class FortniteAI.FortAthenaAIPerk_Ambush
// Size: 0x168 (Inherited: 0x168)
struct UFortAthenaAIPerk_Ambush : UFortAIPerkBase {
};

// Class FortniteAI.FortAthenaAIPerk_Bunker
// Size: 0x2d0 (Inherited: 0x168)
struct UFortAthenaAIPerk_Bunker : UFortAIPerkBase {
	struct FScalableFloat OddsToBeUsedAgainstUnknownThreat; // 0x168(0x28)
	struct FScalableFloat OddsToUseRoofBuilding; // 0x190(0x28)
	struct FScalableFloat OddsToBuildForwardRamp; // 0x1b8(0x28)
	struct FScalableFloat InitialBuildDelay; // 0x1e0(0x28)
	struct FScalableFloat SamePieceBuildDelay; // 0x208(0x28)
	struct FScalableFloat SamePieceBuildDelayRandomDeviation; // 0x230(0x28)
	struct FScalableFloat DifferentPieceBuildDelay; // 0x258(0x28)
	struct FScalableFloat DifferentPieceBuildDelayRandomDeviation; // 0x280(0x28)
	struct FScalableFloat OddsToSelectRandomMaterial; // 0x2a8(0x28)
};

// Class FortniteAI.FortAthenaAIPerk_EvasiveManeuvers
// Size: 0x458 (Inherited: 0x168)
struct UFortAthenaAIPerk_EvasiveManeuvers : UFortAIPerkBase {
	struct FEvasiveManeuverSkillSettings EvasiveManeuverSkillSettings; // 0x168(0x258)
	struct FScalableFloat DistanceMin; // 0x3c0(0x28)
	struct FScalableFloat DistanceMax; // 0x3e8(0x28)
	struct FGameplayTagQuery WeaponTagQuery; // 0x410(0x48)
};

// Class FortniteAI.FortAthenaAIRuntimeParametersProvider
// Size: 0x28 (Inherited: 0x28)
struct UFortAthenaAIRuntimeParametersProvider : UInterface {
};

// Class FortniteAI.FortAthenaAIRuntimeParametersComponent
// Size: 0x140 (Inherited: 0xa0)
struct UFortAthenaAIRuntimeParametersComponent : UActorComponent {
	struct TMap<struct UFortAthenaAIRuntimeParameters*, struct TScriptInterface<IFortAthenaAIRuntimeParametersProvider>> RegisteredParametersProviders; // 0xa0(0x50)
	struct TMap<ClassPtrProperty, struct UFortAthenaAIRuntimeParameters*> ExtractedRuntimeParameters; // 0xf0(0x50)
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_SmartObjectBase
// Size: 0xa8 (Inherited: 0x30)
struct UFortAthenaAIRuntimeParameters_SmartObjectBase : UFortAthenaAIRuntimeParameters {
	char bEnabled : 1; // 0x30(0x01)
	char bChooseClosestSmartObject : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float SelectedSmartObjectExpirationDelay; // 0x34(0x04)
	float GlobalSmartObjectCooldownOnFinished; // 0x38(0x04)
	float GlobalSmartObjectCooldownOnInterrupted; // 0x3c(0x04)
	struct TArray<struct FAIRuntimeParametersSmartObjectActivity> SmartObjectActivities; // 0x40(0x10)
	struct TArray<struct FSmartObjectRecentlyUsed> SmartObjectsMostRecentlyUsed; // 0x50(0x10)
	int32_t SelectedActivityID; // 0x60(0x04)
	struct FSmartObjectRequestResult SelectedResult; // 0x64(0x0c)
	float LastSelectedSmartObjectTimestamp; // 0x70(0x04)
	struct FSmartObjectClaimHandle ClaimedHandle; // 0x74(0x10)
	char pad_84[0x4]; // 0x84(0x04)
	struct UGameplayBehaviorConfig* BehaviorConfig; // 0x88(0x08)
	struct UGameplayBehavior* GameplayBehavior; // 0x90(0x08)
	struct UGameplayInteractionSmartObjectBehaviorDefinition* GameplayInteractionBehaviorDefinition; // 0x98(0x08)
	float GlobalSmartObjectLastUseTimestamp; // 0xa0(0x04)
	float GlobalSmartObjectCooldown; // 0xa4(0x04)
};

// Class FortniteAI.FortAthenaAISmartObjectActivity
// Size: 0x158 (Inherited: 0x28)
struct UFortAthenaAISmartObjectActivity : UObject {
	struct FScalableFloat Enabled; // 0x28(0x28)
	struct FFortAthenaAISmartObjectActivityCondition SmartObjectActivityCondition; // 0x50(0x48)
	struct FFortAthenaAISmartObjectActivityConfig SmartObjectActivityConfig; // 0x98(0xc0)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponentList
// Size: 0x58 (Inherited: 0x28)
struct UFortAthenaAISpawnerDataComponentList : UObject {
	char pad_28[0x30]; // 0x28(0x30)

	struct UFortAthenaAISpawnerDataComponentList* OverrideComponentClass(struct UFortAthenaAISpawnerDataComponent* NewComponentSubClass); // Function FortniteAI.FortAthenaAISpawnerDataComponentList.OverrideComponentClass // (Final|Native|Public|BlueprintCallable) // @ game+0x99b6ae0
	struct UFortAthenaAISpawnerDataComponentList* OverrideComponent(struct UFortAthenaAISpawnerDataComponent* NewComponent); // Function FortniteAI.FortAthenaAISpawnerDataComponentList.OverrideComponent // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x99b6a50
	struct UFortAthenaAISpawnerDataComponent* GetOrCreateComponentClassForModification(struct UObject* ComponentOuter, struct UFortAthenaAISpawnerDataComponent* ClassToClone); // Function FortniteAI.FortAthenaAISpawnerDataComponentList.GetOrCreateComponentClassForModification // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b6604
	struct TArray<struct UFortAthenaAISpawnerDataComponent*> GetList(); // Function FortniteAI.FortAthenaAISpawnerDataComponentList.GetList // (Final|Native|Public|BlueprintCallable) // @ game+0x99b6554
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_AffiliationBase
// Size: 0x40 (Inherited: 0x30)
struct UFortAthenaAIRuntimeParameters_AffiliationBase : UFortAthenaAIRuntimeParameters {
	char pad_30[0x4]; // 0x30(0x04)
	char bFullTeamAwarenessPropagation : 1; // 0x34(0x01)
	char bAwarenessPropagationIsBasedOnAlertLevel : 1; // 0x34(0x01)
	char bTurnHostileOnDamageIfNeutral : 1; // 0x34(0x01)
	char pad_34_3 : 5; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float TurnHostileWhenBlockedTime; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase
// Size: 0xb8 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_AffiliationBase : UFortAthenaAISpawnerDataComponent {
	struct FGameplayTagContainer FactionTags; // 0x30(0x20)
	struct FScalableFloat TurnHostileOnDamageIfNeutral; // 0x50(0x28)
	struct FScalableFloat TurnHostileWhenBlockedTime; // 0x78(0x28)
	struct TArray<struct FSpawnerDataComponentAffiliationSharedBBConfiguration> FactionSharedBBConfigurations; // 0xa0(0x10)
	char bFullTeamAwarenessPropagation : 1; // 0xb0(0x01)
	char bAwarenessPropagationIsBasedOnAlertLevel : 1; // 0xb0(0x01)
	char pad_B0_2 : 6; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float FullTeamAwarenessMaxDistance; // 0xb4(0x04)

	void SetFullTeamAwarenessPropagationDistance(float InFullTeamAwarenessMaxDistance); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetFullTeamAwarenessPropagationDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x99b6d64
	void SetFullTeamAwarenessPropagation(bool bInFullTeamAwarenessPropagation); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetFullTeamAwarenessPropagation // (Final|Native|Public|BlueprintCallable) // @ game+0x99b6ce0
	void SetFactionTags(struct FGameplayTagContainer& NewTags); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetFactionTags // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x99b6c24
	void SetAwarenessPropagationIsBasedOnAlertLevel(bool bInAwarenessPropagationIsBasedOnAlertLevel); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetAwarenessPropagationIsBasedOnAlertLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x99b6b98
	bool GetFullTeamAwarenessPropagation(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetFullTeamAwarenessPropagation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b644c
	float GetFullTeamAwarenessMaxDistance(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetFullTeamAwarenessMaxDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68a4a00
	struct FGameplayTagContainer GetFactionTag(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetFactionTag // (Final|Native|Public|BlueprintCallable) // @ game+0x686ef98
	bool GetAwarenessPropagationIsBasedOnAlertLevel(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetAwarenessPropagationIsBasedOnAlertLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b6308
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_Analytic
// Size: 0x50 (Inherited: 0x30)
struct UFortAthenaAIRuntimeParameters_Analytic : UFortAthenaAIRuntimeParameters {
	struct FGameplayTagContainer OnDeathGameplayTags; // 0x30(0x20)
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_AIAnalytic
// Size: 0x78 (Inherited: 0x50)
struct UFortAthenaAIRuntimeParameters_AIAnalytic : UFortAthenaAIRuntimeParameters_Analytic {
	struct FString AnalyticUniqueID; // 0x50(0x10)
	struct FString AIType; // 0x60(0x10)
	char bShouldSendSpawnEvents : 1; // 0x70(0x01)
	char bShouldRecordGrabbedPickups : 1; // 0x70(0x01)
	char bShouldRecordDroppedPickups : 1; // 0x70(0x01)
	char bShouldRecordDeathInstigator : 1; // 0x70(0x01)
	char bShouldRecordRegularDowns : 1; // 0x70(0x01)
	char bShouldRecordTetheredDowns : 1; // 0x70(0x01)
	char pad_70_6 : 2; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AnalyticBase
// Size: 0x60 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_AnalyticBase : UFortAthenaAISpawnerDataComponent {
	struct FGameplayTagContainer OnDeathGameplayTags; // 0x30(0x20)
	char pad_50[0x10]; // 0x50(0x10)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIAnalytic
// Size: 0x160 (Inherited: 0x60)
struct UFortAthenaAISpawnerDataComponent_AIAnalytic : UFortAthenaAISpawnerDataComponent_AnalyticBase {
	struct FString AIType; // 0x60(0x10)
	struct FScalableFloat ShouldSendSpawnEvents; // 0x70(0x28)
	struct FScalableFloat ShouldRecordGrabbedPickups; // 0x98(0x28)
	struct FScalableFloat ShouldRecordDroppedPickups; // 0xc0(0x28)
	struct FScalableFloat ShouldRecordDeathInstigator; // 0xe8(0x28)
	struct FScalableFloat ShouldRecordRegularDowns; // 0x110(0x28)
	struct FScalableFloat ShouldRecordTetheredDowns; // 0x138(0x28)
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_Marker
// Size: 0x38 (Inherited: 0x30)
struct UFortAthenaAIRuntimeParameters_Marker : UFortAthenaAIRuntimeParameters {
	char bSupportsMarkerWithFaction : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float MarkerPropagationMaxDistanceSQ; // 0x34(0x04)
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_AIBotDisguise
// Size: 0xd0 (Inherited: 0x30)
struct UFortAthenaAIRuntimeParameters_AIBotDisguise : UFortAthenaAIRuntimeParameters {
	bool bShouldApplyDisguise; // 0x30(0x01)
	bool bRevealDisguiseOnDamage; // 0x31(0x01)
	bool bRevealOnDamageExcludeAIPawnDamage; // 0x32(0x01)
	bool bRevealDisguiseOnPlayerProximity; // 0x33(0x01)
	float RevealPlayerProximityDistanceSqr; // 0x34(0x04)
	float RevealPlayerProximityMinDuration; // 0x38(0x04)
	float RevealPlayerProximityMaxDuration; // 0x3c(0x04)
	struct UFortBotNameSettings* NameSettingsAfterReveal; // 0x40(0x08)
	struct FGameplayTagContainer DisguisedFactionsBeforeReveal; // 0x48(0x20)
	struct FGameplayTagContainer DisguisedFactionsAfterReveal; // 0x68(0x20)
	struct TArray<struct UGameplayEffect*> DisguiseGameplayEffectBeforeReveal; // 0x88(0x10)
	struct TArray<struct UGameplayEffect*> DisguiseGameplayEffectAfterReveal; // 0x98(0x10)
	struct TArray<struct FItemAndCount> DisguiseInventory; // 0xa8(0x10)
	struct FDataTableRowHandle DisguiseLootInfo; // 0xb8(0x10)
	struct UFortNPCConversationParticipantComponent* DisguiseConversationComponentOverride; // 0xc8(0x08)
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_Collection
// Size: 0x38 (Inherited: 0x30)
struct UFortAthenaAIRuntimeParameters_Collection : UFortAthenaAIRuntimeParameters {
	bool bForceAddToCollectionOnDamage; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation
// Size: 0x2c0 (Inherited: 0xb8)
struct UFortAthenaAISpawnerDataComponent_AIBotAffiliation : UFortAthenaAISpawnerDataComponent_AffiliationBase {
	bool bForceAddToCollectionOnDamage; // 0xb8(0x01)
	char bOverrideIsAnAthenaGameParticipant : 1; // 0xb9(0x01)
	char bIsAnAthenaGameParticipant : 1; // 0xb9(0x01)
	char pad_B9_2 : 6; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
	struct FScalableFloat SupportsMarkerWithFaction; // 0xc0(0x28)
	struct FScalableFloat MarkerPropagationMaxDistance; // 0xe8(0x28)
	struct FScalableFloat DisguiseProbability; // 0x110(0x28)
	struct FScalableFloat RevealDisguiseOnDamage; // 0x138(0x28)
	struct FScalableFloat RevealOnDamageExcludeAIPawnDamage; // 0x160(0x28)
	struct FScalableFloat RevealDisguiseOnPlayerProximity; // 0x188(0x28)
	struct FScalableFloat RevealPlayerProximityDistance; // 0x1b0(0x28)
	struct FScalableFloat RevealPlayerProximityMinDuration; // 0x1d8(0x28)
	struct FScalableFloat RevealPlayerProximityMaxDuration; // 0x200(0x28)
	struct UFortBotNameSettings* NameSettingsAfterReveal; // 0x228(0x08)
	struct FGameplayTagContainer DisguisedFactionsBeforeReveal; // 0x230(0x20)
	struct FGameplayTagContainer DisguisedFactionsAfterReveal; // 0x250(0x20)
	struct TArray<struct UGameplayEffect*> DisguiseGameplayEffectBeforeReveal; // 0x270(0x10)
	struct TArray<struct UGameplayEffect*> DisguiseGameplayEffectAfterReveal; // 0x280(0x10)
	struct TArray<struct FItemAndCount> DisguiseInventory; // 0x290(0x10)
	struct FDataTableRowHandle DisguiseLootInfo; // 0x2a0(0x10)
	struct UFortNPCConversationParticipantComponent* DisguiseConversationComponent; // 0x2b0(0x08)
	int32_t OverrideTeamIndex; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)

	void SetOverrideTeamIndex(int32_t InOverrideTeamIdx); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation.SetOverrideTeamIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x99b6de8
	bool GetTeamID(int32_t& OutTeamId); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation.GetTeamID // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x99b6854
	bool GetSquadID(int32_t& OutSquadId); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation.GetSquadID // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x99b67b4
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAnalytic
// Size: 0x78 (Inherited: 0x60)
struct UFortAthenaAISpawnerDataComponent_AIBotAnalytic : UFortAthenaAISpawnerDataComponent_AnalyticBase {
	char bUseDescriptorTagSuffix : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString BotIDSuffix; // 0x68(0x10)
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl
// Size: 0x38 (Inherited: 0x30)
struct UFortAthenaAIRuntimeParameters_BehaviorTreeControl : UFortAthenaAIRuntimeParameters {
	uint32_t BehaviorTreeControls; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	bool IsBehaviorTreeBranchActive(enum class EBehaviorTreeBranches Behavior); // Function FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl.IsBehaviorTreeBranchActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b6930
	void EnableBehaviorTreeBranch(enum class EBehaviorTreeBranches Behavior); // Function FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl.EnableBehaviorTreeBranch // (Final|Native|Public|BlueprintCallable) // @ game+0x99b6198
	void DisableBehaviorTreeBranch(enum class EBehaviorTreeBranches Behavior); // Function FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl.DisableBehaviorTreeBranch // (Final|Native|Public|BlueprintCallable) // @ game+0x99b6090
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_ReviveBehavior
// Size: 0x40 (Inherited: 0x30)
struct UFortAthenaAIRuntimeParameters_ReviveBehavior : UFortAthenaAIRuntimeParameters {
	char bAllowReviveSquadmates : 1; // 0x30(0x01)
	char bAllowReviveSameFactionNPCs : 1; // 0x30(0x01)
	char bAllowReviveConverter : 1; // 0x30(0x01)
	char bAllowReviveConverterSquadmates : 1; // 0x30(0x01)
	char bUseReviveToken : 1; // 0x30(0x01)
	char pad_30_5 : 3; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float MaxDistanceToRevive; // 0x34(0x04)
	float MaxDistanceToReviveHumanPlayer; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_DBNOBehavior
// Size: 0x38 (Inherited: 0x30)
struct UFortAthenaAIRuntimeParameters_DBNOBehavior : UFortAthenaAIRuntimeParameters {
	char bDieWhenAllAlliesAreDBNO : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float AliveAlliesMaxRangeSqr; // 0x34(0x04)
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_NPCBehavior
// Size: 0x38 (Inherited: 0x30)
struct UFortAthenaAIRuntimeParameters_NPCBehavior : UFortAthenaAIRuntimeParameters {
	char bSupportsHolsteredWeapon : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_Behavior
// Size: 0x38 (Inherited: 0x30)
struct UFortAthenaAIRuntimeParameters_Behavior : UFortAthenaAIRuntimeParameters {
	char bSurfaceTypeCheckEnabled : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_BehaviorBase
// Size: 0x30 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_BehaviorBase : UFortAthenaAISpawnerDataComponent {

	struct UBehaviorTree* GetBehaviorTree(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_BehaviorBase.GetBehaviorTree // (RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x99b86dc
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_Behavior
// Size: 0x38 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_Behavior : UFortAthenaAISpawnerDataComponent_BehaviorBase {
	struct UBehaviorTree* BehaviorTree; // 0x30(0x08)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior
// Size: 0x250 (Inherited: 0x38)
struct UFortAthenaAISpawnerDataComponent_AIBotBehavior : UFortAthenaAISpawnerDataComponent_Behavior {
	uint32_t BehaviorTreeControls; // 0x38(0x04)
	char bCanUseFallbackPatrolAround : 1; // 0x3c(0x01)
	char bAllowReviveSquadmates : 1; // 0x3c(0x01)
	char bAllowReviveSameFactionNPCs : 1; // 0x3c(0x01)
	char pad_3C_3 : 5; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FScalableFloat AllowReviveConverter; // 0x40(0x28)
	struct FScalableFloat AllowReviveConverterSquadmates; // 0x68(0x28)
	char bUseReviveToken : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FScalableFloat MaxDistanceToRevive; // 0x98(0x28)
	struct FScalableFloat MaxDistanceToReviveHumanPlayer; // 0xc0(0x28)
	struct FScalableFloat DieWhenAllAlliesAreDBNO; // 0xe8(0x28)
	struct FScalableFloat AliveAlliesMaxRange; // 0x110(0x28)
	struct FScalableFloat SupportsHolsteredWeapon; // 0x138(0x28)
	struct FScalableFloat SurfaceTypeCheckEnabled; // 0x160(0x28)
	struct FScalableFloat bShouldResetAggressivePlayStyleOnUnaware; // 0x188(0x28)
	struct FScalableFloat TimeToKeepTrackOfDamagingActorsForAggressivePlayStyle; // 0x1b0(0x28)
	struct FScalableFloat TimeToIgnoreDamagingActorsWhenBeingControlled; // 0x1d8(0x28)
	struct FScalableFloat PauseBehaviorOnSpawnDuration; // 0x200(0x28)
	struct FScalableFloat bShouldBeInvulnerableDuringPause; // 0x228(0x28)

	bool IsBehaviorTreeBranchActive(enum class EBehaviorTreeBranches Behavior); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior.IsBehaviorTreeBranchActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b69c0
	void EnableBehaviorTreeBranch(enum class EBehaviorTreeBranches Behavior); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior.EnableBehaviorTreeBranch // (Final|Native|Public|BlueprintCallable) // @ game+0x99b6218
	void DisableBehaviorTreeBranch(enum class EBehaviorTreeBranches Behavior); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior.DisableBehaviorTreeBranch // (Final|Native|Public|BlueprintCallable) // @ game+0x99b6114
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_ChanceEncounterBase
// Size: 0x30 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_ChanceEncounterBase : UFortAthenaAISpawnerDataComponent {
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotChanceEncounter
// Size: 0x60 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter : UFortAthenaAISpawnerDataComponent_ChanceEncounterBase {
	struct FScalableFloat PassiveHealerEnable; // 0x30(0x28)
	struct UFortPawnComponent_PassiveHealer* PassiveHealerComponentClass; // 0x58(0x08)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_ConstructionBase
// Size: 0x30 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_ConstructionBase : UFortAthenaAISpawnerDataComponent {

	bool GetConstructionBuildingInfo(struct FConstructionBuildingList& OutConstructionInfoList); // Function FortniteAI.FortAthenaAISpawnerDataComponent_ConstructionBase.GetConstructionBuildingInfo // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x99b872c
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotConstruction
// Size: 0xc0 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_AIBotConstruction : UFortAthenaAISpawnerDataComponent_ConstructionBase {
	struct FConstructionBuildingList ConstructionBuildingInfoList; // 0x30(0x90)
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_AIBotLoopSettings
// Size: 0x38 (Inherited: 0x30)
struct UFortAthenaAIRuntimeParameters_AIBotLoopSettings : UFortAthenaAIRuntimeParameters {
	char bSpawnOutsideTheLoop : 1; // 0x30(0x01)
	char bRespawnOustideTheLoop : 1; // 0x30(0x01)
	char bRemoveInvulnerabilityOutsideSafeZone : 1; // 0x30(0x01)
	char bDisableSpecialActorComponentUntilRespawn : 1; // 0x30(0x01)
	char pad_30_4 : 4; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_Conversation
// Size: 0x58 (Inherited: 0x30)
struct UFortAthenaAIRuntimeParameters_Conversation : UFortAthenaAIRuntimeParameters {
	char bEnterBTTaskConversationIfPlayerAround : 1; // 0x30(0x01)
	char bCanConverseWhenConverted : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float EnterBTTaskConversationIfPlayerAroundDistSqr; // 0x34(0x04)
	struct TArray<struct UAthenaDanceItemDefinition*> GreetingEmotes; // 0x38(0x10)
	float GreetingEmoteMaxDuration; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UFortTandemCharacterData* CharacterData; // 0x50(0x08)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_ConversationBase
// Size: 0x30 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_ConversationBase : UFortAthenaAISpawnerDataComponent {
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotConversation
// Size: 0x1f0 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_AIBotConversation : UFortAthenaAISpawnerDataComponent_ConversationBase {
	struct UFortNPCConversationParticipantComponent* ConversationComponentClass; // 0x30(0x08)
	struct FGameplayTag ConversationEntryTag; // 0x38(0x04)
	struct FGameplayTag InteractorParticipantTag; // 0x3c(0x04)
	struct FGameplayTag SelfParticipantTag; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FScalableFloat EnterBTTaskConversationIfPlayerAround; // 0x48(0x28)
	struct FScalableFloat EnterBTTaskConversationIfPlayerAroundDist; // 0x70(0x28)
	struct TArray<struct UAthenaDanceItemDefinition*> GreetingEmotes; // 0x98(0x10)
	struct FScalableFloat GreetingEmoteMaxDuration; // 0xa8(0x28)
	struct UFortTandemCharacterData* CharacterData; // 0xd0(0x08)
	struct FName ConversationInteractionCollisionProfile; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FVector ConversationInteractionBoxExtent; // 0xe0(0x18)
	struct FVector ConversationInteractionBoxOffset; // 0xf8(0x18)
	struct FScalableFloat SpawnOutOfTheLoop; // 0x110(0x28)
	struct FScalableFloat RespawnOutsideTheLoop; // 0x138(0x28)
	struct FScalableFloat RemoveInvulnerabilityOutsideSafeZone; // 0x160(0x28)
	struct UFortAthenaNPCLoopStateComponent* NPCLoopStateComponentClass; // 0x188(0x08)
	struct FScalableFloat UseSpecialActorComponent; // 0x190(0x28)
	struct UAthenaSpecialActorComponent* SpecialActorComponentClass; // 0x1b8(0x08)
	struct FScalableFloat BlockSpecialActorUntilOutsideTheLoop; // 0x1c0(0x28)
	bool bCanConverseWhenConverted; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticBase
// Size: 0x30 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_CosmeticBase : UFortAthenaAISpawnerDataComponent {

	void GetFallbackTag(struct FGameplayTag& OutFallbackTag); // Function FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticBase.GetFallbackTag // (RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x99b8800
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase
// Size: 0x30 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase : UFortAthenaAISpawnerDataComponent_CosmeticBase {

	void GetLoadout(struct FFortAthenaLoadout& OutLoadout); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetLoadout // (RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x99b7678
	void GetDances(struct TArray<struct UAthenaDanceItemDefinition*>& Dances, struct AFortAthenaAIBotController* BotController); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetDances // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x99b74c8
	void GetCustomCharacterParts(struct TArray<struct UCustomCharacterPart*>& OutCustomCharacterParts); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetCustomCharacterParts // (RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x99b7428
	void GetAnimBPOverride(struct UAnimInstance*& OutAnimBPOverride, int32_t& OutPriority); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetAnimBPOverride // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x99b7348
	void GetAllLoadouts(struct TArray<struct FFortAthenaLoadout>& OutLoadouts); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetAllLoadouts // (RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x99b72ac
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_DebugBase
// Size: 0x30 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_DebugBase : UFortAthenaAISpawnerDataComponent {
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotDebug
// Size: 0x1f0 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_AIBotDebug : UFortAthenaAISpawnerDataComponent_DebugBase {
	struct FDebugMinimapData DebugMinimapData; // 0x30(0x1b0)
	struct TArray<struct FString> EditorConsoleCommands; // 0x1e0(0x10)
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_AIConvert
// Size: 0xf0 (Inherited: 0x30)
struct UFortAthenaAIRuntimeParameters_AIConvert : UFortAthenaAIRuntimeParameters {
	bool bCanBeConverted; // 0x30(0x01)
	bool bCanBeConvertedFromDBNO; // 0x31(0x01)
	bool bForceKillWhenUnconverted; // 0x32(0x01)
	bool bForceKillWhenConverterDies; // 0x33(0x01)
	bool bCopyConverterSpecificRelations; // 0x34(0x01)
	bool bRemoveFromAllFactions; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float ReleaseDistanceSq; // 0x38(0x04)
	float CheckReleaseConditionsTimeInterval; // 0x3c(0x04)
	struct FGameplayTagContainer AddToFactions; // 0x40(0x20)
	struct FGameplayTagContainer RemoveFromFactions; // 0x60(0x20)
	char PreConversionTeamIndex; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FGameplayTagContainer PreConversionFactions; // 0x88(0x20)
	struct TArray<struct UFortAbilitySet*> AbilitySetsForConverted; // 0xa8(0x10)
	struct FTeleportSettings TeleportSettings; // 0xb8(0x38)

	void SetForceKillWhenUnconverted(bool bInForceKillWhenUnconverted); // Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetForceKillWhenUnconverted // (Final|Native|Public|BlueprintCallable) // @ game+0x99b8cac
	void SetForceKillWhenConverterDies(bool bInForceKillWhenConverterDies); // Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetForceKillWhenConverterDies // (Final|Native|Public|BlueprintCallable) // @ game+0x99b8c30
	void SetCanBeConvertedFromDBNO(bool bInCanBeConvertedFromDBNO); // Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetCanBeConvertedFromDBNO // (Final|Native|Public|BlueprintCallable) // @ game+0x99b8b00
	void SetCanBeConverted(bool bInCanBeConverted); // Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetCanBeConverted // (Final|Native|Public|BlueprintCallable) // @ game+0x99b89dc
	bool GetForceKillWhenUnconverted(); // Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetForceKillWhenUnconverted // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b88a4
	bool GetForceKillWhenConverterDies(); // Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetForceKillWhenConverterDies // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b8890
	bool GetCanBeConvertedFromDBNO(); // Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetCanBeConvertedFromDBNO // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b8718
	bool GetCanBeConverted(); // Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetCanBeConverted // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b8704
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_AIBotConvert
// Size: 0x160 (Inherited: 0xf0)
struct UFortAthenaAIRuntimeParameters_AIBotConvert : UFortAthenaAIRuntimeParameters_AIConvert {
	char bShouldLeashFollowConverter : 1; // 0xf0(0x01)
	char bShouldScanAroundWhenWaiting : 1; // 0xf0(0x01)
	char bShouldMoveTowardsConverter : 1; // 0xf0(0x01)
	char bShouldTeleportTowardsConverter : 1; // 0xf0(0x01)
	char bCanDanceWithConverter : 1; // 0xf0(0x01)
	char pad_F0_5 : 3; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float SkillLevelOverride; // 0xf4(0x04)
	float PreConversionSkillLevel; // 0xf8(0x04)
	float InnerLeashRadius; // 0xfc(0x04)
	float OuterLeashRadius; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct UFortAthenaAIRuntimeParameters_Leash* PreConversionLeashParams; // 0x108(0x08)
	float LeashFollowActorUpdateRate; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct FVector LeashFollowActorLocalOffset; // 0x118(0x18)
	float MoveTowardsConverterInnerDistanceSq; // 0x130(0x04)
	float MoveTowardsConverterOuterDistanceSq; // 0x134(0x04)
	float TeleportTowardsConverterDistanceSq; // 0x138(0x04)
	float MinDistanceFromConverterWhenTeleported; // 0x13c(0x04)
	struct TArray<struct UFortAthenaAIBotSkillSet*> ConvertedSkillSetClasses; // 0x140(0x10)
	struct TArray<struct UFortAthenaAIBotSkillSet*> PreConversionSkillSetClasses; // 0x150(0x10)
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_Leash
// Size: 0x58 (Inherited: 0x30)
struct UFortAthenaAIRuntimeParameters_Leash : UFortAthenaAIRuntimeParameters {
	struct FVector LeashLocation; // 0x30(0x18)
	float LeashInnerRadius; // 0x48(0x04)
	float LeashOuterRadius; // 0x4c(0x04)
	enum class ELeashReturnLocationMode LeashReturnLocationMode; // 0x50(0x01)
	bool bCheckForReachabilityOnRandomLocationGeneration; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_AIBotRespawn
// Size: 0x40 (Inherited: 0x30)
struct UFortAthenaAIRuntimeParameters_AIBotRespawn : UFortAthenaAIRuntimeParameters {
	char bCanRespawnOnDeath : 1; // 0x30(0x01)
	char bRespawnOnDeathLocation : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float RespawnTime; // 0x34(0x04)
	struct UFortAthenaAISpawnerDataComponentList* AISpawnerDataComponentList; // 0x38(0x08)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase
// Size: 0x2b8 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_GameplayBase : UFortAthenaAISpawnerDataComponent {
	bool bOverrideGlobalSpeedMultiplier; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FScalableFloat GlobalSpeedMultiplier; // 0x38(0x28)
	struct FScalableFloat CanBeConverted; // 0x60(0x28)
	struct FScalableFloat CanBeConvertedFromDBNO; // 0x88(0x28)
	struct FScalableFloat ForceKillWhenUnconverted; // 0xb0(0x28)
	struct FScalableFloat ForceKillWhenConverterDies; // 0xd8(0x28)
	struct FScalableFloat CopyConverterSpecificRelations; // 0x100(0x28)
	struct FScalableFloat RemoveFromAllFactions; // 0x128(0x28)
	struct FScalableFloat ReleaseDistance; // 0x150(0x28)
	struct FScalableFloat CheckReleaseConditionsTimeInterval; // 0x178(0x28)
	struct FGameplayTagContainer AddToFactions; // 0x1a0(0x20)
	struct FGameplayTagContainer RemoveFromFactions; // 0x1c0(0x20)
	struct FScalableFloat PawnCullDistance; // 0x1e0(0x28)
	struct TArray<struct UFortAbilitySet*> AbilitySetsForConverted; // 0x208(0x10)
	struct FTeleportSettings TeleportSettings; // 0x218(0x38)
	bool bApplyTaggedNavFilters; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct FFortAITaggedNavFilterData NavFilterData; // 0x258(0x60)

	bool ShouldOverrideGlobalSpeedMultiplier(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.ShouldOverrideGlobalSpeedMultiplier // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x74b2ee4
	void SetCopyConverterSpecificRelations(bool bInCopyConverterSpecificRelations); // Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.SetCopyConverterSpecificRelations // (Final|Native|Public|BlueprintCallable) // @ game+0x99b8b7c
	void SetCanBeConverted(bool bInCanBeConverted); // Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.SetCanBeConverted // (Final|Native|Public|BlueprintCallable) // @ game+0x99b8a58
	void PostOnSpawnedBP(struct APawn* PawnAI); // Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.PostOnSpawnedBP // (Event|Public|BlueprintEvent|Const) // @ game+0xd67374
	float GetGlobalSpeedMultiplier(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.GetGlobalSpeedMultiplier // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x99b88b8
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay
// Size: 0x5b8 (Inherited: 0x2b8)
struct UFortAthenaAISpawnerDataComponent_AIBotGameplay : UFortAthenaAISpawnerDataComponent_GameplayBase {
	struct UFortBotNameSettings* NameSettings; // 0x2b8(0x08)
	char bRequiresUniqueNetId : 1; // 0x2c0(0x01)
	char pad_2C0_1 : 7; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct FScalableFloat CanRespawnOnDeath; // 0x2c8(0x28)
	struct FScalableFloat RespawnOnDeathLocation; // 0x2f0(0x28)
	struct FScalableFloat RespawnTime; // 0x318(0x28)
	float PawnCullDistanceAfterPlayerAggroMode; // 0x340(0x04)
	enum class EReachLocationValidationMode ReachLocationValidationMode; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	struct FVector LeashLocation; // 0x348(0x18)
	float LeashInnerRadius; // 0x360(0x04)
	float LeashOuterRadius; // 0x364(0x04)
	bool bCheckForReachabilityOnRandomLocationGeneration; // 0x368(0x01)
	enum class ELeashReturnLocationMode LeashReturnLocationMode; // 0x369(0x01)
	char pad_36A[0x6]; // 0x36a(0x06)
	struct AFortAthenaPatrolPath* AssociatedPatrolPath; // 0x370(0x08)
	bool bCanInvestigateWithMeleeWeapon; // 0x378(0x01)
	bool bApplyMutatorsHealthAndShieldModifiers; // 0x379(0x01)
	bool bSupportsTethering; // 0x37a(0x01)
	bool bEnableRenderCustomDepth; // 0x37b(0x01)
	bool bDisableGiveWeaponCheat; // 0x37c(0x01)
	bool bDisableGiveMaterialsCheat; // 0x37d(0x01)
	char pad_37E[0x2]; // 0x37e(0x02)
	struct FScalableFloat InnerLeashRadius; // 0x380(0x28)
	struct FScalableFloat OuterLeashRadius; // 0x3a8(0x28)
	struct FScalableFloat ShouldLeashFollowConverter; // 0x3d0(0x28)
	struct FScalableFloat LeashFollowActorUpdateRate; // 0x3f8(0x28)
	struct FVector LeashFollowActorLocalOffset; // 0x420(0x18)
	struct FScalableFloat SkillLevelOverride; // 0x438(0x28)
	struct FScalableFloat ShouldScanAroundWhenWaiting; // 0x460(0x28)
	struct FScalableFloat ShouldMoveTowardsConverter; // 0x488(0x28)
	struct FScalableFloat ShouldTeleportTowardsConverter; // 0x4b0(0x28)
	struct FScalableFloat MoveTowardsConverterInnerRadius; // 0x4d8(0x28)
	struct FScalableFloat MoveTowardsConverterOuterRadius; // 0x500(0x28)
	struct FScalableFloat CanDanceWithConverter; // 0x528(0x28)
	struct FScalableFloat TeleportTowardsConverterDistance; // 0x550(0x28)
	struct FScalableFloat MinDistanceFromConverterWhenTeleported; // 0x578(0x28)
	struct TArray<struct UFortAthenaAIBotSkillSet*> ConvertedSkillSetClasses; // 0x5a0(0x10)
	char pad_5B0[0x8]; // 0x5b0(0x08)

	void SetNameSettings(enum class EBotNamingMode InNamingMode, struct FString InName, bool bInAddPlayerIDSuffix); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetNameSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x99b79f0
	void SetLeashOuterRadius(float InLeashOuterRadius); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetLeashOuterRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x99b796c
	void SetLeashLocation(struct FVector InLeashLocation); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetLeashLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x99b78e4
	void SetLeashInnerRadius(float InLeashInnerRadius); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetLeashInnerRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x99b7860
	void SetAssociatedPatrolPath(struct AFortAthenaPatrolPath* InAssociatedPatrolPath); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetAssociatedPatrolPath // (Final|Native|Public|BlueprintCallable) // @ game+0x99b7740
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase
// Size: 0x70 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_GameplayAbilityBase : UFortAthenaAISpawnerDataComponent {
	struct TArray<struct FInitialGameplayEffectInfo> InitialGameplayEffect; // 0x30(0x10)
	struct TArray<struct UFortAbilitySet*> InitialGameplayAbilitiesSet; // 0x40(0x10)
	struct FGameplayTagContainer LooseTagsToApplyToPawn; // 0x50(0x20)

	void SetLooseTagsToApplyToPawn(struct FGameplayTagContainer& InGameplayTagContainer); // Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.SetLooseTagsToApplyToPawn // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x99b8d28
	struct FGameplayTagContainer GetLooseTagsToApplyToPawn(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.GetLooseTagsToApplyToPawn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99b8984
	void GetInitialGameplayEffects(struct TArray<struct FInitialGameplayEffectInfo>& OutGEs); // Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.GetInitialGameplayEffects // (Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x99b77c0
	void GetInitialGameplayAbilities(struct TArray<struct UFortAbilitySet*>& OutGASets); // Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.GetInitialGameplayAbilities // (Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x99b88e4
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase
// Size: 0x70 (Inherited: 0x70)
struct UFortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase : UFortAthenaAISpawnerDataComponent_GameplayAbilityBase {
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_InventoryBase
// Size: 0xa0 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_InventoryBase : UFortAthenaAISpawnerDataComponent {
	struct FScalableFloat ShouldDropCurrencyOnDeath; // 0x30(0x28)
	struct FScalableFloat DefaultInventoryIgnoresRestrictions; // 0x58(0x28)
	struct FName CurrencyPayoutRowName; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FDataTableRowHandle LootInfo; // 0x88(0x10)
	bool bUseDefenderInventoryManagement; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)

	void GetInventoryItems(struct TArray<struct FItemAndCount>& OutList); // Function FortniteAI.FortAthenaAISpawnerDataComponent_InventoryBase.GetInventoryItems // (RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x99b88e4
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotInventory
// Size: 0xc8 (Inherited: 0xa0)
struct UFortAthenaAISpawnerDataComponent_AIBotInventory : UFortAthenaAISpawnerDataComponent_InventoryBase {
	struct TArray<struct FItemAndCount> Items; // 0xa0(0x10)
	char bItemsToGiveInEditorWhenCustomizationIsEnabled : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TArray<struct FItemAndCount> EditorOnlyItems; // 0xb8(0x10)

	void SetInventoryItems(struct TArray<struct FItemAndCount>& InItems); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotInventory.SetInventoryItems // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x99b77c0
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_Sight
// Size: 0x40 (Inherited: 0x30)
struct UFortAthenaAIRuntimeParameters_Sight : UFortAthenaAIRuntimeParameters {
	bool bOverrideVisibilityRange; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float SightRadius; // 0x34(0x04)
	float LoseSightRadius; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_PerceptionBase
// Size: 0x30 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_PerceptionBase : UFortAthenaAISpawnerDataComponent {
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotPerception
// Size: 0x40 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_AIBotPerception : UFortAthenaAISpawnerDataComponent_PerceptionBase {
	bool bOverrideVisibilityRange; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float SightRadius; // 0x34(0x04)
	float LoseSightRadius; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	void SetVisibilityRange(float InSightRadius, float LoseSightRadius); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotPerception.SetVisibilityRange // (Final|Native|Public|BlueprintCallable) // @ game+0x99b7c70
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_SkillsetBase
// Size: 0x30 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_SkillsetBase : UFortAthenaAISpawnerDataComponent {

	bool ShouldUseMatchMMRToOverrideSkillLevel(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_SkillsetBase.ShouldUseMatchMMRToOverrideSkillLevel // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x74b2ee4
	struct TArray<struct UFortAthenaAIBotSkillSet*> GetSkillSets(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_SkillsetBase.GetSkillSets // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x99b993c
	float GetSkill(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_SkillsetBase.GetSkill // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x99b98ac
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotSkillset
// Size: 0xf8 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_AIBotSkillset : UFortAthenaAISpawnerDataComponent_SkillsetBase {
	struct UFortAthenaAIBotAimingSkillSet* AimingSkillSet; // 0x30(0x08)
	struct UFortAthenaAIBotAttackingSkillSet* AttackingSkillSet; // 0x38(0x08)
	struct UFortAthenaAIBotBuildingSkillSet* BuildingSkillSet; // 0x40(0x08)
	struct UFortAthenaAIBotDBNOSkillSet* DBNOSkillSet; // 0x48(0x08)
	struct UFortAthenaAIBotEmoteSkillSet* EmoteSkillSet; // 0x50(0x08)
	struct UFortAthenaAIBotEvasiveManeuversSkillSet* EvasiveManeuversSkillSet; // 0x58(0x08)
	struct UFortAthenaAIBotHarvestSkillSet* HarvestSkillSet; // 0x60(0x08)
	struct UFortAthenaAIBotHealingSkillSet* HealingSkillSet; // 0x68(0x08)
	struct UFortAthenaAIBotInventorySkillSet* InventorySkillSet; // 0x70(0x08)
	struct UFortAthenaAIBotLootingSkillSet* LootingSkillSet; // 0x78(0x08)
	struct UFortAthenaAIBotMovementSkillSet* MovementSkillSet; // 0x80(0x08)
	struct UFortAthenaAIBotPerceptionSkillSet* PerceptionSkillSet; // 0x88(0x08)
	struct UFortAthenaAIBotPlayStyleSkillSet* PlayStyleSkillSet; // 0x90(0x08)
	struct UFortAthenaAIBotPropagateAwarenessSkillSet* PropagateAwarenessSkillSet; // 0x98(0x08)
	struct UFortAthenaAIBotRangeAttackSkillSet* RangeAttackSkillSet; // 0xa0(0x08)
	struct UFortAthenaAIBotReviveSkillSet* ReviveSkillSet; // 0xa8(0x08)
	struct UFortAthenaAIBotUnstuckSkillSet* UnstuckSkillSet; // 0xb0(0x08)
	struct UFortAthenaAIBotVehicleSkillSet* VehicleSkillSet; // 0xb8(0x08)
	char bUseMatchMMRToOverrideSkillLevel : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct TSoftObjectPtr<UDataTable> OverrideSkillLevelMMRTable; // 0xc8(0x28)
	float Skill; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)

	void SetSkill(float InSKill); // Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotSkillset.SetSkill // (Final|Native|Public|BlueprintCallable) // @ game+0x99b7bec
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIGameplay
// Size: 0x2f8 (Inherited: 0x2b8)
struct UFortAthenaAISpawnerDataComponent_AIGameplay : UFortAthenaAISpawnerDataComponent_GameplayBase {
	float MoveSoundStimulusBroadcastInterval; // 0x2b8(0x04)
	float MaxMoveSoundRange; // 0x2bc(0x04)
	char bGenerateSoundInAllMovementModes : 1; // 0x2c0(0x01)
	char pad_2C0_1 : 7; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct FScalableFloat DefaultLifespanAfterDeath; // 0x2c8(0x28)
	enum class EFortAthenaAISpawnerDataComponentTriBool IsAlwaysGameplayRelevantOverride; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIPawnCosmeticBase
// Size: 0x30 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase : UFortAthenaAISpawnerDataComponent_CosmeticBase {
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization
// Size: 0x48 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization : UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase {
	struct FGameplayTag FallbackTag; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UFortAIPawnCustomizationDefinition* CustomizationDefinition; // 0x38(0x08)
	bool bCanUnloadCustomization; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_OptimBase
// Size: 0x30 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_OptimBase : UFortAthenaAISpawnerDataComponent {
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIPawnOptim
// Size: 0x38 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_AIPawnOptim : UFortAthenaAISpawnerDataComponent_OptimBase {
	char bRegisterToAIDropper : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLibrary
// Size: 0x110 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_CosmeticLibrary : UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase {
	struct TArray<struct TSoftObjectPtr<UFortAthenaAIBotCosmeticLibraryData>> CosmeticLibraries; // 0x30(0x10)
	struct FScalableFloat DefaultCosmeticLibraryWeight; // 0x40(0x28)
	struct FGameplayTag PredefinedCosmeticSetTag; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TSoftObjectPtr<UDataTable> EmotesDataTable; // 0x70(0x28)
	struct FScalableFloat EmotesMaxCount; // 0x98(0x28)
	struct FScalableFloat bUseFixedSeed; // 0xc0(0x28)
	struct FScalableFloat FixedSeed; // 0xe8(0x28)

	int32_t GetAICosmeticLibraryDataIndex(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLibrary.GetAICosmeticLibraryDataIndex // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x99b86b4
	struct UFortAthenaAIBotCosmeticLibraryData* GetAICosmeticLibraryData(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLibrary.GetAICosmeticLibraryData // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x99b868c
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLoadout
// Size: 0x1d0 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_CosmeticLoadout : UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase {
	struct FFortAthenaLoadout CosmeticLoadout; // 0x30(0x168)
	struct TArray<struct FFortAthenaAIWeightedCosmeticLoadout> WeightedLoadouts; // 0x198(0x10)
	struct TArray<struct UCustomCharacterPart*> CustomCharacterParts; // 0x1a8(0x10)
	bool bCanShowDefaultSkin; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	struct FGameplayTag FallbackTag; // 0x1bc(0x04)
	struct UAnimInstance* AnimBPOverride; // 0x1c0(0x08)
	int32_t AnimBPOverridePriority; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_CoverBase
// Size: 0x58 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_CoverBase : UFortAthenaAISpawnerDataComponent {
	struct UNavigationQueryFilter* CoverPositionFilterClass; // 0x30(0x08)
	struct FVector CoverBoxExtent; // 0x38(0x18)
	float CoverOffset; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_GroupBase
// Size: 0xe0 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_GroupBase : UFortAthenaAISpawnerDataComponent {
	struct FScalableFloat EnableGroupComponent; // 0x30(0x28)
	struct FScalableFloat CanBeGroupLeader; // 0x58(0x28)
	struct FScalableFloat EnableFormationComponent; // 0x80(0x28)
	struct TArray<struct FVector> FormationSlots; // 0xa8(0x10)
	struct FScalableFloat MaxDistanceFromSlotToSprint; // 0xb8(0x28)
};

// Class FortniteAI.FortAthenaAIRuntimeParameters_Inventory
// Size: 0x48 (Inherited: 0x30)
struct UFortAthenaAIRuntimeParameters_Inventory : UFortAthenaAIRuntimeParameters {
	char bShouldDropCurrencyOnDeath : 1; // 0x30(0x01)
	char bDefaultInventoryIgnoresRestrictions : 1; // 0x30(0x01)
	char bSkipInventoryInitialization : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName CurrencyPayoutRowName; // 0x34(0x04)
	struct FDataTableRowHandle LootInfo; // 0x38(0x10)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_LODBase
// Size: 0x30 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_LODBase : UFortAthenaAISpawnerDataComponent {

	struct FClientAILODSettings GetClientAILODSettings(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_LODBase.GetClientAILODSettings // (RequiredAPI|Native|Event|Public|BlueprintEvent|Const) // @ game+0x99b9820
	struct UFortAthenaAILODSettingsContainer* GetAILODSettingsContainer(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_LODBase.GetAILODSettingsContainer // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x230fdfc
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_LOD
// Size: 0x328 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_LOD : UFortAthenaAISpawnerDataComponent_LODBase {
	struct UFortAthenaAILODSettingsContainer* LODSettings; // 0x30(0x08)
	struct FClientAILODSettings ClientLODSettings; // 0x38(0x2f0)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_PerksBase
// Size: 0x40 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_PerksBase : UFortAthenaAISpawnerDataComponent {
	struct TArray<struct FPerkAvailabilityContainer> PerksContainers; // 0x30(0x10)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_PlayerBotSkillset
// Size: 0x100 (Inherited: 0xf8)
struct UFortAthenaAISpawnerDataComponent_PlayerBotSkillset : UFortAthenaAISpawnerDataComponent_AIBotSkillset {
	struct UFortAthenaAIBotWarmupSkillSet* WarmUpSkillSet; // 0xf8(0x08)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_RandomInventory
// Size: 0xb0 (Inherited: 0xa0)
struct UFortAthenaAISpawnerDataComponent_RandomInventory : UFortAthenaAISpawnerDataComponent_InventoryBase {
	struct TArray<struct FWeightedAIInventoryLoadout> Loadouts; // 0xa0(0x10)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_SmartObjectBase
// Size: 0x128 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_SmartObjectBase : UFortAthenaAISpawnerDataComponent {
	struct FScalableFloat Enabled; // 0x30(0x28)
	struct FScalableFloat ChooseClosestSmartObject; // 0x58(0x28)
	struct FScalableFloat SelectedSmartObjectExpirationDelay; // 0x80(0x28)
	struct FScalableFloat GlobalSmartObjectCooldownOnFinished; // 0xa8(0x28)
	struct FScalableFloat GlobalSmartObjectCooldownOnInterrupted; // 0xd0(0x28)
	struct TArray<struct UFortAthenaAISmartObjectActivity*> SmartObjectActivitiesCombined; // 0xf8(0x10)
	struct TArray<struct UFortAthenaAISmartObjectActivity*> SmartObjectActivitiesToAdd; // 0x108(0x10)
	struct TArray<struct UFortAthenaAISmartObjectActivity*> SmartObjectActivitiesToRemove; // 0x118(0x10)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase
// Size: 0x30 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_SpawnParamsBase : UFortAthenaAISpawnerDataComponent {

	bool ShouldSpawnInAir(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.ShouldSpawnInAir // (RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2803b4c
	bool ShouldCheckForOverlaps(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.ShouldCheckForOverlaps // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x99b9c5c
	float GetSpawnTracePadding(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetSpawnTracePadding // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x99b99b4
	struct TArray<struct UFortAthenaAISpawnerData*> GetSpawnerDataSpawnedAsChildren(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetSpawnerDataSpawnedAsChildren // (RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x99b99e0
	struct FDataTableRowHandle GetPawnStatHandle(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetPawnStatHandle // (RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x99b9908
	struct APawn* GetPawnClass(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetPawnClass // (RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x99b98d8
	float GetInAirSpawnTraceStartHeight(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetInAirSpawnTraceStartHeight // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x99b98ac
	float GetInAirSpawnTraceSphereRadius(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetInAirSpawnTraceSphereRadius // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x99b88b8
	float GetInAirSpawnTraceEndHeight(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetInAirSpawnTraceEndHeight // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x99b9880
	struct AAIController* GetAIControllerClass(); // Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetAIControllerClass // (RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x99b97f0
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParams
// Size: 0x78 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_SpawnParams : UFortAthenaAISpawnerDataComponent_SpawnParamsBase {
	struct APawn* PawnClass; // 0x30(0x08)
	struct AAIController* AIControllerClass; // 0x38(0x08)
	struct FDataTableRowHandle PawnStatHandle; // 0x40(0x10)
	struct TArray<struct UFortAthenaAISpawnerData*> SpawnerDataSpawnedAsChildren; // 0x50(0x10)
	char bSpawnInAir : 1; // 0x60(0x01)
	char bSetSkyDivingFromBus : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float InAirSpawnTraceStartHeight; // 0x64(0x04)
	float InAirSpawnTraceEndHeight; // 0x68(0x04)
	float InAirSpawnTraceSphereRadius; // 0x6c(0x04)
	float SpawnTracePadding; // 0x70(0x04)
	char bCheckForOverlaps : 1; // 0x74(0x01)
	char bAddPOILocationTagsOnSpawn : 1; // 0x74(0x01)
	char pad_74_2 : 6; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_VehicleBase
// Size: 0x30 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_VehicleBase : UFortAthenaAISpawnerDataComponent {
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_Vehicle
// Size: 0x50 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_Vehicle : UFortAthenaAISpawnerDataComponent_VehicleBase {
	struct AFortAthenaVehicle* VehicleToSpawnAndEnter; // 0x30(0x08)
	char bSetInfiniteFuel : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct UFortAthenaAIBotSkillSet*> VehicleSkillSets; // 0x40(0x10)
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_VoiceBase
// Size: 0x30 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_VoiceBase : UFortAthenaAISpawnerDataComponent {
};

// Class FortniteAI.FortAthenaAISpawnerDataComponent_Voice
// Size: 0x50 (Inherited: 0x30)
struct UFortAthenaAISpawnerDataComponent_Voice : UFortAthenaAISpawnerDataComponent_VoiceBase {
	struct UFortAIComponent_Voice* VoiceComponentClass; // 0x30(0x08)
	struct UFortTaggedSoundBank* SoundBank; // 0x38(0x08)
	struct UFortTaggedSoundBank* MaleSoundBankOverride; // 0x40(0x08)
	struct UFortTaggedSoundBank* FemaleSoundBankOverride; // 0x48(0x08)
};

// Class FortniteAI.FortAthenaAlertStateComponent
// Size: 0xa8 (Inherited: 0xa0)
struct UFortAthenaAlertStateComponent : UActorComponent {
	float StealthMeterTarget; // 0xa0(0x04)
	float StealthMeterTargetTime; // 0xa4(0x04)

	void SetStealthMeterTargetTime(float InStealthMeterTargetTime); // Function FortniteAI.FortAthenaAlertStateComponent.SetStealthMeterTargetTime // (Final|Native|Public|BlueprintCallable) // @ game+0x99b9bd8
	void SetStealthMeterTarget(float InStealthMeterTarget); // Function FortniteAI.FortAthenaAlertStateComponent.SetStealthMeterTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x99b9b54
	void OnStealthMeterChanged(struct AFortAthenaAIBotController* BotController, float StealthMeterTarget, float StealthMeterTargetTime); // Function FortniteAI.FortAthenaAlertStateComponent.OnStealthMeterChanged // (Final|Native|Public) // @ game+0x99b9a58
	float GetStealthMeterTargetTime(); // Function FortniteAI.FortAthenaAlertStateComponent.GetStealthMeterTargetTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69f3588
	float GetStealthMeterTarget(); // Function FortniteAI.FortAthenaAlertStateComponent.GetStealthMeterTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x757523c
};

// Class FortniteAI.FortAthenaBeaconComponent
// Size: 0xd0 (Inherited: 0xa0)
struct UFortAthenaBeaconComponent : UActorComponent {
	int32_t MaxAttractedBots; // 0xa0(0x04)
	float AttractionRadius; // 0xa4(0x04)
	struct TArray<struct AActor*> RegisteredActors; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnConsumeEvent; // 0xb8(0x10)
	bool bIsConsumed; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// Class FortniteAI.FortBTService_ContextOverride
// Size: 0x70 (Inherited: 0x70)
struct UFortBTService_ContextOverride : UBTService {
};

// Class FortniteAI.FortAthenaBTContext_SuppressAutomaticAttackCheck
// Size: 0x70 (Inherited: 0x70)
struct UFortAthenaBTContext_SuppressAutomaticAttackCheck : UFortBTService_ContextOverride {
};

// Class FortniteAI.FortAthenaBTDecorator_BehaviorControls
// Size: 0x70 (Inherited: 0x68)
struct UFortAthenaBTDecorator_BehaviorControls : UBTDecorator {
	enum class EBehaviorTreeBranches BehaviorTreeBranch; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class FortniteAI.FortAthenaBTService_AIEvaluator
// Size: 0x80 (Inherited: 0x70)
struct UFortAthenaBTService_AIEvaluator : UBTService {
	struct FGameplayTag InjectionTag; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct UFortAthenaAIEvaluator* AIEvaluatorClass; // 0x78(0x08)
};

// Class FortniteAI.FortAthenaBTService_ApplyGameplayTags
// Size: 0x90 (Inherited: 0x70)
struct UFortAthenaBTService_ApplyGameplayTags : UBTService {
	struct FGameplayTagContainer GameplayTagsToApply; // 0x70(0x20)
};

// Class FortniteAI.FortAthenaBTService_BuildConstruction
// Size: 0x80 (Inherited: 0x70)
struct UFortAthenaBTService_BuildConstruction : UBTService {
	struct FName StealWallBuildName; // 0x70(0x04)
	struct FName StealWallBuildTypeName; // 0x74(0x04)
	struct FName StealWallBuildGridCoordName; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class FortniteAI.FortAthenaBTService_Clamber
// Size: 0xa0 (Inherited: 0x70)
struct UFortAthenaBTService_Clamber : UBTService {
	struct FName ClamberExecutionStatusName; // 0x70(0x04)
	struct FName ClamberOriginLocationName; // 0x74(0x04)
	struct FName ClamberDestinationLocationName; // 0x78(0x04)
	struct FName ClamberAbilityStatusName; // 0x7c(0x04)
	struct FName JumpExecutionStatusName; // 0x80(0x04)
	struct FName CrouchExecutionStatusName; // 0x84(0x04)
	char pad_88[0x8]; // 0x88(0x08)
	uint32_t FirstJumpRetryMaxCount; // 0x90(0x04)
	float FirstJumpRetryDelay; // 0x94(0x04)
	float FirstJumpClamberMaxStartDelay; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class FortniteAI.FortAthenaBTService_CopyBlackboardVariable
// Size: 0xc8 (Inherited: 0x70)
struct UFortAthenaBTService_CopyBlackboardVariable : UBTService {
	struct FBlackboardKeySelector SourceBlackboardKey; // 0x70(0x28)
	struct FBlackboardKeySelector DestinationBlackboardKey; // 0x98(0x28)
	char bCopyOnBecomeRelevant : 1; // 0xc0(0x01)
	char bCopyOnCeaseRelevant : 1; // 0xc0(0x01)
	char bCopyWhenSourceValueChange : 1; // 0xc0(0x01)
	char pad_C0_3 : 5; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class FortniteAI.FortAthenaBTService_Crouch
// Size: 0x78 (Inherited: 0x70)
struct UFortAthenaBTService_Crouch : UBTService {
	struct FName CrouchExecutionStatusName; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class FortniteAI.FortAthenaBTService_Escape
// Size: 0x80 (Inherited: 0x70)
struct UFortAthenaBTService_Escape : UBTService {
	struct FName EscapeKeyName; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FName EscapeFromStormKeyName; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class FortniteAI.FortAthenaBTService_Interact
// Size: 0x140 (Inherited: 0x70)
struct UFortAthenaBTService_Interact : UBTService {
	struct FBlackboardKeySelector InteractExecutionStatusKeySelector; // 0x70(0x28)
	struct FBlackboardKeySelector InteractContextInfoKeySelector; // 0x98(0x28)
	struct FBlackboardKeySelector InteractObjectKeySelector; // 0xc0(0x28)
	struct FBlackboardKeySelector ExecutionStatusKeySelector; // 0xe8(0x28)
	struct FBlackboardKeySelector MovementStateKeySelector; // 0x110(0x28)
	enum class EInteractionBeingAttempted InteractionBeingAttempted; // 0x138(0x01)
	bool bRequireDistanceCheck; // 0x139(0x01)
	bool bRequireBlockedCheck; // 0x13a(0x01)
	char pad_13B[0x5]; // 0x13b(0x05)
};

// Class FortniteAI.FortAthenaBTService_Jump
// Size: 0x88 (Inherited: 0x70)
struct UFortAthenaBTService_Jump : UBTService {
	struct FName JumpExecutionStatusName; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FName CrouchExecutionStatusName; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	float JumpInputReleaseDelay; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class FortniteAI.FortAthenaBTService_JetpackStrafe
// Size: 0x98 (Inherited: 0x88)
struct UFortAthenaBTService_JetpackStrafe : UFortAthenaBTService_Jump {
	struct FName JetpackStrafeExecutionStatusName; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* CacheEMDigestedSkillSet; // 0x90(0x08)
};

// Class FortniteAI.FortAthenaBTService_JumpOffBus
// Size: 0x78 (Inherited: 0x70)
struct UFortAthenaBTService_JumpOffBus : UBTService {
	struct FName JumpOffBusExecutionStatusName; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class FortniteAI.FortAthenaBTService_ManageWeapon
// Size: 0xa8 (Inherited: 0x70)
struct UFortAthenaBTService_ManageWeapon : UBTService {
	struct FName WeaponFireName; // 0x70(0x04)
	struct FName WeaponTriggerMeleeName; // 0x74(0x04)
	struct FName WeaponTriggerThrowableName; // 0x78(0x04)
	struct FName WeaponReloadName; // 0x7c(0x04)
	struct FName WeaponName; // 0x80(0x04)
	struct FName WeaponTargetingName; // 0x84(0x04)
	struct FName SprintExecutionStatusName; // 0x88(0x04)
	struct FName TacticalSprintExecutionStatusName; // 0x8c(0x04)
	struct FName HealingStatusKeyName; // 0x90(0x04)
	struct FName BlockWeaponActionsKeyName; // 0x94(0x04)
	char pad_98[0xa]; // 0x98(0x0a)
	bool bEndChargeOnFireStop; // 0xa2(0x01)
	char pad_A3[0x5]; // 0xa3(0x05)

	void ManageWeaponTargeting(struct UBehaviorTreeComponent* OwnerComp); // Function FortniteAI.FortAthenaBTService_ManageWeapon.ManageWeaponTargeting // (Final|Native|Protected|Const) // @ game+0x99b9c84
};

// Class FortniteAI.FortAthenaBTService_ManageVehicleWeapon
// Size: 0xa8 (Inherited: 0xa8)
struct UFortAthenaBTService_ManageVehicleWeapon : UFortAthenaBTService_ManageWeapon {
};

// Class FortniteAI.FortAthenaBTService_ModulateVehicleSpeedUsingDistBetween
// Size: 0xe0 (Inherited: 0x70)
struct UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween : UBTService {
	struct FBlackboardKeySelector BlackboardKeyA; // 0x70(0x28)
	struct FBlackboardKeySelector BlackboardKeyB; // 0x98(0x28)
	float MinDistance; // 0xc0(0x04)
	float MaxDistance; // 0xc4(0x04)
	float MinDistanceSpeed; // 0xc8(0x04)
	float MaxDistanceSpeed; // 0xcc(0x04)
	bool bCalculateAs2D; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
};

// Class FortniteAI.FortAthenaBTService_Patrolling
// Size: 0x90 (Inherited: 0x70)
struct UFortAthenaBTService_Patrolling : UBTService {
	struct FName PatrollingAppendDestinationKeyName; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	float AcceptableRadius; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct UNavigationQueryFilter* FilterClass; // 0x80(0x08)
	char bAllowPartialPath : 1; // 0x88(0x01)
	char bProjectGoalLocation : 1; // 0x88(0x01)
	char pad_88_2 : 6; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class FortniteAI.FortAthenaBTService_PauseVehicle
// Size: 0x70 (Inherited: 0x70)
struct UFortAthenaBTService_PauseVehicle : UBTService {
};

// Class FortniteAI.FortAthenaBTService_PickUpLoot
// Size: 0x90 (Inherited: 0x70)
struct UFortAthenaBTService_PickUpLoot : UBTService {
	struct FName LootObjectKeyName; // 0x70(0x04)
	struct FName ExecutionStatusName; // 0x74(0x04)
	struct FName InteractionExecutionStatusName; // 0x78(0x04)
	struct FName InteractionContextInfoName; // 0x7c(0x04)
	struct FName MovementStateKeyName; // 0x80(0x04)
	char pad_84[0xc]; // 0x84(0x0c)
};

// Class FortniteAI.FortAthenaBTService_PropagatePatrolProgressToPassengers
// Size: 0x78 (Inherited: 0x70)
struct UFortAthenaBTService_PropagatePatrolProgressToPassengers : UBTService {
	struct FName PatrollingAppendDestinationKeyName; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class FortniteAI.FortAthenaBTService_Revive
// Size: 0x90 (Inherited: 0x70)
struct UFortAthenaBTService_Revive : UBTService {
	struct FName ReviveTargetKeyName; // 0x70(0x04)
	struct FName ExecutionStatusName; // 0x74(0x04)
	struct FName MoveToPathMovementStateName; // 0x78(0x04)
	struct FName InteractionExecutionStatusName; // 0x7c(0x04)
	struct FName InteractionContextInfoName; // 0x80(0x04)
	bool bDisableLeash; // 0x84(0x01)
	char pad_85[0xb]; // 0x85(0x0b)
};

// Class FortniteAI.FortAthenaBTService_SetBlackboardBool
// Size: 0xa0 (Inherited: 0x70)
struct UFortAthenaBTService_SetBlackboardBool : UBTService {
	struct FBlackboardKeySelector BlackboardKey; // 0x70(0x28)
	bool bBlackboardValue; // 0x98(0x01)
	enum class EBTSetBlackboardBoolExitActions ExitAction; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// Class FortniteAI.FortAthenaBTService_Slide
// Size: 0x78 (Inherited: 0x70)
struct UFortAthenaBTService_Slide : UBTService {
	struct FName SlideExecutionStatusName; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)

	void OnStopSliding(struct AFortPlayerPawn* Pawn); // Function FortniteAI.FortAthenaBTService_Slide.OnStopSliding // (Final|Native|Private) // @ game+0x99b9da4
};

// Class FortniteAI.FortAthenaBTService_SmartObject
// Size: 0x80 (Inherited: 0x70)
struct UFortAthenaBTService_SmartObject : UBTService {
	struct FName SmartObjectStatusKeyName; // 0x70(0x04)
	struct FName SmartObjectDestinationKeyName; // 0x74(0x04)
	char pad_78[0x8]; // 0x78(0x08)
};

// Class FortniteAI.FortAthenaBTService_Sprinting
// Size: 0xc0 (Inherited: 0x70)
struct UFortAthenaBTService_Sprinting : UBTService {
	char pad_70[0x40]; // 0x70(0x40)
	struct FName SprintExecutionStatusName; // 0xb0(0x04)
	struct FName TacticalSprintExecutionStatusName; // 0xb4(0x04)
	struct FName TacticalSprintOverridenName; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class FortniteAI.FortAthenaBTService_UpdateTarget
// Size: 0x70 (Inherited: 0x70)
struct UFortAthenaBTService_UpdateTarget : UBTService {
};

// Class FortniteAI.FortAthenaBTService_WaitForPassengers
// Size: 0x78 (Inherited: 0x70)
struct UFortAthenaBTService_WaitForPassengers : UBTService {
	struct FName WaitForPassengersStatusKeyName; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class FortniteAI.FortAthenaBTService_Zipline
// Size: 0xb8 (Inherited: 0x70)
struct UFortAthenaBTService_Zipline : UBTService {
	struct FName ZiplineTargetName; // 0x70(0x04)
	struct FName LastZiplineUsedName; // 0x74(0x04)
	struct FName InteractionExecutionStatusName; // 0x78(0x04)
	struct FName InteractionContextInfoName; // 0x7c(0x04)
	struct FName UsageExecutionStatusName; // 0x80(0x04)
	struct FName ZiplineEntryLocationName; // 0x84(0x04)
	struct FName ZiplineExitLocationKeyName; // 0x88(0x04)
	struct FName MoveToPathMovementStateName; // 0x8c(0x04)
	struct FName MoveExecutionStatusName; // 0x90(0x04)
	struct FName FocalPointName; // 0x94(0x04)
	struct FName LastUsageTimeName; // 0x98(0x04)
	char pad_9C[0x1c]; // 0x9c(0x1c)
};

// Class FortniteAI.FortAthenaBTTask_ActivateVehicleBoost
// Size: 0x80 (Inherited: 0x70)
struct UFortAthenaBTTask_ActivateVehicleBoost : UBTTaskNode {
	bool bActivateBoost; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float BoostLength; // 0x74(0x04)
	bool bIgnoreMinimumDistanceLeft; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class FortniteAI.FortAthenaBTTask_BotAmbushPlayer
// Size: 0x108 (Inherited: 0x78)
struct UFortAthenaBTTask_BotAmbushPlayer : UBTTask_Wait {
	float FacingPrecision; // 0x78(0x04)
	float WeaponCooldown; // 0x7c(0x04)
	bool bClearBlackboardOnFinished; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FBlackboardKeySelector TargetedPlayerKeySelector; // 0x88(0x28)
	struct FBlackboardKeySelector MaxLocationErrorKeySelector; // 0xb0(0x28)
	struct FBlackboardKeySelector MinLocationErrorKeySelector; // 0xd8(0x28)
	char pad_100[0x8]; // 0x100(0x08)
};

// Class FortniteAI.FortAthenaBTTask_BotUnstuckTeleport
// Size: 0xf0 (Inherited: 0x70)
struct UFortAthenaBTTask_BotUnstuckTeleport : UBTTaskNode {
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x70(0x48)
	struct FName CanReachDestinationKeyName; // 0xb8(0x04)
	struct FName TeleportExecutionStatusKeyName; // 0xbc(0x04)
	struct FName LastPartialPathTimeKeyName; // 0xc0(0x04)
	struct FName LastPartialPathCountKeyName; // 0xc4(0x04)
	char pad_C8[0x20]; // 0xc8(0x20)
	struct UFortAthenaAIBotUnstuckDigestedSkillSet* UnstuckSkillSet; // 0xe8(0x08)
};

// Class FortniteAI.FortAthenaBTTask_BotWait
// Size: 0xa0 (Inherited: 0x78)
struct UFortAthenaBTTask_BotWait : UBTTask_Wait {
	struct FBlackboardKeySelector WaitCompleteKeySelector; // 0x78(0x28)
};

// Class FortniteAI.FortAthenaBTTask_Build
// Size: 0x80 (Inherited: 0x70)
struct UFortAthenaBTTask_Build : UBTTaskNode {
	struct FName ExecutionStatusKeyName; // 0x70(0x04)
	struct FName FocalPointName; // 0x74(0x04)
	struct FName BlockWeaponActionsKeyName; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class FortniteAI.FortAthenaBTTask_Conversation
// Size: 0x78 (Inherited: 0x70)
struct UFortAthenaBTTask_Conversation : UBTTaskNode {
	struct FName ConversationStatusKeyName; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class FortniteAI.FortAthenaBTTask_Dive
// Size: 0x80 (Inherited: 0x70)
struct UFortAthenaBTTask_Dive : UBTTaskNode {
	struct FName ExecutionStatusKeyName; // 0x70(0x04)
	struct FName DiveDestinationKeyName; // 0x74(0x04)
	char pad_78[0x8]; // 0x78(0x08)
};

// Class FortniteAI.FortAthenaBTTask_DynamicBlueprint
// Size: 0x80 (Inherited: 0x70)
struct UFortAthenaBTTask_DynamicBlueprint : UBTTaskNode {
	struct FName DynamicBlueprintStatusKeyName; // 0x70(0x04)
	struct FName DynamicBlueprintActorKeyName; // 0x74(0x04)
	char pad_78[0x8]; // 0x78(0x08)
};

// Class FortniteAI.FortAthenaBTTask_EnterVehicle
// Size: 0x78 (Inherited: 0x70)
struct UFortAthenaBTTask_EnterVehicle : UBTTaskNode {
	struct FName SelectedVehicleKeyName; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class FortniteAI.FortAthenaBTTask_Glide
// Size: 0x80 (Inherited: 0x70)
struct UFortAthenaBTTask_Glide : UBTTaskNode {
	struct FName ExecutionStatusKeyName; // 0x70(0x04)
	struct FName GlideDestinationKeyName; // 0x74(0x04)
	char pad_78[0x8]; // 0x78(0x08)
};

// Class FortniteAI.FortAthenaBTTask_Interact
// Size: 0xe0 (Inherited: 0x70)
struct UFortAthenaBTTask_Interact : UBTTaskNode {
	bool bShouldFocusOnInteraction; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FBlackboardKeySelector InteractExecutionStatusKeySelector; // 0x78(0x28)
	struct FBlackboardKeySelector InteractContextInfoKeySelector; // 0xa0(0x28)
	struct FName FocalPointName; // 0xc8(0x04)
	struct FName InteractActorName; // 0xcc(0x04)
	struct FName JumpExecutionStatusName; // 0xd0(0x04)
	struct FName WeaponTriggerMeleeName; // 0xd4(0x04)
	char pad_D8[0x8]; // 0xd8(0x08)
};

// Class FortniteAI.FortAthenaBTTask_LeaveVehicle
// Size: 0x78 (Inherited: 0x70)
struct UFortAthenaBTTask_LeaveVehicle : UBTTaskNode {
	bool bWaitVehicleStop; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class FortniteAI.FortAthenaBTTask_ModulateVehicleSpeed
// Size: 0x78 (Inherited: 0x70)
struct UFortAthenaBTTask_ModulateVehicleSpeed : UBTTaskNode {
	float NewDrivingSpeed; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class FortniteAI.FortAthenaBTTask_PauseVehicle
// Size: 0x78 (Inherited: 0x70)
struct UFortAthenaBTTask_PauseVehicle : UBTTaskNode {
	bool bPausePathFollow; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class FortniteAI.FortAthenaBTTask_PlayEmote
// Size: 0x78 (Inherited: 0x70)
struct UFortAthenaBTTask_PlayEmote : UBTTaskNode {
	struct FName PlayEmoteExecutionStatusKeyName; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class FortniteAI.FortAthenaBTTask_ReverseVehicle
// Size: 0x78 (Inherited: 0x70)
struct UFortAthenaBTTask_ReverseVehicle : UBTTaskNode {
	bool bReverseVehicle; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class FortniteAI.FortAthenaBTTask_SetAggressiveDriving
// Size: 0x78 (Inherited: 0x70)
struct UFortAthenaBTTask_SetAggressiveDriving : UBTTaskNode {
	bool bAggressiveDriving; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class FortniteAI.FortAthenaBTTask_ShootTrap
// Size: 0xa8 (Inherited: 0x78)
struct UFortAthenaBTTask_ShootTrap : UBTTask_Wait {
	struct FBlackboardKeySelector TargetActorKey; // 0x78(0x28)
	struct FName TrapOnPathKeyName; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class FortniteAI.FortAthenaBTTask_SteerMovement
// Size: 0xa0 (Inherited: 0x70)
struct UFortAthenaBTTask_SteerMovement : UBTTaskNode {
	struct FBlackboardKeySelector SteerDirectionKeySelector; // 0x70(0x28)
	char bSetControlRotation : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class FortniteAI.FortAthenaBTTask_Undermine
// Size: 0x80 (Inherited: 0x70)
struct UFortAthenaBTTask_Undermine : UBTTaskNode {
	struct FName UndermineTargetKeyName; // 0x70(0x04)
	struct FName UndermineLocationImpactName; // 0x74(0x04)
	struct FName UndermineExecutionStatusKeyName; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class FortniteAI.FortAthenaBTTask_UseItem
// Size: 0x88 (Inherited: 0x70)
struct UFortAthenaBTTask_UseItem : UBTTaskNode {
	struct FName ActionObjectKeyName; // 0x70(0x04)
	struct FName ExecutionStatusKeyName; // 0x74(0x04)
	float MinWaitTimeBetweenUses; // 0x78(0x04)
	float MaxWaitTimeBetweenUses; // 0x7c(0x04)
	char pad_80[0x8]; // 0x80(0x08)
};

// Class FortniteAI.FortAthenaBTTask_UseSmartObject
// Size: 0x130 (Inherited: 0x70)
struct UFortAthenaBTTask_UseSmartObject : UBTTaskNode {
	struct FName SmartObjectsStatusKeyName; // 0x70(0x04)
	char pad_74[0x1c]; // 0x74(0x1c)
	struct FGameplayInteractionContext GameplayInteractionContext; // 0x90(0xa0)
};

// Class FortniteAI.FortAthenaBTTask_VehicleHonk
// Size: 0x80 (Inherited: 0x70)
struct UFortAthenaBTTask_VehicleHonk : UBTTaskNode {
	float MaxHonkTime; // 0x70(0x04)
	float MinHonkTime; // 0x74(0x04)
	float MaxFlickerTime; // 0x78(0x04)
	float MinFlickerTime; // 0x7c(0x04)
};

// Class FortniteAI.FortAthenaBTTask_VehicleSwitchSeat
// Size: 0x78 (Inherited: 0x70)
struct UFortAthenaBTTask_VehicleSwitchSeat : UBTTaskNode {
	enum class SwitchSeatType SwitchSeatType; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class FortniteAI.FortAthenaBTTask_VehicleTurnTo
// Size: 0xa0 (Inherited: 0x98)
struct UFortAthenaBTTask_VehicleTurnTo : UBTTask_BlackboardBase {
	float Precision; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class FortniteAI.FortAthenaBTTask_Zipline
// Size: 0x80 (Inherited: 0x70)
struct UFortAthenaBTTask_Zipline : UBTTaskNode {
	struct FName UsageExecutionStatusName; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FName ZiplineTargetName; // 0x78(0x04)
	char pad_7C[0x1]; // 0x7c(0x01)
	bool bExitZiplineOnTaskFinished; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
};

// Class FortniteAI.FortAthenaLeashComponent
// Size: 0xe8 (Inherited: 0xa0)
struct UFortAthenaLeashComponent : UActorComponent {
	struct FScalableFloat LeashRadius; // 0xa0(0x28)
	struct FVector LeashCenter; // 0xc8(0x18)
	float LeashRadiusSqr; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)

	void SetLeashRadius(float NewRadius); // Function FortniteAI.FortAthenaLeashComponent.SetLeashRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x99bb19c
	bool IsInsideLeash(struct FVector& Location); // Function FortniteAI.FortAthenaLeashComponent.IsInsideLeash // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x99ba970
	float GetLeashRadius(); // Function FortniteAI.FortAthenaLeashComponent.GetLeashRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99ba718
	struct FVector GetLeashCenter(); // Function FortniteAI.FortAthenaLeashComponent.GetLeashCenter // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x99ba6f0
};

// Class FortniteAI.FortAthenaLocalGameplayBehavior
// Size: 0x298 (Inherited: 0x288)
struct AFortAthenaLocalGameplayBehavior : AActor {
	bool bNeedToAwakeDuringExecution; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct UFortAthenaBTTask_DynamicBlueprint* CachedTask; // 0x290(0x08)

	void OnExecute(struct AActor* Activator); // Function FortniteAI.FortAthenaLocalGameplayBehavior.OnExecute // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnAbort(); // Function FortniteAI.FortAthenaLocalGameplayBehavior.OnAbort // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void FinishExecute(); // Function FortniteAI.FortAthenaLocalGameplayBehavior.FinishExecute // (Final|Native|Public|BlueprintCallable) // @ game+0x99ba63c
};

// Class FortniteAI.FortAthenaNavArea_ShallowWater
// Size: 0x50 (Inherited: 0x50)
struct UFortAthenaNavArea_ShallowWater : UFortNavArea {
};

// Class FortniteAI.FortAthenaNavArea_Water
// Size: 0x50 (Inherited: 0x50)
struct UFortAthenaNavArea_Water : UFortNavArea {
};

// Class FortniteAI.FortAthenaNpcEvaluator_Encampment
// Size: 0x4c0 (Inherited: 0x218)
struct UFortAthenaNpcEvaluator_Encampment : UFortAthenaAIBotEvaluator_Movement {
	struct FScalableFloat EncampmentEnable; // 0x218(0x28)
	struct FScalableFloat EncampmentTentativeDelayMin; // 0x240(0x28)
	struct FScalableFloat EncampmentTentativeDelayMax; // 0x268(0x28)
	struct FScalableFloat EncampmentDurationMin; // 0x290(0x28)
	struct FScalableFloat EncampmentDurationMax; // 0x2b8(0x28)
	struct FScalableFloat BuilderPercentage; // 0x2e0(0x28)
	struct FScalableFloat BuilderMinDistance; // 0x308(0x28)
	struct FScalableFloat BuilderMaxDistance; // 0x330(0x28)
	struct FScalableFloat GuardMinDistance; // 0x358(0x28)
	struct FScalableFloat GuardMaxDistance; // 0x380(0x28)
	struct FScalableFloat AllowInSwimming; // 0x3a8(0x28)
	struct FScalableFloat AllowInFalling; // 0x3d0(0x28)
	struct FScalableFloat MinSquadMembersCountToBuild; // 0x3f8(0x28)
	struct FName EncampmentStatusKeyName; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct FName EncampmentMovementStateKeyName; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct FName EncampmentCenterLocationKeyName; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct FName EncampmentDestinationKeyName; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct FName EncampmentAroundCampFireLocationKeyName; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct FName EncampmentRoleKeyName; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct FName DefensiveBuildName; // 0x450(0x04)
	char pad_454[0x6c]; // 0x454(0x6c)
};

// Class FortniteAI.FortAthenaNpcEvaluator_FollowPatrolPath
// Size: 0x248 (Inherited: 0x218)
struct UFortAthenaNpcEvaluator_FollowPatrolPath : UFortAthenaAIBotEvaluator_Movement {
	struct FName FollowPatrolPathKeyName; // 0x218(0x04)
	struct FName FollowPatrolPathMovementStateKeyName; // 0x21c(0x04)
	struct FName FollowPatrolPathDestinationKeyName; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)
	float ChanceToTakeABreak; // 0x228(0x04)
	float BreakDurationMin; // 0x22c(0x04)
	float BreakDurationMax; // 0x230(0x04)
	char pad_234[0x14]; // 0x234(0x14)
};

// Class FortniteAI.FortAthenaNpcEvaluator_FollowSquadLeader
// Size: 0x368 (Inherited: 0x218)
struct UFortAthenaNpcEvaluator_FollowSquadLeader : UFortAthenaAIBotEvaluator_Movement {
	struct FScalableFloat FormationOffsetRadiusMin; // 0x218(0x28)
	struct FScalableFloat FormationOffsetRadiusMax; // 0x240(0x28)
	struct FScalableFloat TooFarFromSquadLeaderDistance; // 0x268(0x28)
	struct FScalableFloat MaxNoiseRadius; // 0x290(0x28)
	struct FScalableFloat MinDurationNoiseEvaluate; // 0x2b8(0x28)
	struct FScalableFloat MaxDurationNoiseEvaluate; // 0x2e0(0x28)
	struct FName FollowSquadLeaderStatusKeyName; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FName FollowSquadLeaderMovementStateKeyName; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct FName FollowSquadLeaderDestinationKeyName; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct FName TooFarFromLeaderKeyName; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct FVector CachedSquadFormationOffset; // 0x328(0x18)
	struct FVector CachedNoiseOffset; // 0x340(0x18)
	float CachedTooFarFromSquadLeaderDistanceSqr; // 0x358(0x04)
	float LastNoiseOffsetUpdateTime; // 0x35c(0x04)
	float DurationNoiseEvaluate; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
};

// Class FortniteAI.FortAthenaNpcEvaluator_Leash
// Size: 0x240 (Inherited: 0x218)
struct UFortAthenaNpcEvaluator_Leash : UFortAthenaAIBotEvaluator_Movement {
	struct FName LeashKeyName; // 0x218(0x04)
	struct FName LeashMovementStateKeyName; // 0x21c(0x04)
	struct FName LeashDestinationKeyName; // 0x220(0x04)
	struct FName LeashLocationKeyName; // 0x224(0x04)
	struct FName LeashOuterRadiusKeyName; // 0x228(0x04)
	char pad_22C[0xc]; // 0x22c(0x0c)
	struct UFortAthenaAIRuntimeParameters_Leash* LeashRuntimeParameters; // 0x238(0x08)
};

// Class FortniteAI.FortAthenaNpcEvaluator_Patrolling
// Size: 0x260 (Inherited: 0x218)
struct UFortAthenaNpcEvaluator_Patrolling : UFortAthenaAIBotEvaluator_Movement {
	struct FName PatrollingKeyName; // 0x218(0x04)
	struct FName PatrollingMovementStateKeyName; // 0x21c(0x04)
	struct FName PatrollingDestinationKeyName; // 0x220(0x04)
	struct FName DynamicBlueprintStatusKeyName; // 0x224(0x04)
	struct FName DynamicBlueprintActorKeyName; // 0x228(0x04)
	struct FName PatrollingShouldMoveKeyName; // 0x22c(0x04)
	struct FName PatrollingAppendDestinationKeyName; // 0x230(0x04)
	char pad_234[0x8]; // 0x234(0x08)
	float DistanceToTestPoint; // 0x23c(0x04)
	bool bCanDisablePatrolling; // 0x240(0x01)
	bool bCanReenablePatrolling; // 0x241(0x01)
	char pad_242[0x2]; // 0x242(0x02)
	float ReenableTimer; // 0x244(0x04)
	bool bCanSelectNearestPatrolPointAtStart; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct UFortAthenaNpcPatrollingComponent* CachedNpcPatrollingComponent; // 0x250(0x08)
	char pad_258[0x8]; // 0x258(0x08)
};

// Class FortniteAI.FortAthenaNpcGalileoComponent
// Size: 0x100 (Inherited: 0xa0)
struct UFortAthenaNpcGalileoComponent : UActorComponent {
	struct AFortAthenaAIBotController* CachedBotController; // 0xa0(0x08)
	struct AFortPawn* PossessedPawn; // 0xa8(0x08)
	struct TArray<struct FVector> PatrolPath; // 0xb0(0x10)
	struct TArray<struct AFortAthenaAIBotController*> CommunicationGroup; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnPatrollingStart; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnPatrollingStop; // 0xe0(0x10)
	char pad_F0[0x10]; // 0xf0(0x10)

	void SetPatrolPath(struct TArray<struct FVector>& NewPatrolPath); // Function FortniteAI.FortAthenaNpcGalileoComponent.SetPatrolPath // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x99bb220
	void SetCommunicationGroup(struct TArray<struct AFortAthenaAIBotController*>& AIBotControllerList); // Function FortniteAI.FortAthenaNpcGalileoComponent.SetCommunicationGroup // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x99bb000
	void OnPawnDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.FortAthenaNpcGalileoComponent.OnPawnDied // (Final|Native|Public|HasDefaults) // @ game+0x99bad58
	struct TArray<struct FVector> GetPatrolPath(); // Function FortniteAI.FortAthenaNpcGalileoComponent.GetPatrolPath // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99ba74c
	struct TArray<struct AFortAthenaAIBotController*> GetCommunicationGroup(); // Function FortniteAI.FortAthenaNpcGalileoComponent.GetCommunicationGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x99ba694
};

// Class FortniteAI.FortAthenaNPCLoopStateComponent
// Size: 0xb0 (Inherited: 0xa0)
struct UFortAthenaNPCLoopStateComponent : UActorComponent {
	char bSpawnOutsideTheLoop : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct UFortAthenaAIRuntimeParameters_AIBotLoopSettings* RuntimeLoopSettings; // 0xa8(0x08)

	void OnOwnerPawnDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.FortAthenaNPCLoopStateComponent.OnOwnerPawnDied // (Final|Native|Protected|HasDefaults) // @ game+0x99bab24
	void InitLoopState(struct AFortPawn* PawnOwner); // Function FortniteAI.FortAthenaNPCLoopStateComponent.InitLoopState // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class FortniteAI.FortAthenaNpcPatrollingComponent
// Size: 0xf8 (Inherited: 0xa0)
struct UFortAthenaNpcPatrollingComponent : UActorComponent {
	struct AAIController* CachedAIController; // 0xa0(0x08)
	struct FMulticastInlineDelegate OnStartPatrollingEvent; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnStopPatrollingEvent; // 0xb8(0x10)
	struct AFortAthenaPatrolPath* PatrolPath; // 0xc8(0x08)
	char pad_D0[0x28]; // 0xd0(0x28)

	void UpdateCurrentDestinationToNearestNextPoint(); // Function FortniteAI.FortAthenaNpcPatrollingComponent.UpdateCurrentDestinationToNearestNextPoint // (Final|Native|Public|BlueprintCallable) // @ game+0x99bb418
	void SetPatrolPath(struct AFortAthenaPatrolPath* NewPatrolPath, bool bOrientationAlreadyRandomized); // Function FortniteAI.FortAthenaNpcPatrollingComponent.SetPatrolPath // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x99bb2c4
	void SelectNextPatrolPoint(); // Function FortniteAI.FortAthenaNpcPatrollingComponent.SelectNextPatrolPoint // (Final|Native|Public|BlueprintCallable) // @ game+0x99bafec
	bool IsPatrollingEnable(); // Function FortniteAI.FortAthenaNpcPatrollingComponent.IsPatrollingEnable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99baa04
	bool IsCurrentPatrolPointAnEndPoint(); // Function FortniteAI.FortAthenaNpcPatrollingComponent.IsCurrentPatrolPointAnEndPoint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99ba92c
	int32_t GetPatrolPointsCount(); // Function FortniteAI.FortAthenaNpcPatrollingComponent.GetPatrolPointsCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99ba90c
	struct AFortAthenaPatrolPath* GetPatrolPath(); // Function FortniteAI.FortAthenaNpcPatrollingComponent.GetPatrolPath // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7447280
	struct AFortAthenaPatrolPoint* GetCurrentPatrolPoint(); // Function FortniteAI.FortAthenaNpcPatrollingComponent.GetCurrentPatrolPoint // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99ba6cc
	bool FindAndSetDynamicPatrolPath(struct FFortAthenaAIObjectTrackerQuery& FindQuery, bool bOrientationAlreadyRandomized, bool bExcludeCurrentlyUsedPatrolPath); // Function FortniteAI.FortAthenaNpcPatrollingComponent.FindAndSetDynamicPatrolPath // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x99ba4fc
};

// Class FortniteAI.FortAthenaNPCSpawnerData
// Size: 0x110 (Inherited: 0x110)
struct UFortAthenaNPCSpawnerData : UFortAthenaAIBotSpawnerData {
};

// Class FortniteAI.PatrolPathRenderingComponent
// Size: 0x530 (Inherited: 0x530)
struct UPatrolPathRenderingComponent : UPrimitiveComponent {
};

// Class FortniteAI.FortAthenaPatrolPath
// Size: 0x440 (Inherited: 0x288)
struct AFortAthenaPatrolPath : AActor {
	char pad_288[0x18]; // 0x288(0x18)
	enum class EPatrollingMode Mode; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct TArray<struct AFortAthenaPatrolPoint*> PatrolPoints; // 0x2a8(0x10)
	bool bUseRandomStartupPatrolPoint; // 0x2b8(0x01)
	bool bUseRandomStartupDirection; // 0x2b9(0x01)
	char pad_2BA[0x6]; // 0x2ba(0x06)
	struct FGameplayTagContainer GameplayTags; // 0x2c0(0x20)
	struct AActor* RadialLeashLocationActorOverride; // 0x2e0(0x08)
	float RadialLeashInnerRadiusOverride; // 0x2e8(0x04)
	float RadialLeashOuterRadiusOverride; // 0x2ec(0x04)
	struct TArray<struct FPatrolPathLeash> PathLeashArray; // 0x2f0(0x10)
	struct FScalableFloat WaterLevelIndexMax; // 0x300(0x28)
	struct FScalableFloat WaterLevelIndexMin; // 0x328(0x28)
	struct FMulticastInlineDelegate OnPatrolPointFailedToReach; // 0x350(0x10)
	struct FMulticastInlineDelegate OnPatrolPointReached; // 0x360(0x10)
	struct FMulticastInlineDelegate OnPatrolPathStarted; // 0x370(0x10)
	struct FMulticastInlineDelegate OnPatrolPathStopped; // 0x380(0x10)
	struct FScalableFloat MaxConcurrentUsage; // 0x390(0x28)
	int32_t CurrentConcurrentUsage; // 0x3b8(0x04)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct FScalableFloat MaxLifetimeUsage; // 0x3c0(0x28)
	float DebugLinkWidthSelected; // 0x3e8(0x04)
	float DebugLinkWidthNotSelected; // 0x3ec(0x04)
	struct FLinearColor DebugNotSelectedColor; // 0x3f0(0x10)
	char pad_400_0 : 1; // 0x400(0x01)
	char bIsPatrolPathEnabled : 1; // 0x400(0x01)
	char pad_400_2 : 6; // 0x400(0x01)
	char pad_401[0x3f]; // 0x401(0x3f)

	void SetPatrolPathEnabled(bool bIsEnabled); // Function FortniteAI.FortAthenaPatrolPath.SetPatrolPathEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x99bb38c
	void OnCurrentPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // Function FortniteAI.FortAthenaPatrolPath.OnCurrentPlaylistLoaded // (Final|Native|Protected|HasOutParms) // @ game+0x99baa1c
	void GetPatrolPoints(struct TArray<struct AFortAthenaPatrolPoint*>& OutPatrolPoints); // Function FortniteAI.FortAthenaPatrolPath.GetPatrolPoints // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x99ba768
	bool CanBeUsed(); // Function FortniteAI.FortAthenaPatrolPath.CanBeUsed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99ba4d0
};

// Class FortniteAI.PatrolPointRenderingComponent
// Size: 0x530 (Inherited: 0x530)
struct UPatrolPointRenderingComponent : UPrimitiveComponent {
};

// Class FortniteAI.FortAthenaPatrolPoint
// Size: 0x290 (Inherited: 0x288)
struct AFortAthenaPatrolPoint : AActor {
	struct AFortAthenaLocalGameplayBehavior* LocalGameplayBehavior; // 0x288(0x08)
};

// Class FortniteAI.FortAthenaPlayerBotSpawnerData
// Size: 0x110 (Inherited: 0x110)
struct UFortAthenaPlayerBotSpawnerData : UFortAthenaAIBotSpawnerData {
};

// Class FortniteAI.FortAthenaPlayMontageStateTreeTask
// Size: 0x68 (Inherited: 0x40)
struct UFortAthenaPlayMontageStateTreeTask : UStateTreeTaskBlueprintBase {
	struct UAnimMontage* Montage; // 0x40(0x08)
	int32_t LoopsToRun; // 0x48(0x04)
	bool bLoopForever; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float DelayBetweenLoops; // 0x50(0x04)
	float RandomDeviationBetweenLoops; // 0x54(0x04)
	char pad_58[0x10]; // 0x58(0x10)

	void HandleMontageEnded(struct UAnimMontage* EndedMontage, bool bInterrupted); // Function FortniteAI.FortAthenaPlayMontageStateTreeTask.HandleMontageEnded // (Final|Native|Private) // @ game+0x99bb64c
};

// Class FortniteAI.FortAthenaTrackableAIObjectComponent
// Size: 0xe0 (Inherited: 0xa0)
struct UFortAthenaTrackableAIObjectComponent : UActorComponent {
	char pad_A0[0x10]; // 0xa0(0x10)
	struct FGameplayTagContainer GameplayTags; // 0xb0(0x20)
	char pad_D0[0x8]; // 0xd0(0x08)
	ClassPtrProperty CustomRegistrationClass; // 0xd8(0x08)
};

// Class FortniteAI.FortAthenaTrackableAIObjectInterface
// Size: 0x28 (Inherited: 0x28)
struct UFortAthenaTrackableAIObjectInterface : UInterface {
};

// Class FortniteAI.FortAthenaTrackableAIObjectVehicleComponent
// Size: 0xe0 (Inherited: 0xe0)
struct UFortAthenaTrackableAIObjectVehicleComponent : UFortAthenaTrackableAIObjectComponent {

	void HandleSleepStateChanged(bool bIsAwake); // Function FortniteAI.FortAthenaTrackableAIObjectVehicleComponent.HandleSleepStateChanged // (Final|Native|Private) // @ game+0x99bb714
};

// Class FortniteAI.FortBotController
// Size: 0x520 (Inherited: 0x518)
struct AFortBotController : AFortAIController {
	struct UFortBotMissionLogic* CurrentMissionLogic; // 0x518(0x08)
};

// Class FortniteAI.FortBotMissionLogic
// Size: 0x78 (Inherited: 0x28)
struct UFortBotMissionLogic : UObject {
	struct AFortMission* Mission; // 0x28(0x08)
	struct TArray<struct AActor*> Goals; // 0x30(0x10)
	struct TArray<struct AFortBotStructureBuilder*> Builders; // 0x40(0x10)
	struct UBehaviorTree* CurrentBehaviorAsset; // 0x50(0x08)
	struct TArray<struct AFortBotController*> AssignedAI; // 0x58(0x10)
	struct TArray<char> GoalHasLocator; // 0x68(0x10)

	struct AFortBotStructureBuilder* SpawnStructureBuilder(struct AActor* MissionGoal, struct UFortBuildingInstructions* BuildingInstructions); // Function FortniteAI.FortBotMissionLogic.SpawnStructureBuilder // (Final|Native|Public|BlueprintCallable) // @ game+0x99bbdec
	void SetGoalsInvulnerable(bool bGodMode); // Function FortniteAI.FortBotMissionLogic.SetGoalsInvulnerable // (Final|Native|Public|BlueprintCallable) // @ game+0x99bbd6c
	void SetCurrentBehavior(struct UBehaviorTree* Behavior); // Function FortniteAI.FortBotMissionLogic.SetCurrentBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x99bbcec
	void ResetBehavior(); // Function FortniteAI.FortBotMissionLogic.ResetBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x99bbc60
	void OnMissionStarted(); // Function FortniteAI.FortBotMissionLogic.OnMissionStarted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnMissionFinished(); // Function FortniteAI.FortBotMissionLogic.OnMissionFinished // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnMissionActivated(); // Function FortniteAI.FortBotMissionLogic.OnMissionActivated // (Event|Public|BlueprintEvent) // @ game+0xd67374
	bool OnInteractWithMissionGoal(struct AFortAIController* BotAI, struct AActor* MissionGoal); // Function FortniteAI.FortBotMissionLogic.OnInteractWithMissionGoal // (Event|Public|BlueprintEvent) // @ game+0xd67374
	bool OnCanStartOtherMission(struct AFortAIController* BotAI, struct AFortMission* OtherMission); // Function FortniteAI.FortBotMissionLogic.OnCanStartOtherMission // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnAssignedBehavior(struct AFortAIController* BotAI); // Function FortniteAI.FortBotMissionLogic.OnAssignedBehavior // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void MarkSingleLocator(struct AActor* LocatorActor); // Function FortniteAI.FortBotMissionLogic.MarkSingleLocator // (Final|Native|Public|BlueprintCallable) // @ game+0x99bb7e0
	void MarkAllLocated(); // Function FortniteAI.FortBotMissionLogic.MarkAllLocated // (Final|Native|Public|BlueprintCallable) // @ game+0x99bb794
	void ClearAllLocated(); // Function FortniteAI.FortBotMissionLogic.ClearAllLocated // (Final|Native|Public|BlueprintCallable) // @ game+0x99bb61c
};

// Class FortniteAI.FortBotMissionManager
// Size: 0xd0 (Inherited: 0x28)
struct UFortBotMissionManager : UObject {
	struct TSoftClassPtr<UObject> BotPawnClass; // 0x28(0x28)
	struct TArray<struct AFortPawn*> BotPawns; // 0x50(0x10)
	struct TArray<struct UFortBotMissionLogic*> ActiveMissionsLogicData; // 0x60(0x10)
	struct UFortBotMissionLogic* PrimaryMissionLogicData; // 0x70(0x08)
	char pad_78[0x58]; // 0x78(0x58)
};

// Class FortniteAI.FortBotNameSettings
// Size: 0x50 (Inherited: 0x28)
struct UFortBotNameSettings : UObject {
	enum class EBotNamingMode NamingMode; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FText OverrideName; // 0x30(0x18)
	bool bAddPlayerIDSuffix; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class FortniteAI.FortBotStructureBuilder
// Size: 0x2c0 (Inherited: 0x288)
struct AFortBotStructureBuilder : AActor {
	struct UFortBuildingInstructions* BuildingInstructions; // 0x288(0x08)
	struct TArray<struct ABuildingActor*> BuiltActors; // 0x290(0x10)
	struct AActor* CachedGoal; // 0x2a0(0x08)
	char pad_2A8[0x18]; // 0x2a8(0x18)

	void RunDeconstructor(); // Function FortniteAI.FortBotStructureBuilder.RunDeconstructor // (Final|Native|Public|BlueprintCallable) // @ game+0x99bbcd8
	void OnBuildingDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.FortBotStructureBuilder.OnBuildingDied // (Final|Native|Protected|HasDefaults) // @ game+0x99bb9e4
	void BuildAll(); // Function FortniteAI.FortBotStructureBuilder.BuildAll // (Final|Native|Public|BlueprintCallable) // @ game+0x99bb608
};

// Class FortniteAI.FortBTContext_MoveUrgency
// Size: 0x78 (Inherited: 0x70)
struct UFortBTContext_MoveUrgency : UFortBTService_ContextOverride {
	enum class EFortMovementUrgency MoveUrgency; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class FortniteAI.FortBTContext_SkipNotPerceivedGoals
// Size: 0x70 (Inherited: 0x70)
struct UFortBTContext_SkipNotPerceivedGoals : UFortBTService_ContextOverride {
};

// Class FortniteAI.FortBTContext_SuppressGoalUpdate
// Size: 0x78 (Inherited: 0x70)
struct UFortBTContext_SuppressGoalUpdate : UFortBTService_ContextOverride {
	bool bUnregisterFromGoalManager; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class FortniteAI.FortBTDecorator_AIBotVehicleSeatStatus
// Size: 0x70 (Inherited: 0x68)
struct UFortBTDecorator_AIBotVehicleSeatStatus : UBTDecorator {
	enum class SeatStatusType SeatType; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class FortniteAI.FortBTDecorator_CanBeConsideredAirborne
// Size: 0x90 (Inherited: 0x90)
struct UFortBTDecorator_CanBeConsideredAirborne : UBTDecorator_BlackboardBase {
};

// Class FortniteAI.FortBTDecorator_DistanceBetween
// Size: 0xd0 (Inherited: 0x68)
struct UFortBTDecorator_DistanceBetween : UBTDecorator {
	enum class EArithmeticKeyOperation Operator; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FBlackboardKeySelector BlackboardKeyA; // 0x70(0x28)
	struct FBlackboardKeySelector BlackboardKeyB; // 0x98(0x28)
	float SpecifiedDistance; // 0xc0(0x04)
	char bUseSelf : 1; // 0xc4(0x01)
	char bCalculateAs2D : 1; // 0xc4(0x01)
	char pad_C4_2 : 6; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float DistanceCalculationUpdateRate; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class FortniteAI.FortBTDecorator_QueryGameplayAbility
// Size: 0x100 (Inherited: 0x68)
struct UFortBTDecorator_QueryGameplayAbility : UBTDecorator {
	struct FGameplayTagContainer GameplayAbilityTag; // 0x68(0x20)
	struct FBlackboardKeySelector GameplayAbilityTagBlackboardKey; // 0x88(0x28)
	struct FBlackboardKeySelector Target; // 0xb0(0x28)
	struct FGameplayTagContainer ActiveAbilityTagsToSkipTesting; // 0xd8(0x20)
	bool bUseTarget; // 0xf8(0x01)
	bool bUseBlackboardTag; // 0xf9(0x01)
	char pad_FA[0x6]; // 0xfa(0x06)
};

// Class FortniteAI.FortBTDecorator_GameplayAbility_CanActivate
// Size: 0x100 (Inherited: 0x100)
struct UFortBTDecorator_GameplayAbility_CanActivate : UFortBTDecorator_QueryGameplayAbility {
};

// Class FortniteAI.FortBTDecorator_GameplayAbility_CanHitTarget
// Size: 0x108 (Inherited: 0x100)
struct UFortBTDecorator_GameplayAbility_CanHitTarget : UFortBTDecorator_QueryGameplayAbility {
	char UseIdealYawRotationToTarget : 1; // 0x100(0x01)
	char pad_100_1 : 7; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// Class FortniteAI.FortBTDecorator_GameplayAbility_CompareDistance
// Size: 0x110 (Inherited: 0x100)
struct UFortBTDecorator_GameplayAbility_CompareDistance : UFortBTDecorator_QueryGameplayAbility {
	struct TArray<struct FDistanceToTargetComparison> DistanceComparisons; // 0x100(0x10)
};

// Class FortniteAI.FortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags
// Size: 0x100 (Inherited: 0x100)
struct UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags : UFortBTDecorator_QueryGameplayAbility {
};

// Class FortniteAI.FortBTDecorator_GameplayAbility_HasGameplayAbility
// Size: 0xb8 (Inherited: 0x68)
struct UFortBTDecorator_GameplayAbility_HasGameplayAbility : UBTDecorator {
	struct FGameplayTagContainer GameplayAbilityTag; // 0x68(0x20)
	struct FBlackboardKeySelector GameplayAbilityTagBlackboardKey; // 0x88(0x28)
	bool bUseBlackboardTag; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class FortniteAI.FortBTDecorator_GameplayAbility_HasNearbyPawns
// Size: 0x108 (Inherited: 0x100)
struct UFortBTDecorator_GameplayAbility_HasNearbyPawns : UFortBTDecorator_QueryGameplayAbility {
	float NearbyPawnDistance; // 0x100(0x04)
	bool bFilterAIPawns; // 0x104(0x01)
	bool bFilterPlayerPawns; // 0x105(0x01)
	char pad_106[0x2]; // 0x106(0x02)
};

// Class FortniteAI.FortBTDecorator_GameplayAbility_IsClosestPawnInRange
// Size: 0x108 (Inherited: 0x100)
struct UFortBTDecorator_GameplayAbility_IsClosestPawnInRange : UFortBTDecorator_QueryGameplayAbility {
	float NearbyPawnDistance; // 0x100(0x04)
	bool bFilterAIPawns; // 0x104(0x01)
	bool bFilterPlayerPawns; // 0x105(0x01)
	char pad_106[0x2]; // 0x106(0x02)
};

// Class FortniteAI.FortBTDecorator_GameplayAbility_IsOnCooldown
// Size: 0x100 (Inherited: 0x100)
struct UFortBTDecorator_GameplayAbility_IsOnCooldown : UFortBTDecorator_QueryGameplayAbility {
};

// Class FortniteAI.FortBTDecorator_GameplayAbility_IsRotatedToAttackTarget
// Size: 0x100 (Inherited: 0x100)
struct UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget : UFortBTDecorator_QueryGameplayAbility {
};

// Class FortniteAI.FortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange
// Size: 0x100 (Inherited: 0x100)
struct UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange : UFortBTDecorator_QueryGameplayAbility {
};

// Class FortniteAI.FortBTDecorator_IsGoalPawn
// Size: 0x90 (Inherited: 0x90)
struct UFortBTDecorator_IsGoalPawn : UBTDecorator_BlackboardBase {
};

// Class FortniteAI.FortBTDecorator_IsInBotEndGame
// Size: 0x68 (Inherited: 0x68)
struct UFortBTDecorator_IsInBotEndGame : UBTDecorator {
};

// Class FortniteAI.FortBTDecorator_IsMoving
// Size: 0x148 (Inherited: 0x100)
struct UFortBTDecorator_IsMoving : UFortBTDecorator_QueryGameplayAbility {
	float UpdateInterval; // 0x100(0x04)
	float MinTime; // 0x104(0x04)
	bool bUseMinDist; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float MinDistMinTime; // 0x10c(0x04)
	struct FDistanceToTargetComparison MinDistanceComparison; // 0x110(0x38)
};

// Class FortniteAI.FortBTDecorator_IsTakerAirborne
// Size: 0x68 (Inherited: 0x68)
struct UFortBTDecorator_IsTakerAirborne : UBTDecorator {
};

// Class FortniteAI.FortBTDecorator_WeaponStatus
// Size: 0x98 (Inherited: 0x68)
struct UFortBTDecorator_WeaponStatus : UBTDecorator {
	float WeaponStatusUpdateRate; // 0x68(0x04)
	char bTestIfCurrentWeaponIsValid : 1; // 0x6c(0x01)
	char bCurrentWeaponShouldBeValid : 1; // 0x6c(0x01)
	char bTestAllowedCurrentWeaponTags : 1; // 0x6c(0x01)
	char pad_6C_3 : 5; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct FGameplayTagContainer AllowedCurrentWeaponTags; // 0x70(0x20)
	char bTestIfCurrentWeaponIsReloading : 1; // 0x90(0x01)
	char bCurrentWeaponShouldBeReloading : 1; // 0x90(0x01)
	char bTestIfCurrentWeaponHasAmmoInMagazine : 1; // 0x90(0x01)
	char bCurrentWeaponShouldHaveAmmoInMagazine : 1; // 0x90(0x01)
	char bTestIfCurrentWeaponHasExtraAmmo : 1; // 0x90(0x01)
	char bCurrentWeaponShouldHaveExtraAmmo : 1; // 0x90(0x01)
	char bAllInterestedTestsMustPass : 1; // 0x90(0x01)
	char pad_90_7 : 1; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class FortniteAI.FortBTService_ActivateAbility
// Size: 0xd0 (Inherited: 0x70)
struct UFortBTService_ActivateAbility : UBTService {
	struct FGameplayTagContainer AbilityTags; // 0x70(0x20)
	bool bRequireCanHitTargetWithAbility; // 0x90(0x01)
	bool bPawnTargetsOnly; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
	struct FGameplayTagContainer ProhibitedTargetTags; // 0x98(0x20)
	bool bCanActivateWhenMoving; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct TArray<struct FDistanceToTargetComparison> DistanceChecks; // 0xc0(0x10)
};

// Class FortniteAI.FortBTService_UpdateBotMissionBuilding
// Size: 0xc0 (Inherited: 0x70)
struct UFortBTService_UpdateBotMissionBuilding : UBTService {
	struct FBlackboardKeySelector InterestLocationKey; // 0x70(0x28)
	struct FBlackboardKeySelector BuildOrderKey; // 0x98(0x28)
};

// Class FortniteAI.FortBTService_UpdateBotMissionGoal
// Size: 0xa0 (Inherited: 0x98)
struct UFortBTService_UpdateBotMissionGoal : UBTService_BlackboardBase {
	char bRequireInteraction : 1; // 0x98(0x01)
	char bRequireInteractionOrLocator : 1; // 0x98(0x01)
	char bRequireEncounter : 1; // 0x98(0x01)
	char bPickClosest : 1; // 0x98(0x01)
	char pad_98_4 : 4; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class FortniteAI.FortBTTask_BotMissionBuild
// Size: 0x98 (Inherited: 0x98)
struct UFortBTTask_BotMissionBuild : UBTTask_BlackboardBase {
};

// Class FortniteAI.FortBTTask_BotMissionInteract
// Size: 0x98 (Inherited: 0x98)
struct UFortBTTask_BotMissionInteract : UBTTask_BlackboardBase {
};

// Class FortniteAI.FortBTTask_ExecuteGameplayAbility
// Size: 0xc8 (Inherited: 0x78)
struct UFortBTTask_ExecuteGameplayAbility : UBTTask_GameplayTaskBase {
	struct FGameplayTagContainer GameplayAbilityTag; // 0x78(0x20)
	struct FBlackboardKeySelector GameplayAbilityTagBlackboardKey; // 0x98(0x28)
	bool bUseBlackboardTag; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class FortniteAI.FortBTTask_GameMoveTo
// Size: 0x120 (Inherited: 0xb0)
struct UFortBTTask_GameMoveTo : UBTTask_MoveTo {
	struct FBlackboardKeySelector FocalPointWhileMoving; // 0xb0(0x28)
	enum class EPathObstacleAction PathObstacleAction; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct AFortPawn* PushBumpedPawnClass; // 0xe0(0x08)
	struct FGameplayTag NavFilterTag; // 0xe8(0x04)
	char bDetectUnexpectedPathBlockingObstacles : 1; // 0xec(0x01)
	char bEnableSlowdownAtGoal : 1; // 0xec(0x01)
	char bStopAtGoal : 1; // 0xec(0x01)
	char bFinishMoveOnOverlap : 1; // 0xec(0x01)
	char pad_EC_4 : 4; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct FBlackboardKeySelector AcceptableRadiusKey; // 0xf0(0x28)
	char bDeimosFlavor : 1; // 0x118(0x01)
	char pad_118_1 : 7; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
};

// Class FortniteAI.FortBTTask_GameMoveDirectlyToward
// Size: 0x120 (Inherited: 0x120)
struct UFortBTTask_GameMoveDirectlyToward : UFortBTTask_GameMoveTo {
};

// Class FortniteAI.FortBTTask_RequestUndermining
// Size: 0x70 (Inherited: 0x70)
struct UFortBTTask_RequestUndermining : UBTTaskNode {
};

// Class FortniteAI.FortBTTask_RotateToFaceBBEntryWithTags
// Size: 0xc0 (Inherited: 0xa0)
struct UFortBTTask_RotateToFaceBBEntryWithTags : UBTTask_RotateToFaceBBEntry {
	struct FGameplayTagContainer TagsToApply; // 0xa0(0x20)
};

// Class FortniteAI.FortBTTask_SetFrustrationDiscouragement
// Size: 0x78 (Inherited: 0x70)
struct UFortBTTask_SetFrustrationDiscouragement : UBTTaskNode {
	float DiscouragementDuration; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class FortniteAI.FortBTTask_Sleep
// Size: 0x70 (Inherited: 0x70)
struct UFortBTTask_Sleep : UBTTaskNode {
};

// Class FortniteAI.FortBTTask_TakerMoveToNavmesh
// Size: 0xb0 (Inherited: 0xb0)
struct UFortBTTask_TakerMoveToNavmesh : UBTTask_MoveTo {
};

// Class FortniteAI.FortBTTask_TriggerVOEvent
// Size: 0xa0 (Inherited: 0x70)
struct UFortBTTask_TriggerVOEvent : UBTTaskNode {
	char bUseFeedbackBank : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString CustomEventName; // 0x78(0x10)
	struct FString SelectedEvent; // 0x88(0x10)
	struct UFortFeedbackBank* FeedbackBank; // 0x98(0x08)
};

// Class FortniteAI.FortCollisionResponseSwapperComponent
// Size: 0x120 (Inherited: 0xa0)
struct UFortCollisionResponseSwapperComponent : UActorComponent {
	struct UPrimitiveComponent* CollisionPrimitiveComponent; // 0xa0(0x08)
	struct UPrimitiveComponent* OverlapPrimitiveComponent; // 0xa8(0x08)
	char pad_B0[0x28]; // 0xb0(0x28)
	struct TArray<struct AFortPawn*> PawnsListenedTo; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FScalableFloat VisibilityModifiedTime; // 0xf0(0x28)
	enum class ECollisionResponse NewCollisionResponse; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)

	void UnregisterCallbacksForOverlap(); // Function FortniteAI.FortCollisionResponseSwapperComponent.UnregisterCallbacksForOverlap // (Final|Native|Protected|BlueprintCallable) // @ game+0x2342fb4
	void RestoreCollisionResponses(); // Function FortniteAI.FortCollisionResponseSwapperComponent.RestoreCollisionResponses // (Final|Native|Protected) // @ game+0x99bccdc
	void RegisterCallbacksForOverlap(struct UPrimitiveComponent* InCollisionPrimitiveComponent, struct UPrimitiveComponent* InOverlapPrimitiveComponent); // Function FortniteAI.FortCollisionResponseSwapperComponent.RegisterCallbacksForOverlap // (Final|Native|Protected|BlueprintCallable) // @ game+0x184d578
	void HandleEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function FortniteAI.FortCollisionResponseSwapperComponent.HandleEndOverlap // (Final|Native|Protected) // @ game+0x99bc504
	void HandleBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function FortniteAI.FortCollisionResponseSwapperComponent.HandleBeginOverlap // (Final|Native|Protected|HasOutParms) // @ game+0x99bc2c0
};

// Class FortniteAI.FortCreativeCreatureManagerInfoComponent
// Size: 0x220 (Inherited: 0x168)
struct UFortCreativeCreatureManagerInfoComponent : UFortMinigameLogicComponent {
	char pad_168[0x18]; // 0x168(0x18)
	struct TSoftClassPtr<UObject> CreatureBlueprintClass; // 0x180(0x28)
	int32_t MaxHealth; // 0x1a8(0x04)
	float HearingAggroRange; // 0x1ac(0x04)
	int32_t ScorePoints; // 0x1b0(0x04)
	float DamageCaused; // 0x1b4(0x04)
	float EnvironmentalDamageOverride; // 0x1b8(0x04)
	float MovementSpeedMultiplier; // 0x1bc(0x04)
	bool bImmuneToWeaponKnockback; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct UFortCreativeCreatureManagerComponent* CreatureManagerComponent; // 0x1c8(0x08)
	struct UGameplayEffect* DamageOverrideEffect; // 0x1d0(0x08)
	struct UGameplayEffect* EnvironmentalDamageOverrideEffect; // 0x1d8(0x08)
	struct UGameplayEffect* MovementSpeedOverrideEffect; // 0x1e0(0x08)
	struct UGameplayEffect* WeaponKnockbackImmunityEffect; // 0x1e8(0x08)
	struct UGameplayEffect* MaxHealthOverrideEffect; // 0x1f0(0x08)
	enum class EScoreDistributionType ScoreDistribution; // 0x1f8(0x01)
	enum class ECreatureManagerAffectedTargets AffectedTargetsType; // 0x1f9(0x01)
	char pad_1FA[0x26]; // 0x1fa(0x26)

	void SetWeaponKnockbackImmunityEffect(struct UGameplayEffect* Effect); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetWeaponKnockbackImmunityEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x99bd708
	void SetWeaponKnockbackImmunity(bool InImmuneToWeaponKnockback); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetWeaponKnockbackImmunity // (Final|Native|Public|BlueprintCallable) // @ game+0x99bd688
	void SetScorePoints(int32_t InScorePoints); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetScorePoints // (Final|Native|Public|BlueprintCallable) // @ game+0x99bd60c
	void SetScoreDistribution(enum class EScoreDistributionType InScoreDistribution); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetScoreDistribution // (Final|Native|Public|BlueprintCallable) // @ game+0x99bd590
	void SetOverrideDamage(float InOverrideDamage); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetOverrideDamage // (Final|Native|Public|BlueprintCallable) // @ game+0x99bd48c
	void SetMovementSpeedOverrideEffect(struct UGameplayEffect* Effect); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMovementSpeedOverrideEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x99bd40c
	void SetMovementSpeedMultiplier(float InOverrideMovementSpeedMultiplier); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMovementSpeedMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x99bd388
	void SetMovementOverrideTag(struct FGameplayTag tag); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMovementOverrideTag // (Final|Native|Public|BlueprintCallable) // @ game+0x99bd30c
	void SetMaxHealthOverrideTag(struct FGameplayTag tag); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMaxHealthOverrideTag // (Final|Native|Public|BlueprintCallable) // @ game+0x99bd290
	void SetMaxHealthOverrideEffect(struct UGameplayEffect* Effect); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMaxHealthOverrideEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x99bd210
	void SetMaxHealth(int32_t InMaxHealth); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMaxHealth // (Final|Native|Public|BlueprintCallable) // @ game+0x99bd194
	void SetHearingAggroRange(float InHearingAggroRange); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetHearingAggroRange // (Final|Native|Public|BlueprintCallable) // @ game+0x99bd110
	void SetEnvironmentalDamageOverrideEffect(struct UGameplayEffect* Effect); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetEnvironmentalDamageOverrideEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x99bd090
	void SetEnvironmentalDamageOverride(float InOverrideDamage); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetEnvironmentalDamageOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x99bd00c
	void SetDamageOverrideTag(struct FGameplayTag tag); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetDamageOverrideTag // (Final|Native|Public|BlueprintCallable) // @ game+0x99bcf90
	void SetDamageOverrideEffect(struct UGameplayEffect* Effect); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetDamageOverrideEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x99bcf10
	void SetCreatureManagerComponent(struct UFortCreativeCreatureManagerComponent* InCreatureManagerComponent); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetCreatureManagerComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x99bce90
	void SetCreatureBlueprintClass(struct TSoftClassPtr<UObject> InCreatureBlueprintClass); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetCreatureBlueprintClass // (Final|Native|Public|BlueprintCallable) // @ game+0x99bcd6c
	void SetAffectedTargetsType(enum class ECreatureManagerAffectedTargets InAffectedTargetsType); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetAffectedTargetsType // (Final|Native|Public|BlueprintCallable) // @ game+0x99bccf0
	void ResetWeaponKnockbackImmunity(); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetWeaponKnockbackImmunity // (Final|Native|Public|BlueprintCallable) // @ game+0x99bccc4
	void ResetScorePoints(); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetScorePoints // (Final|Native|Public|BlueprintCallable) // @ game+0x99bccac
	void ResetScoreDistribution(); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetScoreDistribution // (Final|Native|Public|BlueprintCallable) // @ game+0x99bcc94
	void ResetOverrideDamage(); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetOverrideDamage // (Final|Native|Public|BlueprintCallable) // @ game+0x99bcc7c
	void ResetMovementSpeedMultiplier(); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetMovementSpeedMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x99bcc64
	void ResetMaxHealth(); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetMaxHealth // (Final|Native|Public|BlueprintCallable) // @ game+0x99bcc4c
	void ResetHearingAggroRange(); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetHearingAggroRange // (Final|Native|Public|BlueprintCallable) // @ game+0x99bcc34
	void ResetEnvironmentalDamageOverride(); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetEnvironmentalDamageOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x99bcc1c
	bool GetWeaponKnockbackImmunity(); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetWeaponKnockbackImmunity // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99bc2a8
	int32_t GetScorePoints(); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetScorePoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7367418
	enum class EScoreDistributionType GetScoreDistribution(); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetScoreDistribution // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99bc290
	float GetOverrideDamage(); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetOverrideDamage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99bc278
	float GetMovementSpeedMultiplier(); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetMovementSpeedMultiplier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99bc260
	int32_t GetMaxHealth(); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetMaxHealth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26ea630
	float GetHearingAggroRange(); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetHearingAggroRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7367400
	float GetEnvironmentalDamageOverride(); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetEnvironmentalDamageOverride // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99bc248
	struct UFortCreativeCreatureManagerComponent* GetCreatureManagerComponent(); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetCreatureManagerComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x99bc230
	struct TSoftClassPtr<UObject> GetCreatureBlueprintClass(); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetCreatureBlueprintClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99bc100
	enum class ECreatureManagerAffectedTargets GetAffectedTargetsType(); // Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetAffectedTargetsType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99bc0e8
};

// Class FortniteAI.FortCreativeCreatureManagerComponent
// Size: 0x160 (Inherited: 0xa0)
struct UFortCreativeCreatureManagerComponent : UActorComponent {
	struct TArray<struct UFortCreativeCreatureManagerInfoComponent*> CreatureManagerInfos; // 0xa0(0x10)
	struct TMap<struct TSoftClassPtr<UObject>, struct UFortCreativeCreatureManagerInfoComponent*> EnabledCreatureManagerInfos; // 0xb0(0x50)
	char pad_100[0x60]; // 0x100(0x60)

	void OnInfoComponentRemoved(struct UFortCreativeCreatureManagerInfoComponent* CreatureManagerInfoComponent); // Function FortniteAI.FortCreativeCreatureManagerComponent.OnInfoComponentRemoved // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x99bcb80
	void OnInfoComponentAdded(struct UFortCreativeCreatureManagerInfoComponent* CreatureManagerInfoComponent); // Function FortniteAI.FortCreativeCreatureManagerComponent.OnInfoComponentAdded // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x99bcad4
	void OnAIPawnDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.FortCreativeCreatureManagerComponent.OnAIPawnDied // (Final|Native|Public|HasDefaults) // @ game+0x99bc674
};

// Class FortniteAI.FortCreativePatrolPath
// Size: 0x458 (Inherited: 0x440)
struct AFortCreativePatrolPath : AFortAthenaPatrolPath {
	enum class EFortCreativePatrolPathGroup PatrolPathGroup; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct ABuildingActor* CreativePathRenderer; // 0x448(0x08)
	char pad_450[0x8]; // 0x450(0x08)

	void SetPatrolHasValidNavMesh(bool bValidNavMesh); // Function FortniteAI.FortCreativePatrolPath.SetPatrolHasValidNavMesh // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x99bd510
	bool HasPatrolValidNavMesh(); // Function FortniteAI.FortCreativePatrolPath.HasPatrolValidNavMesh // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x74e9e38
};

// Class FortniteAI.FortCrowdManager
// Size: 0xf8 (Inherited: 0xf0)
struct UFortCrowdManager : UCrowdManager {
	char pad_F0[0x8]; // 0xf0(0x08)
};

// Class FortniteAI.FortCustomNavLinkGlobalProxy
// Size: 0x40 (Inherited: 0x28)
struct UFortCustomNavLinkGlobalProxy : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	uint32_t LinkID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UObject* Owner; // 0x38(0x08)
};

// Class FortniteAI.FortClamberLinkGlobalProxy
// Size: 0x40 (Inherited: 0x40)
struct UFortClamberLinkGlobalProxy : UFortCustomNavLinkGlobalProxy {
};

// Class FortniteAI.FortDoorLinkComponent
// Size: 0x1d0 (Inherited: 0x1d0)
struct UFortDoorLinkComponent : UNavLinkCustomComponent {
};

// Class FortniteAI.FortDoorLinkOpenerInterface
// Size: 0x28 (Inherited: 0x28)
struct UFortDoorLinkOpenerInterface : UInterface {
};

// Class FortniteAI.FortEnemySpawn
// Size: 0x778 (Inherited: 0x770)
struct AFortEnemySpawn : ABuildingActor {
	float ClusterRadius; // 0x770(0x04)
	char pad_774[0x4]; // 0x774(0x04)
};

// Class FortniteAI.FortEnvQueryGenerator_ProjectedPoints
// Size: 0x90 (Inherited: 0x88)
struct UFortEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator_ProjectedPoints {
	struct FName OverridenAgentNameForNavmesh; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class FortniteAI.FortEnvQueryGenerator_SimpleGrid
// Size: 0x108 (Inherited: 0x90)
struct UFortEnvQueryGenerator_SimpleGrid : UFortEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue GridSize; // 0x90(0x38)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xc8(0x38)
	struct UEnvQueryContext* GenerateAround; // 0x100(0x08)
};

// Class FortniteAI.FortEnvQueryManager
// Size: 0x198 (Inherited: 0x158)
struct UFortEnvQueryManager : UEnvQueryManager {
	struct TArray<struct FEnvQueryManagerConfig> EnvManagerConfigPerGamePhase; // 0x158(0x10)
	struct FEnvQueryManagerConfig EnvManagerConfigSTW; // 0x168(0x30)

	void OnGamePhaseChanged(enum class EAthenaGamePhase GamePhase); // Function FortniteAI.FortEnvQueryManager.OnGamePhaseChanged // (Final|Native|Protected) // @ game+0x99bde9c
};

// Class FortniteAI.FortEQSPrevisActor
// Size: 0x2c0 (Inherited: 0x288)
struct AFortEQSPrevisActor : AActor {
	char pad_288[0x10]; // 0x288(0x10)
	struct USceneComponent* SceneRoot; // 0x298(0x08)
	struct FGameplayTagContainer GameplayTags; // 0x2a0(0x20)

	void SetQueryTemplate(struct UEnvQuery* InPrevisQueryTemplate); // Function FortniteAI.FortEQSPrevisActor.SetQueryTemplate // (Final|Native|Public|BlueprintCallable) // @ game+0x64a2a4c
	void PrepForPrevis(); // Function FortniteAI.FortEQSPrevisActor.PrepForPrevis // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class FortniteAI.FortForcedLODZone
// Size: 0x290 (Inherited: 0x288)
struct AFortForcedLODZone : AActor {
	enum class EFortAILODLevel ForcedLODLevel; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
};

// Class FortniteAI.FortGameplayAbility_TeleportToActor
// Size: 0xb50 (Inherited: 0xb20)
struct UFortGameplayAbility_TeleportToActor : UFortGameplayAbility {
	char pad_B20[0x4]; // 0xb20(0x04)
	bool bCheckPlayerLOSWhenTeleporting; // 0xb24(0x01)
	char pad_B25[0x3]; // 0xb25(0x03)
	float MaxDistanceToConsiderLOS; // 0xb28(0x04)
	float PlayerFOV; // 0xb2c(0x04)
	int32_t TeleportRetries; // 0xb30(0x04)
	float RetryDelay; // 0xb34(0x04)
	char pad_B38[0x10]; // 0xb38(0x10)
	struct UEnvQuery* FindTeleportSpotEQSQuery; // 0xb48(0x08)
};

// Class FortniteAI.FortInescapableZoneTracker
// Size: 0x90 (Inherited: 0x28)
struct UFortInescapableZoneTracker : UObject {
	struct AFortNavigationGraph* NavGraph; // 0x28(0x08)
	char pad_30[0x60]; // 0x30(0x60)
};

// Class FortniteAI.FortInfluenceMap
// Size: 0xf8 (Inherited: 0x28)
struct UFortInfluenceMap : UObject {
	char pad_28[0xb8]; // 0x28(0xb8)
	struct AFortNavigationGraph* GraphData; // 0xe0(0x08)
	char pad_E8[0x10]; // 0xe8(0x10)

	void K2_GetInfluenceSourcePositions(struct UObject* WorldContext, struct TArray<struct FVector>& InfluenceSourcePositions); // Function FortniteAI.FortInfluenceMap.K2_GetInfluenceSourcePositions // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x99bdd9c
	void K2_AddInfluenceSource(struct UObject* WorldContext, struct FVector& Position, struct FString SourceName, float Strength); // Function FortniteAI.FortInfluenceMap.K2_AddInfluenceSource // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x99bdb88
};

// Class FortniteAI.FortIntensityCurveSequence
// Size: 0x48 (Inherited: 0x30)
struct UFortIntensityCurveSequence : UDataAsset {
	struct TArray<struct FDataTableRowHandle> IntensityCurves; // 0x30(0x10)
	enum class EFortIntensityCurveSequenceType SequenceType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class FortniteAI.FortIntensityCurveSequenceProgression
// Size: 0x40 (Inherited: 0x30)
struct UFortIntensityCurveSequenceProgression : UDataAsset {
	struct TArray<struct FFortInstensityCurveSequenceProgression> IntensityCurveSequences; // 0x30(0x10)
};

// Class FortniteAI.FortJumpDownLink
// Size: 0x2d8 (Inherited: 0x2d8)
struct AFortJumpDownLink : ANavLinkProxy {
};

// Class FortniteAI.FortMetaNavArea
// Size: 0x58 (Inherited: 0x48)
struct UFortMetaNavArea : UNavAreaMeta {
	struct TArray<struct FNavAgentData> AgentData; // 0x48(0x10)
};

// Class FortniteAI.FortMetaNavArea_Obstacles
// Size: 0x50 (Inherited: 0x48)
struct UFortMetaNavArea_Obstacles : UNavAreaMeta {
	int32_t HealthThreshold; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class FortniteAI.FortMetaNavArea_Wall
// Size: 0x58 (Inherited: 0x58)
struct UFortMetaNavArea_Wall : UFortMetaNavArea {
};

// Class FortniteAI.FortNavAgentCostData
// Size: 0x48 (Inherited: 0x30)
struct UFortNavAgentCostData : UPrimaryDataAsset {
	struct FName NavAgentName; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct UNavArea*> NavAreaStrengthBuckets; // 0x38(0x10)
};

// Class FortniteAI.FortNavArea_BigMovingPawn
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_BigMovingPawn : UFortNavArea {
};

// Class FortniteAI.FortNavArea_CheapObstacle
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_CheapObstacle : UFortNavArea {
};

// Class FortniteAI.FortNavArea_Clamber
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_Clamber : UFortNavArea {
};

// Class FortniteAI.FortNavArea_ClosedDoors
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_ClosedDoors : UFortNavArea {
};

// Class FortniteAI.FortNavArea_Danger
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_Danger : UFortNavArea {
};

// Class FortniteAI.FortNavArea_DefaultSmashable
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_DefaultSmashable : UFortNavArea {
};

// Class FortniteAI.FortNavArea_DefenderNull
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_DefenderNull : UFortNavArea {
};

// Class FortniteAI.FortNavArea_HuskNull
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_HuskNull : UFortNavArea {
};

// Class FortniteAI.FortNavArea_LowJump
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_LowJump : UFortNavArea {
};

// Class FortniteAI.FortNavArea_LowSmashable
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_LowSmashable : UFortNavArea_DefaultSmashable {
};

// Class FortniteAI.FortNavArea_Obstacle
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_Obstacle : UFortNavArea {
};

// Class FortniteAI.FortNavArea_PlayerBuiltSmashable
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_PlayerBuiltSmashable : UFortNavArea_DefaultSmashable {
};

// Class FortniteAI.FortNavArea_PortalOrSmash
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_PortalOrSmash : UFortNavArea {
};

// Class FortniteAI.FortNavArea_SmashableJump
// Size: 0x58 (Inherited: 0x50)
struct UFortNavArea_SmashableJump : UFortNavArea {
	int32_t Strength; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class FortniteAI.FortNavArea_Stairs
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_Stairs : UFortNavArea {
};

// Class FortniteAI.FortNavArea_StarlightCheapObstacle
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_StarlightCheapObstacle : UFortNavArea_CheapObstacle {
};

// Class FortniteAI.FortNavArea_StarlightObstacle
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_StarlightObstacle : UFortNavArea_Obstacle {
};

// Class FortniteAI.FortNavArea_StoneWall
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_StoneWall : UFortNavArea {
};

// Class FortniteAI.FortNavArea_TakerOnly
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_TakerOnly : UFortNavArea {
};

// Class FortniteAI.FortNavArea_TraceSmashable
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_TraceSmashable : UFortNavArea_DefaultSmashable {
};

// Class FortniteAI.FortNavArea_Unwalkable
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_Unwalkable : UFortNavArea {
};

// Class FortniteAI.FortNavArea_WalkOverWall
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_WalkOverWall : UFortNavArea {
};

// Class FortniteAI.FortNavArea_WallCorner
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_WallCorner : UFortNavArea {
};

// Class FortniteAI.FortNavArea_WoodenWall
// Size: 0x50 (Inherited: 0x50)
struct UFortNavArea_WoodenWall : UFortNavArea {
};

// Class FortniteAI.FortNavGraphGoal
// Size: 0x298 (Inherited: 0x288)
struct AFortNavGraphGoal : AActor {
	char pad_288[0x8]; // 0x288(0x08)
	float GraphRadius; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
};

// Class FortniteAI.FortNavigationMetaFilter
// Size: 0x48 (Inherited: 0x48)
struct UFortNavigationMetaFilter : UNavigationQueryFilter {
};

// Class FortniteAI.FortNavigationFilter_Hunting
// Size: 0x48 (Inherited: 0x48)
struct UFortNavigationFilter_Hunting : UFortNavigationMetaFilter {
};

// Class FortniteAI.FortNavigationFilter_IgnoreSmashingCost
// Size: 0x48 (Inherited: 0x48)
struct UFortNavigationFilter_IgnoreSmashingCost : UNavigationQueryFilter {
};

// Class FortniteAI.FortNavigationFilter_Leash
// Size: 0x48 (Inherited: 0x48)
struct UFortNavigationFilter_Leash : UNavigationQueryFilter {
};

// Class FortniteAI.FortNavigationFilter_NoSmashing
// Size: 0x48 (Inherited: 0x48)
struct UFortNavigationFilter_NoSmashing : UNavigationQueryFilter {
};

// Class FortniteAI.FortNavigationFilter_NoSmashingIncludeLow
// Size: 0x48 (Inherited: 0x48)
struct UFortNavigationFilter_NoSmashingIncludeLow : UNavigationQueryFilter {
};

// Class FortniteAI.FortNavigationFilter_TetherZone
// Size: 0x48 (Inherited: 0x48)
struct UFortNavigationFilter_TetherZone : UNavigationQueryFilter {
};

// Class FortniteAI.FortNavigationGraph
// Size: 0x5f0 (Inherited: 0x498)
struct AFortNavigationGraph : ANavigationData {
	char pad_498[0x158]; // 0x498(0x158)
};

// Class FortniteAI.FortNavLinkBlockerComponent
// Size: 0x570 (Inherited: 0x570)
struct UFortNavLinkBlockerComponent : UBoxComponent {
};

// Class FortniteAI.FortNavLinkContainer
// Size: 0x288 (Inherited: 0x288)
struct AFortNavLinkContainer : AActor {
};

// Class FortniteAI.FortNavLinkDefinition
// Size: 0x80 (Inherited: 0x50)
struct UFortNavLinkDefinition : UNavLinkDefinition {
	struct FFortNavLinkPattern Pattern; // 0x50(0x08)
	struct TArray<struct FFortNavLinkPattern> AdditionalPatterns; // 0x58(0x10)
	struct TArray<enum class EBuildingStairsRailing> StairsRailing; // 0x68(0x10)
	enum class EBuildingFloorRailing FloorRailing; // 0x78(0x01)
	enum class EFortNavLinkPattern PatternType; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
};

// Class FortniteAI.FortNavModifierVolume
// Size: 0x2e8 (Inherited: 0x2d8)
struct AFortNavModifierVolume : ANavModifierVolume {
	struct TArray<struct ANavigationData*> EnableOnlyForNavmeshClasses; // 0x2d8(0x10)
};

// Class FortniteAI.FortNavObstacleComponent
// Size: 0xf8 (Inherited: 0xf0)
struct UFortNavObstacleComponent : UNavRelevantComponent {
	struct UNavArea* ObstacleAreaClass; // 0xf0(0x08)
};

// Class FortniteAI.FortNavPathRendererInfoInterface
// Size: 0x28 (Inherited: 0x28)
struct UFortNavPathRendererInfoInterface : UInterface {
};

// Class FortniteAI.FortNavPathRendererComponent
// Size: 0x120 (Inherited: 0xa0)
struct UFortNavPathRendererComponent : UActorComponent {
	struct UNiagaraSystem* PathVFX; // 0xa0(0x08)
	struct FVector PathVFXOffset; // 0xa8(0x18)
	struct TArray<struct FColor> PathColors; // 0xc0(0x10)
	struct UNiagaraComponent* PathVFXComponent; // 0xd0(0x08)
	struct TArray<struct FPathRendererInfo> PathRendererList; // 0xd8(0x10)
	struct TArray<struct FVector4f> AllPathsPoints; // 0xe8(0x10)
	struct TArray<struct FVector> NavPathPoints; // 0xf8(0x10)
	struct TArray<int32_t> NavPathPointsStatus; // 0x108(0x10)
	enum class EPatrollingMode PathMode; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	int32_t CurrentPathColorIndex; // 0x11c(0x04)

	void UpdatePathsVisualOnClient(); // Function FortniteAI.FortNavPathRendererComponent.UpdatePathsVisualOnClient // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x99bf29c
	void OnRep_PathPointsUpdated(); // Function FortniteAI.FortNavPathRendererComponent.OnRep_PathPointsUpdated // (Final|Native|Private) // @ game+0x99becb0
	void OnRep_PathModeUpdated(); // Function FortniteAI.FortNavPathRendererComponent.OnRep_PathModeUpdated // (Final|Native|Private) // @ game+0x99bec9c
	void OnRep_ColorIndexUpdated(); // Function FortniteAI.FortNavPathRendererComponent.OnRep_ColorIndexUpdated // (Final|Native|Private) // @ game+0x99bec9c
	void DeactivateFX(); // Function FortniteAI.FortNavPathRendererComponent.DeactivateFX // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x99be75c
};

// Class FortniteAI.FortPathCostEstimator
// Size: 0xa8 (Inherited: 0x28)
struct UFortPathCostEstimator : UObject {
	struct TWeakObjectPtr<struct AActor> GoalActorWeak; // 0x28(0x08)
	struct AFortNavigationGraph* NavGraph; // 0x30(0x08)
	char pad_38[0x70]; // 0x38(0x70)
};

// Class FortniteAI.FortPatrolWardInterface
// Size: 0x28 (Inherited: 0x28)
struct UFortPatrolWardInterface : UInterface {

	enum class EWardAffectType GetAffectingType(); // Function FortniteAI.FortPatrolWardInterface.GetAffectingType // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent|Const) // @ game+0xd67374
	float GetAffectingDistance(); // Function FortniteAI.FortPatrolWardInterface.GetAffectingDistance // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent|Const) // @ game+0xd67374
};

// Class FortniteAI.FortPawnComponent_PingCommand
// Size: 0x220 (Inherited: 0xa0)
struct UFortPawnComponent_PingCommand : UFortPawnComponent {
	struct FFortPingInfo PingInfo; // 0xa0(0x168)
	char pad_208[0x18]; // 0x208(0x18)
};

// Class FortniteAI.FortPawnComponent_AIBotPingCommand
// Size: 0x228 (Inherited: 0x220)
struct UFortPawnComponent_AIBotPingCommand : UFortPawnComponent_PingCommand {
	struct AFortAthenaAIBotController* CachedOwnerController; // 0x220(0x08)

	void OnServerMarkerRemoved(struct FMarkerID MarkerID); // Function FortniteAI.FortPawnComponent_AIBotPingCommand.OnServerMarkerRemoved // (Final|Native|Public) // @ game+0x99bed78
	void OnServerMarkerAdded(struct FFortWorldMarkerData& MarkerData); // Function FortniteAI.FortPawnComponent_AIBotPingCommand.OnServerMarkerAdded // (Final|Native|Public|HasOutParms) // @ game+0x99becc4
	void HandleOnNPCUnconvertEvent(struct AFortPawn* UnconvertedFortPawn, enum class EUnconvertReason UnconvertReason); // Function FortniteAI.FortPawnComponent_AIBotPingCommand.HandleOnNPCUnconvertEvent // (Final|Native|Public) // @ game+0x99be770
};

// Class FortniteAI.FortPawnComponent_AIFormation
// Size: 0xd0 (Inherited: 0xa0)
struct UFortPawnComponent_AIFormation : UFortPawnComponent {
	struct TArray<struct FVector> Slots; // 0xa0(0x10)
	float MaxDistanceFromSlotToSprint; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<struct FFortAthenaAIFormationSlotRuntime> RuntimeSlots; // 0xb8(0x10)
	float MaxDistanceFromSlotToSprintSqr; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)

	void OnUserDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.FortPawnComponent_AIFormation.OnUserDied // (Final|Native|Private|HasDefaults) // @ game+0x99beec8
};

// Class FortniteAI.FortPawnComponent_AIGroup
// Size: 0xa8 (Inherited: 0xa0)
struct UFortPawnComponent_AIGroup : UFortPawnComponent {
	bool bCanBeGroupLeader; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32_t GroupId; // 0xa4(0x04)

	void OnGroupMemberDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function FortniteAI.FortPawnComponent_AIGroup.OnGroupMemberDied // (Final|Native|Private|HasDefaults) // @ game+0x99be940
};

// Class FortniteAI.FortPlacedPawnMarker
// Size: 0x2b0 (Inherited: 0x2b0)
struct AFortPlacedPawnMarker : ANavigationObjectBase {
};

// Class FortniteAI.FortQueryContext_AIPawnSpawnLocation
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_AIPawnSpawnLocation : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_AllBots
// Size: 0x78 (Inherited: 0x28)
struct UFortQueryContext_AllBots : UEnvQueryContext {
	bool bIncludeOnlyAthenaGameParticipantBots; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FGameplayTagQuery BotTagQuery; // 0x30(0x48)
};

// Class FortniteAI.FortQueryContext_AllEnemies
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_AllEnemies : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_AllGoals
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_AllGoals : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_AllPlayers
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_AllPlayers : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_AllPOIVolumes
// Size: 0x70 (Inherited: 0x28)
struct UFortQueryContext_AllPOIVolumes : UEnvQueryContext {
	struct FGameplayTagQuery VolumeLocationTagQuery; // 0x28(0x48)
};

// Class FortniteAI.FortQueryContext_AthenaCurrentSafeZoneCenter
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_AthenaCurrentSafeZoneCenter : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_AthenaCurrentSafeZoneIndicatorCenter
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_BlackboardKeyLeader
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_BlackboardKeyLeader : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_BotPOIVolume
// Size: 0x48 (Inherited: 0x28)
struct UFortQueryContext_BotPOIVolume : UEnvQueryContext {
	bool bSetProjectedToNavmeshLocationAsContext; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FVector ProjectionExtent; // 0x30(0x18)
};

// Class FortniteAI.FortQueryContext_BuildingRifts
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_BuildingRifts : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_ConverterPawn
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_ConverterPawn : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_EncounterFallbackTarget
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_EncounterFallbackTarget : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_EncounterGoalsCenterLocation
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_EncounterGoalsCenterLocation : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_EncounterGoalsOnGround
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_EncounterGoalsOnGround : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_EncounterPrimaryAssignmentGoals
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_EncounterPrimaryAssignmentGoals : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_EncounterProvidedQueryLocations
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_EncounterProvidedQueryLocations : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_EncounterQueryActor
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_EncounterQueryActor : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_EncounterRandomDirection
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_EncounterRandomDirection : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_EncounterTargetObjective
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_EncounterTargetObjective : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_Goal
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_Goal : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_GoalProviderRootAssignmentGoals
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_GoalProviderRootAssignmentGoals : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_Goal_SpawnLocation
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_Goal_SpawnLocation : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_NearbyAIPawns
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_NearbyAIPawns : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_NearbyAIPawnsMoveDestinations
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_NearbyAIPawnsMoveDestinations : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_NearbyFriendlyAIPawns
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_NearbyFriendlyAIPawns : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_NearbyFriends
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_NearbyFriends : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_RandomDirectionXY
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_RandomDirectionXY : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_StWStormShield
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_StWStormShield : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_TwoPointSolverPointA
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_TwoPointSolverPointA : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_TwoPointSolverRotationA
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_TwoPointSolverRotationA : UEnvQueryContext {
};

// Class FortniteAI.FortQueryContext_WorldLocationParam
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_WorldLocationParam : UEnvQueryContext {
};

// Class FortniteAI.FortQueryData_CurvesAroundLine
// Size: 0xa0 (Inherited: 0x30)
struct UFortQueryData_CurvesAroundLine : UDataAsset {
	struct FFortPointsOnCurve PointsOnSideA; // 0x30(0x38)
	struct FFortPointsOnCurve PointsOnSideB; // 0x68(0x38)
};

// Class FortniteAI.FortQueryGenerator_ActorsAround
// Size: 0xd0 (Inherited: 0xd0)
struct UFortQueryGenerator_ActorsAround : UEnvQueryGenerator_ActorsOfClass {
};

// Class FortniteAI.FortQueryGenerator_Allies
// Size: 0x50 (Inherited: 0x50)
struct UFortQueryGenerator_Allies : UEnvQueryGenerator {
};

// Class FortniteAI.FortQueryGenerator_AssignmentGoal
// Size: 0x50 (Inherited: 0x50)
struct UFortQueryGenerator_AssignmentGoal : UEnvQueryGenerator {
};

// Class FortniteAI.FortQueryGenerator_BuildingRifts
// Size: 0x50 (Inherited: 0x50)
struct UFortQueryGenerator_BuildingRifts : UEnvQueryGenerator {
};

// Class FortniteAI.FortQueryGenerator_Buildings
// Size: 0x218 (Inherited: 0x50)
struct UFortQueryGenerator_Buildings : UEnvQueryGenerator {
	struct FFortAIAssignmentIdentifier AssignmentIdentifier; // 0x50(0x30)
	struct UFortAIAssignmentSettings* AssignmentSettings; // 0x80(0x08)
	struct UEnvQueryContext* BuildingGridVolumeCenter; // 0x88(0x08)
	struct FAIDataProviderIntValue HorizontalBuildingCellRadius; // 0x90(0x38)
	struct FAIDataProviderIntValue BuildingCellsAbove; // 0xc8(0x38)
	struct FAIDataProviderIntValue BuildingCellsBelow; // 0x100(0x38)
	struct FAIDataProviderBoolValue bIncludeWalls; // 0x138(0x38)
	struct FAIDataProviderBoolValue bIncludeFloors; // 0x170(0x38)
	struct FAIDataProviderBoolValue bIncludeCenterCell; // 0x1a8(0x38)
	struct FAIDataProviderIntValue MaxBuildingActorsPerVolumeCenterToCollect; // 0x1e0(0x38)
};

// Class FortniteAI.FortQueryGenerator_BuildingsOnCachedPath
// Size: 0x100 (Inherited: 0x50)
struct UFortQueryGenerator_BuildingsOnCachedPath : UEnvQueryGenerator {
	struct UEnvQueryContext* CachedPathSource; // 0x50(0x08)
	struct FAIDataProviderBoolValue bIncludeWalls; // 0x58(0x38)
	struct FAIDataProviderBoolValue bIncludeFloors; // 0x90(0x38)
	struct FAIDataProviderBoolValue bIncludeCenterCell; // 0xc8(0x38)
};

// Class FortniteAI.FortQueryGenerator_EncounterTargets
// Size: 0x50 (Inherited: 0x50)
struct UFortQueryGenerator_EncounterTargets : UEnvQueryGenerator {
};

// Class FortniteAI.FortQueryGenerator_Enemies
// Size: 0xd0 (Inherited: 0x50)
struct UFortQueryGenerator_Enemies : UEnvQueryGenerator {
	bool bPerceivedEnemiesOnly; // 0x50(0x01)
	bool bSleepCapableAIUsePerceivedEnemiesOnly; // 0x51(0x01)
	bool bIgnoreDBNOPawns; // 0x52(0x01)
	bool bIgnoreSleepingAIs; // 0x53(0x01)
	bool bAddEnemiesFromAbilityRange; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FGameplayTagContainer AbilityTags; // 0x58(0x20)
	struct FGameplayTagContainer DistanceTags; // 0x78(0x20)
	struct FAIDataProviderFloatValue MaxTimeSincePerceived; // 0x98(0x38)
};

// Class FortniteAI.FortQueryGenerator_GoalActorsOfClass
// Size: 0x98 (Inherited: 0x50)
struct UFortQueryGenerator_GoalActorsOfClass : UEnvQueryGenerator {
	struct AActor* SearchedActorClass; // 0x50(0x08)
	struct FAIDataProviderFloatValue SearchRadius; // 0x58(0x38)
	struct UEnvQueryContext* SearchCenter; // 0x90(0x08)
};

// Class FortniteAI.FortQueryGenerator_GoalOnCircle
// Size: 0x260 (Inherited: 0x220)
struct UFortQueryGenerator_GoalOnCircle : UEnvQueryGenerator_OnCircle {
	bool bIncludeCenterActorInGeneratedGoals; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	struct UFortAIAssignmentSettings* OptionalAssignmentSettings; // 0x228(0x08)
	struct FFortAIAssignmentIdentifier OptionalAssignmentIdentifier; // 0x230(0x30)
};

// Class FortniteAI.FortQueryGenerator_GoalPlayerPawns
// Size: 0x58 (Inherited: 0x50)
struct UFortQueryGenerator_GoalPlayerPawns : UEnvQueryGenerator {
	bool bOnlyAthenaGameParticipants; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class FortniteAI.FortQueryGenerator_GoalTrackableAIObjects
// Size: 0xd0 (Inherited: 0x50)
struct UFortQueryGenerator_GoalTrackableAIObjects : UEnvQueryGenerator {
	struct FFortAIAssignmentIdentifier AssignmentIdentifier; // 0x50(0x30)
	struct AActor* SearchedActorClass; // 0x80(0x08)
	struct FGameplayTag RequiredTag; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FAIDataProviderFloatValue SearchRadius; // 0x90(0x38)
	struct UEnvQueryContext* SearchCenter; // 0xc8(0x08)
};

// Class FortniteAI.FortQueryGenerator_HotspotSlots
// Size: 0xa0 (Inherited: 0x50)
struct UFortQueryGenerator_HotspotSlots : UEnvQueryGenerator {
	struct UEnvQueryContext* GenerateAround; // 0x50(0x08)
	struct FAIDataProviderFloatValue Radius; // 0x58(0x38)
	char bUseTetherZone : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct AFortAIHotSpot* HotspotClass; // 0x98(0x08)
};

// Class FortniteAI.FortQueryGenerator_InfluenceMapPoints
// Size: 0xd0 (Inherited: 0x88)
struct UFortQueryGenerator_InfluenceMapPoints : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderIntValue Density; // 0x88(0x38)
	char bOnlyFlatSurface : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct UEnvQueryContext* GenerateAround; // 0xc8(0x08)
};

// Class FortniteAI.FortQueryGenerator_LootGoalsAthena
// Size: 0x128 (Inherited: 0x50)
struct UFortQueryGenerator_LootGoalsAthena : UEnvQueryGenerator {
	struct FFortAIAssignmentIdentifier AssignmentIdentifier; // 0x50(0x30)
	struct UFortAIAssignmentSettings* AssignmentSettings; // 0x80(0x08)
	struct FAIDataProviderFloatValue HorizontalHalfExtents; // 0x88(0x38)
	struct FAIDataProviderFloatValue VerticalHalfExtents; // 0xc0(0x38)
	struct UEnvQueryContext* SearchCenter; // 0xf8(0x08)
	char bAvailableLootOnly : 1; // 0x100(0x01)
	char pad_100_1 : 7; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct FGameplayTagContainer ExcludedAILootGameplayTags; // 0x108(0x20)
};

// Class FortniteAI.FortQueryGenerator_MissionPlacementActors
// Size: 0x98 (Inherited: 0x50)
struct UFortQueryGenerator_MissionPlacementActors : UEnvQueryGenerator {
	struct FGameplayTagQuery MissionPlacementActorTagQuery; // 0x50(0x48)
};

// Class FortniteAI.FortQueryGenerator_MutatorActorQueryResults
// Size: 0x50 (Inherited: 0x50)
struct UFortQueryGenerator_MutatorActorQueryResults : UEnvQueryGenerator {
};

// Class FortniteAI.FortQueryGenerator_MutatorBaseQueryResults
// Size: 0x50 (Inherited: 0x50)
struct UFortQueryGenerator_MutatorBaseQueryResults : UEnvQueryGenerator {
};

// Class FortniteAI.FortQueryGenerator_PointsAroundLine
// Size: 0x128 (Inherited: 0x88)
struct UFortQueryGenerator_PointsAroundLine : UEnvQueryGenerator_ProjectedPoints {
	struct UEnvQueryContext* GenerateAround; // 0x88(0x08)
	struct FAIDataProviderIntValue MaxPointsPerClusterLocation; // 0x90(0x38)
	struct FAIDataProviderFloatValue ClusterRadius; // 0xc8(0x38)
	struct TSoftObjectPtr<UFortQueryData_CurvesAroundLine> CurvesAroundLineAsset; // 0x100(0x28)
};

// Class FortniteAI.FortQueryGenerator_PointsFromNavGraph
// Size: 0x1d8 (Inherited: 0x88)
struct UFortQueryGenerator_PointsFromNavGraph : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue MinPathDistance; // 0x88(0x38)
	struct FAIDataProviderFloatValue MaxPathDistance; // 0xc0(0x38)
	struct FAIDataProviderIntValue Density; // 0xf8(0x38)
	struct FAIDataProviderFloatValue ExploreDirectionYaw; // 0x130(0x38)
	struct FEnvDirection ExploreDirection; // 0x168(0x20)
	float ExploreAngleDot; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct FAIDataProviderFloatValue ExploreInnerRadius; // 0x190(0x38)
	char bLimitExplorationDirection : 1; // 0x1c8(0x01)
	char bOnlyFlatSurface : 1; // 0x1c8(0x01)
	char bUseParameterizedDirection : 1; // 0x1c8(0x01)
	char bUseHeightCheck : 1; // 0x1c8(0x01)
	char bFilterAllowTerrain : 1; // 0x1c8(0x01)
	char bFilterAllowBuildings : 1; // 0x1c8(0x01)
	char bFilterAllowDropdown : 1; // 0x1c8(0x01)
	char bFilterAllowClimbup : 1; // 0x1c8(0x01)
	char bFilterAllowSmash : 1; // 0x1c9(0x01)
	char pad_1C9_1 : 7; // 0x1c9(0x01)
	char pad_1CA[0x2]; // 0x1ca(0x02)
	enum class EFortPointsFromNavGraphGoalPathDistanceFilterOperator PathDistanceFilterOperator; // 0x1cc(0x01)
	char pad_1CD[0x3]; // 0x1cd(0x03)
	struct UEnvQueryContext* GenerateAround; // 0x1d0(0x08)
};

// Class FortniteAI.FortQueryGenerator_PointsInVolume
// Size: 0x98 (Inherited: 0x50)
struct UFortQueryGenerator_PointsInVolume : UEnvQueryGenerator {
	struct FAIDataProviderIntValue NumberOfPoints; // 0x50(0x38)
	enum class EFortNamedNavmesh NavMeshToUse; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct UEnvQueryContext* GenerateIn; // 0x90(0x08)
};

// Class FortniteAI.FortQueryGenerator_PointsOnBuildingActors
// Size: 0x250 (Inherited: 0x88)
struct UFortQueryGenerator_PointsOnBuildingActors : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue BoundingBoxExtentXY; // 0x88(0x38)
	struct FAIDataProviderFloatValue BoundingBoxExtentZ; // 0xc0(0x38)
	struct FAIDataProviderFloatValue PointDensity; // 0xf8(0x38)
	struct FAIDataProviderIntValue MaxGeneratedPoints; // 0x130(0x38)
	struct FFortTaggedActorOctreeFilter ActorLookupFilter; // 0x168(0xa8)
	struct FAIDataProviderFloatValue RandomChanceToSkip; // 0x210(0x38)
	struct UEnvQueryContext* GenerateAround; // 0x248(0x08)
};

// Class FortniteAI.FortQueryGenerator_PointsOnBuildingGrid
// Size: 0x108 (Inherited: 0x88)
struct UFortQueryGenerator_PointsOnBuildingGrid : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderIntValue HorizontalGridSize; // 0x88(0x38)
	struct FAIDataProviderIntValue VerticalGridSize; // 0xc0(0x38)
	bool bStartGridFromBottom; // 0xf8(0x01)
	bool bUsePointInVerticalCenterOfCell; // 0xf9(0x01)
	char pad_FA[0x6]; // 0xfa(0x06)
	struct UEnvQueryContext* GenerateAround; // 0x100(0x08)
};

// Class FortniteAI.FortQueryGenerator_PointsOnWaterShoreLine
// Size: 0xb8 (Inherited: 0x88)
struct UFortQueryGenerator_PointsOnWaterShoreLine : UEnvQueryGenerator_ProjectedPoints {
	struct UEnvQueryContext* GenerateAround; // 0x88(0x08)
	struct TSoftObjectPtr<UFortQueryData_CurvesAroundLine> CurvesAroundLineAsset; // 0x90(0x28)
};

// Class FortniteAI.FortQueryGenerator_RandomPointsInBoundingVolume
// Size: 0xc8 (Inherited: 0x88)
struct UFortQueryGenerator_RandomPointsInBoundingVolume : UEnvQueryGenerator_ProjectedPoints {
	struct UEnvQueryContext* GenerateIn; // 0x88(0x08)
	struct FAIDataProviderFloatValue RandomPointsCount; // 0x90(0x38)
};

// Class FortniteAI.FortQueryGenerator_SpecificAssignmentGoals
// Size: 0x90 (Inherited: 0x50)
struct UFortQueryGenerator_SpecificAssignmentGoals : UEnvQueryGenerator {
	struct FFortAIAssignmentIdentifier AssignmentIdentifier; // 0x50(0x30)
	struct UFortAIAssignmentSettings* AssignmentSettings; // 0x80(0x08)
	struct UFortAIGoalProvider* GoalProvider; // 0x88(0x08)
};

// Class FortniteAI.FortQueryGenerator_TerrainDonut
// Size: 0x140 (Inherited: 0x50)
struct UFortQueryGenerator_TerrainDonut : UEnvQueryGenerator {
	struct UEnvQueryContext* Center; // 0x50(0x08)
	struct FAIDataProviderFloatValue Radius; // 0x58(0x38)
	struct FAIDataProviderFloatValue RadiusWidth; // 0x90(0x38)
	struct FAIDataProviderFloatValue SpacingArc; // 0xc8(0x38)
	struct FAIDataProviderIntValue NumRings; // 0x100(0x38)
	char bFilterAllowTerrain : 1; // 0x138(0x01)
	char bFilterAllowBuildings : 1; // 0x138(0x01)
	char pad_138_2 : 6; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
};

// Class FortniteAI.FortQueryGenerator_ValidSpawnRiftActors
// Size: 0x88 (Inherited: 0x50)
struct UFortQueryGenerator_ValidSpawnRiftActors : UEnvQueryGenerator {
	struct FAIDataProviderIntValue NumAIForGroup; // 0x50(0x38)
};

// Class FortniteAI.FortQueryItemType_Goal
// Size: 0x30 (Inherited: 0x30)
struct UFortQueryItemType_Goal : UEnvQueryItemType_ActorBase {
};

// Class FortniteAI.FortQueryItemType_PointOrSlot
// Size: 0x30 (Inherited: 0x30)
struct UFortQueryItemType_PointOrSlot : UEnvQueryItemType_Point {
};

// Class FortniteAI.FortQueryTest_AssignmentTypeInterest
// Size: 0x428 (Inherited: 0x268)
struct UFortQueryTest_AssignmentTypeInterest : UFortQueryTest_GoalBase {
	struct FAIDataProviderFloatValue InvalidTypeStartInterest; // 0x268(0x38)
	struct FAIDataProviderFloatValue InvalidTypeEndInterest; // 0x2a0(0x38)
	struct FAIDataProviderFloatValue InvalidTypeTimeBeforeLerp; // 0x2d8(0x38)
	struct FAIDataProviderFloatValue InvalidTypeLerpDuration; // 0x310(0x38)
	struct FAIDataProviderFloatValue ValidTypeStartInterest; // 0x348(0x38)
	struct FAIDataProviderFloatValue ValidTypeEndInterest; // 0x380(0x38)
	struct FAIDataProviderFloatValue ValidTypeTimeBeforeLerp; // 0x3b8(0x38)
	struct FAIDataProviderFloatValue ValidTypeLerpDuration; // 0x3f0(0x38)
};

// Class FortniteAI.FortQueryTest_BuildingCriteria
// Size: 0x8b8 (Inherited: 0x268)
struct UFortQueryTest_BuildingCriteria : UFortQueryTest_GoalBase {
	struct FAIDataProviderFloatValue ScoreForGroundSupportedFloor; // 0x268(0x38)
	struct FAIDataProviderFloatValue ScoreForBeingGroundSupported; // 0x2a0(0x38)
	struct FAIDataProviderFloatValue ScoreForTraps; // 0x2d8(0x38)
	struct FAIDataProviderFloatValue ScoreForWalls; // 0x310(0x38)
	struct FAIDataProviderFloatValue ScoreForNavigableOpening; // 0x348(0x38)
	struct FFortAIAssignmentIdentifier RootAssignmentID; // 0x380(0x30)
	struct FAIDataProviderBoolValue bPreferCloserToRootAssignment; // 0x3b0(0x38)
	struct FAIDataProviderFloatValue ScoreForDistanceFromClosestRootAssignmentGoal; // 0x3e8(0x38)
	struct FAIDataProviderFloatValue MinDistanceForDistanceScoring; // 0x420(0x38)
	struct FAIDataProviderFloatValue MaxDistanceForDistanceScoring; // 0x458(0x38)
	struct FAIDataProviderFloatValue MaxHealthScore; // 0x490(0x38)
	struct FAIDataProviderBoolValue bPreferHigherHealth; // 0x4c8(0x38)
	struct FAIDataProviderFloatValue ClampMaxHealthValue; // 0x500(0x38)
	struct FAIDataProviderFloatValue ClampMinHealthValue; // 0x538(0x38)
	struct FAIDataProviderBoolValue bPreferHigherHealthPercentage; // 0x570(0x38)
	struct FAIDataProviderFloatValue MaxHealthPercentageScore; // 0x5a8(0x38)
	struct FAIDataProviderBoolValue bWantsBuildingRepairableByOwner; // 0x5e0(0x38)
	struct FAIDataProviderFloatValue RepairableBuildingScore; // 0x618(0x38)
	struct FAIDataProviderFloatValue NotRepairableBuildingScore; // 0x650(0x38)
	struct FAIDataProviderFloatValue NeedsRepairBuildingScore; // 0x688(0x38)
	struct FAIDataProviderFloatValue DoesntNeedsRepairBuildingScore; // 0x6c0(0x38)
	struct FAIDataProviderBoolValue bWantsDamagedByFriendly; // 0x6f8(0x38)
	struct FAIDataProviderFloatValue DamagedByFriendlyMaxLifespan; // 0x730(0x38)
	struct FAIDataProviderFloatValue DamagedByFriendlyMinDamage; // 0x768(0x38)
	struct FAIDataProviderFloatValue DamagedByFriendlyScore; // 0x7a0(0x38)
	struct FAIDataProviderBoolValue bWantsDamagedByEnemy; // 0x7d8(0x38)
	struct FAIDataProviderFloatValue DamagedByEnemyMaxLifespan; // 0x810(0x38)
	struct FAIDataProviderFloatValue DamagedByEnemyMinDamage; // 0x848(0x38)
	struct FAIDataProviderFloatValue DamagedByEnemyScore; // 0x880(0x38)
};

// Class FortniteAI.FortQueryTest_CanAttackTarget
// Size: 0x268 (Inherited: 0x268)
struct UFortQueryTest_CanAttackTarget : UFortQueryTest_GoalBase {
};

// Class FortniteAI.FortQueryTest_CanBeDamaged
// Size: 0x268 (Inherited: 0x268)
struct UFortQueryTest_CanBeDamaged : UFortQueryTest_GoalBase {
};

// Class FortniteAI.FortQueryTest_CanHitWithGameplayAbility
// Size: 0x228 (Inherited: 0x1f8)
struct UFortQueryTest_CanHitWithGameplayAbility : UEnvQueryTest {
	struct UEnvQueryContext* AIsUsingAbility; // 0x1f8(0x08)
	struct UEnvQueryContext* AbilityTargets; // 0x200(0x08)
	struct FGameplayTagContainer GameplayAbilityTag; // 0x208(0x20)
};

// Class FortniteAI.FortQueryTest_CurieState
// Size: 0x240 (Inherited: 0x1f8)
struct UFortQueryTest_CurieState : UEnvQueryTest {
	struct FGameplayTagQuery CurieStateQuery; // 0x1f8(0x48)
};

// Class FortniteAI.FortQueryTest_DecoyDistance
// Size: 0x200 (Inherited: 0x1f8)
struct UFortQueryTest_DecoyDistance : UEnvQueryTest {
	struct UEnvQueryContext* DistanceTo; // 0x1f8(0x08)
};

// Class FortniteAI.FortQueryTest_DistanceToActorBound
// Size: 0x200 (Inherited: 0x1f8)
struct UFortQueryTest_DistanceToActorBound : UEnvQueryTest {
	struct UEnvQueryContext* DistanceTo; // 0x1f8(0x08)
};

// Class FortniteAI.FortQueryTest_EnvironmentalDanger
// Size: 0x200 (Inherited: 0x1f8)
struct UFortQueryTest_EnvironmentalDanger : UEnvQueryTest {
	bool bUse3DBoundsCheck; // 0x1f8(0x01)
	char pad_1F9[0x3]; // 0x1f9(0x03)
	struct FGameplayTag DangerSourceActorRegistryTag; // 0x1fc(0x04)
};

// Class FortniteAI.FortQueryTest_GameplayTagsPerDifficulty
// Size: 0x208 (Inherited: 0x1f8)
struct UFortQueryTest_GameplayTagsPerDifficulty : UEnvQueryTest {
	struct TArray<struct FFortGameplayTagQueryPerDifficulty> TagQueriesPerDifficulty; // 0x1f8(0x10)
};

// Class FortniteAI.FortQueryTest_GoalActorDot
// Size: 0x280 (Inherited: 0x268)
struct UFortQueryTest_GoalActorDot : UFortQueryTest_GoalBase {
	struct UEnvQueryContext* LineATo; // 0x268(0x08)
	struct UEnvQueryContext* LineBTo; // 0x270(0x08)
	enum class EFortTestGoalActorDot TestMode; // 0x278(0x01)
	bool bAbsoluteValue; // 0x279(0x01)
	char pad_27A[0x6]; // 0x27a(0x06)
};

// Class FortniteAI.FortQueryTest_GoalActorTimeSinceSpawn
// Size: 0x268 (Inherited: 0x268)
struct UFortQueryTest_GoalActorTimeSinceSpawn : UFortQueryTest_GoalBase {
};

// Class FortniteAI.FortQueryTest_GoalDiscouragement
// Size: 0x2a0 (Inherited: 0x268)
struct UFortQueryTest_GoalDiscouragement : UFortQueryTest_GoalBase {
	struct FAIDataProviderBoolValue DisableDiscouragementWhenUndermining; // 0x268(0x38)
};

// Class FortniteAI.FortQueryTest_GoalDistance
// Size: 0x280 (Inherited: 0x268)
struct UFortQueryTest_GoalDistance : UFortQueryTest_GoalBase {
	enum class EDistanceMode DistanceMode; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct UEnvQueryContext* DistanceTo; // 0x270(0x08)
	enum class EEnvTestDistance TestMode; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
};

// Class FortniteAI.FortQueryTest_GoalDistanceRanges
// Size: 0x290 (Inherited: 0x268)
struct UFortQueryTest_GoalDistanceRanges : UFortQueryTest_GoalBase {
	enum class EDistanceMode DistanceMode; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct UEnvQueryContext* DistanceTo; // 0x270(0x08)
	enum class EEnvTestDistance ScreeningTestMode; // 0x278(0x01)
	enum class EEnvTestDistance TestMode; // 0x279(0x01)
	char pad_27A[0x6]; // 0x27a(0x06)
	struct TArray<struct FGoalDistanceData> GoalDistanceDataRanges; // 0x280(0x10)
};

// Class FortniteAI.FortQueryTest_GoalFrustrationDiscouragement
// Size: 0x268 (Inherited: 0x268)
struct UFortQueryTest_GoalFrustrationDiscouragement : UFortQueryTest_GoalBase {
};

// Class FortniteAI.FortQueryTest_GoalGameplayTags
// Size: 0x2c0 (Inherited: 0x268)
struct UFortQueryTest_GoalGameplayTags : UFortQueryTest_GoalBase {
	bool bShouldLookupQueryByTag; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct FGameplayTagQuery TagQueryToMatch; // 0x270(0x48)
	struct FGameplayTag QueryLookupTag; // 0x2b8(0x04)
	bool bShouldPassWhenQueryNotFound; // 0x2bc(0x01)
	bool bRequireAllProvidedTagQueriesPass; // 0x2bd(0x01)
	char pad_2BE[0x2]; // 0x2be(0x02)
};

// Class FortniteAI.FortQueryTest_GoalMarkedByPlayer
// Size: 0x2e8 (Inherited: 0x268)
struct UFortQueryTest_GoalMarkedByPlayer : UFortQueryTest_GoalBase {
	struct FGameplayTagQuery OwnerTagQuery; // 0x268(0x48)
	struct FAIDataProviderBoolValue OnlyConverterMarkedTargets; // 0x2b0(0x38)
};

// Class FortniteAI.FortQueryTest_GoalNumberOfAIAssigned
// Size: 0x270 (Inherited: 0x268)
struct UFortQueryTest_GoalNumberOfAIAssigned : UFortQueryTest_GoalBase {
	enum class ECountAIAssignedToType TypeOfMatchToCount; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
};

// Class FortniteAI.FortQueryTest_GoalOverallDamageCaused
// Size: 0x268 (Inherited: 0x268)
struct UFortQueryTest_GoalOverallDamageCaused : UFortQueryTest_GoalBase {
};

// Class FortniteAI.FortQueryTest_GoalPickupFilter
// Size: 0x270 (Inherited: 0x268)
struct UFortQueryTest_GoalPickupFilter : UFortQueryTest_GoalBase {
	float MaxLifetime; // 0x268(0x04)
	enum class EFortPickupSpawnSource RequiredPickupSpawnSource; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
};

// Class FortniteAI.FortQueryTest_GoalProject
// Size: 0x2a0 (Inherited: 0x268)
struct UFortQueryTest_GoalProject : UFortQueryTest_GoalBase {
	struct FEnvTraceData ProjectionData; // 0x268(0x38)
};

// Class FortniteAI.FortQueryTest_GoalStickiness
// Size: 0x380 (Inherited: 0x268)
struct UFortQueryTest_GoalStickiness : UFortQueryTest_GoalBase {
	struct FAIDataProviderFloatValue StartValueForGoal; // 0x268(0x38)
	struct FAIDataProviderFloatValue EndValueForGoal; // 0x2a0(0x38)
	struct FAIDataProviderFloatValue TimeBeforeValueLerp; // 0x2d8(0x38)
	struct FAIDataProviderFloatValue ValueLerpDuration; // 0x310(0x38)
	struct FAIDataProviderBoolValue ApplyStickinessToAllGoalsWithSameActor; // 0x348(0x38)
};

// Class FortniteAI.FortQueryTest_GoalType
// Size: 0x268 (Inherited: 0x268)
struct UFortQueryTest_GoalType : UFortQueryTest_GoalBase {
};

// Class FortniteAI.FortQueryTest_GoalWithinTetheredBounds
// Size: 0x268 (Inherited: 0x268)
struct UFortQueryTest_GoalWithinTetheredBounds : UFortQueryTest_GoalBase {
};

// Class FortniteAI.FortQueryTest_HasNearbyBuildings
// Size: 0x208 (Inherited: 0x1f8)
struct UFortQueryTest_HasNearbyBuildings : UEnvQueryTest {
	char bIncludeCenter : 1; // 0x1f8(0x01)
	char bIncludeFloors : 1; // 0x1f8(0x01)
	char bIncludeFloorsAbove : 1; // 0x1f8(0x01)
	char bIncludeWalls : 1; // 0x1f8(0x01)
	char pad_1F8_4 : 4; // 0x1f8(0x01)
	char pad_1F9[0x3]; // 0x1f9(0x03)
	int32_t ExtentXY; // 0x1fc(0x04)
	int32_t ExtentZ; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)
};

// Class FortniteAI.FortQueryTest_HasNearbyEncounterGoals
// Size: 0x238 (Inherited: 0x1f8)
struct UFortQueryTest_HasNearbyEncounterGoals : UEnvQueryTest {
	char bOnlyActiveEncounters : 1; // 0x1f8(0x01)
	char pad_1F8_1 : 7; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct FAIDataProviderFloatValue TestDistance; // 0x200(0x38)
};

// Class FortniteAI.FortQueryTest_HotspotSlotOrientation
// Size: 0x238 (Inherited: 0x1f8)
struct UFortQueryTest_HotspotSlotOrientation : UEnvQueryTest {
	struct UEnvQueryContext* FaceToward; // 0x1f8(0x08)
	struct FAIDataProviderFloatValue DotThreshold; // 0x200(0x38)
};

// Class FortniteAI.FortQueryTest_HotspotSlotState
// Size: 0x200 (Inherited: 0x1f8)
struct UFortQueryTest_HotspotSlotState : UEnvQueryTest {
	enum class EAIHotSpotSlot SlotState; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
};

// Class FortniteAI.FortQueryTest_InfluenceScore
// Size: 0x1f8 (Inherited: 0x1f8)
struct UFortQueryTest_InfluenceScore : UEnvQueryTest {
};

// Class FortniteAI.FortQueryTest_InsideAIBotLeash
// Size: 0x1f8 (Inherited: 0x1f8)
struct UFortQueryTest_InsideAIBotLeash : UEnvQueryTest {
};

// Class FortniteAI.FortQueryTest_InsideAthenaLeash
// Size: 0x1f8 (Inherited: 0x1f8)
struct UFortQueryTest_InsideAthenaLeash : UEnvQueryTest {
};

// Class FortniteAI.FortQueryTest_InsideAthenaSafeZone
// Size: 0x240 (Inherited: 0x1f8)
struct UFortQueryTest_InsideAthenaSafeZone : UEnvQueryTest {
	bool bUseCurrentSafeZoneIndicatorRadius; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct FAIDataProviderIntValue SafeZoneIndex; // 0x200(0x38)
	bool bNextSafeZone; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
};

// Class FortniteAI.FortQueryTest_InsideBuilding
// Size: 0x1f8 (Inherited: 0x1f8)
struct UFortQueryTest_InsideBuilding : UEnvQueryTest {
};

// Class FortniteAI.FortQueryTest_InsideWater
// Size: 0x200 (Inherited: 0x1f8)
struct UFortQueryTest_InsideWater : UEnvQueryTest {
	float TestRadius; // 0x1f8(0x04)
	char pad_1FC[0x4]; // 0x1fc(0x04)
};

// Class FortniteAI.FortQueryTest_IsCloseToHotspotSlot
// Size: 0x240 (Inherited: 0x1f8)
struct UFortQueryTest_IsCloseToHotspotSlot : UEnvQueryTest {
	struct AFortAIHotSpot* HotspotClass; // 0x1f8(0x08)
	struct FAIDataProviderFloatValue Radius; // 0x200(0x38)
	bool bIgnoreItemsWithSlotData; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
};

// Class FortniteAI.FortQueryTest_IsCloseToPatrolWard
// Size: 0x200 (Inherited: 0x1f8)
struct UFortQueryTest_IsCloseToPatrolWard : UEnvQueryTest {
	enum class EWardAffectType WardEffectTypeFilter; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
};

// Class FortniteAI.FortQueryTest_IsGoalForAssignment
// Size: 0x230 (Inherited: 0x1f8)
struct UFortQueryTest_IsGoalForAssignment : UEnvQueryTest {
	bool bRetrieveRootAssignmentFromOwner; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct FFortAIAssignmentIdentifier RootAssignmentID; // 0x200(0x30)
};

// Class FortniteAI.FortQueryTest_IsObstructed
// Size: 0x388 (Inherited: 0x2e0)
struct UFortQueryTest_IsObstructed : UEnvQueryTest_Trace {
	struct FAIDataProviderBoolValue OverrideContextLocationXWithItemLocationX; // 0x2e0(0x38)
	struct FAIDataProviderBoolValue OverrideContextLocationYWithItemLocationY; // 0x318(0x38)
	struct FAIDataProviderBoolValue OverrideContextLocationZWithItemLocationZ; // 0x350(0x38)
};

// Class FortniteAI.FortQueryTest_MissionGameplayTagMatch
// Size: 0x260 (Inherited: 0x1f8)
struct UFortQueryTest_MissionGameplayTagMatch : UEnvQueryTest {
	struct FGameplayTagQuery MissionPlacementActorTagQuery; // 0x1f8(0x48)
	struct FGameplayTagContainer GameplayTagsToMatch; // 0x240(0x20)
};

// Class FortniteAI.FortQueryTest_MissionSameMap
// Size: 0x240 (Inherited: 0x1f8)
struct UFortQueryTest_MissionSameMap : UEnvQueryTest {
	struct FGameplayTagQuery MissionPlacementActorTagQuery; // 0x1f8(0x48)
};

// Class FortniteAI.FortQueryTest_NavGraphDistance
// Size: 0x200 (Inherited: 0x1f8)
struct UFortQueryTest_NavGraphDistance : UEnvQueryTest {
	struct UEnvQueryContext* DistanceTo; // 0x1f8(0x08)
};

// Class FortniteAI.FortQueryTest_OnFlatSurface
// Size: 0x208 (Inherited: 0x1f8)
struct UFortQueryTest_OnFlatSurface : UEnvQueryTest {
	float Radius; // 0x1f8(0x04)
	float ToleranceZ; // 0x1fc(0x04)
	float TraceOffsetUp; // 0x200(0x04)
	float TraceOffsetDown; // 0x204(0x04)
};

// Class FortniteAI.FortQueryTest_OnFlatSurfaceNoNavMesh
// Size: 0x218 (Inherited: 0x1f8)
struct UFortQueryTest_OnFlatSurfaceNoNavMesh : UEnvQueryTest {
	float Radius; // 0x1f8(0x04)
	float ZTolerance; // 0x1fc(0x04)
	float NormalTolerance; // 0x200(0x04)
	float TraceOffset; // 0x204(0x04)
	struct TArray<struct AActor*> ActorClassesToIgnoreInTrace; // 0x208(0x10)
};

// Class FortniteAI.FortQueryTest_PathfindingBatch
// Size: 0x2c0 (Inherited: 0x2b8)
struct UFortQueryTest_PathfindingBatch : UEnvQueryTest_PathfindingBatch {
	struct FGameplayTag NavFilterTag; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
};

// Class FortniteAI.FortQueryTest_PawnHealth
// Size: 0x270 (Inherited: 0x268)
struct UFortQueryTest_PawnHealth : UFortQueryTest_GoalBase {
	bool bUsePercentHealth; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
};

// Class FortniteAI.FortQueryTest_PawnIsDBNO
// Size: 0x268 (Inherited: 0x268)
struct UFortQueryTest_PawnIsDBNO : UFortQueryTest_GoalBase {
};

// Class FortniteAI.FortQueryTest_PerceptionAge
// Size: 0x208 (Inherited: 0x1f8)
struct UFortQueryTest_PerceptionAge : UEnvQueryTest {
	enum class ECorePerceptionTypes Sense; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct UAISense* SenseClass; // 0x200(0x08)
};

// Class FortniteAI.FortQueryTest_PerceptionAll
// Size: 0x478 (Inherited: 0x268)
struct UFortQueryTest_PerceptionAll : UFortQueryTest_GoalBase {
	struct FAIDataProviderFloatValue SenseScores[0x6]; // 0x268(0x150)
	struct TMap<struct UAISense*, struct FAIDataProviderFloatValue> AdditionalSenseScores; // 0x3b8(0x50)
	struct FAIDataProviderFloatValue MinSenseAge; // 0x408(0x38)
	struct FAIDataProviderFloatValue MaxSenseAge; // 0x440(0x38)
};

// Class FortniteAI.FortQueryTest_PerceptionExists
// Size: 0x208 (Inherited: 0x1f8)
struct UFortQueryTest_PerceptionExists : UEnvQueryTest {
	enum class ECorePerceptionTypes Sense; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct UAISense* SenseClass; // 0x200(0x08)
};

// Class FortniteAI.FortQueryTest_PickupDropper
// Size: 0x380 (Inherited: 0x268)
struct UFortQueryTest_PickupDropper : UFortQueryTest_GoalBase {
	struct FAIDataProviderFloatValue ValueConverterDroppedPickup; // 0x268(0x38)
	struct FAIDataProviderFloatValue ValueOtherDroppedPickupInitial; // 0x2a0(0x38)
	struct FAIDataProviderFloatValue ValueOtherDroppedPickupFinal; // 0x2d8(0x38)
	struct FAIDataProviderFloatValue TimeOtherDroppedPickupFinal; // 0x310(0x38)
	struct FAIDataProviderBoolValue LerpFromInitialToFinal; // 0x348(0x38)
};

// Class FortniteAI.FortQueryTest_PointInBuildingFoundation
// Size: 0x220 (Inherited: 0x1f8)
struct UFortQueryTest_PointInBuildingFoundation : UEnvQueryTest {
	struct UEnvQueryContext* BuildingFoundationContext; // 0x1f8(0x08)
	struct ABuildingFoundation* BuildingFoundationClass; // 0x200(0x08)
	struct FVector BoundingBoxScale; // 0x208(0x18)
};

// Class FortniteAI.FortQueryTest_PrimaryAssignment
// Size: 0x388 (Inherited: 0x268)
struct UFortQueryTest_PrimaryAssignment : UFortQueryTest_GoalBase {
	bool bUseItemActorLocation; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct FAIDataProviderFloatValue DistanceClose; // 0x270(0x38)
	struct FAIDataProviderFloatValue DistanceFar; // 0x2a8(0x38)
	struct FAIDataProviderFloatValue PercentValueClose; // 0x2e0(0x38)
	struct FAIDataProviderFloatValue PercentValueRegular; // 0x318(0x38)
	struct FAIDataProviderFloatValue PercentValueFar; // 0x350(0x38)
};

// Class FortniteAI.FortQueryTest_ProjectOnNavMesh
// Size: 0x1f8 (Inherited: 0x1f8)
struct UFortQueryTest_ProjectOnNavMesh : UEnvQueryTest {
};

// Class FortniteAI.FortQueryTest_Random
// Size: 0x200 (Inherited: 0x1f8)
struct UFortQueryTest_Random : UEnvQueryTest {
	char bUseRandomSeedForAI : 1; // 0x1f8(0x01)
	char bUseRandomSeedForOthers : 1; // 0x1f8(0x01)
	char pad_1F8_2 : 6; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
};

// Class FortniteAI.FortQueryTest_TowardNextAthenaSafeZone
// Size: 0x250 (Inherited: 0x1f8)
struct UFortQueryTest_TowardNextAthenaSafeZone : UEnvQueryTest {
	struct FAIDataProviderIntValue SafeZoneIndex; // 0x1f8(0x38)
	bool bCheckAcceptanceAngleTowardNextCenter; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	float AcceptanceAngleTowardNextCenter; // 0x234(0x04)
	struct TArray<int32_t> ExclusionSafeZoneIndex; // 0x238(0x10)
	char pad_248[0x8]; // 0x248(0x08)
};

// Class FortniteAI.FortQueryTest_ValidSurface
// Size: 0x318 (Inherited: 0x1f8)
struct UFortQueryTest_ValidSurface : UEnvQueryTest {
	struct FAIDataProviderFloatValue Radius; // 0x1f8(0x38)
	struct FAIDataProviderFloatValue TraceOffsetUp; // 0x230(0x38)
	struct FAIDataProviderFloatValue TraceOffsetDown; // 0x268(0x38)
	enum class ECollisionChannel TraceCollisionChannel; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct FAIDataProviderFloatValue FlatSurfaceToleranceZ; // 0x2a8(0x38)
	struct TArray<struct TSoftObjectPtr<UPhysicalMaterial>> SurfaceMaterials; // 0x2e0(0x10)
	bool bAreSurfaceMaterialsValid; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct TArray<struct TSoftClassPtr<UObject>> ValidHitActorClasses; // 0x2f8(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> InvalidHitActorClasses; // 0x308(0x10)
};

// Class FortniteAI.FortQueryTest_WithinHotfixVolumeBounds
// Size: 0x220 (Inherited: 0x1f8)
struct UFortQueryTest_WithinHotfixVolumeBounds : UEnvQueryTest {
	struct UDataTable* BoundsTable; // 0x1f8(0x08)
	struct FVector BoundsExtentBuffer; // 0x200(0x18)
	bool bXYOnly; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
};

// Class FortniteAI.FortQueryTest_WithinTaggedArea
// Size: 0x260 (Inherited: 0x1f8)
struct UFortQueryTest_WithinTaggedArea : UEnvQueryTest {
	struct FGameplayTagQuery TagQuery; // 0x1f8(0x48)
	struct FVector AreaExtentBuffer; // 0x240(0x18)
	bool bAssumeInfiniteHeightForArea; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
};

// Class FortniteAI.FortQueryTwoPointSolver
// Size: 0x140 (Inherited: 0x28)
struct UFortQueryTwoPointSolver : UObject {
	struct UEnvQuery* QueryPointA; // 0x28(0x08)
	struct UEnvQuery* QueryPointB; // 0x30(0x08)
	struct TArray<struct FEnvNamedValue> QueryParamsA; // 0x38(0x10)
	struct TArray<struct FEnvNamedValue> QueryParamsB; // 0x48(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x58(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x68(0x10)
	enum class ETwoPointSolverRotationA RotationMode; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FRotator MinRotationOffset; // 0x80(0x18)
	struct FRotator MaxRotationOffset; // 0x98(0x18)
	char bUseNegativeAngleOffsets : 1; // 0xb0(0x01)
	char bUsePositiveAngleOffsets : 1; // 0xb0(0x01)
	char pad_B0_2 : 6; // 0xb0(0x01)
	char pad_B1[0x7f]; // 0xb1(0x7f)
	struct UFortAISystem* AISys; // 0x130(0x08)
	struct UObject* CachedQuerier; // 0x138(0x08)

	void Start(struct UObject* Querier); // Function FortniteAI.FortQueryTwoPointSolver.Start // (Final|Native|Public|BlueprintCallable) // @ game+0x99bf9ac
	void SkipToNextPointA(); // Function FortniteAI.FortQueryTwoPointSolver.SkipToNextPointA // (Final|Native|Public|BlueprintCallable) // @ game+0x99bf994
	void SetCustomRotationA(struct FRotator& Rotation); // Function FortniteAI.FortQueryTwoPointSolver.SetCustomRotationA // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x99bf8fc
	void OnCustomRotationMode(struct FVector& InPointA, struct FVector Querier); // Function FortniteAI.FortQueryTwoPointSolver.OnCustomRotationMode // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xd67374
	struct FRotator GetRandomRotationOffset(); // Function FortniteAI.FortQueryTwoPointSolver.GetRandomRotationOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x99bf8c4
	void AddNamedFloatParamB(struct FName ParamName, float Value); // Function FortniteAI.FortQueryTwoPointSolver.AddNamedFloatParamB // (Final|Native|Public|BlueprintCallable) // @ game+0x99bf7c8
	void AddNamedFloatParamA(struct FName ParamName, float Value); // Function FortniteAI.FortQueryTwoPointSolver.AddNamedFloatParamA // (Final|Native|Public|BlueprintCallable) // @ game+0x99bf6cc
};

// Class FortniteAI.FortRiftBlockerComponent
// Size: 0x580 (Inherited: 0x570)
struct UFortRiftBlockerComponent : UBoxComponent {
	char bStartActive : 1; // 0x570(0x01)
	char pad_570_1 : 7; // 0x570(0x01)
	char pad_571[0xf]; // 0x571(0x0f)
};

// Class FortniteAI.FortSpawnPointsPercentageCurveSequence
// Size: 0x48 (Inherited: 0x30)
struct UFortSpawnPointsPercentageCurveSequence : UDataAsset {
	struct TArray<struct FDataTableRowHandle> SpawnPointsPercentageCurves; // 0x30(0x10)
	enum class EFortIntensityCurveSequenceType SequenceType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class FortniteAI.FortStaticMeshLinkComponent
// Size: 0x138 (Inherited: 0xf0)
struct UFortStaticMeshLinkComponent : UNavRelevantComponent {
	char pad_F0[0x48]; // 0xf0(0x48)
};

// Class FortniteAI.FortThreatVisualsManager
// Size: 0x540 (Inherited: 0x288)
struct AFortThreatVisualsManager : AActor {
	char pad_288[0x8]; // 0x288(0x08)
	struct AThreatCloud* CloudBlueprint; // 0x290(0x08)
	float CloudRadius; // 0x298(0x04)
	float ThreatBoxVolumeTopPadding; // 0x29c(0x04)
	float ThreatBoxVolumeBottomPadding; // 0x2a0(0x04)
	bool bUseLocalPlayersOnlyForCloudMinimumHeight; // 0x2a4(0x01)
	bool bHideClouds; // 0x2a5(0x01)
	char pad_2A6[0x2]; // 0x2a6(0x02)
	float CloudMinimumHeightAbovePlayers; // 0x2a8(0x04)
	float CloudMinimumHeightAboveGround; // 0x2ac(0x04)
	float CloudMinimumAltitude; // 0x2b0(0x04)
	float CloudMaxVerticalDelta; // 0x2b4(0x04)
	float CloudMinSpeed; // 0x2b8(0x04)
	float CloudMaxSpeed; // 0x2bc(0x04)
	float StormWindCloudRadius; // 0x2c0(0x04)
	float StormWindGoalRadius; // 0x2c4(0x04)
	float StormWindFalloffRadius; // 0x2c8(0x04)
	float StormWindInactiveMagnitude; // 0x2cc(0x04)
	float StormWindActiveMagnitude; // 0x2d0(0x04)
	float StormWindDesiredDeltaBlendTime; // 0x2d4(0x04)
	float StormWindDirectionAdditionalAngle; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct FThreatLocationArray ThreatLocations; // 0x2e0(0x118)
	struct FStormWindArray StormWindArray; // 0x3f8(0x118)
	struct TArray<struct FVector> GoalActorLocations; // 0x510(0x10)
	char pad_520[0x20]; // 0x520(0x20)

	bool StormsExist(); // Function FortniteAI.FortThreatVisualsManager.StormsExist // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99cff84
	void SetMinimumCloudAltitude(float NewMinimumAltitude); // Function FortniteAI.FortThreatVisualsManager.SetMinimumCloudAltitude // (Final|Native|Public|BlueprintCallable) // @ game+0x9296fb0
	void SetCloudsAreHidden(bool bHide); // Function FortniteAI.FortThreatVisualsManager.SetCloudsAreHidden // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x99cff04
	void ResetMinimumCloudAltitude(); // Function FortniteAI.FortThreatVisualsManager.ResetMinimumCloudAltitude // (Final|Native|Public|BlueprintCallable) // @ game+0x99cfeec
	void OnWorldReady(); // Function FortniteAI.FortThreatVisualsManager.OnWorldReady // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnThreatCloudsChanged(struct TArray<struct FThreatLocationInfo>& ThreatLocationInfo); // Function FortniteAI.FortThreatVisualsManager.OnThreatCloudsChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRep_ThreatLocations(); // Function FortniteAI.FortThreatVisualsManager.OnRep_ThreatLocations // (Final|Native|Private) // @ game+0xdf3528
	void OnRep_StormWinds(); // Function FortniteAI.FortThreatVisualsManager.OnRep_StormWinds // (Final|Native|Private) // @ game+0x23e4cc8
	void OnRep_HideClouds(); // Function FortniteAI.FortThreatVisualsManager.OnRep_HideClouds // (Final|Native|Private) // @ game+0xfe5030
	void OnRep_GoalActorLocations(); // Function FortniteAI.FortThreatVisualsManager.OnRep_GoalActorLocations // (Final|Native|Private) // @ game+0x183df6c
	void OnBeginThreatVisualsPrecursor(struct AActor* SourceActor, struct FVector& EndLocation); // Function FortniteAI.FortThreatVisualsManager.OnBeginThreatVisualsPrecursor // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xd67374
	struct TArray<struct FThreatLocationInfo> GetThreatClouds(); // Function FortniteAI.FortThreatVisualsManager.GetThreatClouds // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99cfe58
	struct AThreatCloud* GetThreatCloud(struct FThreatLocationInfo& ThreatLocInfo); // Function FortniteAI.FortThreatVisualsManager.GetThreatCloud // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x99cfd64
	bool GetCloudsAreHidden(); // Function FortniteAI.FortThreatVisualsManager.GetCloudsAreHidden // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x99cfd4c
	void BeginThreatVisualsPrecursor(struct AActor* SourceActor, struct FVector ThreatLocation); // Function FortniteAI.FortThreatVisualsManager.BeginThreatVisualsPrecursor // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults) // @ game+0x99cfc70
};

// Class FortniteAI.IrwinAIController
// Size: 0x5a8 (Inherited: 0x5a8)
struct AIrwinAIController : AAthenaAIController {
};

// Class FortniteAI.JunoNavMesh
// Size: 0x670 (Inherited: 0x670)
struct AJunoNavMesh : AAthenaNavMesh {
};

// Class FortniteAI.LevelTestingActorBase
// Size: 0x288 (Inherited: 0x288)
struct ALevelTestingActorBase : AActor {
};

// Class FortniteAI.NavGraphDebugActor
// Size: 0x288 (Inherited: 0x288)
struct ANavGraphDebugActor : AActor {
};

// Class FortniteAI.ThreatCloud
// Size: 0x4d0 (Inherited: 0x288)
struct AThreatCloud : AActor {
	struct TArray<struct UBoxComponent*> LightningSourceAreas; // 0x288(0x10)
	char pad_298[0x8]; // 0x298(0x08)
	struct FSlateBrush MiniMapIconBrush; // 0x2a0(0xc0)
	float MiniMapIconPercent; // 0x360(0x04)
	char pad_364[0xc]; // 0x364(0x0c)
	struct FSlateBrush MiniMapFarOffIconBrush; // 0x370(0xc0)
	struct FLinearColor ActiveTint; // 0x430(0x10)
	struct FLinearColor InActiveTint; // 0x440(0x10)
	float ActiveTransitionTime; // 0x450(0x04)
	float DeathTimerDuration; // 0x454(0x04)
	float CloudMiniMapTickInterval; // 0x458(0x04)
	char pad_45C[0x14]; // 0x45c(0x14)
	float MiniMapFarOffIconDegreesOfArc; // 0x470(0x04)
	char pad_474[0xc]; // 0x474(0x0c)
	struct FBox ThreatBoxVolume; // 0x480(0x38)
	float GroundLevelUnderCloud; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct TArray<struct FVector> GoalActorLocations; // 0x4c0(0x10)

	void OnThreatVolumeChanged(); // Function FortniteAI.ThreatCloud.OnThreatVolumeChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnLightningStrike(struct FVector& StartLocation, struct FVector& EndLocation, struct ABuildingRift* Rift, bool bLightningStruckRift); // Function FortniteAI.ThreatCloud.OnLightningStrike // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xd67374
	void OnCloudStart(); // Function FortniteAI.ThreatCloud.OnCloudStart // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnCloudHiddenChange(bool bCloudsAreHidden); // Function FortniteAI.ThreatCloud.OnCloudHiddenChange // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnCloudDeactivated(enum class EFortThreatDeactivationType DeactivationType); // Function FortniteAI.ThreatCloud.OnCloudDeactivated // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnCloudActivated(); // Function FortniteAI.ThreatCloud.OnCloudActivated // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnBeginDeath(); // Function FortniteAI.ThreatCloud.OnBeginDeath // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ManualLightningFlash(); // Function FortniteAI.ThreatCloud.ManualLightningFlash // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0xd67374
	struct FBox GetThreatVolume(); // Function FortniteAI.ThreatCloud.GetThreatVolume // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x99cfeac
};

