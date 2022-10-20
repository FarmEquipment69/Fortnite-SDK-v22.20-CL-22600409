// BlueprintGeneratedClass GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C
// Size: 0xb38 (Inherited: 0xb20)
struct UGA_Riding_Player_IsRiding_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UAnimMontage* SettleMontageRef; // 0xb28(0x08)
	struct UFortAbilityTask_PlayMontageWaitTarget* settleMontageTask; // 0xb30(0x08)

	void K2_ActivateAbility(); // Function GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Riding_Player_IsRiding(int32_t EntryPoint); // Function GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.ExecuteUbergraph_GA_Riding_Player_IsRiding // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

