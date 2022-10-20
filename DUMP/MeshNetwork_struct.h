// Enum MeshNetwork.EMeshNetworkNodeType
enum class EMeshNetworkNodeType : uint8 {
	Root = 0,
	Inner = 1,
	Edge = 2,
	Client = 3,
	Unknown = 4,
	EMeshNetworkNodeType_MAX = 5
};

// Enum MeshNetwork.EMeshNetworkRelevancy
enum class EMeshNetworkRelevancy : uint8 {
	NotRelevant = 0,
	RelevantToEdgeNodes = 1,
	RelevantToClients = 2,
	EMeshNetworkRelevancy_MAX = 3
};

// ScriptStruct MeshNetwork.MeshMetaDataStruct
// Size: 0x01 (Inherited: 0x00)
struct FMeshMetaDataStruct {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MeshNetwork.AggregatedFunction
// Size: 0x28 (Inherited: 0x00)
struct FAggregatedFunction {
	struct UFunction* Function; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct MeshNetwork.AggregatedFunctionConfig
// Size: 0x60 (Inherited: 0x00)
struct FAggregatedFunctionConfig {
	double AggregationTimeout; // 0x00(0x08)
	bool bAggregationEnabled; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TSet<struct FName> NoAggregationParameters; // 0x10(0x50)
};

