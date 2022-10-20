// Class PlayspaceSystem.PlayspaceComponent
// Size: 0xa0 (Inherited: 0xa0)
struct UPlayspaceComponent : UGameFrameworkComponent {
};

// Class PlayspaceSystem.GameFeatureAction_AddPlayspaceComponent
// Size: 0x40 (Inherited: 0x28)
struct UGameFeatureAction_AddPlayspaceComponent : UGameFeatureAction {
	struct TArray<struct FPlayspaceComponentConfiguration> PlayspaceComponentDataList; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class PlayspaceSystem.GameFeatureAction_CreatePlayspacesFromConfig
// Size: 0x40 (Inherited: 0x28)
struct UGameFeatureAction_CreatePlayspacesFromConfig : UGameFeatureAction {
	struct TArray<struct FPlayspaceConfiguration> PlayspaceDataList; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class PlayspaceSystem.GameplayVolume
// Size: 0x310 (Inherited: 0x288)
struct AGameplayVolume : AActor {
	struct TSoftClassPtr<UObject> PlayspaceClassTemplate; // 0x288(0x28)
	enum class EPlayspaceCreationType PlayspaceCreationType; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct APlayspace* PlayspaceClass; // 0x2b8(0x08)
	struct APlayspace* Playspace; // 0x2c0(0x08)
	struct FGameplayTagContainer VolumeTags; // 0x2c8(0x20)
	struct UOverlapComponent* BoundsComponent; // 0x2e8(0x08)
	char pad_2F0[0x20]; // 0x2f0(0x20)

	void UpdateSize(struct FVector& NewScale); // Function PlayspaceSystem.GameplayVolume.UpdateSize // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x6382b14
	void OnOverlappedPawnControllerChanged(struct APawn* Pawn, struct AController* OldController, struct AController* NewController); // Function PlayspaceSystem.GameplayVolume.OnOverlappedPawnControllerChanged // (Native|Protected) // @ game+0x50a6d40
	void InitializeBoundsComponent(struct UOverlapComponent* NewBoundsComponent); // Function PlayspaceSystem.GameplayVolume.InitializeBoundsComponent // (Final|Native|Private|BlueprintCallable) // @ game+0x63824e4
	struct APlayspace* GetPlayspace(); // Function PlayspaceSystem.GameplayVolume.GetPlayspace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2355268
};

// Class PlayspaceSystem.OverlapComponent
// Size: 0x610 (Inherited: 0x5f0)
struct UOverlapComponent : UStaticMeshComponent {
	char pad_5F0[0x20]; // 0x5f0(0x20)

	void OnEndActorOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function PlayspaceSystem.OverlapComponent.OnEndActorOverlap // (Native|Protected) // @ game+0x6382758
	void OnBeginActorOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function PlayspaceSystem.OverlapComponent.OnBeginActorOverlap // (Native|Protected|HasOutParms) // @ game+0x6382568
};

// Class PlayspaceSystem.Playspace
// Size: 0x508 (Inherited: 0x288)
struct APlayspace : AInfo {
	struct FMulticastInlineDelegate NotifyPlayspaceUserAdded; // 0x288(0x10)
	char pad_298[0x18]; // 0x298(0x18)
	struct FMulticastInlineDelegate NotifyPlayspaceUserRemoved; // 0x2b0(0x10)
	char pad_2C0[0x18]; // 0x2c0(0x18)
	struct FMulticastInlineDelegate NotifyPlayspaceInitialized; // 0x2d8(0x10)
	char pad_2E8[0x18]; // 0x2e8(0x18)
	struct FMulticastInlineDelegate NotifyStartMatch; // 0x300(0x10)
	char pad_310[0x18]; // 0x310(0x18)
	struct FMulticastInlineDelegate NotifyEndMatch; // 0x328(0x10)
	char pad_338[0x18]; // 0x338(0x18)
	struct FGameplayTagContainer GameplayTags; // 0x350(0x20)
	struct FGameplayTag RequestedPlayspaceParentTag; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct TArray<struct APlayspace*> ChildPlayspaceClasses; // 0x378(0x10)
	struct FPlayspaceUserList PlayspaceUsers; // 0x388(0x128)
	struct TArray<struct APlayspace*> ChildPlayspaces; // 0x4b0(0x10)
	struct TArray<struct FUniqueNetIdRepl> PendingUsers; // 0x4c0(0x10)
	bool bAutoStartMatchOnServerStart; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct UPlayspaceManagerComponent* PlayspaceManagerCached; // 0x4d8(0x08)
	struct AGameplayVolume* BoundGameplayVolume; // 0x4e0(0x08)
	bool bIsInitialized; // 0x4e8(0x01)
	char pad_4E9[0x1]; // 0x4e9(0x01)
	bool bMatchHasEnded; // 0x4ea(0x01)
	char pad_4EB[0x1]; // 0x4eb(0x01)
	float MatchStartTime; // 0x4ec(0x04)
	char pad_4F0[0x18]; // 0x4f0(0x18)

	void OnRep_PlayspaceUsers(); // Function PlayspaceSystem.Playspace.OnRep_PlayspaceUsers // (Final|Native|Protected) // @ game+0xfad400
	void OnRep_MatchStartTime(); // Function PlayspaceSystem.Playspace.OnRep_MatchStartTime // (Native|Protected) // @ game+0x26fd570
	void OnRep_bMatchHasEnded(); // Function PlayspaceSystem.Playspace.OnRep_bMatchHasEnded // (Final|Native|Protected) // @ game+0x2c00e0c
	void OnRep_bIsInitialized(); // Function PlayspaceSystem.Playspace.OnRep_bIsInitialized // (Final|Native|Protected) // @ game+0x60e0420
};

// Class PlayspaceSystem.PlayspaceComponent_PlayerSpawning
// Size: 0xb0 (Inherited: 0xa0)
struct UPlayspaceComponent_PlayerSpawning : UPlayspaceComponent {
	bool bQueueUserForSpawnWhenAdded; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float SpawnDelayMin; // 0xa4(0x04)
	float SpawnDelayMax; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class PlayspaceSystem.PlayspaceComponent_VoiceManager
// Size: 0xa0 (Inherited: 0xa0)
struct UPlayspaceComponent_VoiceManager : UPlayspaceComponent {
};

// Class PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning
// Size: 0x118 (Inherited: 0xa0)
struct UPlayspaceControllerComponent_PlayerSpawning : UControllerComponent {
	struct FMulticastInlineDelegate OnPlayerQueuedToSpawn; // 0xa0(0x10)
	struct ACameraActor* SpawnCameraActor; // 0xb0(0x08)
	bool bClientReadyForSpawning; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FReplicatedSpawnInfo ReplicatedSpawnInfo; // 0xc0(0x58)

	void ServerMarkReadyForSpawning(); // Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.ServerMarkReadyForSpawning // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x6382ac8
	void OnRep_ReplicatedSpawnInfo(); // Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.OnRep_ReplicatedSpawnInfo // (Final|Native|Private) // @ game+0x6382a20
	struct FReplicatedSpawnInfo GetSpawnInfo(); // Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.GetSpawnInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x638248c
};

// Class PlayspaceSystem.PlayspaceGameStateComponent
// Size: 0xa0 (Inherited: 0xa0)
struct UPlayspaceGameStateComponent : UGameStateComponent {
};

// Class PlayspaceSystem.PlayspaceGameStateComponent_PlayerSpawningManager
// Size: 0xf8 (Inherited: 0xa0)
struct UPlayspaceGameStateComponent_PlayerSpawningManager : UPlayspaceGameStateComponent {
	char pad_A0[0x48]; // 0xa0(0x48)
	struct TArray<struct FPlayspaceSpawningInfo> SpawningUsersArray; // 0xe8(0x10)
};

// Class PlayspaceSystem.PlayspaceLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPlayspaceLibrary : UBlueprintFunctionLibrary {

	void DestroyPlayspace(struct APlayspace* PlayspaceToDestroy); // Function PlayspaceSystem.PlayspaceLibrary.DestroyPlayspace // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x63821b0
};

// Class PlayspaceSystem.PlayspaceLogic
// Size: 0x298 (Inherited: 0x288)
struct APlayspaceLogic : AActor {
	struct APlayspace* Playspace; // 0x288(0x08)
	bool bAutoStartMatchOnServerStart; // 0x290(0x01)
	char pad_291[0x1]; // 0x291(0x01)
	bool bMatchHasEnded; // 0x292(0x01)
	char pad_293[0x1]; // 0x293(0x01)
	float MatchStartTime; // 0x294(0x04)

	void OnRep_MatchStartTime(); // Function PlayspaceSystem.PlayspaceLogic.OnRep_MatchStartTime // (Native|Protected) // @ game+0x28a7774
	void OnRep_bMatchHasEnded(); // Function PlayspaceSystem.PlayspaceLogic.OnRep_bMatchHasEnded // (Final|Native|Private) // @ game+0x183df6c
};

// Class PlayspaceSystem.PlayspaceLogicComponent
// Size: 0xa0 (Inherited: 0xa0)
struct UPlayspaceLogicComponent : UGameFrameworkComponent {
};

// Class PlayspaceSystem.PlayspaceManagerComponent
// Size: 0x1f0 (Inherited: 0xa0)
struct UPlayspaceManagerComponent : UGameStateComponent {
	char pad_A0[0x18]; // 0xa0(0x18)
	struct APlayspace* RootPlayspace; // 0xb8(0x08)
	char pad_C0[0x110]; // 0xc0(0x110)
	struct TArray<struct FActorOverlapEvent> UnhandledEnterEvents; // 0x1d0(0x10)
	struct TArray<struct FActorOverlapEvent> UnhandledExitEvents; // 0x1e0(0x10)

	bool ProcessOverlapEvents(float DeltaTime); // Function PlayspaceSystem.PlayspaceManagerComponent.ProcessOverlapEvents // (Final|Native|Private) // @ game+0x6382a34
	void OnRep_RootPlayspace(); // Function PlayspaceSystem.PlayspaceManagerComponent.OnRep_RootPlayspace // (Final|Native|Private) // @ game+0x234c79c
	void OnPlayerEndOverlapGameplayVolume(struct APlayerState* PlayerState, struct AGameplayVolume* Volume); // Function PlayspaceSystem.PlayspaceManagerComponent.OnPlayerEndOverlapGameplayVolume // (Final|Native|Private) // @ game+0x638295c
	void OnPlayerBeginOverlapGameplayVolume(struct APlayerState* PlayerState, struct AGameplayVolume* Volume); // Function PlayspaceSystem.PlayspaceManagerComponent.OnPlayerBeginOverlapGameplayVolume // (Final|Native|Private) // @ game+0x6382898
};

// Class PlayspaceSystem.PlayspacePlayerManagerComponent
// Size: 0x160 (Inherited: 0xa0)
struct UPlayspacePlayerManagerComponent : UPlayspaceComponent {
	struct TArray<struct UControllerComponent*> ControllerComponents; // 0xa0(0x10)
	struct TArray<struct UPlayerStateComponent*> PlayerStateComponents; // 0xb0(0x10)
	char pad_C0[0xa0]; // 0xc0(0xa0)
};

// Class PlayspaceSystem.PlayspaceSpawnActor
// Size: 0x290 (Inherited: 0x288)
struct APlayspaceSpawnActor : AActor {
	struct USceneComponent* SceneComponent; // 0x288(0x08)
};

