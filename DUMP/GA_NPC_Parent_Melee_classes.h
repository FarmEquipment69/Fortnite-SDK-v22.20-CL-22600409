// BlueprintGeneratedClass GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C
// Size: 0xe70 (Inherited: 0xe58)
struct UGA_NPC_Parent_Melee_C : UGA_NPC_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe58(0x08)
	bool MoveDirectlyTowardsTarget; // 0xe60(0x01)
	enum class EFortMovementUrgency NPC MovementUrgencyWhileDoingMelee; // 0xe61(0x01)
	char pad_E62[0x6]; // 0xe62(0x06)
	struct UFortAbilityTask_MoveAI* MoveTask; // 0xe68(0x08)

	void Completed_0C0CF9C14BFCBE77EA7D2CBD89151BA0(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.Completed_0C0CF9C14BFCBE77EA7D2CBD89151BA0 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cancelled_0C0CF9C14BFCBE77EA7D2CBD89151BA0(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.Cancelled_0C0CF9C14BFCBE77EA7D2CBD89151BA0 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Triggered_0C0CF9C14BFCBE77EA7D2CBD89151BA0(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.Triggered_0C0CF9C14BFCBE77EA7D2CBD89151BA0 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMoveFinished_F65CF1EE473B6A2F8069108CC24B1704(enum class EPathFollowingResult Result, struct AAIController* AIController); // Function GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.OnMoveFinished_F65CF1EE473B6A2F8069108CC24B1704 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRequestFailed_F65CF1EE473B6A2F8069108CC24B1704(); // Function GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.OnRequestFailed_F65CF1EE473B6A2F8069108CC24B1704 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCancelled_F65CF1EE473B6A2F8069108CC24B1704(); // Function GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.OnCancelled_F65CF1EE473B6A2F8069108CC24B1704 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInterrupted_F65CF1EE473B6A2F8069108CC24B1704(); // Function GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.OnInterrupted_F65CF1EE473B6A2F8069108CC24B1704 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnComplete_F65CF1EE473B6A2F8069108CC24B1704(); // Function GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.OnComplete_F65CF1EE473B6A2F8069108CC24B1704 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void StartMoveDirectlyTowardsTarget(); // Function GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.StartMoveDirectlyTowardsTarget // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MontageAbilityTriggered(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.MontageAbilityTriggered // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnGenericNotifyFromAnimation(struct FGameplayTag NotifyTag); // Function GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.OnGenericNotifyFromAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_NPC_Parent_Melee(int32_t EntryPoint); // Function GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.ExecuteUbergraph_GA_NPC_Parent_Melee // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

