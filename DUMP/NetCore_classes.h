// Class NetCore.StatePerObjectConfig
// Size: 0x68 (Inherited: 0x28)
struct UStatePerObjectConfig : UObject {
	char pad_28[0x28]; // 0x28(0x28)
	struct FString PerObjectConfigSection; // 0x50(0x10)
	bool bEnabled; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class NetCore.EscalationManagerConfig
// Size: 0x88 (Inherited: 0x68)
struct UEscalationManagerConfig : UStatePerObjectConfig {
	struct TArray<struct FString> EscalationSeverity; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)
};

// Class NetCore.NetAnalyticsAggregatorConfig
// Size: 0x38 (Inherited: 0x28)
struct UNetAnalyticsAggregatorConfig : UObject {
	struct TArray<struct FNetAnalyticsDataConfig> NetAnalyticsData; // 0x28(0x10)
};

