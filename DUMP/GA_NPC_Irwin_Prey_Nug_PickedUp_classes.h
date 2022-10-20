// BlueprintGeneratedClass GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C
// Size: 0xe7c (Inherited: 0xe58)
struct UGA_NPC_Irwin_Prey_Nug_PickedUp_C : UGA_NPC_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe58(0x08)
	struct UGameplayEffect* GE_PlayerFloatAbility; // 0xe60(0x08)
	struct UFortAbilitySystemComponent* PlayerAbilitySystem; // 0xe68(0x08)
	struct UAnimMontage* MontageFloating; // 0xe70(0x08)
	struct FName FloatingMontageTask; // 0xe78(0x04)

	void StopMontage(); // Function GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.StopMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventReceived_652F951742ACDCA03108779C2A03D41E(struct FGameplayEventData Payload); // Function GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.EventReceived_652F951742ACDCA03108779C2A03D41E // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnNotifyEnd_C589B85E45A774D41686D3BDFD1ED73C(struct FGameplayTag NotifyTag); // Function GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.OnNotifyEnd_C589B85E45A774D41686D3BDFD1ED73C // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnNotifyBegin_C589B85E45A774D41686D3BDFD1ED73C(struct FGameplayTag NotifyTag); // Function GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.OnNotifyBegin_C589B85E45A774D41686D3BDFD1ED73C // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCancelled_C589B85E45A774D41686D3BDFD1ED73C(struct FGameplayTag NotifyTag); // Function GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.OnCancelled_C589B85E45A774D41686D3BDFD1ED73C // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInterrupted_C589B85E45A774D41686D3BDFD1ED73C(struct FGameplayTag NotifyTag); // Function GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.OnInterrupted_C589B85E45A774D41686D3BDFD1ED73C // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBlendOut_C589B85E45A774D41686D3BDFD1ED73C(struct FGameplayTag NotifyTag); // Function GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.OnBlendOut_C589B85E45A774D41686D3BDFD1ED73C // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCompleted_C589B85E45A774D41686D3BDFD1ED73C(struct FGameplayTag NotifyTag); // Function GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.OnCompleted_C589B85E45A774D41686D3BDFD1ED73C // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventReceived_A0AE263D4404EBF0B62950A680B1C36D(struct FGameplayEventData Payload); // Function GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.EventReceived_A0AE263D4404EBF0B62950A680B1C36D // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_NPC_Irwin_Prey_Nug_PickedUp(int32_t EntryPoint); // Function GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.ExecuteUbergraph_GA_NPC_Irwin_Prey_Nug_PickedUp // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

