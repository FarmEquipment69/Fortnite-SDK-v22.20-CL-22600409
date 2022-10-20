// Enum LagerRuntime.ELivingWorldPointProviderSpawnLimiterBehavior
enum class ELivingWorldPointProviderSpawnLimiterBehavior : uint8 {
	Lifetime = 0,
	Concurrent = 1,
	ELivingWorldPointProviderSpawnLimiterBehavior_MAX = 2
};

// Enum LagerRuntime.ELivingWorldCalendarEventConditionBehavior
enum class ELivingWorldCalendarEventConditionBehavior : uint8 {
	IsActive = 0,
	Ratio = 1,
	ELivingWorldCalendarEventConditionBehavior_MAX = 2
};

// Enum LagerRuntime.ELivingWorldCalendarEventConditionRatioBehavior
enum class ELivingWorldCalendarEventConditionRatioBehavior : uint8 {
	Less = 0,
	LessOrEqual = 1,
	Greater = 2,
	GreaterOrEqual = 3,
	InBetween = 4,
	ELivingWorldCalendarEventConditionRatioBehavior_MAX = 5
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldPrefabActorSpawnerData
// Size: 0x108 (Inherited: 0x00)
struct FFortAthenaLivingWorldPrefabActorSpawnerData {
	struct FGuid ActorSpawnerGuid; // 0x00(0x10)
	struct FFortAthenaLivingWorldActorSpawnDescription ActorDescription; // 0x10(0xf8)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldActorSpawnDescription
// Size: 0xf8 (Inherited: 0x00)
struct FFortAthenaLivingWorldActorSpawnDescription {
	struct TSoftClassPtr<UObject> ActorClass; // 0x00(0x28)
	struct TSoftClassPtr<UObject> SpawnerData; // 0x28(0x28)
	struct FGameplayTagQuery SpawnerDataTagQuery; // 0x50(0x48)
	struct FScalableFloat ActorDensityValue; // 0x98(0x28)
	struct FScalableFloat DensityComputationRangeOverride; // 0xc0(0x28)
	struct TArray<struct FFortAthenaLivingWorldEventTagDensityRegistration> TagDensityRegistrations; // 0xe8(0x10)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldEventTagDensityRegistration
// Size: 0x58 (Inherited: 0x00)
struct FFortAthenaLivingWorldEventTagDensityRegistration {
	struct FGameplayTag tag; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FScalableFloat Range; // 0x08(0x28)
	struct FScalableFloat DensityValue; // 0x30(0x28)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldPointProviderSpawnLimiter
// Size: 0x38 (Inherited: 0x00)
struct FFortAthenaLivingWorldPointProviderSpawnLimiter {
	char pad_0[0x4]; // 0x00(0x04)
	enum class ELivingWorldPointProviderSpawnLimiterBehavior Behavior; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FScalableFloat MaxNumberOfSpawn; // 0x08(0x28)
	bool bResetLimitWhenEnabling; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct LagerRuntime.FortAthenaLinearEncounterPlayerParticipationData
// Size: 0x40 (Inherited: 0x00)
struct FFortAthenaLinearEncounterPlayerParticipationData {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct LagerRuntime.FortLivingWorldEventTableVariation
// Size: 0x50 (Inherited: 0x00)
struct FFortLivingWorldEventTableVariation {
	struct TSoftObjectPtr<UDataTable> EventTableVariation; // 0x00(0x28)
	struct FScalableFloat VariationWeight; // 0x28(0x28)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldCategory
// Size: 0xd0 (Inherited: 0x08)
struct FFortAthenaLivingWorldCategory : FTableRowBase {
	struct TSoftObjectPtr<UDataTable> EventTable; // 0x08(0x28)
	struct TArray<struct FFortLivingWorldEventTableVariation> EventTableVariations; // 0x30(0x10)
	int32_t MaxCount; // 0x40(0x04)
	int32_t MaxSpawnedCount; // 0x44(0x04)
	float Priority; // 0x48(0x04)
	bool bExcludeFromGlobalAIBudget; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FGameplayTagQuery RequirePlaylistTagQuery; // 0x50(0x48)
	struct TArray<struct TSoftObjectPtr<UFortAthenaLivingWorldEncounter>> Encounters; // 0x98(0x10)
	struct FScalableFloat IsEnabled; // 0xa8(0x28)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldTagDensityGridData
// Size: 0x30 (Inherited: 0x00)
struct FFortAthenaLivingWorldTagDensityGridData {
	struct FGameplayTag tag; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FScalableFloat GridCellSize; // 0x08(0x28)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldCategoryTableData
// Size: 0x58 (Inherited: 0x00)
struct FFortAthenaLivingWorldCategoryTableData {
	struct FName Name; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TSoftObjectPtr<UDataTable> CategoryTable; // 0x08(0x28)
	struct FScalableFloat IsEnabled; // 0x30(0x28)
};

// ScriptStruct LagerRuntime.FortAthenaActorDensityDebugInfo
// Size: 0x48 (Inherited: 0x00)
struct FFortAthenaActorDensityDebugInfo {
	struct FString ActorName; // 0x00(0x10)
	struct FVector ActorPosition; // 0x10(0x18)
	struct FIntVector MinCellIndex; // 0x28(0x0c)
	struct FIntVector MaxCellIndex; // 0x34(0x0c)
	float DensityValue; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldDensityGrid
// Size: 0x158 (Inherited: 0xc0)
struct FFortAthenaLivingWorldDensityGrid : FFortSpatialGrid {
	char pad_C0[0x98]; // 0xc0(0x98)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldEncounterStage
// Size: 0x78 (Inherited: 0x00)
struct FFortAthenaLivingWorldEncounterStage {
	struct TSoftObjectPtr<UDataTable> EventTable; // 0x00(0x28)
	struct FScalableFloat MaximumConcurrentNumberOfAI; // 0x28(0x28)
	struct FScalableFloat MaxSpawnCountPerEventGeneration; // 0x50(0x28)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldEventDespawnCondition
// Size: 0x18 (Inherited: 0x00)
struct FFortAthenaLivingWorldEventDespawnCondition {
	bool bCanBeDespawned; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinDistanceToPlayer; // 0x04(0x04)
	float TimeAsCandidateBeforeDespawn; // 0x08(0x04)
	enum class EAthenaGamePhaseStep CanStartDespawningPhaseStep; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t CanStartDespawningSafeZonePhase; // 0x10(0x04)
	bool bCanDespawnWhenInCombatWithPlayer; // 0x14(0x01)
	bool bCanDespawnInTheStorm; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldEventTagDensityCondition
// Size: 0x0c (Inherited: 0x00)
struct FFortAthenaLivingWorldEventTagDensityCondition {
	struct FGameplayTag tag; // 0x00(0x04)
	float Distance; // 0x04(0x04)
	float MaxDensity; // 0x08(0x04)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldEvent
// Size: 0x130 (Inherited: 0x08)
struct FFortAthenaLivingWorldEvent : FTableRowBase {
	struct TSoftObjectPtr<UFortAthenaLivingWorldEventData> EventData; // 0x08(0x28)
	struct FScalableFloat IsEnabled; // 0x30(0x28)
	struct TArray<float> MaxCount; // 0x58(0x10)
	struct TArray<float> MaxSpawnedCount; // 0x68(0x10)
	float Weight; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<float> MinRespawnTime; // 0x80(0x10)
	struct TArray<float> MaxRespawnTime; // 0x90(0x10)
	bool bOnlyInSafeZone; // 0xa0(0x01)
	bool bOnlyInNextSafeZone; // 0xa1(0x01)
	bool bOnlyInNextSafeZoneIfStormShrinking; // 0xa2(0x01)
	enum class EAthenaGamePhaseStep ActivationGamePhaseStep; // 0xa3(0x01)
	int32_t ActivationSafeZoneIndex; // 0xa4(0x04)
	float ActivationMinDelay; // 0xa8(0x04)
	float ActivationMaxDelay; // 0xac(0x04)
	float DeactivationMinDelay; // 0xb0(0x04)
	float DeactivationMaxDelay; // 0xb4(0x04)
	struct TArray<struct FFortAthenaLivingWorldEventTagDensityCondition> TagDensityConditions; // 0xb8(0x10)
	bool bCheckForActorDensity; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float MaxActorDensityOverride; // 0xcc(0x04)
	float MinDistanceToPlayer; // 0xd0(0x04)
	float MaxDistanceToPlayer; // 0xd4(0x04)
	bool bCanSpawnWithoutMatchingPlayerDistance; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float RandomActivationChance; // 0xdc(0x04)
	struct FFortAthenaLivingWorldEventDespawnCondition DespawnCondition; // 0xe0(0x18)
	struct FGameplayTagContainer RequirePlaylistTags; // 0xf8(0x20)
	struct FLivingWorldCalendarEventConditions CalendarEventConditions; // 0x118(0x18)
};

// ScriptStruct LagerRuntime.LivingWorldCalendarEventConditions
// Size: 0x18 (Inherited: 0x00)
struct FLivingWorldCalendarEventConditions {
	struct TArray<struct FLivingWorldCalendarEventCondition> Conditions; // 0x00(0x10)
	bool IsActiveWithoutSeasonalManager; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct LagerRuntime.LivingWorldCalendarEventCondition
// Size: 0x10 (Inherited: 0x00)
struct FLivingWorldCalendarEventCondition {
	struct FName CalendarEventName; // 0x00(0x04)
	enum class ELivingWorldCalendarEventConditionBehavior Behavior; // 0x04(0x01)
	bool ShouldEventBeActive; // 0x05(0x01)
	enum class ELivingWorldCalendarEventConditionRatioBehavior RatioBehavior; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	float RatioValue; // 0x08(0x04)
	float RatioMaxValue; // 0x0c(0x04)
};

// ScriptStruct LagerRuntime.PointProviderFilterEntry
// Size: 0x88 (Inherited: 0x00)
struct FPointProviderFilterEntry {
	struct FGameplayTagQuery ProviderFiltersTagQuery; // 0x00(0x48)
	struct FLivingWorldCalendarEventConditions CalendarEventConditions; // 0x48(0x18)
	struct FScalableFloat Weight; // 0x60(0x28)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldEventDataActorSpawnDescription
// Size: 0x108 (Inherited: 0xf8)
struct FFortAthenaLivingWorldEventDataActorSpawnDescription : FFortAthenaLivingWorldActorSpawnDescription {
	bool bSpawnAroundDefaultPoint; // 0xf8(0x01)
	bool bUpdateDefaultPosition; // 0xf9(0x01)
	char pad_FA[0x6]; // 0xfa(0x06)
	struct UEnvQuery* SpawnAroundEnvironmentQuery; // 0x100(0x08)
};

// ScriptStruct LagerRuntime.FortLivingWorldConfigOverride
// Size: 0x78 (Inherited: 0x00)
struct FFortLivingWorldConfigOverride {
	struct TSoftObjectPtr<UWorld> SourceWorld; // 0x00(0x28)
	struct FGameplayTagContainer PlaylistTag; // 0x28(0x20)
	struct TSoftObjectPtr<UFortAthenaLivingWorldConfigData> LagerConfig; // 0x48(0x28)
	struct FFortReleaseVersion StartVersion; // 0x70(0x04)
	struct FFortReleaseVersion EndVersion; // 0x74(0x04)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldPlayerTracker
// Size: 0xb0 (Inherited: 0x00)
struct FFortAthenaLivingWorldPlayerTracker {
	struct TSet<struct AFortAthenaAIBotController*> TrackedBotControllers; // 0x00(0x50)
	struct TArray<struct AFortPlayerPawn*> TrackedPlayerPawns; // 0x50(0x10)
	struct TArray<struct AController*> TrackedPlayerControllers; // 0x60(0x10)
	char pad_70[0x40]; // 0x70(0x40)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldPointProviderFilterRules
// Size: 0x30 (Inherited: 0x00)
struct FFortAthenaLivingWorldPointProviderFilterRules {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldPreloader
// Size: 0x90 (Inherited: 0x00)
struct FFortAthenaLivingWorldPreloader {
	struct UFortAthenaLivingWorldManager* LivingWorldManager; // 0x00(0x08)
	struct TArray<struct UFortAthenaSpawnerDataBase*> LoadedSpawnerDataClass; // 0x08(0x10)
	struct TArray<struct AActor*> LoadedActorDataClass; // 0x18(0x10)
	char pad_28[0x68]; // 0x28(0x68)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldTaggedSpawnActionClass
// Size: 0x10 (Inherited: 0x00)
struct FFortAthenaLivingWorldTaggedSpawnActionClass {
	struct FGameplayTag SpawnActionTag; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UFortAthenaLivingWorldSpawnAction* SpawnActionClass; // 0x08(0x08)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldTagQueryToSeatMapping
// Size: 0x50 (Inherited: 0x00)
struct FFortAthenaLivingWorldTagQueryToSeatMapping {
	struct FGameplayTagQuery TagQuery; // 0x00(0x48)
	int32_t SeatIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldCategoryTableDataList
// Size: 0x10 (Inherited: 0x00)
struct FFortAthenaLivingWorldCategoryTableDataList {
	struct TArray<struct FFortAthenaLivingWorldCategoryTableData> CategoryTableDatas; // 0x00(0x10)
};

// ScriptStruct LagerRuntime.LivingWorldSpawnAroundPlayerConfiguration
// Size: 0x38 (Inherited: 0x00)
struct FLivingWorldSpawnAroundPlayerConfiguration {
	struct TSoftObjectPtr<UFortAthenaLivingWorldEncounter> Encounter; // 0x00(0x28)
	struct TArray<struct AFortAthenaPointAroundPlayerProvider*> PointProviderClasses; // 0x28(0x10)
};

// ScriptStruct LagerRuntime.LivingWorldSpawnAroundPlayerRuntimeData
// Size: 0x18 (Inherited: 0x00)
struct FLivingWorldSpawnAroundPlayerRuntimeData {
	struct TArray<struct TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>> PointAroundPlayerProviders; // 0x00(0x10)
	struct UFortAthenaLivingWorldEncounterInstance* Encounter; // 0x10(0x08)
};

