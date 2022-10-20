// Enum NetCore.ENetworkFailure
enum class ENetworkFailure : uint8 {
	NetDriverAlreadyExists = 0,
	NetDriverCreateFailure = 1,
	NetDriverListenFailure = 2,
	ConnectionLost = 3,
	ConnectionTimeout = 4,
	FailureReceived = 5,
	OutdatedClient = 6,
	OutdatedServer = 7,
	PendingConnectionFailure = 8,
	NetGuidMismatch = 9,
	NetChecksumMismatch = 10,
	ENetworkFailure_MAX = 11
};

// Enum NetCore.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8 {
	None = 0,
	HasBeenSerialized = 1,
	HasDeltaBeenRequested = 2,
	IsUsingDeltaSerialization = 4,
	EFastArraySerializerDeltaFlags_MAX = 5
};

// Enum NetCore.ENetCloseResult
enum class ENetCloseResult : uint8 {
	NetDriverAlreadyExists = 0,
	NetDriverCreateFailure = 1,
	NetDriverListenFailure = 2,
	ConnectionLost = 3,
	ConnectionTimeout = 4,
	FailureReceived = 5,
	OutdatedClient = 6,
	OutdatedServer = 7,
	PendingConnectionFailure = 8,
	NetGuidMismatch = 9,
	NetChecksumMismatch = 10,
	SecurityMalformedPacket = 11,
	SecurityInvalidData = 12,
	SecurityClosed = 13,
	Unknown = 14,
	Success = 15,
	Extended = 16,
	HostClosedConnection = 17,
	Disconnect = 18,
	Upgrade = 19,
	PreLoginFailure = 20,
	JoinFailure = 21,
	JoinSplitFailure = 22,
	AddressResolutionFailed = 23,
	RPCDoS = 24,
	Cleanup = 25,
	MissingLevelPackage = 26,
	PacketHandlerIncomingError = 27,
	ZeroLastByte = 28,
	ZeroSize = 29,
	ReadHeaderFail = 30,
	ReadHeaderExtraFail = 31,
	AckSequenceMismatch = 32,
	BunchBadChannelIndex = 33,
	BunchChannelNameFail = 34,
	BunchWrongChannelType = 35,
	BunchHeaderOverflow = 36,
	BunchDataOverflow = 37,
	BunchServerPackageMapExports = 38,
	BunchPrematureControlChannel = 39,
	BunchPrematureChannel = 40,
	BunchPrematureControlClose = 41,
	UnknownChannelType = 42,
	PrematureSend = 43,
	CorruptData = 44,
	SocketSendFailure = 45,
	BadChildConnectionIndex = 46,
	LogLimitInstant = 47,
	LogLimitSustained = 48,
	EncryptionFailure = 49,
	EncryptionTokenMissing = 50,
	ReceivedNetGUIDBunchFail = 51,
	MaxReliableExceeded = 52,
	ReceivedNextBunchFail = 53,
	ReceivedNextBunchQueueFail = 54,
	PartialInitialReliableDestroy = 55,
	PartialMergeReliableDestroy = 56,
	PartialInitialNonByteAligned = 57,
	PartialNonByteAligned = 58,
	PartialFinalPackageMapExports = 59,
	PartialTooLarge = 60,
	AlreadyOpen = 61,
	ReliableBeforeOpen = 62,
	ReliableBufferOverflow = 63,
	RPCReliableBufferOverflow = 64,
	ControlChannelClose = 65,
	ControlChannelEndianCheck = 66,
	ControlChannelPlayerChannelFail = 67,
	ControlChannelMessageUnknown = 68,
	ControlChannelMessageFail = 69,
	ControlChannelMessagePayloadFail = 70,
	ControlChannelBunchOverflowed = 71,
	ControlChannelQueueBunchOverflowed = 72,
	ClientHasMustBeMappedGUIDs = 73,
	ClientSentDestructionInfo = 74,
	UnregisteredMustBeMappedGUID = 75,
	ObjectReplicatorReceivedBunchFail = 76,
	ContentBlockFail = 77,
	ContentBlockHeaderRepLayoutFail = 78,
	ContentBlockHeaderIsActorFail = 79,
	ContentBlockHeaderObjFail = 80,
	ContentBlockHeaderPrematureEnd = 81,
	ContentBlockHeaderSubObjectActor = 82,
	ContentBlockHeaderBadParent = 83,
	ContentBlockHeaderInvalidCreate = 84,
	ContentBlockHeaderStablyNamedFail = 85,
	ContentBlockHeaderNoSubObjectClass = 86,
	ContentBlockHeaderUObjectSubObject = 87,
	ContentBlockHeaderAActorSubObject = 88,
	ContentBlockHeaderFail = 89,
	ContentBlockPayloadBitsFail = 90,
	FieldHeaderRepIndex = 91,
	FieldHeaderBadRepIndex = 92,
	FieldHeaderPayloadBitsFail = 93,
	FieldPayloadFail = 94,
	BeaconControlFlowError = 95,
	BeaconUnableToParsePacket = 96,
	BeaconAuthenticationFailure = 97,
	BeaconLoginInvalidIdError = 98,
	BeaconLoginInvalidAuthHandlerError = 99,
	BeaconAuthError = 100,
	BeaconSpawnClientWorldPackageNameError = 101,
	BeaconSpawnExistingActorError = 102,
	BeaconSpawnFailureError = 103,
	BeaconSpawnNetGUIDAckNoActor = 104,
	BeaconSpawnNetGUIDAckNoHost = 105,
	BeaconSpawnUnexpectedError = 106,
	FaultDisconnect = 107,
	NotRecoverable = 108,
	ENetCloseResult_MAX = 109
};

// ScriptStruct NetCore.FastArraySerializerItem
// Size: 0x0c (Inherited: 0x00)
struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x00(0x04)
	int32_t ReplicationKey; // 0x04(0x04)
	int32_t MostRecentArrayReplicationKey; // 0x08(0x04)
};

// ScriptStruct NetCore.FastArraySerializer
// Size: 0x108 (Inherited: 0x00)
struct FFastArraySerializer {
	char pad_0[0x54]; // 0x00(0x54)
	int32_t ArrayReplicationKey; // 0x54(0x04)
	char pad_58[0xa8]; // 0x58(0xa8)
	enum class EFastArraySerializerDeltaFlags DeltaFlags; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// ScriptStruct NetCore.StateStruct
// Size: 0x18 (Inherited: 0x00)
struct FStateStruct {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString StateName; // 0x08(0x10)
};

// ScriptStruct NetCore.EscalationState
// Size: 0x30 (Inherited: 0x18)
struct FEscalationState : FStateStruct {
	bool bLogEscalate; // 0x18(0x01)
	bool bDormant; // 0x19(0x01)
	int16_t CooloffTime; // 0x1a(0x02)
	int16_t AutoEscalateTime; // 0x1c(0x02)
	int8_t HighestTimePeriod; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	struct TArray<int8_t> AllTimePeriods; // 0x20(0x10)
};

// ScriptStruct NetCore.NetAnalyticsDataConfig
// Size: 0x08 (Inherited: 0x00)
struct FNetAnalyticsDataConfig {
	struct FName DataName; // 0x00(0x04)
	bool bEnabled; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct NetCore.NetFaultState
// Size: 0x40 (Inherited: 0x30)
struct FNetFaultState : FEscalationState {
	bool bCloseConnection; // 0x30(0x01)
	char pad_31[0x1]; // 0x31(0x01)
	int16_t EscalateQuotaFaultsPerPeriod; // 0x32(0x02)
	int8_t EscalateQuotaFaultPercentPerPeriod; // 0x34(0x01)
	char pad_35[0x1]; // 0x35(0x01)
	int16_t DescalateQuotaFaultsPerPeriod; // 0x36(0x02)
	int8_t DescalateQuotaFaultPercentPerPeriod; // 0x38(0x01)
	int8_t EscalateQuotaTimePeriod; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

