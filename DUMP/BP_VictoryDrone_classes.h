// BlueprintGeneratedClass BP_VictoryDrone.BP_VictoryDrone_C
// Size: 0x380 (Inherited: 0x310)
struct ABP_VictoryDrone_C : APawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct USkeletalMeshComponentBudgeted* SkeletalMeshComponentBudgeted; // 0x318(0x08)
	struct USceneComponent* Scene; // 0x320(0x08)
	struct FMulticastInlineDelegate SpawnOutAnimEndedDispatcher; // 0x328(0x10)
	double AnimPlayRate; // 0x338(0x08)
	struct UMaterialInstanceDynamic* StaticMeshMID; // 0x340(0x08)
	bool TeleportIn; // 0x348(0x01)
	bool IsAthena; // 0x349(0x01)
	char pad_34A[0x6]; // 0x34a(0x06)
	struct AFortPawn* TargetPlayer; // 0x350(0x08)
	struct UParticleSystemComponent* CharacterAttached; // 0x358(0x08)
	bool InLobby; // 0x360(0x01)
	bool isNPC; // 0x361(0x01)
	char pad_362[0x2]; // 0x362(0x02)
	struct FName AttachPoint; // 0x364(0x04)
	bool isDecoy; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct USkeletalMeshComponent* Mesh for Attachment; // 0x370(0x08)
	struct USoundBase* SoundOnNPCDeath; // 0x378(0x08)

	void Added Death Audio(struct USoundBase* Sound to Spawn); // Function BP_VictoryDrone.BP_VictoryDrone_C.Added Death Audio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Decoy FX Parameters(struct TArray<struct FParticleSysParam>& Instance Parameters); // Function BP_VictoryDrone.BP_VictoryDrone_C.Decoy FX Parameters // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void NPC FX Parameters(struct TArray<struct FParticleSysParam>& Instance Parameters); // Function BP_VictoryDrone.BP_VictoryDrone_C.NPC FX Parameters // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void NotifyTeleportFinishedTriggered(); // Function BP_VictoryDrone.BP_VictoryDrone_C.NotifyTeleportFinishedTriggered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlaySpawnAnim(); // Function BP_VictoryDrone.BP_VictoryDrone_C.PlaySpawnAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitDrone(); // Function BP_VictoryDrone.BP_VictoryDrone_C.InitDrone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSpawnOutAnimEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_VictoryDrone.BP_VictoryDrone_C.OnSpawnOutAnimEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(float DeltaSeconds); // Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_VictoryDrone(int32_t EntryPoint); // Function BP_VictoryDrone.BP_VictoryDrone_C.ExecuteUbergraph_BP_VictoryDrone // (Final|UbergraphFunction) // @ game+0xd67374
	void SpawnOutAnimEndedDispatcher__DelegateSignature(struct ABP_VictoryDrone_C* Drone); // Function BP_VictoryDrone.BP_VictoryDrone_C.SpawnOutAnimEndedDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

