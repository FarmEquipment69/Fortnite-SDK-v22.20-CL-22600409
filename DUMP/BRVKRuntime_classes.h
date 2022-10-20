// Class BRVKRuntime.FortBRVKDADAssetManager
// Size: 0x40 (Inherited: 0x28)
struct UFortBRVKDADAssetManager : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct UObject*> BRVKAssetDataInstances; // 0x30(0x10)
};

// Class BRVKRuntime.FortBRVKGameFeatureAction_HotfixableAddToPlaylist
// Size: 0x68 (Inherited: 0x28)
struct UFortBRVKGameFeatureAction_HotfixableAddToPlaylist : UGameFeatureAction {
	struct FGameplayTagContainer BRPlaylistTags; // 0x28(0x20)
	struct FGameplayTagContainer BRPlaylistTagsToExclude; // 0x48(0x20)
};

// Class BRVKRuntime.FortBRVKGameFeatureAction_LoadVKProject
// Size: 0x50 (Inherited: 0x28)
struct UFortBRVKGameFeatureAction_LoadVKProject : UGameFeatureAction {
	struct UFortBRVKLoadingData* VKLoadingData; // 0x28(0x08)
	char pad_30[0x20]; // 0x30(0x20)
};

// Class BRVKRuntime.FortBRVKGameFeatureAction_RegisterContentErrorHandler
// Size: 0x30 (Inherited: 0x28)
struct UFortBRVKGameFeatureAction_RegisterContentErrorHandler : UGameFeatureAction {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class BRVKRuntime.FortBRVKGameFeatureObserver
// Size: 0x28 (Inherited: 0x28)
struct UFortBRVKGameFeatureObserver : UGameFeatureAction {
};

// Class BRVKRuntime.FortBRVKLoadingData
// Size: 0x58 (Inherited: 0x30)
struct UFortBRVKLoadingData : UPrimaryDataAsset {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString VKProjectGUID; // 0x38(0x10)
	bool bReplacesPlaceHolderContent; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FName FoundationToReplaceTag; // 0x4c(0x04)
	bool bReplaceWithCalendarEventInstead; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class BRVKRuntime.FortBRVKPlayspace
// Size: 0x630 (Inherited: 0x620)
struct AFortBRVKPlayspace : AFortPlayspace {
	struct UFortLevelStreamComponent* LevelStreamComponent; // 0x620(0x08)
	struct UFortProjectPlayComponent* ProjectPlayComponent; // 0x628(0x08)
};

// Class BRVKRuntime.FortBRVKTheBlockMutator
// Size: 0x480 (Inherited: 0x450)
struct AFortBRVKTheBlockMutator : AFortAthenaMutator_GameModeBase {
	bool bContentIsReadyOrFailed; // 0x450(0x01)
	char pad_451[0x27]; // 0x451(0x27)
	struct AFortGameModeAthena* CachedGameModeAthena; // 0x478(0x08)
};

