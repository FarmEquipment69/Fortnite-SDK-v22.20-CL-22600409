// BlueprintGeneratedClass GA_NPC_Parent_PlayMontage_Contagious.GA_NPC_Parent_PlayMontage_Contagious_C
// Size: 0xf78 (Inherited: 0xe60)
struct UGA_NPC_Parent_PlayMontage_Contagious_C : UGA_NPC_Parent_PlayMontage_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe60(0x08)
	struct TArray<struct AFortPawn*> PawnsOfSameClass; // 0xe68(0x10)
	struct FGameplayTagContainer TC_TagsRequiredToBroadcastGE; // 0xe78(0x20)
	struct UGameplayEffect* NPC GE_AppliedContagiousGE; // 0xe98(0x08)
	struct TArray<struct AFortPawn*> NPC OtherTypesOfPawnClassesInAdditionToOurOwn; // 0xea0(0x10)
	struct FGameplayTagContainer TC_GEsWithGrantedTagsToRemoveAtEnd; // 0xeb0(0x20)
	struct FScalableFloat NPC MontageDelayMinHF; // 0xed0(0x28)
	struct FScalableFloat NPC MontageDelayMaxHF; // 0xef8(0x28)
	struct FScalableFloat NPC ContagiousGEApplicationRadiusHF; // 0xf20(0x28)
	bool NPC ShouldFocusOnGoalWhileAnimating; // 0xf48(0x01)
	char pad_F49[0x7]; // 0xf49(0x07)
	struct FScalableFloat NPC RotationRateDuringMontage; // 0xf50(0x28)

	void K2_OnEndAbility(bool bWasCancelled); // Function GA_NPC_Parent_PlayMontage_Contagious.GA_NPC_Parent_PlayMontage_Contagious_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_NPC_Parent_PlayMontage_Contagious.GA_NPC_Parent_PlayMontage_Contagious_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void NPC PlayMontage(); // Function GA_NPC_Parent_PlayMontage_Contagious.GA_NPC_Parent_PlayMontage_Contagious_C.NPC PlayMontage // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC MontageTriggered(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_NPC_Parent_PlayMontage_Contagious.GA_NPC_Parent_PlayMontage_Contagious_C.NPC MontageTriggered // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NPC PlayMontageStarted(); // Function GA_NPC_Parent_PlayMontage_Contagious.GA_NPC_Parent_PlayMontage_Contagious_C.NPC PlayMontageStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_NPC_Parent_PlayMontage_Contagious(int32_t EntryPoint); // Function GA_NPC_Parent_PlayMontage_Contagious.GA_NPC_Parent_PlayMontage_Contagious_C.ExecuteUbergraph_GA_NPC_Parent_PlayMontage_Contagious // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

