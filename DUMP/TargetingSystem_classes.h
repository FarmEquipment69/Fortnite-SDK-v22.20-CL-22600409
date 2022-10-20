// Class TargetingSystem.AsyncAction_PerformTargeting
// Size: 0x68 (Inherited: 0x30)
struct UAsyncAction_PerformTargeting : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Targeted; // 0x30(0x10)
	struct UTargetingPreset* TargetingPreset; // 0x40(0x08)
	struct TWeakObjectPtr<struct AActor> WeakSourceActor; // 0x48(0x08)
	struct TArray<struct AActor*> InitialTargets; // 0x50(0x10)
	char bUseAsyncTargeting : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)

	struct UAsyncAction_PerformTargeting* PerformTargetingRequest(struct AActor* SourceActor, struct UTargetingPreset* TargetingPreset, bool bUseAsyncTargeting); // Function TargetingSystem.AsyncAction_PerformTargeting.PerformTargetingRequest // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x68607e0
	struct UAsyncAction_PerformTargeting* PerformFilteringRequest(struct AActor* SourceActor, struct UTargetingPreset* TargetingPreset, bool bUseAsyncTargeting, struct TArray<struct AActor*> InTargets); // Function TargetingSystem.AsyncAction_PerformTargeting.PerformFilteringRequest // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6860670
};

// Class TargetingSystem.TargetingTask
// Size: 0x28 (Inherited: 0x28)
struct UTargetingTask : UObject {
};

// Class TargetingSystem.TargetingFilterTask_BasicFilterTemplate
// Size: 0x28 (Inherited: 0x28)
struct UTargetingFilterTask_BasicFilterTemplate : UTargetingTask {
};

// Class TargetingSystem.TargetingFilterTask_ActorClass
// Size: 0x48 (Inherited: 0x28)
struct UTargetingFilterTask_ActorClass : UTargetingFilterTask_BasicFilterTemplate {
	struct TArray<ClassPtrProperty> RequiredActorClassFilters; // 0x28(0x10)
	struct TArray<ClassPtrProperty> IgnoredActorClassFilters; // 0x38(0x10)
};

// Class TargetingSystem.TargetingFilterTask_SortByDistance
// Size: 0x30 (Inherited: 0x28)
struct UTargetingFilterTask_SortByDistance : UTargetingTask {
	char bAscending : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class TargetingSystem.TargetingPreset
// Size: 0x40 (Inherited: 0x30)
struct UTargetingPreset : UDataAsset {
	struct FTargetingTaskSet TargetingTaskSet; // 0x30(0x10)
};

// Class TargetingSystem.TargetingSelectionTask_AOE
// Size: 0xd0 (Inherited: 0x28)
struct UTargetingSelectionTask_AOE : UTargetingTask {
	enum class ETargetingAOEShape ShapeType; // 0x28(0x01)
	enum class ECollisionChannel CollisionChannel; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FCollisionProfileName CollisionProfileName; // 0x2c(0x04)
	struct TArray<enum class EObjectTypeQuery> CollisionObjectTypes; // 0x30(0x10)
	struct FVector DefaultSourceOffset; // 0x40(0x18)
	char bIgnoreSourceActor : 1; // 0x58(0x01)
	char bIgnoreInstigatorActor : 1; // 0x58(0x01)
	char pad_58_2 : 6; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FVector HalfExtent; // 0x60(0x18)
	struct FScalableFloat Radius; // 0x78(0x28)
	struct FScalableFloat HalfHeight; // 0xa0(0x28)
	struct FName ComponentTag; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)

	struct FVector GetSourceOffset(struct FTargetingRequestHandle& TargetingHandle); // Function TargetingSystem.TargetingSelectionTask_AOE.GetSourceOffset // (Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x685fe90
	struct FVector GetSourceLocation(struct FTargetingRequestHandle& TargetingHandle); // Function TargetingSystem.TargetingSelectionTask_AOE.GetSourceLocation // (Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x685fd30
};

// Class TargetingSystem.TargetingSelectionTask_SourceActor
// Size: 0x28 (Inherited: 0x28)
struct UTargetingSelectionTask_SourceActor : UTargetingTask {
};

// Class TargetingSystem.TargetingSelectionTask_Trace
// Size: 0xb8 (Inherited: 0x28)
struct UTargetingSelectionTask_Trace : UTargetingTask {
	enum class ETargetingTraceType TraceType; // 0x28(0x01)
	enum class ETraceTypeQuery TraceChannel; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FCollisionProfileName CollisionProfileName; // 0x2c(0x04)
	struct FScalableFloat DefaultSweptTraceRadius; // 0x30(0x28)
	struct FScalableFloat DefaultTraceLength; // 0x58(0x28)
	struct FVector DefaultSourceOffset; // 0x80(0x18)
	struct FVector ExplicitTraceDirection; // 0x98(0x18)
	char bComplexTrace : 1; // 0xb0(0x01)
	char bIgnoreSourceActor : 1; // 0xb0(0x01)
	char bIgnoreInstigatorActor : 1; // 0xb0(0x01)
	char pad_B0_3 : 5; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	float GetTraceLength(struct FTargetingRequestHandle& TargetingHandle); // Function TargetingSystem.TargetingSelectionTask_Trace.GetTraceLength // (Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x68605d0
	struct FVector GetTraceDirection(struct FTargetingRequestHandle& TargetingHandle); // Function TargetingSystem.TargetingSelectionTask_Trace.GetTraceDirection // (Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x6860520
	float GetSweptTraceRadius(struct FTargetingRequestHandle& TargetingHandle); // Function TargetingSystem.TargetingSelectionTask_Trace.GetSweptTraceRadius // (Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x685fff0
	struct FVector GetSourceOffset(struct FTargetingRequestHandle& TargetingHandle); // Function TargetingSystem.TargetingSelectionTask_Trace.GetSourceOffset // (Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x685ff40
	struct FVector GetSourceLocation(struct FTargetingRequestHandle& TargetingHandle); // Function TargetingSystem.TargetingSelectionTask_Trace.GetSourceLocation // (Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x685fde0
	void GetAdditionalActorsToIgnore(struct FTargetingRequestHandle& TargetingHandle, struct TArray<struct AActor*>& OutAdditionalActorsToIgnore); // Function TargetingSystem.TargetingSelectionTask_Trace.GetAdditionalActorsToIgnore // (Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x685fc30
};

// Class TargetingSystem.TargetingSubsystem
// Size: 0x50 (Inherited: 0x30)
struct UTargetingSubsystem : UGameInstanceSubsystem {
	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct FTargetingRequestHandle> AsyncTargetingRequests; // 0x40(0x10)

	void StartAsyncTargetingRequest(struct UTargetingPreset* TargetingPreset, struct FTargetingSourceContext& InSourceContext, struct FDelegate CompletionDynamicDelegate); // Function TargetingSystem.TargetingSubsystem.StartAsyncTargetingRequest // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x68608dc
	struct FTargetingSourceContext GetTargetingSourceContext(struct FTargetingRequestHandle TargetingHandle); // Function TargetingSystem.TargetingSubsystem.GetTargetingSourceContext // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x68603e0
	void GetTargetingResultsActors(struct FTargetingRequestHandle TargetingHandle, struct TArray<struct AActor*>& Targets); // Function TargetingSystem.TargetingSubsystem.GetTargetingResultsActors // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6860234
	void GetTargetingResults(struct FTargetingRequestHandle TargetingHandle, struct TArray<struct FHitResult>& OutTargets); // Function TargetingSystem.TargetingSubsystem.GetTargetingResults // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6860090
	void ExecuteTargetingRequest(struct UTargetingPreset* TargetingPreset, struct FTargetingSourceContext& InSourceContext, struct FDelegate CompletionDynamicDelegate); // Function TargetingSystem.TargetingSubsystem.ExecuteTargetingRequest // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x685fab0
};

