// BlueprintGeneratedClass BP_TeleportationDrone.BP_TeleportationDrone_C
// Size: 0x359 (Inherited: 0x310)
struct ABP_TeleportationDrone_C : APawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct USkeletalMeshComponentBudgeted* SkeletalMeshComponentBudgeted; // 0x318(0x08)
	struct USceneComponent* Scene; // 0x320(0x08)
	double AnimPlayRate; // 0x328(0x08)
	struct UMaterialInstanceDynamic* StaticMeshMID; // 0x330(0x08)
	bool TeleportIn; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct UParticleSystemComponent* CharacterAttached; // 0x340(0x08)
	bool InLobby; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct USkeletalMeshComponent* Mesh for Attachment; // 0x350(0x08)
	bool ; // 0x358(0x01)

	void PlaySpawnAnim(); // Function BP_TeleportationDrone.BP_TeleportationDrone_C.PlaySpawnAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function BP_TeleportationDrone.BP_TeleportationDrone_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSpawnOutAnimEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_TeleportationDrone.BP_TeleportationDrone_C.OnSpawnOutAnimEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(float DeltaSeconds); // Function BP_TeleportationDrone.BP_TeleportationDrone_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_TeleportationDrone(int32_t EntryPoint); // Function BP_TeleportationDrone.BP_TeleportationDrone_C.ExecuteUbergraph_BP_TeleportationDrone // (Final|UbergraphFunction) // @ game+0xd67374
};

