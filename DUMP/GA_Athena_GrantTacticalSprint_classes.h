// BlueprintGeneratedClass GA_Athena_GrantTacticalSprint.GA_Athena_GrantTacticalSprint_C
// Size: 0xb30 (Inherited: 0xb20)
struct UGA_Athena_GrantTacticalSprint_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* FortPlayerPawn; // 0xb28(0x08)

	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_GrantTacticalSprint.GA_Athena_GrantTacticalSprint_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_Athena_GrantTacticalSprint.GA_Athena_GrantTacticalSprint_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_GrantTacticalSprint.GA_Athena_GrantTacticalSprint_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Athena_GrantTacticalSprint(int32_t EntryPoint); // Function GA_Athena_GrantTacticalSprint.GA_Athena_GrantTacticalSprint_C.ExecuteUbergraph_GA_Athena_GrantTacticalSprint // (Final|UbergraphFunction) // @ game+0xd67374
};

