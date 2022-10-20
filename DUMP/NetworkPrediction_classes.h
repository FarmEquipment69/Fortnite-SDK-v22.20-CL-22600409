// Class NetworkPrediction.NetworkPredictionComponent
// Size: 0x290 (Inherited: 0xa0)
struct UNetworkPredictionComponent : UActorComponent {
	struct FNetworkPredictionProxy NetworkPredictionProxy; // 0xa0(0xb0)
	struct FReplicationProxy ReplicationProxy_ServerRPC; // 0x150(0x50)
	struct FReplicationProxy ReplicationProxy_Autonomous; // 0x1a0(0x50)
	struct FReplicationProxy ReplicationProxy_Simulated; // 0x1f0(0x50)
	struct FReplicationProxy ReplicationProxy_Replay; // 0x240(0x50)

	void ServerReceiveClientInput(struct FServerReplicationRPCParameter ProxyParameter); // Function NetworkPrediction.NetworkPredictionComponent.ServerReceiveClientInput // (Net|Native|Event|Protected|NetServer|NetValidate) // @ game+0x639e338
};

// Class NetworkPrediction.NetworkPredictionPhysicsComponent
// Size: 0x1c0 (Inherited: 0xa0)
struct UNetworkPredictionPhysicsComponent : UActorComponent {
	struct FNetworkPredictionProxy NetworkPredictionProxy; // 0xa0(0xb0)
	struct UPrimitiveComponent* UpdatedPrimitive; // 0x150(0x08)
	char pad_158[0x8]; // 0x158(0x08)
	struct FReplicationProxy ReplicationProxy; // 0x160(0x50)
	char pad_1B0[0x10]; // 0x1b0(0x10)
};

// Class NetworkPrediction.NetworkPredictionReplicatedManager
// Size: 0x298 (Inherited: 0x288)
struct ANetworkPredictionReplicatedManager : AActor {
	struct FSharedPackageMap SharedPackageMap; // 0x288(0x10)
};

// Class NetworkPrediction.NetworkPredictionSettingsObject
// Size: 0x60 (Inherited: 0x28)
struct UNetworkPredictionSettingsObject : UObject {
	struct FNetworkPredictionSettings Settings; // 0x28(0x28)
	struct TArray<struct FNetworkPredictionDevHUD> DevHUDs; // 0x50(0x10)
};

// Class NetworkPrediction.NetworkPredictionWorldManager
// Size: 0x668 (Inherited: 0x30)
struct UNetworkPredictionWorldManager : UWorldSubsystem {
	struct ANetworkPredictionReplicatedManager* ReplicatedManager; // 0x30(0x08)
	char pad_38[0x630]; // 0x38(0x630)
};

