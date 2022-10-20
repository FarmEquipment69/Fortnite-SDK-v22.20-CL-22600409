// BlueprintGeneratedClass GA_DuelObserver.GA_DuelObserver_C
// Size: 0xb38 (Inherited: 0xb30)
struct UGA_DuelObserver_C : UFortGameplayAbility_ObserveDuels {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb30(0x08)

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_DuelObserver.GA_DuelObserver_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void UpdateDuelUI(enum class EDuelState Duel State, struct FDuelOverlayData Cached Duel Overlay Data); // Function GA_DuelObserver.GA_DuelObserver_C.UpdateDuelUI // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnDuelChange(enum class EDuelState NewDuelState, struct FDuelOverlayData& ChangedDuelOverlayData); // Function GA_DuelObserver.GA_DuelObserver_C.OnDuelChange // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_DuelObserver(int32_t EntryPoint); // Function GA_DuelObserver.GA_DuelObserver_C.ExecuteUbergraph_GA_DuelObserver // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

