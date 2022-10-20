// Class SOMRuntime.ScriptedObjectMovement_StaticPath
// Size: 0x4e0 (Inherited: 0x288)
struct AScriptedObjectMovement_StaticPath : AActor {
	char pad_288[0x18]; // 0x288(0x18)
	struct USplineComponent* MasterSplinePath; // 0x2a0(0x08)
	struct TArray<struct FScriptedObjectMovement_StaticPathTravelerData> PathTravelers; // 0x2a8(0x10)
	struct TArray<struct FScriptedObjectMovement_StaticPathSplineInputKeyData> SplineData; // 0x2b8(0x10)
	float StepSpacingDistance; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct TSoftObjectPtr<UScriptedObjectMovement_CalendarCheatDefinition> CheatCalendarEventDefinition; // 0x2d0(0x28)
	struct FGameplayTag MovementStyleTag; // 0x2f8(0x04)
	char pad_2FC[0x7c]; // 0x2fc(0x7c)
	struct FString EnterSplineCalendarEvent; // 0x378(0x10)
	struct FString ExitSplineCalendarEvent; // 0x388(0x10)
	struct TArray<struct FStaticPathCalendarSplinePointGroup> OrderedCalendarEventPointGroups; // 0x398(0x10)
	char pad_3A8[0x128]; // 0x3a8(0x128)
	struct UFortAsyncAction_CalendarMultiEventWatcher* CalendarWatcherAction; // 0x4d0(0x08)
	char pad_4D8[0x8]; // 0x4d8(0x08)

	void UnlockAllPathsFromBeingRegenerated(); // Function SOMRuntime.ScriptedObjectMovement_StaticPath.UnlockAllPathsFromBeingRegenerated // (Final|Native|Public) // @ game+0x6702f24
	void LockAllPathNodesFromBeingRegenerated(); // Function SOMRuntime.ScriptedObjectMovement_StaticPath.LockAllPathNodesFromBeingRegenerated // (Final|Native|Public) // @ game+0x6702d98
	void HandleCalendarEventUpdated(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventUpdated // (Native|Protected|HasDefaults) // @ game+0x67029a0
	void HandleCalendarEventEnded(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventEnded // (Native|Protected|HasDefaults) // @ game+0x670275c
	void HandleCalendarEventActive(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventActive // (Native|Protected|HasDefaults) // @ game+0x6702518
	void GeneratePathData(); // Function SOMRuntime.ScriptedObjectMovement_StaticPath.GeneratePathData // (Final|Native|Public) // @ game+0x670244c
};

// Class SOMRuntime.FortScriptedObjectMovement_GridProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UFortScriptedObjectMovement_GridProviderInterface : UInterface {
};

// Class SOMRuntime.FortGameStateComponent_ScriptedObjectMovementManager
// Size: 0x1c0 (Inherited: 0xa0)
struct UFortGameStateComponent_ScriptedObjectMovementManager : UFortGameStateComponent {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct TArray<struct AFortScriptedObjectMovement_WorldPhaseSite*> WorldPhaseSites; // 0xa8(0x10)
	char pad_B8[0x98]; // 0xb8(0x98)
	struct TArray<struct AScriptedObjectMovement_StaticPath*> RegisteredStaticPaths; // 0x150(0x10)
	struct AScriptedObjectMovement_StaticPath* CurrentlyMovingStaticPath; // 0x160(0x08)
	char pad_168[0x28]; // 0x168(0x28)
	struct FScalableFloat StaticPathCooldownBetweenMoves; // 0x190(0x28)
	char pad_1B8[0x8]; // 0x1b8(0x08)

	void HandleCurrentPlaylistReady(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function SOMRuntime.FortGameStateComponent_ScriptedObjectMovementManager.HandleCurrentPlaylistReady // (Final|Native|Private|HasOutParms) // @ game+0x6702be4
};

// Class SOMRuntime.FortScriptedObjectMovement_MovableObjectBase
// Size: 0xbe0 (Inherited: 0x9c8)
struct AFortScriptedObjectMovement_MovableObjectBase : ABuildingGameplayActor {
	char pad_9C8[0x78]; // 0x9c8(0x78)
	int32_t Editor_SkipMasterPathIndex; // 0xa40(0x04)
	int32_t Editor_SkipSubPathIndex; // 0xa44(0x04)
	int32_t Editor_NumStepsPerClick; // 0xa48(0x04)
	char pad_A4C[0x24]; // 0xa4c(0x24)
	struct UFortScriptedObjectMovement_SlotDefinition* AssignedSlotDefinition; // 0xa70(0x08)
	struct FScriptedObjectMovement_DynamicPathContext MovementPath; // 0xa78(0x38)
	char pad_AB0[0x8]; // 0xab0(0x08)
	struct UStaticMesh* ScriptedObjectMesh; // 0xab8(0x08)
	char pad_AC0[0x18]; // 0xac0(0x18)
	bool bDebugStaticMovement; // 0xad8(0x01)
	bool bWaitingForBeginPlaySkip; // 0xad9(0x01)
	char pad_ADA[0x6]; // 0xada(0x06)
	struct AScriptedObjectMovement_StaticPath* StaticFollowPath; // 0xae0(0x08)
	char pad_AE8[0x8]; // 0xae8(0x08)
	struct FScriptedObjectMovement_StaticPathStepData CurrentStepData; // 0xaf0(0xf0)

	void SetCanEverAffectNavigation(bool bCanEverAffectNavigation, struct UActorComponent* TargetActorComponent); // Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.SetCanEverAffectNavigation // (Final|Native|Public|BlueprintCallable) // @ game+0x6702e60
	void OnRep_CurrentStepData(); // Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.OnRep_CurrentStepData // (Final|Native|Private) // @ game+0x6702e4c
	void NotifyStaticPathStepComplete(bool bReachedBeginPlaySkipStep); // Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.NotifyStaticPathStepComplete // (Final|Native|Public|BlueprintCallable) // @ game+0x6702dcc
	void HandleSlotDefinitionSlotted(struct UFortScriptedObjectMovement_SlotDefinition* SlotDefinition); // Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.HandleSlotDefinitionSlotted // (Native|Event|Public|BlueprintEvent) // @ game+0x6702d14
	float GetStaticPathZOffsetHeight(); // Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetStaticPathZOffsetHeight // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x67024ec
	void GetStaticPathTravelingBounds(struct FVector& OutBoxExtent); // Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetStaticPathTravelingBounds // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x6702460
	struct UStaticMeshComponent* GetScriptedObjectStaticMeshComponent(); // Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetScriptedObjectStaticMeshComponent // (Native|Event|Public|BlueprintEvent) // @ game+0x22463d0
	void Editor_TryJumpToStartStep(); // Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_TryJumpToStartStep // (Final|Native|Public) // @ game+0x6702438
	void Editor_ResetObject(); // Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_ResetObject // (Final|Native|Public) // @ game+0x67023c8
	void Editor_PreviousStep(); // Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_PreviousStep // (Final|Native|Public) // @ game+0x24841e4
	void Editor_NextStep(); // Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_NextStep // (Final|Native|Public) // @ game+0x24841e4
	void Editor_DebugLogStaticPathTravelIndex(); // Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_DebugLogStaticPathTravelIndex // (Final|Native|Public) // @ game+0x67023b4
	void Editor_ClearResetObjectLocation(); // Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_ClearResetObjectLocation // (Final|Native|Public) // @ game+0x6702390
	void ConfigureStaticMeshToSlotDefinition(struct UFortScriptedObjectMovement_SlotDefinition* SlotDefinition, struct UStaticMeshComponent* StaticMeshComponent); // Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.ConfigureStaticMeshToSlotDefinition // (Final|Native|Public|BlueprintCallable) // @ game+0x67022bc
	void CheatDrawKeyframes(); // Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.CheatDrawKeyframes // (Final|Native|Public) // @ game+0x24841e4
	void Cheat_NetMulticast_SendDebugTimerInfo(float ServerTimeWhenQueryInvoked, float RemainingTime); // Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Cheat_NetMulticast_SendDebugTimerInfo // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x67021f4
	bool BlockOverlappingStaticPathSteps(); // Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.BlockOverlappingStaticPathSteps // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x67021cc
	void BeginMovingToStaticPathNode(struct FScriptedObjectMovement_StaticPathStepData& StepData); // Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.BeginMovingToStaticPathNode // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x670210c
};

// Class SOMRuntime.FortScriptedObjectMovement_WorldPhaseSite
// Size: 0x450 (Inherited: 0x288)
struct AFortScriptedObjectMovement_WorldPhaseSite : AActor {
	char pad_288[0x8]; // 0x288(0x08)
	struct TArray<struct FFortScriptedObjectMovementPhaseData> Phases; // 0x290(0x10)
	struct FScalableFloat NumSimulatenousMovingObjects; // 0x2a0(0x28)
	struct FScalableFloat PhaseIntervalSeconds; // 0x2c8(0x28)
	char pad_2F0[0x20]; // 0x2f0(0x20)
	struct FScriptedObjectMovement_Grid BaseGrid; // 0x310(0xc8)
	struct FScriptedObjectMovement_DynamicPathContext InProgressPath; // 0x3d8(0x38)
	struct TArray<struct UFortScriptedObjectMovement_Slot*> LeavingSlotStack; // 0x410(0x10)
	struct TArray<struct UFortScriptedObjectMovement_Slot*> DestinationSlotStack; // 0x420(0x10)
	struct TArray<struct UFortScriptedObjectMovement_Slot*> OverflowSlotStack; // 0x430(0x10)
	struct TArray<struct AFortScriptedObjectMovement_MovableObjectBase*> CurrentlyMovingObjects; // 0x440(0x10)
};

// Class SOMRuntime.FortScriptedObjectMovement_SlotDefinition
// Size: 0x40 (Inherited: 0x30)
struct UFortScriptedObjectMovement_SlotDefinition : UPrimaryDataAsset {
	struct AFortScriptedObjectMovement_MovableObjectBase* ScriptedObjectClass; // 0x30(0x08)
	float ObjectScale; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class SOMRuntime.FortScriptedObjectMovement_Slot
// Size: 0x610 (Inherited: 0x5f0)
struct UFortScriptedObjectMovement_Slot : UStaticMeshComponent {
	struct UFortScriptedObjectMovement_SlotDefinition* SlotDefinition; // 0x5f0(0x08)
	int32_t ObjectRemoveOrder; // 0x5f8(0x04)
	char pad_5FC[0x4]; // 0x5fc(0x04)
	struct AFortScriptedObjectMovement_MovableObjectBase* SlottedObject; // 0x600(0x08)
	char pad_608[0x8]; // 0x608(0x08)
};

// Class SOMRuntime.FortScriptedObjectMovement_Structure
// Size: 0x2a8 (Inherited: 0x288)
struct AFortScriptedObjectMovement_Structure : AActor {
	struct TArray<struct UFortScriptedObjectMovement_Slot*> CachedObjectSlots; // 0x288(0x10)
	struct TArray<struct UFortScriptedObjectMovement_SlotDefinition*> CachedSlotDefinitions; // 0x298(0x10)
};

// Class SOMRuntime.ScriptedObjectMovement_CalendarCheatDefinition
// Size: 0x40 (Inherited: 0x30)
struct UScriptedObjectMovement_CalendarCheatDefinition : UPrimaryDataAsset {
	struct TArray<struct FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData> CheatCalendarEvents; // 0x30(0x10)
};

