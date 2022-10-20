// BlueprintGeneratedClass GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C
// Size: 0xb50 (Inherited: 0xb20)
struct UGAB_AthenaDBNORevive_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FGameplayTag EC_AppliedEffect; // 0xb28(0x04)
	char pad_B2C[0x4]; // 0xb2c(0x04)
	struct AFortPlayerPawn* PlayerPawn; // 0xb30(0x08)
	struct FGameplayTag ResurrectCue; // 0xb38(0x04)
	struct FGameplayTag ResurrectAthenaCue; // 0xb3c(0x04)
	struct UAnimMontage* DBNOMontageOutro; // 0xb40(0x08)
	struct UAnimMontage* DBNOMontageOutroSwimming; // 0xb48(0x08)

	void Get DBNO Outro Montage(struct UAnimMontage*& DBNOMontageOutro); // Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Get DBNO Outro Montage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Completed_23712DBC45E68EA0C91A4895CBD8B3A6(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Completed_23712DBC45E68EA0C91A4895CBD8B3A6 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Triggered_23712DBC45E68EA0C91A4895CBD8B3A6(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Triggered_23712DBC45E68EA0C91A4895CBD8B3A6 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cancelled_779E7BAA49FEAD286C5164B83CDFD609(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Cancelled_779E7BAA49FEAD286C5164B83CDFD609 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Targeted_779E7BAA49FEAD286C5164B83CDFD609(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Targeted_779E7BAA49FEAD286C5164B83CDFD609 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Removed_620488CD4F8BFC035EC7328664732683(); // Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Removed_620488CD4F8BFC035EC7328664732683 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GAB_AthenaDBNORevive(int32_t EntryPoint); // Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.ExecuteUbergraph_GAB_AthenaDBNORevive // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

