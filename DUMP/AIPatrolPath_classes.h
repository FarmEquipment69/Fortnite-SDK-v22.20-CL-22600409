// Class AIPatrolPath.AIPatrolPathComponent
// Size: 0x308 (Inherited: 0xa0)
struct UAIPatrolPathComponent : UActorComponent {
	char pad_A0[0x20]; // 0xa0(0x20)
	struct TSoftClassPtr<UObject> DefaultAIPawn; // 0xc0(0x28)
	struct UFortNavPathRendererComponent* PathRendererClass; // 0xe8(0x08)
	bool bAllowPartialPaths; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FGameplayTagContainer UnableToPlaceNewDeviceTags; // 0xf8(0x20)
	struct FNavAgentProperties CachedAIAgentProperties; // 0x118(0x30)
	struct UNavigationSystemV1* CachedNavSystem; // 0x148(0x08)
	struct ANavigationData* CachedNavData; // 0x150(0x08)
	struct UNavigationQueryFilter* CachedFilterClass; // 0x158(0x08)
	char pad_160[0x10]; // 0x160(0x10)
	struct FMulticastInlineDelegate OnPatrolPointFailedToReach; // 0x170(0x10)
	struct FMulticastInlineDelegate OnPatrolPointReached; // 0x180(0x10)
	struct FMulticastInlineDelegate OnPatrolPathStarted; // 0x190(0x10)
	struct FMulticastInlineDelegate OnPatrolPathStopped; // 0x1a0(0x10)
	char pad_1B0[0x8]; // 0x1b0(0x08)
	struct TArray<struct UAIPatrolPathComponent*> PatrolPath; // 0x1b8(0x10)
	struct FPatrolPathSegmentDetails PathSegmentDetails; // 0x1c8(0xd8)
	char pad_2A0[0x10]; // 0x2a0(0x10)
	struct UAIPatrolPathComponent* CopiedFrom; // 0x2b0(0x08)
	char pad_2B8[0x8]; // 0x2b8(0x08)
	struct UAIPatrolPathComponent* CopiedFromCut; // 0x2c0(0x08)
	struct AFortCreativePatrolPath* PatrolPathActor; // 0x2c8(0x08)
	struct AFortAthenaPatrolPoint* PatrolPointActor; // 0x2d0(0x08)
	struct TArray<struct UAIPatrolPathComponent*> MultiSelectActorToEnterList; // 0x2d8(0x10)
	char pad_2E8[0x20]; // 0x2e8(0x20)

	bool SyncSharedUserOptions(struct UAIPatrolPathComponent* CopyToAIPatrolPathComp, struct TMap<struct FString, struct FString>& UserOptionValues); // Function AIPatrolPath.AIPatrolPathComponent.SyncSharedUserOptions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6762bd8
	bool ShouldRenderPath(); // Function AIPatrolPath.AIPatrolPathComponent.ShouldRenderPath // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetRenderPath(bool bRenderPath); // Function AIPatrolPath.AIPatrolPathComponent.SetRenderPath // (Final|Native|Private|BlueprintCallable) // @ game+0x6762b58
	void SetPatrolPathGroup(enum class EFortCreativePatrolPathGroup PatrolPathGroup); // Function AIPatrolPath.AIPatrolPathComponent.SetPatrolPathGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x6762a48
	void SetPatrolPathEnabled(bool bIsEnabled); // Function AIPatrolPath.AIPatrolPathComponent.SetPatrolPathEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x67629bc
	void SetPatrollingMode(enum class EPatrollingMode NewMode); // Function AIPatrolPath.AIPatrolPathComponent.SetPatrollingMode // (Final|Native|Public|BlueprintCallable) // @ game+0x6762ac8
	void RequestRenderPath(); // Function AIPatrolPath.AIPatrolPathComponent.RequestRenderPath // (Final|Native|Private|BlueprintCallable) // @ game+0x6762960
	bool RemovePoint(); // Function AIPatrolPath.AIPatrolPathComponent.RemovePoint // (Final|Native|Public|BlueprintCallable) // @ game+0x676293c
	void PatrolPointReached(struct AFortAthenaPatrolPoint* PathPoint, struct AAIController* Instigator); // Function AIPatrolPath.AIPatrolPathComponent.PatrolPointReached // (Final|Native|Private) // @ game+0x6762878
	void PatrolPointFailedToReach(struct AFortAthenaPatrolPoint* PathPoint, struct AAIController* Instigator); // Function AIPatrolPath.AIPatrolPathComponent.PatrolPointFailedToReach // (Final|Native|Private) // @ game+0x67627b4
	void PatrolPathStopped(struct AAIController* Instigator); // Function AIPatrolPath.AIPatrolPathComponent.PatrolPathStopped // (Final|Native|Private) // @ game+0x6762734
	void PatrolPathStarted(struct AAIController* Instigator); // Function AIPatrolPath.AIPatrolPathComponent.PatrolPathStarted // (Final|Native|Private) // @ game+0x67626a4
	void OnPatrolPathGroupsMerged(); // Function AIPatrolPath.AIPatrolPathComponent.OnPatrolPathGroupsMerged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPatrolPathActorAssigned(); // Function AIPatrolPath.AIPatrolPathComponent.OnPatrolPathActorAssigned // (Event|Public|BlueprintEvent) // @ game+0xd67374
	bool HasValidPatrolPath(); // Function AIPatrolPath.AIPatrolPathComponent.HasValidPatrolPath // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6762688
	int32_t GetPatrolPathPointIndex(); // Function AIPatrolPath.AIPatrolPathComponent.GetPatrolPathPointIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6762670
	struct UAIPatrolPathComponent* GetPatrolPathPoint(int32_t InPatrolPathIndex, int32_t InPatrolPathPointIndex); // Function AIPatrolPath.AIPatrolPathComponent.GetPatrolPathPoint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67625b0
	int32_t GetPatrolPathIndex(); // Function AIPatrolPath.AIPatrolPathComponent.GetPatrolPathIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6762598
	struct UNavigationQueryFilter* GetPatrolFilterOptions(); // Function AIPatrolPath.AIPatrolPathComponent.GetPatrolFilterOptions // (Event|Public|BlueprintEvent) // @ game+0xd67374
	bool GetNextAvailablePatrolPathIndex(int32_t& NextAvailableIndex); // Function AIPatrolPath.AIPatrolPathComponent.GetNextAvailablePatrolPathIndex // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6762500
	struct TArray<struct UAIPatrolPathComponent*> GetLinkedPatrolPoints(); // Function AIPatrolPath.AIPatrolPathComponent.GetLinkedPatrolPoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6762388
	void GeneratePathPoints(enum class EFortCreativePatrolPathGroup PatrolPathGroup); // Function AIPatrolPath.AIPatrolPathComponent.GeneratePathPoints // (Final|Native|Public|BlueprintCallable) // @ game+0x6762308
	bool CanNextPointBeReached(); // Function AIPatrolPath.AIPatrolPathComponent.CanNextPointBeReached // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x67622e8
};

