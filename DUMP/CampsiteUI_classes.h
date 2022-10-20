// Class CampsiteUI.CampsiteMarkerInfoBase
// Size: 0x2f0 (Inherited: 0x2e0)
struct UCampsiteMarkerInfoBase : UCommonUserWidget {
	struct TWeakObjectPtr<struct AFortPlayerStateAthena> WeakPSA; // 0x2e0(0x08)
	struct UCommonTextBlock* Text_PlayerName; // 0x2e8(0x08)

	void SetPlayerState(struct AFortPlayerStateAthena* InPlayerState); // Function CampsiteUI.CampsiteMarkerInfoBase.SetPlayerState // (Final|Native|Public|BlueprintCallable) // @ game+0x66d3554
	void OnSetPlayerState(struct AFortPlayerStateAthena* PSA); // Function CampsiteUI.CampsiteMarkerInfoBase.OnSetPlayerState // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

