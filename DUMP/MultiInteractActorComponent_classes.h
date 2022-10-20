// BlueprintGeneratedClass MultiInteractActorComponent.MultiInteractActorComponent_C
// Size: 0x179 (Inherited: 0x158)
struct UMultiInteractActorComponent_C : UFortActorComponent_MultiInteract {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FGameplayTag RemoveInteractPlayerTag; // 0x160(0x04)
	struct FGameplayTag AddInteractPlayerTag; // 0x164(0x04)
	struct FGameplayTag LoopingMultiInteractTag; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	double RequiredDuration; // 0x170(0x08)
	bool GCNLApplied; // 0x178(0x01)

	void AddGCNL(); // Function MultiInteractActorComponent.MultiInteractActorComponent_C.AddGCNL // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RemoveGCNL(); // Function MultiInteractActorComponent.MultiInteractActorComponent_C.RemoveGCNL // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteGCNFromTag(struct AFortPlayerPawn*& PlayerPawn, struct FGameplayTag& InteractTag, int32_t PreviousInteractPlayerCount); // Function MultiInteractActorComponent.MultiInteractActorComponent_C.ExecuteGCNFromTag // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetRequiredDuration(double NewRequiredDuration); // Function MultiInteractActorComponent.MultiInteractActorComponent_C.SetRequiredDuration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateForPlayerJustJoinedInteraction(struct AFortPlayerStateAthena* JoinedPlayer); // Function MultiInteractActorComponent.MultiInteractActorComponent_C.UpdateForPlayerJustJoinedInteraction // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void UpdateForPlayerJustLeftInteraction(struct AFortPlayerStateAthena* LeftPlayer); // Function MultiInteractActorComponent.MultiInteractActorComponent_C.UpdateForPlayerJustLeftInteraction // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function MultiInteractActorComponent.MultiInteractActorComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_MultiInteractActorComponent(int32_t EntryPoint); // Function MultiInteractActorComponent.MultiInteractActorComponent_C.ExecuteUbergraph_MultiInteractActorComponent // (Final|UbergraphFunction) // @ game+0xd67374
};

