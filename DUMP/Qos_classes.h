// Class Qos.QosBeaconClient
// Size: 0x350 (Inherited: 0x318)
struct AQosBeaconClient : AOnlineBeaconClient {
	char pad_318[0x38]; // 0x318(0x38)

	void ServerQosRequest(struct FString InSessionId); // Function Qos.QosBeaconClient.ServerQosRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x6048518
	void ClientQosResponse(enum class EQosResponseType Response); // Function Qos.QosBeaconClient.ClientQosResponse // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x6048494
};

// Class Qos.QosBeaconHost
// Size: 0x2b8 (Inherited: 0x2b0)
struct AQosBeaconHost : AOnlineBeaconHostObject {
	char pad_2B0[0x8]; // 0x2b0(0x08)
};

// Class Qos.QosEvaluator
// Size: 0x80 (Inherited: 0x28)
struct UQosEvaluator : UObject {
	char pad_28[0x20]; // 0x28(0x20)
	bool bInProgress; // 0x48(0x01)
	bool bCancelOperation; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct TArray<struct FDatacenterQosInstance> Datacenters; // 0x50(0x10)
	char pad_60[0x20]; // 0x60(0x20)
};

// Class Qos.QosRegionManager
// Size: 0xf8 (Inherited: 0x28)
struct UQosRegionManager : UObject {
	int32_t NumTestsPerRegion; // 0x28(0x04)
	float PingTimeout; // 0x2c(0x04)
	bool bEnableSubspaceBiasOrder; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString SubspaceDelimiter; // 0x38(0x10)
	struct TArray<struct FQosRegionInfo> RegionDefinitions; // 0x48(0x10)
	struct TArray<struct FQosDatacenterInfo> DatacenterDefinitions; // 0x58(0x10)
	struct FDateTime LastCheckTimestamp; // 0x68(0x08)
	struct UQosEvaluator* Evaluator; // 0x70(0x08)
	enum class EQosCompletionResult QosEvalResult; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct TArray<struct FRegionQosInstance> RegionOptions; // 0x80(0x10)
	struct FString ForceRegionId; // 0x90(0x10)
	bool bRegionForcedViaCommandline; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FString SelectedRegionId; // 0xa8(0x10)
	char pad_B8[0x40]; // 0xb8(0x40)
};

