// BlueprintGeneratedClass GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper.GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C
// Size: 0xb58 (Inherited: 0xb20)
struct UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UControllableRidableComponent* ControllableRidableComponent_Cached; // 0xb28(0x08)
	struct AFortAIPawn* FortAIPawnCached; // 0xb30(0x08)
	double InitialMaxAcceleration; // 0xb38(0x08)
	double MaxRotationRateYaw; // 0xb40(0x08)
	struct FGameplayTag GCN_BoostTag; // 0xb48(0x04)
	char pad_B4C[0x4]; // 0xb4c(0x04)
	struct UFortGameplayAbility* TargetAbilityCached; // 0xb50(0x08)

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper.GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void FireBoostEffectsOnPlayerMulti(struct AActor* PlayerTarget); // Function GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper.GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C.FireBoostEffectsOnPlayerMulti // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper(int32_t EntryPoint); // Function GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper.GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C.ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

