// Class GameHubRuntime.GameHubBaseMutator
// Size: 0x340 (Inherited: 0x330)
struct AGameHubBaseMutator : AFortAthenaMutator {
	char pad_330[0x10]; // 0x330(0x10)
};

// Class GameHubRuntime.GameHubPlayerSpawningComponent
// Size: 0xd0 (Inherited: 0xb0)
struct UGameHubPlayerSpawningComponent : UPlayspaceComponent_PlayerSpawning {
	struct FGameplayTagContainer PlayerStartRequirements; // 0xb0(0x20)
};

// Class GameHubRuntime.GameHubPlayspace
// Size: 0x648 (Inherited: 0x620)
struct AGameHubPlayspace : AFortPlayspace {
	bool bSimulatePlayerDamage; // 0x620(0x01)
	char pad_621[0x7]; // 0x621(0x07)
	struct FGameplayTagContainer PlayerStartRequirements; // 0x628(0x20)
};

