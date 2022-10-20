// Class TacOvershieldUI.TacOvershieldPlayerInfoWidget
// Size: 0x330 (Inherited: 0x320)
struct UTacOvershieldPlayerInfoWidget : UFortHUDElementWidget {
	char pad_320[0x10]; // 0x320(0x10)

	void OnPlayerStateSet(struct AFortPlayerStateAthena* InPlayerState); // Function TacOvershieldUI.TacOvershieldPlayerInfoWidget.OnPlayerStateSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnOvershieldStateChanged(float Overshield, float OvershieldMax); // Function TacOvershieldUI.TacOvershieldPlayerInfoWidget.OnOvershieldStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

