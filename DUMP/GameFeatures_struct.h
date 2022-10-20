// Enum GameFeatures.EGameFeatureTargetState
enum class EGameFeatureTargetState : uint8 {
	Installed = 0,
	Registered = 1,
	Loaded = 2,
	Active = 3,
	Count = 4,
	EGameFeatureTargetState_MAX = 5
};

// ScriptStruct GameFeatures.GameFeatureComponentEntry
// Size: 0x58 (Inherited: 0x00)
struct FGameFeatureComponentEntry {
	struct TSoftClassPtr<UObject> ActorClass; // 0x00(0x28)
	struct TSoftClassPtr<UObject> ComponentClass; // 0x28(0x28)
	char bClientComponent : 1; // 0x50(0x01)
	char bServerComponent : 1; // 0x50(0x01)
	char pad_50_2 : 6; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct GameFeatures.DataRegistrySourceToAdd
// Size: 0x60 (Inherited: 0x00)
struct FDataRegistrySourceToAdd {
	struct FName RegistryToAddTo; // 0x00(0x04)
	int32_t AssetPriority; // 0x04(0x04)
	char bClientSource : 1; // 0x08(0x01)
	char bServerSource : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TSoftObjectPtr<UDataTable> DataTableToAdd; // 0x10(0x28)
	struct TSoftObjectPtr<UCurveTable> CurveTableToAdd; // 0x38(0x28)
};

// ScriptStruct GameFeatures.GameFeaturePluginStateMachineProperties
// Size: 0xc8 (Inherited: 0x00)
struct FGameFeaturePluginStateMachineProperties {
	char pad_0[0x88]; // 0x00(0x88)
	struct UGameFeatureData* GameFeatureData; // 0x88(0x08)
	char pad_90[0x38]; // 0x90(0x38)
};

// ScriptStruct GameFeatures.GameFeaturePluginIdentifier
// Size: 0x28 (Inherited: 0x00)
struct FGameFeaturePluginIdentifier {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct GameFeatures.InstallBundlePluginProtocolMetaData
// Size: 0x20 (Inherited: 0x00)
struct FInstallBundlePluginProtocolMetaData {
	char pad_0[0x20]; // 0x00(0x20)
};

