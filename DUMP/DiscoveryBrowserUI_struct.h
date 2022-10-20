// Enum DiscoveryBrowserUI.EActivityBrowserTileStyle
enum class EActivityBrowserTileStyle : uint8 {
	Default = 0,
	Minimal = 1,
	Detailed = 2,
	EActivityBrowserTileStyle_MAX = 3
};

// ScriptStruct DiscoveryBrowserUI.CachedSurfaceData
// Size: 0x18 (Inherited: 0x00)
struct FCachedSurfaceData {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct UFortCreativeDiscoveryActivityProvider*> CachedDataProviders; // 0x08(0x10)
};

// ScriptStruct DiscoveryBrowserUI.ColorSchemeParamaterValues
// Size: 0xa8 (Inherited: 0x00)
struct FColorSchemeParamaterValues {
	struct UMaterialParameterCollection* AlternateMaterialCollection; // 0x00(0x08)
	struct TMap<struct FName, float> ScalarParameterValues; // 0x08(0x50)
	struct TMap<struct FName, struct FLinearColor> VectorParameterValues; // 0x58(0x50)
};

