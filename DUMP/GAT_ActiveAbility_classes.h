// BlueprintGeneratedClass GAT_ActiveAbility.GAT_ActiveAbility_C
// Size: 0xb48 (Inherited: 0xb20)
struct UGAT_ActiveAbility_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FGameplayTag TC_AbilitiesGenericActiveAbilityActivate; // 0xb28(0x04)
	struct FName N_SavedCollisionChannel; // 0xb2c(0x04)
	struct UGameplayEffect* GE_KnockBackImmunity; // 0xb30(0x08)
	struct FActiveGameplayEffectHandle GEH_KnockBackImmunity; // 0xb38(0x08)
	bool bPlayerHolsterState; // 0xb40(0x01)
	char pad_B41[0x3]; // 0xb41(0x03)
	struct FGameplayTag TC_AbilitiesGenericActiveAbilityEndAbility; // 0xb44(0x04)

	void EndAbilityWithReason(struct FString Reason); // Function GAT_ActiveAbility.GAT_ActiveAbility_C.EndAbilityWithReason // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SendHeroAbilityActivationEvent(); // Function GAT_ActiveAbility.GAT_ActiveAbility_C.SendHeroAbilityActivationEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetHolsterWeaponWithName(struct AFortPawn* Target Fort Pawn, bool ShouldHolster, bool PlayEquipAnim, bool ShowDebugPrintName, bool& IsWeaponHolstered, bool& OperationSuccessful); // Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetHolsterWeaponWithName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload); // Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ShouldAbilityRespondToEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void ActiveAbilitySetup(struct UAbilitySystemComponent* AbilitySystemIn, struct UAbilitySystemComponent*& AbilitySystemOut); // Function GAT_ActiveAbility.GAT_ActiveAbility_C.ActiveAbilitySetup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetKnockbackImmunity(bool ImmunityOn); // Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetKnockbackImmunity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetPawnCollision(struct AFortPawn* FortPawn, bool CollisionOn); // Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetPawnCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GAT_ActiveAbility(int32_t EntryPoint); // Function GAT_ActiveAbility.GAT_ActiveAbility_C.ExecuteUbergraph_GAT_ActiveAbility // (Final|UbergraphFunction) // @ game+0xd67374
};

