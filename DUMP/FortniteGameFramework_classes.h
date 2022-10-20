// Class FortniteGameFramework.FGF_PlayerController
// Size: 0x850 (Inherited: 0x7f8)
struct AFGF_PlayerController : APlayerController {
	char pad_7F8[0x58]; // 0x7f8(0x58)
};

// Class FortniteGameFramework.FGF_Character
// Size: 0x670 (Inherited: 0x610)
struct AFGF_Character : ACharacter {
	char pad_610[0x60]; // 0x610(0x60)
};

// Class FortniteGameFramework.FGF_GameMode
// Size: 0x3c8 (Inherited: 0x370)
struct AFGF_GameMode : AGameMode {
	char pad_370[0x58]; // 0x370(0x58)
};

// Class FortniteGameFramework.FGF_GameState
// Size: 0x350 (Inherited: 0x2f0)
struct AFGF_GameState : AGameState {
	char pad_2F0[0x60]; // 0x2f0(0x60)
};

// Class FortniteGameFramework.FGF_PlayerState
// Size: 0x3f8 (Inherited: 0x3a0)
struct AFGF_PlayerState : APlayerState {
	char pad_3A0[0x58]; // 0x3a0(0x58)
};

// Class FortniteGameFramework.ObjectBasedStateTreeSchema
// Size: 0x28 (Inherited: 0x28)
struct UObjectBasedStateTreeSchema : UStateTreeSchema {
};

// Class FortniteGameFramework.StateTreeManagerComponent
// Size: 0x1e0 (Inherited: 0xa0)
struct UStateTreeManagerComponent : UActorComponent {
	struct TArray<struct FStateTreeRuntimeData> StateTreeRuntimeDataList; // 0xa0(0x10)
	struct TArray<struct FStateTreeClientSimulationData> SimulatedDataList; // 0xb0(0x10)
	struct FStateChangeDataArray ReplicatedStateChanges; // 0xc0(0x120)
};

// Class FortniteGameFramework.StateTreeTaskObject
// Size: 0x48 (Inherited: 0x40)
struct UStateTreeTaskObject : UStateTreeTaskBlueprintBase {
	bool bReplicates; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

