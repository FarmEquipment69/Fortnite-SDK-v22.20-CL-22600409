// BlueprintGeneratedClass GA_BoostJumpPack_JumpHover.GA_BoostJumpPack_JumpHover_C
// Size: 0xb60 (Inherited: 0xb20)
struct UGA_BoostJumpPack_JumpHover_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FGameplayTagContainer RequiredTags; // 0xb28(0x20)
	struct FActiveGameplayEffectHandle GE_Hover_Instance; // 0xb48(0x08)
	double RequiredFuelToActivate; // 0xb50(0x08)
	struct UGameplayEffect* GE_Hover; // 0xb58(0x08)

	void K2_CommitExecute(); // Function GA_BoostJumpPack_JumpHover.GA_BoostJumpPack_JumpHover_C.K2_CommitExecute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_BoostJumpPack_JumpHover.GA_BoostJumpPack_JumpHover_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_BoostJumpPack_JumpHover.GA_BoostJumpPack_JumpHover_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnAbilityInputReleased(); // Function GA_BoostJumpPack_JumpHover.GA_BoostJumpPack_JumpHover_C.OnAbilityInputReleased // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_BoostJumpPack_JumpHover.GA_BoostJumpPack_JumpHover_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_BoostJumpPack_JumpHover(int32_t EntryPoint); // Function GA_BoostJumpPack_JumpHover.GA_BoostJumpPack_JumpHover_C.ExecuteUbergraph_GA_BoostJumpPack_JumpHover // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

