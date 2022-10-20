// Class ClientPilot.ClientPilotBlackboard
// Size: 0x78 (Inherited: 0x28)
struct UClientPilotBlackboard : UObject {
	char pad_28[0x50]; // 0x28(0x50)
};

// Class ClientPilot.ClientPilotComponent
// Size: 0x28 (Inherited: 0x28)
struct UClientPilotComponent : UObject {
};

// Class ClientPilot.ClientPilotBlackboardManager
// Size: 0x30 (Inherited: 0x28)
struct UClientPilotBlackboardManager : UObject {
	struct UClientPilotBlackboard* PilotBlackboard; // 0x28(0x08)
};

