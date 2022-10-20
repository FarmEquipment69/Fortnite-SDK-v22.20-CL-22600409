// Class CorruptionGameplayCodeRuntime.CorruptionCoverageMap
// Size: 0x90 (Inherited: 0x28)
struct UCorruptionCoverageMap : UObject {
	char pad_28[0x68]; // 0x28(0x68)

	bool UpdateCorruptionCoverageMap(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* CorruptionRenderTarget, struct FVector& InTopLeftWorldCoordinate, struct FVector& InBottomRightWorldCoordinate, float CoverageThreshold, float DebugDrawDuration); // Function CorruptionGameplayCodeRuntime.CorruptionCoverageMap.UpdateCorruptionCoverageMap // (Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x66ef1ac
	bool IsLocationCorrupted(struct FVector& Location, float Padding); // Function CorruptionGameplayCodeRuntime.CorruptionCoverageMap.IsLocationCorrupted // (Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x66ee734
};

// Class CorruptionGameplayCodeRuntime.FortCorruptionSequenceData
// Size: 0x50 (Inherited: 0x30)
struct UFortCorruptionSequenceData : UPrimaryDataAsset {
	struct TArray<struct FCorruptionCalendarEventData> CorruptionStartEvents; // 0x30(0x10)
	struct TArray<struct FCorruptionPauseEvent> CorruptionPauseEvents; // 0x40(0x10)
};

// Class CorruptionGameplayCodeRuntime.CubeMovementStaticPath
// Size: 0x510 (Inherited: 0x4e0)
struct ACubeMovementStaticPath : AScriptedObjectMovement_StaticPath {
	float GenerationZTraceHeight; // 0x4d8(0x04)
	float CubeSpacingFactor; // 0x4dc(0x04)
	float CubeAngleLimitDegrees; // 0x4e0(0x04)
	struct UFortCorruptionSequenceData* CorruptionSequence; // 0x4e8(0x08)
	char pad_4F4[0x4]; // 0x4f4(0x04)
	struct TArray<struct FTravelerStepCorruptionOverrideData> TravelerCorruptionStepPercentOverrides; // 0x4f8(0x10)
	char pad_508[0x8]; // 0x508(0x08)

	void EditorGetCorruptionGenerationData(struct FCubeMovement_CorruptionGenerationData& OutData); // Function CorruptionGameplayCodeRuntime.CubeMovementStaticPath.EditorGetCorruptionGenerationData // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x66ee0a4
	void ClearAllGeneratedSplinesAndLockedData(); // Function CorruptionGameplayCodeRuntime.CubeMovementStaticPath.ClearAllGeneratedSplinesAndLockedData // (Final|Native|Protected) // @ game+0x66eddd0
};

// Class CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort
// Size: 0x4b8 (Inherited: 0x450)
struct AFortAthenaMutator_WarEffort : AFortAthenaMutator_GameModeBase {
	char pad_450[0x8]; // 0x450(0x08)
	struct FWarEffortMutatorMetadata MeshNetworkMetadata; // 0x458(0x20)
	struct TArray<struct FWarEffortMutatorChoiceData> WeaponChoices; // 0x478(0x10)
	struct TArray<struct FPrimaryAssetId> PreloadedItemList; // 0x488(0x10)
	bool bCanPreloadItems; // 0x498(0x01)
	char pad_499[0x1f]; // 0x499(0x1f)

	void SetTryBeforeYouBuyItemState(struct FGameplayTag ItemFundingTag, bool bIsActive); // Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetTryBeforeYouBuyItemState // (Final|Native|Public|BlueprintCallable) // @ game+0x66ef0e8
	void SetItemFundedState(struct FGameplayTag ItemFundingTag, bool bIsActive); // Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedState // (Final|Native|Public|BlueprintCallable) // @ game+0x66ef024
	void SetItemFundedPercent(struct FGameplayTag ItemFundingTag, float FundingPercent); // Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedPercent // (Final|Native|Public|BlueprintCallable) // @ game+0x66eef5c
	void SetItemFundedAmount(struct FGameplayTag ItemFundingTag, int64_t CurrentFundingAmount, int64_t TargetFundingAmount); // Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedAmount // (Final|Native|Public|BlueprintCallable) // @ game+0x66eee64
	void SetFundingManagerReady(bool bIsReady); // Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetFundingManagerReady // (Final|Native|Public|BlueprintCallable) // @ game+0x66eede4
	void OnRep_PreloadedItemList(); // Function CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.OnRep_PreloadedItemList // (Final|Native|Protected) // @ game+0x66eedd0
};

// Class CorruptionGameplayCodeRuntime.WarEffortFundingLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWarEffortFundingLibrary : UBlueprintFunctionLibrary {

	struct FString WriteTextToBuffer(struct FText& Text); // Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.WriteTextToBuffer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x66efa4c
	bool IsOption2ChoiceWinner(struct FWarEffortFundingMetadata& MetaData, int32_t ChoiceIndex); // Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.IsOption2ChoiceWinner // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x66eeae8
	bool IsOption1ChoiceWinner(struct FWarEffortFundingMetadata& MetaData, int32_t ChoiceIndex); // Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.IsOption1ChoiceWinner // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x66ee83c
	bool IsIndexFunded(struct FWarEffortFundingMetadata& MetaData, int32_t Index, enum class EWarEffortFundingStationType StationType); // Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.IsIndexFunded // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x66ee450
	float GetIndexFundedPercent(struct FWarEffortFundingMetadata& MetaData, int32_t Index, enum class EWarEffortFundingStationType StationType); // Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.GetIndexFundedPercent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x66ee190
	bool DoesChoiceHaveWinner(struct FWarEffortFundingMetadata& MetaData, int32_t ChoiceIndex); // Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.DoesChoiceHaveWinner // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x66edde4
	int32_t AdjustDonation(int32_t DonationAmount, enum class EWarEffortFundingStationType StationType); // Function CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.AdjustDonation // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x66edcc4
};

// Class CorruptionGameplayCodeRuntime.WarEffortMeshActor
// Size: 0x310 (Inherited: 0x288)
struct AWarEffortMeshActor : AInfo {
	struct UMeshNetworkComponent* MeshNetworkComponent; // 0x288(0x08)
	struct TArray<struct FGameplayTag> ActiveFundedItems; // 0x290(0x10)
	struct TArray<struct FGameplayTag> ActiveTryBeforeYouBuyItems; // 0x2a0(0x10)
	struct TArray<struct FWarEffortFundingData> CurrentFundingData; // 0x2b0(0x10)
	char pad_2C0[0x50]; // 0x2c0(0x50)

	void OnRep_CurrentFundingData(); // Function CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_CurrentFundingData // (Final|Native|Protected) // @ game+0x66eedbc
	void OnRep_ActiveTryBeforeYouBuyItems(); // Function CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_ActiveTryBeforeYouBuyItems // (Final|Native|Protected) // @ game+0x66eeda8
	void OnRep_ActiveFundedItems(); // Function CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_ActiveFundedItems // (Final|Native|Protected) // @ game+0x66eed94
};

