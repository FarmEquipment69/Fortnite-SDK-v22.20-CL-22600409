// BlueprintGeneratedClass GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C
// Size: 0xb39 (Inherited: 0xb20)
struct UGA_Riding_Player_Sprint_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct TArray<struct FGameplayTag> Tags to cancel sprinting; // 0xb28(0x10)
	bool ShouldCancelSprint; // 0xb38(0x01)

	void OnRep_CancelSprintDispatcher(); // Function GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.OnRep_CancelSprintDispatcher // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_BA9D24D64958BB04345A3D89BD7617CA(); // Function GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.Added_BA9D24D64958BB04345A3D89BD7617CA // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Riding_Player_Sprint(int32_t EntryPoint); // Function GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.ExecuteUbergraph_GA_Riding_Player_Sprint // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

