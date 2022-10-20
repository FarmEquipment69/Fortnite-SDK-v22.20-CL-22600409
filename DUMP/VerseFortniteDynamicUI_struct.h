// ScriptStruct VerseFortniteDynamicUI.GhostWidgetBaseCreationData
// Size: 0x60 (Inherited: 0x00)
struct FGhostWidgetBaseCreationData {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct VerseFortniteDynamicUI.SceneCatalogEntryClass
// Size: 0x08 (Inherited: 0x00)
struct FSceneCatalogEntryClass {
	struct UDynamicUIScene* DynamicUIScene; // 0x00(0x08)
};

// ScriptStruct VerseFortniteDynamicUI.WidgetCatalogEntryClass
// Size: 0x28 (Inherited: 0x00)
struct FWidgetCatalogEntryClass {
	struct TSoftClassPtr<UObject> WidgetClass; // 0x00(0x28)
};

