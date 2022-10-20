// BlueprintGeneratedClass GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C
// Size: 0xb68 (Inherited: 0xb51)
struct UGAB_Melee_GenericCombo_C : UGAB_Melee_Generic_EventGraph_C {
	char pad_B51[0x7]; // 0xb51(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb58(0x08)
	double OriginalMontagePlayRate; // 0xb60(0x08)

	void Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GAB_Melee_GenericCombo(int32_t EntryPoint); // Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.ExecuteUbergraph_GAB_Melee_GenericCombo // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

