// Enum CorruptionGameplayCodeRuntime.EWarEffortFundingStationType
enum class EWarEffortFundingStationType : uint8 {
	Final = 0,
	Tower = 1,
	Choice = 2,
	EWarEffortFundingStationType_MAX = 3
};

// ScriptStruct CorruptionGameplayCodeRuntime.CubeMovement_CorruptionGenerationSplinePointData
// Size: 0x70 (Inherited: 0x00)
struct FCubeMovement_CorruptionGenerationSplinePointData {
	struct FTransform SplinePointTransform; // 0x00(0x60)
	float SplinePercentComplete; // 0x60(0x04)
	char pad_64[0xc]; // 0x64(0x0c)
};

// ScriptStruct CorruptionGameplayCodeRuntime.CubeMovement_CorruptionGenerationTravelerData
// Size: 0x18 (Inherited: 0x00)
struct FCubeMovement_CorruptionGenerationTravelerData {
	struct TArray<struct FCubeMovement_CorruptionGenerationSplinePointData> SplinePointData; // 0x00(0x10)
	struct AFortScriptedObjectMovement_MovableObjectBase* PathTraveler; // 0x10(0x08)
};

// ScriptStruct CorruptionGameplayCodeRuntime.CubeMovement_CorruptionGenerationData
// Size: 0x10 (Inherited: 0x00)
struct FCubeMovement_CorruptionGenerationData {
	struct TArray<struct FCubeMovement_CorruptionGenerationTravelerData> TravelerData; // 0x00(0x10)
};

// ScriptStruct CorruptionGameplayCodeRuntime.CorruptionCalendarEventData
// Size: 0x18 (Inherited: 0x00)
struct FCorruptionCalendarEventData {
	struct FString EventName; // 0x00(0x10)
	float StartPercent; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CorruptionGameplayCodeRuntime.CorruptionPauseEvent
// Size: 0x18 (Inherited: 0x00)
struct FCorruptionPauseEvent {
	struct FString EventName; // 0x00(0x10)
	float PercentDurationToPause; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CorruptionGameplayCodeRuntime.TravelerStepCorruptionOverrideData
// Size: 0x50 (Inherited: 0x00)
struct FTravelerStepCorruptionOverrideData {
	struct TMap<struct FString, float> PointGroupStepPercentOverrides; // 0x00(0x50)
};

// ScriptStruct CorruptionGameplayCodeRuntime.WarEffortMutatorChoiceData
// Size: 0x68 (Inherited: 0x00)
struct FWarEffortMutatorChoiceData {
	struct FGameplayTag FundingTag; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct TSoftObjectPtr<UFortItemDefinition>> SoftRefsToLoad; // 0x08(0x10)
	struct TMap<struct FName, struct FScalableFloat> LootTableMods; // 0x18(0x50)
};

// ScriptStruct CorruptionGameplayCodeRuntime.WarEffortMutatorMetadata
// Size: 0x20 (Inherited: 0x01)
struct FWarEffortMutatorMetadata : FMeshMetaDataStruct {
	struct TArray<struct FGameplayTag> ActiveFundedItems; // 0x00(0x10)
	struct TArray<struct FGameplayTag> ActiveTryBeforeYouBuyItems; // 0x10(0x10)
};

// ScriptStruct CorruptionGameplayCodeRuntime.WarEffortFundingOptionData
// Size: 0x10 (Inherited: 0x00)
struct FWarEffortFundingOptionData {
	struct FGameplayTag OptionTag; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t CurrentFundingAmount; // 0x08(0x08)
};

// ScriptStruct CorruptionGameplayCodeRuntime.WarEffortFundingChoiceData
// Size: 0x28 (Inherited: 0x00)
struct FWarEffortFundingChoiceData {
	struct FWarEffortFundingOptionData Option1; // 0x00(0x10)
	struct FWarEffortFundingOptionData Option2; // 0x10(0x10)
	int64_t TargetFundingAmount; // 0x20(0x08)
};

// ScriptStruct CorruptionGameplayCodeRuntime.WarEffortIndexedFundingData
// Size: 0x20 (Inherited: 0x00)
struct FWarEffortIndexedFundingData {
	struct TArray<int64_t> CurrentFundingArray; // 0x00(0x10)
	int64_t FinalFundingAmount; // 0x10(0x08)
	int64_t TowerFundingAmount; // 0x18(0x08)
};

// ScriptStruct CorruptionGameplayCodeRuntime.WarEffortFundingMetadata
// Size: 0x30 (Inherited: 0x01)
struct FWarEffortFundingMetadata : FMeshMetaDataStruct {
	struct FWarEffortIndexedFundingData IndexedFundingData; // 0x00(0x20)
	struct TArray<struct FWarEffortFundingChoiceData> FundingChoices; // 0x20(0x10)
};

// ScriptStruct CorruptionGameplayCodeRuntime.WarEffortFundingData
// Size: 0x08 (Inherited: 0x00)
struct FWarEffortFundingData {
	struct FGameplayTag FundingTag; // 0x00(0x04)
	float FundedPercent; // 0x04(0x04)
};

