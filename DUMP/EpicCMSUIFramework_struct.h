// Enum EpicCMSUIFramework.EDateType
enum class EDateType : uint8 {
	None = 0,
	Coming = 1,
	Ending = 2,
	EDateType_MAX = 3
};

// ScriptStruct EpicCMSUIFramework.EpicCMSTileTypeMapping
// Size: 0x30 (Inherited: 0x08)
struct FEpicCMSTileTypeMapping : FTableRowBase {
	struct TSoftClassPtr<UObject> TileClass; // 0x08(0x28)
};

// ScriptStruct EpicCMSUIFramework.SlotDescription
// Size: 0x10 (Inherited: 0x00)
struct FSlotDescription {
	struct FName SlotName; // 0x00(0x04)
	int32_t ColumnCount; // 0x04(0x04)
	int32_t RowCount; // 0x08(0x04)
	bool bUseFeaturedTextStyle; // 0x0c(0x01)
	bool bEnableAutoScroll; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct EpicCMSUIFramework.EpicCMSPage
// Size: 0x70 (Inherited: 0x00)
struct FEpicCMSPage {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct EpicCMSUIFramework.EpicCMSLayoutTypeMapping
// Size: 0x30 (Inherited: 0x08)
struct FEpicCMSLayoutTypeMapping : FTableRowBase {
	struct TSoftClassPtr<UObject> LayoutType; // 0x08(0x28)
};

// ScriptStruct EpicCMSUIFramework.TileDefinition
// Size: 0x88 (Inherited: 0x00)
struct FTileDefinition {
	struct FString TypeString; // 0x00(0x10)
	struct FString Title; // 0x10(0x10)
	struct FString Subtitle; // 0x20(0x10)
	struct FString Eyebrow; // 0x30(0x10)
	struct FString Link; // 0x40(0x10)
	struct FString GroupId; // 0x50(0x10)
	struct FDateTime Countdown; // 0x60(0x08)
	enum class EDateType CountdownType; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FString MediaUrl; // 0x70(0x10)
	bool IsVisible; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

