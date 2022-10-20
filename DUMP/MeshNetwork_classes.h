// Class MeshNetwork.MeshBeaconClient
// Size: 0x398 (Inherited: 0x318)
struct AMeshBeaconClient : AOnlineBeaconClient {
	char pad_318[0x40]; // 0x318(0x40)
	bool bConnectedToRoot; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct FDateTime MeshPingTime; // 0x360(0x08)
	struct TArray<struct FString> ParentIds; // 0x368(0x10)
	struct FString ClientId; // 0x378(0x10)
	char pad_388[0x10]; // 0x388(0x10)

	void ServerUpdateMultipleLevelsVisibility(struct TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities); // Function MeshNetwork.MeshBeaconClient.ServerUpdateMultipleLevelsVisibility // (Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x670ae64
	void ServerUpdateLevelVisibility(struct FUpdateLevelVisibilityLevelInfo LevelVisibility); // Function MeshNetwork.MeshBeaconClient.ServerUpdateLevelVisibility // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x670adb8
	void ServerSetClientId(struct FString NewClientId); // Function MeshNetwork.MeshBeaconClient.ServerSetClientId // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x670ac3c
	void OnRep_ParentIds(); // Function MeshNetwork.MeshBeaconClient.OnRep_ParentIds // (Final|Native|Protected) // @ game+0x670ac28
	void OnRep_MeshPingTime(); // Function MeshNetwork.MeshBeaconClient.OnRep_MeshPingTime // (Native|Protected) // @ game+0x2c00e0c
	void OnRep_ConnectedToRoot(); // Function MeshNetwork.MeshBeaconClient.OnRep_ConnectedToRoot // (Final|Native|Protected) // @ game+0x670ac14
};

// Class MeshNetwork.MeshBeaconHost
// Size: 0x3d0 (Inherited: 0x3c8)
struct AMeshBeaconHost : AOnlineBeaconHost {
	int32_t MaxConnections; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
};

// Class MeshNetwork.MeshBeaconHostObject
// Size: 0x2c8 (Inherited: 0x2b0)
struct AMeshBeaconHostObject : AOnlineBeaconHostObject {
	char pad_2B0[0x18]; // 0x2b0(0x18)
};

// Class MeshNetwork.MeshConnection
// Size: 0x3320 (Inherited: 0x3320)
struct UMeshConnection : UIpConnection {
};

// Class MeshNetwork.MeshNetDriver
// Size: 0x828 (Inherited: 0x810)
struct UMeshNetDriver : UIpNetDriver {
	char pad_810[0x8]; // 0x810(0x08)
	struct TArray<struct AActor*> ClientDormantDynamicActors; // 0x818(0x10)
};

// Class MeshNetwork.MeshNetworkComponent
// Size: 0x150 (Inherited: 0xa0)
struct UMeshNetworkComponent : UActorComponent {
	enum class EMeshNetworkRelevancy MeshRelevancy; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct TMap<struct FString, struct FAggregatedFunction> AggregatedFunctions; // 0xa8(0x50)
	struct TMap<struct FName, struct FAggregatedFunctionConfig> AggregatedFunctionConfigs; // 0xf8(0x50)
	char pad_148[0x8]; // 0x148(0x08)

	bool IsConnectedToMeshRoot(); // Function MeshNetwork.MeshNetworkComponent.IsConnectedToMeshRoot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x670abbc
	enum class EMeshNetworkNodeType GetMeshNetworkNodeType(); // Function MeshNetwork.MeshNetworkComponent.GetMeshNetworkNodeType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x670a614
};

// Class MeshNetwork.MeshNetworkSubsystem
// Size: 0x108 (Inherited: 0x30)
struct UMeshNetworkSubsystem : UGameInstanceSubsystem {
	struct FMulticastInlineDelegate OnMeshNodeTypeChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnConnectedToRootChanged; // 0x40(0x10)
	struct FMulticastInlineDelegate OnGameServerNodeTypeChanged; // 0x50(0x10)
	struct FMulticastInlineDelegate OnMeshMetaDataUpdated; // 0x60(0x10)
	struct FMulticastInlineDelegate OnMeshPlayerRequested; // 0x70(0x10)
	char pad_80[0x30]; // 0x80(0x30)
	enum class EMeshNetworkNodeType NodeType; // 0xb0(0x01)
	enum class EMeshNetworkNodeType GameServerNodeType; // 0xb1(0x01)
	bool bConnectedToRoot; // 0xb2(0x01)
	bool bMetadataReceived; // 0xb3(0x01)
	char pad_B4[0x54]; // 0xb4(0x54)

	void SetMetaDataWithKey(struct FName Key, struct FMeshMetaDataStruct& MetaData); // Function MeshNetwork.MeshNetworkSubsystem.SetMetaDataWithKey // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x670af3c
	void SetMetaData(struct FMeshMetaDataStruct& MetaData); // Function MeshNetwork.MeshNetworkSubsystem.SetMetaData // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x670a638
	bool GetMetaDataWithKey(struct FName Key, struct FMeshMetaDataStruct& MetaData); // Function MeshNetwork.MeshNetworkSubsystem.GetMetaDataWithKey // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x670a69c
	void GetMetaData(struct FMeshMetaDataStruct& MetaData); // Function MeshNetwork.MeshNetworkSubsystem.GetMetaData // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x670a638
	enum class EMeshNetworkNodeType GetMeshNetworkNodeType(); // Function MeshNetwork.MeshNetworkSubsystem.GetMeshNetworkNodeType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2dcc994
	enum class EMeshNetworkNodeType GetGameServerNodeType(); // Function MeshNetwork.MeshNetworkSubsystem.GetGameServerNodeType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x670a5fc
	bool GetConnectedToRoot(); // Function MeshNetwork.MeshNetworkSubsystem.GetConnectedToRoot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2dcc9ac
	void EnableMeshReplication(struct AActor* Actor, struct UMeshNetworkComponent* MeshComponentClass); // Function MeshNetwork.MeshNetworkSubsystem.EnableMeshReplication // (Final|Native|Public|BlueprintCallable) // @ game+0x670a548
	void DisableMeshReplication(struct AActor* Actor); // Function MeshNetwork.MeshNetworkSubsystem.DisableMeshReplication // (Final|Native|Public|BlueprintCallable) // @ game+0x670a4d8
};

// Class MeshNetwork.MeshReplicationGraphNode_AlwaysRelevant_ForConnection
// Size: 0xf0 (Inherited: 0xd0)
struct UMeshReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode_ActorList {
	char pad_D0[0x10]; // 0xd0(0x10)
	struct TArray<struct FAlwaysRelevantActorInfo> PastRelevantActors; // 0xe0(0x10)
};

// Class MeshNetwork.MeshReplicationGraphConnection
// Size: 0x2d8 (Inherited: 0x2d8)
struct UMeshReplicationGraphConnection : UNetReplicationGraphConnection {
};

// Class MeshNetwork.MeshReplicationGraph
// Size: 0x560 (Inherited: 0x560)
struct UMeshReplicationGraph : UReplicationGraph {
	struct UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x558(0x08)
};

