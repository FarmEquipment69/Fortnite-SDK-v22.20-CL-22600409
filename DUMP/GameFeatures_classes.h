// Class GameFeatures.GameFeatureAction
// Size: 0x28 (Inherited: 0x28)
struct UGameFeatureAction : UObject {
};

// Class GameFeatures.GameFeatureAction_AddCheats
// Size: 0x60 (Inherited: 0x28)
struct UGameFeatureAction_AddCheats : UGameFeatureAction {
	struct TArray<struct TSoftClassPtr<UObject>> CheatManagers; // 0x28(0x10)
	bool bLoadCheatManagersAsync; // 0x38(0x01)
	char pad_39[0xf]; // 0x39(0x0f)
	struct TArray<struct TWeakObjectPtr<struct UCheatManagerExtension>> SpawnedCheatManagers; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
};

// Class GameFeatures.GameFeatureAction_AddComponents
// Size: 0x88 (Inherited: 0x28)
struct UGameFeatureAction_AddComponents : UGameFeatureAction {
	struct TArray<struct FGameFeatureComponentEntry> ComponentList; // 0x28(0x10)
	char pad_38[0x50]; // 0x38(0x50)
};

// Class GameFeatures.GameFeatureAction_AddWPContent
// Size: 0x40 (Inherited: 0x28)
struct UGameFeatureAction_AddWPContent : UGameFeatureAction {
	struct UContentBundleDescriptor* ContentBundleDescriptor; // 0x28(0x08)
	char pad_30[0x10]; // 0x30(0x10)
};

// Class GameFeatures.GameFeatureAction_DataRegistry
// Size: 0x40 (Inherited: 0x28)
struct UGameFeatureAction_DataRegistry : UGameFeatureAction {
	struct TArray<struct TSoftObjectPtr<UDataRegistry>> RegistriesToAdd; // 0x28(0x10)
	bool bPreloadInEditor; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class GameFeatures.GameFeatureAction_DataRegistrySource
// Size: 0x40 (Inherited: 0x28)
struct UGameFeatureAction_DataRegistrySource : UGameFeatureAction {
	struct TArray<struct FDataRegistrySourceToAdd> SourcesToAdd; // 0x28(0x10)
	bool bPreloadInEditor; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class GameFeatures.GameFeatureData
// Size: 0x50 (Inherited: 0x30)
struct UGameFeatureData : UPrimaryDataAsset {
	struct TArray<struct UGameFeatureAction*> Actions; // 0x30(0x10)
	struct TArray<struct FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan; // 0x40(0x10)
};

// Class GameFeatures.GameFeaturePluginStateMachine
// Size: 0x1e0 (Inherited: 0x28)
struct UGameFeaturePluginStateMachine : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FGameFeaturePluginStateMachineProperties StateProperties; // 0x30(0xc8)
	char pad_F8[0xe8]; // 0xf8(0xe8)
};

// Class GameFeatures.GameFeaturesProjectPolicies
// Size: 0x28 (Inherited: 0x28)
struct UGameFeaturesProjectPolicies : UObject {
};

// Class GameFeatures.DefaultGameFeaturesProjectPolicies
// Size: 0x28 (Inherited: 0x28)
struct UDefaultGameFeaturesProjectPolicies : UGameFeaturesProjectPolicies {
};

// Class GameFeatures.GameFeaturesSubsystem
// Size: 0x100 (Inherited: 0x30)
struct UGameFeaturesSubsystem : UEngineSubsystem {
	struct TMap<struct FGameFeaturePluginIdentifier, struct UGameFeaturePluginStateMachine*> GameFeaturePluginStateMachines; // 0x30(0x50)
	struct TArray<struct UGameFeaturePluginStateMachine*> TerminalGameFeaturePluginStateMachines; // 0x80(0x10)
	char pad_90[0x50]; // 0x90(0x50)
	struct TArray<struct UObject*> Observers; // 0xe0(0x10)
	struct UGameFeaturesProjectPolicies* GameSpecificPolicies; // 0xf0(0x08)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// Class GameFeatures.GameFeaturesSubsystemSettings
// Size: 0x88 (Inherited: 0x30)
struct UGameFeaturesSubsystemSettings : UDeveloperSettings {
	struct FSoftClassPath GameFeaturesManagerClassName; // 0x30(0x18)
	struct TArray<struct FString> DisabledPlugins; // 0x48(0x10)
	struct TArray<struct FString> AdditionalPluginMetadataKeys; // 0x58(0x10)
	char pad_68[0x20]; // 0x68(0x20)
};

// Class GameFeatures.GameFeatureStateChangeObserver
// Size: 0x28 (Inherited: 0x28)
struct UGameFeatureStateChangeObserver : UInterface {
};

