// BlueprintGeneratedClass GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C
// Size: 0xb58 (Inherited: 0xb48)
struct UGAT_Creative_TriggeredAbility_Pawn_C : UGAT_Creative_TriggeredAbility_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb48(0x08)
	struct AFortPawn* AbilityOwner; // 0xb50(0x08)

	void SetupPawnActorAbility(struct AFortPawn*& FortPawn); // Function GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C.SetupPawnActorAbility // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn(int32_t EntryPoint); // Function GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C.ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

