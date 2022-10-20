// Enum OnlineSubsystemMcp.ESocialCommsPermission
enum class ESocialCommsPermission : uint8 {
	Nobody = 0,
	FriendsOnly = 1,
	FriendsAndTeammates = 2,
	Everybody = 3,
	ESocialCommsPermission_MAX = 4
};

// Enum OnlineSubsystemMcp.EOnlineLinkModerationStatus
enum class EOnlineLinkModerationStatus : uint8 {
	Unmoderated = 0,
	Approved = 1,
	Denied = 2,
	EOnlineLinkModerationStatus_MAX = 3
};

// Enum OnlineSubsystemMcp.ESocialProfilePrivacySettingLevel
enum class ESocialProfilePrivacySettingLevel : uint8 {
	Public = 0,
	FriendsOnly = 1,
	Private = 2,
	ESocialProfilePrivacySettingLevel_MAX = 3
};

// Enum OnlineSubsystemMcp.ESocialProfilePrivacySettingBadges
enum class ESocialProfilePrivacySettingBadges : uint8 {
	FriendsOnly = 0,
	Private = 1,
	ESocialProfilePrivacySettingBadges_MAX = 2
};

// Enum OnlineSubsystemMcp.EMutualFriendsPrivacyPolicy
enum class EMutualFriendsPrivacyPolicy : uint8 {
	All = 0,
	Friends = 1,
	None = 2,
	InvalidOrMax = 3,
	EMutualFriendsPrivacyPolicy_MAX = 4
};

// Enum OnlineSubsystemMcp.ESupervisedSettingsRestrictiveOrder
enum class ESupervisedSettingsRestrictiveOrder : uint8 {
	FirstRestrictive = 0,
	FirstPermissive = 1,
	LowRestrictive = 2,
	LowPermissive = 3,
	FalseRestrictive = 4,
	FalsePermissive = 5,
	None = 6,
	ESupervisedSettingsRestrictiveOrder_MAX = 7
};

// Enum OnlineSubsystemMcp.ESupervisedSettingsValueType
enum class ESupervisedSettingsValueType : uint8 {
	Boolean = 0,
	Numeric = 1,
	Option = 2,
	None = 3,
	ESupervisedSettingsValueType_MAX = 4
};

// ScriptStruct OnlineSubsystemMcp.OnlineDiscoveryModeSetDef
// Size: 0x30 (Inherited: 0x00)
struct FOnlineDiscoveryModeSetDef {
	struct FString ModeSetName; // 0x00(0x10)
	struct FString SubModeLinkType; // 0x10(0x10)
	struct TArray<struct FString> SubModeLinks; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystemMcp.OnlineISOLanguageInfo
// Size: 0x38 (Inherited: 0x00)
struct FOnlineISOLanguageInfo {
	struct FText DisplayName; // 0x00(0x18)
	struct FString LanguageId; // 0x18(0x10)
	struct FString BackendId; // 0x28(0x10)
};

// ScriptStruct OnlineSubsystemMcp.OnlineISORegionInfo
// Size: 0x38 (Inherited: 0x00)
struct FOnlineISORegionInfo {
	struct FText DisplayName; // 0x00(0x18)
	struct FString RegionId; // 0x18(0x10)
	struct FString BackendId; // 0x28(0x10)
};

// ScriptStruct OnlineSubsystemMcp.JsonToxicityEvaluationRequest
// Size: 0x10 (Inherited: 0x00)
struct FJsonToxicityEvaluationRequest {
	struct FString Text; // 0x00(0x10)
};

// ScriptStruct OnlineSubsystemMcp.JsonToxicityBulkEvaluationRequest
// Size: 0x10 (Inherited: 0x00)
struct FJsonToxicityBulkEvaluationRequest {
	struct TArray<struct FString> texts; // 0x00(0x10)
};

// ScriptStruct OnlineSubsystemMcp.JsonToxicityEvaluationResponse
// Size: 0x01 (Inherited: 0x00)
struct FJsonToxicityEvaluationResponse {
	bool toxic; // 0x00(0x01)
};

// ScriptStruct OnlineSubsystemMcp.JsonToxicityBulkEvaluationResponse
// Size: 0x10 (Inherited: 0x00)
struct FJsonToxicityBulkEvaluationResponse {
	struct TArray<bool> isToxic; // 0x00(0x10)
};

