// Enum NetworkPrediction.ENetworkPredictionTickingPolicy
enum class ENetworkPredictionTickingPolicy : uint8 {
	Independent = 1,
	Fixed = 2,
	All = 3,
	ENetworkPredictionTickingPolicy_MAX = 4
};

// Enum NetworkPrediction.ENetworkLOD
enum class ENetworkLOD : uint8 {
	Interpolated = 1,
	SimExtrapolate = 2,
	ForwardPredict = 4,
	All = 7,
	ENetworkLOD_MAX = 8
};

// Enum NetworkPrediction.ENetworkPredictionStateRead
enum class ENetworkPredictionStateRead : uint8 {
	Simulation = 0,
	Presentation = 1,
	ENetworkPredictionStateRead_MAX = 2
};

// ScriptStruct NetworkPrediction.NetworkPredictionProxy
// Size: 0xb0 (Inherited: 0x00)
struct FNetworkPredictionProxy {
	char pad_0[0xa0]; // 0x00(0xa0)
	struct UNetworkPredictionWorldManager* WorldManager; // 0xa0(0x08)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// ScriptStruct NetworkPrediction.SharedPackageMapItem
// Size: 0x28 (Inherited: 0x00)
struct FSharedPackageMapItem {
	struct TSoftObjectPtr<UObject> SoftPtr; // 0x00(0x28)
};

// ScriptStruct NetworkPrediction.SharedPackageMap
// Size: 0x10 (Inherited: 0x00)
struct FSharedPackageMap {
	struct TArray<struct FSharedPackageMapItem> Items; // 0x00(0x10)
};

// ScriptStruct NetworkPrediction.ReplicationProxy
// Size: 0x50 (Inherited: 0x00)
struct FReplicationProxy {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct NetworkPrediction.ServerReplicationRPCParameter
// Size: 0x18 (Inherited: 0x00)
struct FServerReplicationRPCParameter {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct NetworkPrediction.NetworkPredictionSettings
// Size: 0x28 (Inherited: 0x00)
struct FNetworkPredictionSettings {
	enum class ENetworkPredictionTickingPolicy PreferredTickingPolicy; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct ANetworkPredictionReplicatedManager* ReplicatedManagerClassOverride; // 0x08(0x08)
	int32_t FixedTickFrameRate; // 0x10(0x04)
	bool bForceEngineFixTickForcePhysics; // 0x14(0x01)
	enum class ENetworkLOD SimulatedProxyNetworkLOD; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	int32_t FixedTickInterpolationBufferedMS; // 0x18(0x04)
	int32_t IndependentTickInterpolationBufferedMS; // 0x1c(0x04)
	int32_t IndependentTickInterpolationMaxBufferedMS; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct NetworkPrediction.NetworkPredictionDevHUDItem
// Size: 0x28 (Inherited: 0x00)
struct FNetworkPredictionDevHUDItem {
	struct FString DisplayName; // 0x00(0x10)
	struct FString ExecCommand; // 0x10(0x10)
	bool bAutoBack; // 0x20(0x01)
	bool bRequirePIE; // 0x21(0x01)
	bool bRequireNotPIE; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
};

// ScriptStruct NetworkPrediction.NetworkPredictionDevHUD
// Size: 0x28 (Inherited: 0x00)
struct FNetworkPredictionDevHUD {
	struct FString HUDName; // 0x00(0x10)
	struct TArray<struct FNetworkPredictionDevHUDItem> Items; // 0x10(0x10)
	bool bRequirePIE; // 0x20(0x01)
	bool bRequireNotPIE; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

