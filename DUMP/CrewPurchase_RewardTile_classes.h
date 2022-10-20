// WidgetBlueprintGeneratedClass CrewPurchase_RewardTile.CrewPurchase_RewardTile_C
// Size: 0x14e0 (Inherited: 0x1490)
struct UCrewPurchase_RewardTile_C : UCrewRewardTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UWidgetAnimation* HoverScale; // 0x1498(0x08)
	struct UWidgetAnimation* Hover; // 0x14a0(0x08)
	struct UImage* Image_Calendar; // 0x14a8(0x08)
	struct UImage* Image_Check; // 0x14b0(0x08)
	struct UImage* Image_EdgeSlant; // 0x14b8(0x08)
	struct UImage* Image_Frame; // 0x14c0(0x08)
	struct UImage* Image_Pulse; // 0x14c8(0x08)
	struct UImage* Image_Shadow; // 0x14d0(0x08)
	struct UWidgetSwitcher* Switcher_OwnIcon; // 0x14d8(0x08)

	void Construct(); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnUpdateOwnedState(bool bOwned); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.OnUpdateOwnedState // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnStartingDownloadTileImage(); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.OnStartingDownloadTileImage // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnDownloadTileImageComplete(struct UTexture2D* Texture); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.OnDownloadTileImageComplete // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_CrewPurchase_RewardTile(int32_t EntryPoint); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.ExecuteUbergraph_CrewPurchase_RewardTile // (Final|UbergraphFunction) // @ game+0xd67374
};

