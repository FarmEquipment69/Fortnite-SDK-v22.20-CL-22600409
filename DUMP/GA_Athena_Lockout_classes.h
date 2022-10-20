// BlueprintGeneratedClass GA_Athena_Lockout.GA_Athena_Lockout_C
// Size: 0xb38 (Inherited: 0xb20)
struct UGA_Athena_Lockout_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FTimerHandle Timer_LockoutFailsafe; // 0xb28(0x08)
	double LockoutFailsafeTime; // 0xb30(0x08)

	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Lockout.GA_Athena_Lockout_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_Athena_Lockout.GA_Athena_Lockout_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Failsafe(); // Function GA_Athena_Lockout.GA_Athena_Lockout_C.Failsafe // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_Lockout.GA_Athena_Lockout_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Athena_Lockout(int32_t EntryPoint); // Function GA_Athena_Lockout.GA_Athena_Lockout_C.ExecuteUbergraph_GA_Athena_Lockout // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

