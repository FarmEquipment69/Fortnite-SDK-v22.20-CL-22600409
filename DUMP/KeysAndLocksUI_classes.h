// Class KeysAndLocksUI.KeyPlayerInfoWidget
// Size: 0x340 (Inherited: 0x320)
struct UKeyPlayerInfoWidget : UFortHUDElementWidget {
	char pad_320[0x8]; // 0x320(0x08)
	struct FGameplayTag KeyStatusTag; // 0x328(0x04)
	char pad_32C[0x14]; // 0x32c(0x14)

	void OnKeyStatusActivated(struct AFortPlayerStateAthena* InPlayerState, bool bActivated); // Function KeysAndLocksUI.KeyPlayerInfoWidget.OnKeyStatusActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleGameplayTagEvent(struct FGameplayTag UpdatedTag, int32_t TagCount); // Function KeysAndLocksUI.KeyPlayerInfoWidget.HandleGameplayTagEvent // (Final|Native|Protected) // @ game+0x687eacc
};

