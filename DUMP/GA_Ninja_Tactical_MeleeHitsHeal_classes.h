// BlueprintGeneratedClass GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C
// Size: 0xcc8 (Inherited: 0xbf2)
struct UGA_Ninja_Tactical_MeleeHitsHeal_C : UGAT_GenericTriggeredAbility_C {
	char pad_BF2[0x6]; // 0xbf2(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xbf8(0x08)
	struct FGameplayTag EventActivation; // 0xc00(0x04)
	struct FGameplayTag EventComplete; // 0xc04(0x04)
	struct UGameplayEffect* GE_Ninja_Tactical_MeleeHitsHeal; // 0xc08(0x08)
	struct FGameplayTagContainer TC_Melee; // 0xc10(0x20)
	int32_t MeleeCount; // 0xc30(0x04)
	char pad_C34[0x4]; // 0xc34(0x04)
	double LastHitSwingTime; // 0xc38(0x08)
	double BaseHealValue; // 0xc40(0x08)
	double FinalHealValue; // 0xc48(0x08)
	struct FName DataRowName; // 0xc50(0x04)
	char pad_C54[0x4]; // 0xc54(0x04)
	struct FGameplayAttribute Attribute_HealingSourceBaseMultiplier; // 0xc58(0x38)
	struct FGameplayAttribute Attribute_HealingSource; // 0xc90(0x38)

	void SetupAbility(struct UAbilitySystemComponent* AbilitySystem); // Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.SetupAbility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload); // Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_ShouldAbilityRespondToEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal(int32_t EntryPoint); // Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

