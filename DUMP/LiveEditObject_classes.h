// Class LiveEditObject.LiveEditNetworkStreamChannel
// Size: 0x68 (Inherited: 0x68)
struct ULiveEditNetworkStreamChannel : UChannel {
};

// Class LiveEditObject.LiveEditLargeNetworkMessageChannel
// Size: 0xa8 (Inherited: 0x68)
struct ULiveEditLargeNetworkMessageChannel : ULiveEditNetworkStreamChannel {
	char pad_68[0x30]; // 0x68(0x30)
	int64_t ReceiveBufferMaxBytes; // 0x98(0x08)
	int64_t ReceiveBufferMaxBytesServer; // 0xa0(0x08)
};

// Class LiveEditObject.LiveEditObjectChannel
// Size: 0xb8 (Inherited: 0xa8)
struct ULiveEditObjectChannel : ULiveEditLargeNetworkMessageChannel {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class LiveEditObject.LiveEditObjectConnection
// Size: 0x2c0 (Inherited: 0x28)
struct ULiveEditObjectConnection : UObject {
	char pad_28[0x298]; // 0x28(0x298)
};

// Class LiveEditObject.LiveEditObjectSubsystemState
// Size: 0x228 (Inherited: 0x28)
struct ULiveEditObjectSubsystemState : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct ULiveEditObjectConnection*> Connections; // 0x38(0x10)
	char pad_48[0x1e0]; // 0x48(0x1e0)
};

// Class LiveEditObject.LiveEditObjectSubsystem
// Size: 0x128 (Inherited: 0x30)
struct ULiveEditObjectSubsystem : UEngineSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	int32_t MaxBytesQueuedForReplication; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct ULiveEditObjectSubsystemState*> NetDriverStates; // 0x40(0x10)
	char pad_50[0xd8]; // 0x50(0xd8)
};

// Class LiveEditObject.LiveEditObjectTestObject
// Size: 0x180 (Inherited: 0x28)
struct ULiveEditObjectTestObject : UObject {
	int32_t int32[0x3]; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct FLiveEditObjectTestStruct StructProperty; // 0x38(0x148)
};

