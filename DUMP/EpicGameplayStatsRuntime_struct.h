// Enum EpicGameplayStatsRuntime.EEpicLeaderboardDataType
enum class EEpicLeaderboardDataType : uint8 {
	Integer = 0,
	Double = 1,
	EEpicLeaderboardDataType_MAX = 2
};

// Enum EpicGameplayStatsRuntime.EEpicLeaderboardTimeWindow
enum class EEpicLeaderboardTimeWindow : uint8 {
	Daily = 0,
	Weekly = 1,
	Monthly = 2,
	AllTime = 3,
	EEpicLeaderboardTimeWindow_MAX = 4
};

// Enum EpicGameplayStatsRuntime.EEpicLeaderboardUpdateFunction
enum class EEpicLeaderboardUpdateFunction : uint8 {
	Min = 0,
	Max = 1,
	Sum = 2,
	MostRecent = 3
};

// ScriptStruct EpicGameplayStatsRuntime.GameplayStatMetadataTableRow
// Size: 0x50 (Inherited: 0x08)
struct FGameplayStatMetadataTableRow : FTableRowBase {
	struct FString BackendName; // 0x08(0x10)
	struct FText DisplayName; // 0x18(0x18)
	struct TArray<enum class EEpicLeaderboardTimeWindow> Windows; // 0x30(0x10)
	enum class EEpicLeaderboardUpdateFunction Metric; // 0x40(0x01)
	enum class EEpicLeaderboardDataType DataType; // 0x41(0x01)
	bool bPublish; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	int32_t WeeklyRefreshInterval; // 0x44(0x04)
	bool bExportToBackEnd; // 0x48(0x01)
	bool bShowInFrontEnd; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct EpicGameplayStatsRuntime.GameplayStatTag
// Size: 0x08 (Inherited: 0x04)
struct FGameplayStatTag : FGameplayTag {
	struct FGameplayTag tag; // 0x04(0x04)
};

// ScriptStruct EpicGameplayStatsRuntime.ManagedGameplayTagDataTableItem
// Size: 0x10 (Inherited: 0x00)
struct FManagedGameplayTagDataTableItem {
	struct FGameplayTag RootTag; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UDataTable* DataTable; // 0x08(0x08)
};

// ScriptStruct EpicGameplayStatsRuntime.TagTableManagerHelper
// Size: 0x01 (Inherited: 0x00)
struct FTagTableManagerHelper {
	char pad_0[0x1]; // 0x00(0x01)
};

