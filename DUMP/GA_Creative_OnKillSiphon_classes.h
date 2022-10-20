// BlueprintGeneratedClass GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C
// Size: 0xb9c (Inherited: 0xb58)
struct UGA_Creative_OnKillSiphon_C : UGAT_Creative_TriggeredAbility_Pawn_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb58(0x08)
	struct AFortGameStateAthena* GameState; // 0xb60(0x08)
	bool IsCreativeOrPlayground; // 0xb68(0x01)
	char pad_B69[0x7]; // 0xb69(0x07)
	struct UGameplayEffect* GE_HealPlayer; // 0xb70(0x08)
	bool bShouldConvertExcessHealthToShields; // 0xb78(0x01)
	char pad_B79[0x7]; // 0xb79(0x07)
	struct UGameplayEffect* ShieldGE; // 0xb80(0x08)
	struct FGameplayTag ConsumedCue; // 0xb88(0x04)
	bool bDebugBypasLocalMapEnable; // 0xb8c(0x01)
	bool bAttemptHealthRestore; // 0xb8d(0x01)
	bool bAttemptMatsRestore; // 0xb8e(0x01)
	char pad_B8F[0x1]; // 0xb8f(0x01)
	struct FName NameGrantWood; // 0xb90(0x04)
	struct FName NameGrantStone; // 0xb94(0x04)
	struct FName NameGrantMetal; // 0xb98(0x04)

	void GiveResourcesToPlayer(bool bShouldGrant, int32_t GiveAmount, enum class EFortResourceType GiveType, bool& Success); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.GiveResourcesToPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CalculateResources(enum class EFortResourceType ResourceGrantType, bool& bSuccess, int32_t& ResourceToGive, enum class EFortResourceType& ResourceType); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.CalculateResources // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AttemptMats(); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AttemptMats // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AttemptHeal(); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AttemptHeal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupRestoreModes(bool& ShouldContinue); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.SetupRestoreModes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DetermineHealthDelta(double HealingAmount, double& MaxHealth, double& CurrentHealth, double& HealthDelta, double& ExcessHealh); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.DetermineHealthDelta // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AddShields(bool bShouldConvertExcessHealthToShields, double ShieldToAdd, bool& bAddedShields, double& ShieldAdded); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AddShields // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RestoreHealth(bool& Success, double& InitialHealAmount, double& ActualAppliedHeal, double& ExcessHealing); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.RestoreHealth // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.K2_ShouldAbilityRespondToEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Creative_OnKillSiphon(int32_t EntryPoint); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.ExecuteUbergraph_GA_Creative_OnKillSiphon // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

