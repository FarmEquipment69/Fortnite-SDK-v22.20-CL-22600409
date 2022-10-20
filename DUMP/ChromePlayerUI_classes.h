// Class ChromePlayerUI.ChromePlayerInfoWidget
// Size: 0x330 (Inherited: 0x320)
struct UChromePlayerInfoWidget : UFortHUDElementWidget {
	char pad_320[0x10]; // 0x320(0x10)

	void OnPlayerStateSet(struct AFortPlayerStateAthena* InPlayerState); // Function ChromePlayerUI.ChromePlayerInfoWidget.OnPlayerStateSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPlayerDeadStateChanged(struct AFortPlayerStateAthena* PlayerState, bool bIsDead); // Function ChromePlayerUI.ChromePlayerInfoWidget.OnPlayerDeadStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

