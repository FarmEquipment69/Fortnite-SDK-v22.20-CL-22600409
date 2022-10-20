// BlueprintGeneratedClass GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C
// Size: 0xb5d (Inherited: 0xb58)
struct UGA_Ranged_GenericDamage_C : UFortGameplayAbility_RangedWeapon {
	struct FGameplayTag GT_EventWeaponFire; // 0xb58(0x04)
	bool ManualFireEvent; // 0xb5c(0x01)

	void GetEventData(struct FGameplayTag EventTag, struct FGameplayEventData& GameplayEventData); // Function GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C.GetEventData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_CommitExecute(); // Function GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C.K2_CommitExecute // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

