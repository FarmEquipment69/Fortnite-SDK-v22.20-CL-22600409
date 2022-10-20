// BlueprintGeneratedClass GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C
// Size: 0xb78 (Inherited: 0xb48)
struct UGAT_ActiveAbility_Hero_C : UGAT_ActiveAbility_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb48(0x08)
	bool UseHeroLoadoutSystem; // 0xb50(0x01)
	bool bUseMidAbilityCosts; // 0xb51(0x01)
	bool bTriggerCooldownOnAbilityEnd; // 0xb52(0x01)
	char pad_B53[0x5]; // 0xb53(0x05)
	struct UAbilitySystemComponent* Owner ASC; // 0xb58(0x08)
	struct UGameplayEffect* GE_CooldownModifier; // 0xb60(0x08)
	struct TArray<struct FActiveGameplayEffectHandle> Active Cooldown Modifiers; // 0xb68(0x10)

	void IncrementAbilityCostAndCooldown(double Energy Cost, bool Adjust Cooldown, double Cooldown Increment, struct TArray<struct FActiveGameplayEffectHandle>& Active Cooldown Modifiers); // Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.IncrementAbilityCostAndCooldown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CommitAbilityWithEvent(bool& Passed); // Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.CommitAbilityWithEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GAT_ActiveAbility_Hero(int32_t EntryPoint); // Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.ExecuteUbergraph_GAT_ActiveAbility_Hero // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

