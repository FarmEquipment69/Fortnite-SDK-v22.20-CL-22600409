// Class NavigationSystem.NavigationQueryFilter
// Size: 0x48 (Inherited: 0x28)
struct UNavigationQueryFilter : UObject {
	struct TArray<struct FNavigationFilterArea> Areas; // 0x28(0x10)
	struct FNavigationFilterFlags IncludeFlags; // 0x38(0x04)
	struct FNavigationFilterFlags ExcludeFlags; // 0x3c(0x04)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class NavigationSystem.NavRelevantComponent
// Size: 0xf0 (Inherited: 0xa0)
struct UNavRelevantComponent : UActorComponent {
	char pad_A0[0x40]; // 0xa0(0x40)
	char bAttachToOwnersRoot : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct UObject* CachedNavParent; // 0xe8(0x08)

	void SetNavigationRelevancy(bool bRelevant); // Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy // (Final|Native|Public|BlueprintCallable) // @ game+0x97aa158
};

// Class NavigationSystem.NavModifierComponent
// Size: 0x190 (Inherited: 0xf0)
struct UNavModifierComponent : UNavRelevantComponent {
	struct UNavArea* AreaClass; // 0xf0(0x08)
	struct FVector FailsafeExtent; // 0xf8(0x18)
	char bIncludeAgentHeight : 1; // 0x110(0x01)
	char pad_110_1 : 7; // 0x110(0x01)
	char pad_111[0x7f]; // 0x111(0x7f)

	void SetAreaClass(struct UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierComponent.SetAreaClass // (Final|Native|Public|BlueprintCallable) // @ game+0x97aa0d8
};

// Class NavigationSystem.NavigationData
// Size: 0x498 (Inherited: 0x288)
struct ANavigationData : AActor {
	char pad_288[0x8]; // 0x288(0x08)
	struct UPrimitiveComponent* RenderingComp; // 0x290(0x08)
	struct FNavDataConfig NavDataConfig; // 0x298(0x80)
	char bEnableDrawing : 1; // 0x318(0x01)
	char bForceRebuildOnLoad : 1; // 0x318(0x01)
	char bAutoDestroyWhenNoNavigation : 1; // 0x318(0x01)
	char bCanBeMainNavData : 1; // 0x318(0x01)
	char bCanSpawnOnRebuild : 1; // 0x318(0x01)
	char bRebuildAtRuntime : 1; // 0x318(0x01)
	char pad_318_6 : 2; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	float ObservedPathsTickInterval; // 0x320(0x04)
	uint32_t DataVersion; // 0x324(0x04)
	char pad_328[0x108]; // 0x328(0x108)
	struct TArray<struct FSupportedAreaData> SupportedAreas; // 0x430(0x10)
	char pad_440[0x58]; // 0x440(0x58)
};

// Class NavigationSystem.AbstractNavData
// Size: 0x498 (Inherited: 0x498)
struct AAbstractNavData : ANavigationData {
};

// Class NavigationSystem.CrowdManagerBase
// Size: 0x28 (Inherited: 0x28)
struct UCrowdManagerBase : UObject {
};

// Class NavigationSystem.NavArea
// Size: 0x48 (Inherited: 0x30)
struct UNavArea : UNavAreaBase {
	float DefaultCost; // 0x30(0x04)
	float FixedAreaEnteringCost; // 0x34(0x04)
	struct FColor DrawColor; // 0x38(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x3c(0x04)
	char bSupportsAgent0 : 1; // 0x40(0x01)
	char bSupportsAgent1 : 1; // 0x40(0x01)
	char bSupportsAgent2 : 1; // 0x40(0x01)
	char bSupportsAgent3 : 1; // 0x40(0x01)
	char bSupportsAgent4 : 1; // 0x40(0x01)
	char bSupportsAgent5 : 1; // 0x40(0x01)
	char bSupportsAgent6 : 1; // 0x40(0x01)
	char bSupportsAgent7 : 1; // 0x40(0x01)
	char bSupportsAgent8 : 1; // 0x41(0x01)
	char bSupportsAgent9 : 1; // 0x41(0x01)
	char bSupportsAgent10 : 1; // 0x41(0x01)
	char bSupportsAgent11 : 1; // 0x41(0x01)
	char bSupportsAgent12 : 1; // 0x41(0x01)
	char bSupportsAgent13 : 1; // 0x41(0x01)
	char bSupportsAgent14 : 1; // 0x41(0x01)
	char bSupportsAgent15 : 1; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// Class NavigationSystem.NavAreaMeta
// Size: 0x48 (Inherited: 0x48)
struct UNavAreaMeta : UNavArea {
};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// Size: 0xc8 (Inherited: 0x48)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	struct UNavArea* Agent0Area; // 0x48(0x08)
	struct UNavArea* Agent1Area; // 0x50(0x08)
	struct UNavArea* Agent2Area; // 0x58(0x08)
	struct UNavArea* Agent3Area; // 0x60(0x08)
	struct UNavArea* Agent4Area; // 0x68(0x08)
	struct UNavArea* Agent5Area; // 0x70(0x08)
	struct UNavArea* Agent6Area; // 0x78(0x08)
	struct UNavArea* Agent7Area; // 0x80(0x08)
	struct UNavArea* Agent8Area; // 0x88(0x08)
	struct UNavArea* Agent9Area; // 0x90(0x08)
	struct UNavArea* Agent10Area; // 0x98(0x08)
	struct UNavArea* Agent11Area; // 0xa0(0x08)
	struct UNavArea* Agent12Area; // 0xa8(0x08)
	struct UNavArea* Agent13Area; // 0xb0(0x08)
	struct UNavArea* Agent14Area; // 0xb8(0x08)
	struct UNavArea* Agent15Area; // 0xc0(0x08)
};

// Class NavigationSystem.NavArea_Default
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Default : UNavArea {
};

// Class NavigationSystem.NavArea_LowHeight
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_LowHeight : UNavArea {
};

// Class NavigationSystem.NavArea_Null
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Null : UNavArea {
};

// Class NavigationSystem.NavArea_Obstacle
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Obstacle : UNavArea {
};

// Class NavigationSystem.NavCollision
// Size: 0xd0 (Inherited: 0x70)
struct UNavCollision : UNavCollisionBase {
	char pad_70[0x10]; // 0x70(0x10)
	struct TArray<struct FNavCollisionCylinder> CylinderCollision; // 0x80(0x10)
	struct TArray<struct FNavCollisionBox> BoxCollision; // 0x90(0x10)
	struct UNavArea* AreaClass; // 0xa0(0x08)
	char bGatherConvexGeometry : 1; // 0xa8(0x01)
	char bCreateOnClient : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x27]; // 0xa9(0x27)
};

// Class NavigationSystem.NavigationGraph
// Size: 0x498 (Inherited: 0x498)
struct ANavigationGraph : ANavigationData {
};

// Class NavigationSystem.NavigationGraphNode
// Size: 0x288 (Inherited: 0x288)
struct ANavigationGraphNode : AActor {
};

// Class NavigationSystem.NavigationGraphNodeComponent
// Size: 0x2d0 (Inherited: 0x2a0)
struct UNavigationGraphNodeComponent : USceneComponent {
	struct FNavGraphNode Node; // 0x2a0(0x18)
	struct UNavigationGraphNodeComponent* NextNodeComponent; // 0x2b8(0x08)
	struct UNavigationGraphNodeComponent* PrevNodeComponent; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)
};

// Class NavigationSystem.NavigationInvokerComponent
// Size: 0xa8 (Inherited: 0xa0)
struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0xa0(0x04)
	float TileRemovalRadius; // 0xa4(0x04)
};

// Class NavigationSystem.NavigationPath
// Size: 0x88 (Inherited: 0x28)
struct UNavigationPath : UObject {
	struct FMulticastInlineDelegate PathUpdatedNotifier; // 0x28(0x10)
	struct TArray<struct FVector> PathPoints; // 0x38(0x10)
	enum class ENavigationOptionFlag RecalculateOnInvalidation; // 0x48(0x01)
	char pad_49[0x3f]; // 0x49(0x3f)

	bool IsValid(); // Function NavigationSystem.NavigationPath.IsValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x97a85b8
	bool IsStringPulled(); // Function NavigationSystem.NavigationPath.IsStringPulled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22fb320
	bool IsPartial(); // Function NavigationSystem.NavigationPath.IsPartial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x97a858c
	float GetPathLength(); // Function NavigationSystem.NavigationPath.GetPathLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x97a8270
	float GetPathCost(); // Function NavigationSystem.NavigationPath.GetPathCost // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x97a8040
	struct FString GetDebugString(); // Function NavigationSystem.NavigationPath.GetDebugString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x97a7f20
	void EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag DoRecalculation); // Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation // (Final|Native|Public|BlueprintCallable) // @ game+0x97a79e8
	void EnableDebugDrawing(bool bShouldDrawDebugData, struct FLinearColor PathColor); // Function NavigationSystem.NavigationPath.EnableDebugDrawing // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x97a7910
};

// Class NavigationSystem.NavigationPathGenerator
// Size: 0x28 (Inherited: 0x28)
struct UNavigationPathGenerator : UInterface {
};

// Class NavigationSystem.NavigationSystemV1
// Size: 0x1520 (Inherited: 0x28)
struct UNavigationSystemV1 : UNavigationSystemBase {
	struct ANavigationData* MainNavData; // 0x28(0x08)
	struct ANavigationData* AbstractNavData; // 0x30(0x08)
	struct FName DefaultAgentName; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TSoftClassPtr<UObject> CrowdManagerClass; // 0x40(0x28)
	char bAutoCreateNavigationData : 1; // 0x68(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x68(0x01)
	char bAllowClientSideNavigation : 1; // 0x68(0x01)
	char bShouldDiscardSubLevelNavData : 1; // 0x68(0x01)
	char bTickWhilePaused : 1; // 0x68(0x01)
	char bSupportRebuilding : 1; // 0x68(0x01)
	char bInitialBuildingLocked : 1; // 0x68(0x01)
	char pad_68_7 : 1; // 0x68(0x01)
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x69(0x01)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x69(0x01)
	char pad_69_2 : 6; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	float ActiveTilesUpdateInterval; // 0x6c(0x04)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float DirtyAreaWarningSizeThreshold; // 0x74(0x04)
	float GatheringNavModifiersWarningLimitTime; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FNavDataConfig> SupportedAgents; // 0x80(0x10)
	struct FNavAgentSelector SupportedAgentsMask; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FBox BuildBounds; // 0x98(0x38)
	struct TArray<struct ANavigationData*> NavDataSet; // 0xd0(0x10)
	struct TArray<struct ANavigationData*> NavDataRegistrationQueue; // 0xe0(0x10)
	char pad_F0[0x10]; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0x100(0x10)
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0x110(0x10)
	char pad_120[0xdc]; // 0x120(0xdc)
	enum class FNavigationSystemRunMode OperationMode; // 0x1fc(0x01)
	char pad_1FD[0x1323]; // 0x1fd(0x1323)

	void UnregisterNavigationInvoker(struct AActor* Invoker); // Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker // (Final|Native|Public|BlueprintCallable) // @ game+0x97a9298
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs); // Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount // (Final|Native|Public|BlueprintCallable) // @ game+0x97a91d4
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode); // Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode // (Final|Native|Public|BlueprintCallable) // @ game+0x97a9154
	void ResetMaxSimultaneousTileGenerationJobsCount(); // Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount // (Final|Native|Public|BlueprintCallable) // @ game+0x97a90d8
	void RegisterNavigationInvoker(struct AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius); // Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker // (Final|Native|Public|BlueprintCallable) // @ game+0x97a8fcc
	void OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume* NavVolume); // Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated // (Final|Native|Public|BlueprintCallable) // @ game+0x97a8eb0
	bool NavigationRaycast(struct UObject* WorldContextObject, struct FVector& RayStart, struct FVector& RayEnd, struct FVector& HitLocation, struct UNavigationQueryFilter* FilterClass, struct AController* Querier); // Function NavigationSystem.NavigationSystemV1.NavigationRaycast // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x97a8cc0
	bool K2_ReplaceAreaInOctreeData(struct UObject* Object, struct UNavArea* OldArea, struct UNavArea* NewArea); // Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData // (Final|Native|Public|BlueprintCallable) // @ game+0x97a8b9c
	bool K2_ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector& Point, struct FVector& ProjectedLocation, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x97a89a0
	bool K2_GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x97a87b8
	bool K2_GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x97a85d0
	bool K2_GetRandomLocationInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x97a85d0
	bool IsNavigationBeingBuiltOrLocked(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x97a850c
	bool IsNavigationBeingBuilt(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x97a848c
	enum class ENavigationQueryResult GetPathLength(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathLength, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathLength // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x97a8298
	enum class ENavigationQueryResult GetPathCost(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathCost, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathCost // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x97a807c
	struct UNavigationSystemV1* GetNavigationSystem(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.GetNavigationSystem // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x97a7f94
	struct UNavigationPath* FindPathToLocationSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x97a7d80
	struct UNavigationPath* FindPathToActorSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct AActor* GoalActor, float TetherDistance, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x97a7a90
};

// Class NavigationSystem.NavigationSystemModuleConfig
// Size: 0x58 (Inherited: 0x50)
struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	char bStrictlyStatic : 1; // 0x50(0x01)
	char bCreateOnClient : 1; // 0x50(0x01)
	char bAutoSpawnMissingNavData : 1; // 0x50(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x50(0x01)
	char pad_50_4 : 4; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class NavigationSystem.NavigationTestingActor
// Size: 0x3a0 (Inherited: 0x288)
struct ANavigationTestingActor : AActor {
	char pad_288[0x10]; // 0x288(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x298(0x08)
	struct UNavigationInvokerComponent* InvokerComponent; // 0x2a0(0x08)
	char bActAsNavigationInvoker : 1; // 0x2a8(0x01)
	char pad_2A8_1 : 7; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct FNavAgentProperties NavAgentProps; // 0x2b0(0x30)
	struct FVector QueryingExtent; // 0x2e0(0x18)
	struct ANavigationData* MyNavData; // 0x2f8(0x08)
	struct FVector ProjectedLocation; // 0x300(0x18)
	char bProjectedLocationValid : 1; // 0x318(0x01)
	char bSearchStart : 1; // 0x318(0x01)
	char pad_318_2 : 6; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	float CostLimitFactor; // 0x31c(0x04)
	float MinimumCostLimit; // 0x320(0x04)
	char bBacktracking : 1; // 0x324(0x01)
	char bUseHierarchicalPathfinding : 1; // 0x324(0x01)
	char bGatherDetailedInfo : 1; // 0x324(0x01)
	char bDrawDistanceToWall : 1; // 0x324(0x01)
	char bShowNodePool : 1; // 0x324(0x01)
	char bShowBestPath : 1; // 0x324(0x01)
	char bShowDiffWithPreviousStep : 1; // 0x324(0x01)
	char bShouldBeVisibleInGame : 1; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	enum class ENavCostDisplay CostDisplayMode; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct FVector2D TextCanvasOffset; // 0x330(0x10)
	char bPathExist : 1; // 0x340(0x01)
	char bPathIsPartial : 1; // 0x340(0x01)
	char bPathSearchOutOfNodes : 1; // 0x340(0x01)
	char pad_340_3 : 5; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	float PathfindingTime; // 0x344(0x04)
	float PathCost; // 0x348(0x04)
	int32_t PathfindingSteps; // 0x34c(0x04)
	struct ANavigationTestingActor* OtherActor; // 0x350(0x08)
	struct UNavigationQueryFilter* FilterClass; // 0x358(0x08)
	int32_t ShowStepIndex; // 0x360(0x04)
	float OffsetFromCornersDistance; // 0x364(0x04)
	char pad_368[0x38]; // 0x368(0x38)
};

// Class NavigationSystem.NavLinkComponent
// Size: 0x550 (Inherited: 0x530)
struct UNavLinkComponent : UPrimitiveComponent {
	char pad_530[0x8]; // 0x530(0x08)
	struct TArray<struct FNavigationLink> Links; // 0x538(0x10)
	char pad_548[0x8]; // 0x548(0x08)
};

// Class NavigationSystem.NavLinkCustomComponent
// Size: 0x1d0 (Inherited: 0xf0)
struct UNavLinkCustomComponent : UNavRelevantComponent {
	char pad_F0[0x8]; // 0xf0(0x08)
	uint32_t NavLinkUserId; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct UNavArea* EnabledAreaClass; // 0x100(0x08)
	struct UNavArea* DisabledAreaClass; // 0x108(0x08)
	struct FNavAgentSelector SupportedAgents; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct FVector LinkRelativeStart; // 0x118(0x18)
	struct FVector LinkRelativeEnd; // 0x130(0x18)
	enum class ENavLinkDirection LinkDirection; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	char bLinkEnabled : 1; // 0x14c(0x01)
	char bNotifyWhenEnabled : 1; // 0x14c(0x01)
	char bNotifyWhenDisabled : 1; // 0x14c(0x01)
	char bCreateBoxObstacle : 1; // 0x14c(0x01)
	char pad_14C_4 : 4; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	struct FVector ObstacleOffset; // 0x150(0x18)
	struct FVector ObstacleExtent; // 0x168(0x18)
	struct UNavArea* ObstacleAreaClass; // 0x180(0x08)
	float BroadcastRadius; // 0x188(0x04)
	float BroadcastInterval; // 0x18c(0x04)
	enum class ECollisionChannel BroadcastChannel; // 0x190(0x01)
	char pad_191[0x3f]; // 0x191(0x3f)
};

// Class NavigationSystem.NavLinkCustomInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavLinkCustomInterface : UInterface {
};

// Class NavigationSystem.NavLinkHostInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavLinkHostInterface : UInterface {
};

// Class NavigationSystem.NavLinkRenderingComponent
// Size: 0x530 (Inherited: 0x530)
struct UNavLinkRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.NavLinkTrivial
// Size: 0x50 (Inherited: 0x50)
struct UNavLinkTrivial : UNavLinkDefinition {
};

// Class NavigationSystem.NavMeshBoundsVolume
// Size: 0x2c8 (Inherited: 0x2c0)
struct ANavMeshBoundsVolume : AVolume {
	struct FNavAgentSelector SupportedAgents; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
};

// Class NavigationSystem.NavMeshRenderingComponent
// Size: 0x590 (Inherited: 0x580)
struct UNavMeshRenderingComponent : UDebugDrawComponent {
	char pad_580[0x10]; // 0x580(0x10)
};

// Class NavigationSystem.NavModifierVolume
// Size: 0x2d8 (Inherited: 0x2c0)
struct ANavModifierVolume : AVolume {
	char pad_2C0[0x8]; // 0x2c0(0x08)
	struct UNavArea* AreaClass; // 0x2c8(0x08)
	bool bMaskFillCollisionUnderneathForNavmesh; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)

	void SetAreaClass(struct UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierVolume.SetAreaClass // (Final|Native|Public|BlueprintCallable) // @ game+0x97a9ffc
};

// Class NavigationSystem.NavNodeInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavNodeInterface : UInterface {
};

// Class NavigationSystem.NavSystemConfigOverride
// Size: 0x298 (Inherited: 0x288)
struct ANavSystemConfigOverride : AActor {
	struct UNavigationSystemConfig* NavigationSystemConfig; // 0x288(0x08)
	enum class ENavSystemOverridePolicy OverridePolicy; // 0x290(0x01)
	char bLoadOnClient : 1; // 0x291(0x01)
	char pad_291_1 : 7; // 0x291(0x01)
	char pad_292[0x6]; // 0x292(0x06)
};

// Class NavigationSystem.NavTestRenderingComponent
// Size: 0x580 (Inherited: 0x580)
struct UNavTestRenderingComponent : UDebugDrawComponent {
};

// Class NavigationSystem.RecastFilter_UseDefaultArea
// Size: 0x48 (Inherited: 0x48)
struct URecastFilter_UseDefaultArea : UNavigationQueryFilter {
};

// Class NavigationSystem.RecastNavMesh
// Size: 0x568 (Inherited: 0x498)
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x498(0x01)
	char bDrawPolyEdges : 1; // 0x498(0x01)
	char bDrawFilledPolys : 1; // 0x498(0x01)
	char bDrawNavMeshEdges : 1; // 0x498(0x01)
	char bDrawTileBounds : 1; // 0x498(0x01)
	char bDrawPathCollidingGeometry : 1; // 0x498(0x01)
	char bDrawTileLabels : 1; // 0x498(0x01)
	char bDrawPolygonLabels : 1; // 0x498(0x01)
	char bDrawDefaultPolygonCost : 1; // 0x499(0x01)
	char bDrawPolygonFlags : 1; // 0x499(0x01)
	char bDrawLabelsOnPathNodes : 1; // 0x499(0x01)
	char bDrawNavLinks : 1; // 0x499(0x01)
	char bDrawFailedNavLinks : 1; // 0x499(0x01)
	char bDrawClusters : 1; // 0x499(0x01)
	char bDrawOctree : 1; // 0x499(0x01)
	char bDrawOctreeDetails : 1; // 0x499(0x01)
	char bDrawMarkedForbiddenPolys : 1; // 0x49a(0x01)
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x49a(0x01)
	char pad_49A_2 : 6; // 0x49a(0x01)
	char pad_49B[0x1]; // 0x49b(0x01)
	float DrawOffset; // 0x49c(0x04)
	struct FRecastNavMeshTileGenerationDebug TileGenerationDebug; // 0x4a0(0x14)
	char bFixedTilePoolSize : 1; // 0x4b4(0x01)
	char pad_4B4_1 : 7; // 0x4b4(0x01)
	char pad_4B5[0x3]; // 0x4b5(0x03)
	int32_t TilePoolSize; // 0x4b8(0x04)
	float TileSizeUU; // 0x4bc(0x04)
	float CellSize; // 0x4c0(0x04)
	float CellHeight; // 0x4c4(0x04)
	float AgentRadius; // 0x4c8(0x04)
	float AgentHeight; // 0x4cc(0x04)
	float AgentMaxSlope; // 0x4d0(0x04)
	float AgentMaxStepHeight; // 0x4d4(0x04)
	float MinRegionArea; // 0x4d8(0x04)
	float MergeRegionSize; // 0x4dc(0x04)
	float MaxSimplificationError; // 0x4e0(0x04)
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x4e4(0x04)
	int32_t TileNumberHardLimit; // 0x4e8(0x04)
	int32_t PolyRefTileBits; // 0x4ec(0x04)
	int32_t PolyRefNavPolyBits; // 0x4f0(0x04)
	int32_t PolyRefSaltBits; // 0x4f4(0x04)
	struct FVector NavMeshOriginOffset; // 0x4f8(0x18)
	float DefaultDrawDistance; // 0x510(0x04)
	float DefaultMaxSearchNodes; // 0x514(0x04)
	float DefaultMaxHierarchicalSearchNodes; // 0x518(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x51c(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x51d(0x01)
	char pad_51E[0x2]; // 0x51e(0x02)
	int32_t RegionChunkSplits; // 0x520(0x04)
	int32_t LayerChunkSplits; // 0x524(0x04)
	char bSortNavigationAreasByCost : 1; // 0x528(0x01)
	char bIsWorldPartitioned : 1; // 0x528(0x01)
	char bPerformVoxelFiltering : 1; // 0x528(0x01)
	char bMarkLowHeightAreas : 1; // 0x528(0x01)
	char bUseExtraTopCellWhenMarkingAreas : 1; // 0x528(0x01)
	char bFilterLowSpanSequences : 1; // 0x528(0x01)
	char bFilterLowSpanFromTileCache : 1; // 0x528(0x01)
	char bDoFullyAsyncNavDataGathering : 1; // 0x528(0x01)
	char bUseBetterOffsetsFromCorners : 1; // 0x529(0x01)
	char bStoreEmptyTileLayers : 1; // 0x529(0x01)
	char bUseVirtualFilters : 1; // 0x529(0x01)
	char bUseVirtualGeometryFilteringAndDirtying : 1; // 0x529(0x01)
	char bAllowNavLinkAsPathEnd : 1; // 0x529(0x01)
	char bUseVoxelCache : 1; // 0x529(0x01)
	char pad_529_6 : 2; // 0x529(0x01)
	char pad_52A[0x2]; // 0x52a(0x02)
	float TileSetUpdateInterval; // 0x52c(0x04)
	float HeuristicScale; // 0x530(0x04)
	float VerticalDeviationFromGroundCompensation; // 0x534(0x04)
	char pad_538[0x30]; // 0x538(0x30)

	bool K2_ReplaceAreaInTileBounds(struct FBox Bounds, struct UNavArea* OldArea, struct UNavArea* NewArea, bool ReplaceLinks); // Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x97a9e84
};

// Class NavigationSystem.RecastNavMeshDataChunk
// Size: 0x40 (Inherited: 0x30)
struct URecastNavMeshDataChunk : UNavigationDataChunk {
	char pad_30[0x10]; // 0x30(0x10)
};

