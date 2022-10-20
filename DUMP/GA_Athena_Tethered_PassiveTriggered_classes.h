// BlueprintGeneratedClass GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C
// Size: 0xb34 (Inherited: 0xb20)
struct UGA_Athena_Tethered_PassiveTriggered_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FGameplayTag GCN_BoostTag; // 0xb28(0x04)
	struct FGameplayTag GCN_JumpTag; // 0xb2c(0x04)
	struct FGameplayTag ZiplineExit; // 0xb30(0x04)

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered(int32_t EntryPoint); // Function GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C.ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

