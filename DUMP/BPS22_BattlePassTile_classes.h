// WidgetBlueprintGeneratedClass BPS22_BattlePassTile.BPS22_BattlePassTile_C
// Size: 0x1693 (Inherited: 0x1590)
struct UBPS22_BattlePassTile_C : UFortBattlePassTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1590(0x08)
	struct UWidgetAnimation* Hold_Completed; // 0x1598(0x08)
	struct UWidgetAnimation* Secondary_Hold_Progress; // 0x15a0(0x08)
	struct UWidgetAnimation* Hold_Progress; // 0x15a8(0x08)
	struct UWidgetAnimation* GrowTile; // 0x15b0(0x08)
	struct UWidgetAnimation* Hover_Burst; // 0x15b8(0x08)
	struct UWidgetAnimation* Reveal_Hide; // 0x15c0(0x08)
	struct UWidgetAnimation* Reveal; // 0x15c8(0x08)
	struct UWidgetAnimation* TintOnpeek; // 0x15d0(0x08)
	struct UWidgetAnimation* Select; // 0x15d8(0x08)
	struct UWidgetAnimation* Item_Hover; // 0x15e0(0x08)
	struct UCommonVisibilitySwitcher* Availability_Switcher; // 0x15e8(0x08)
	struct UOverlay* Available_State; // 0x15f0(0x08)
	struct UBorder* Border_FreeViolator; // 0x15f8(0x08)
	struct UImage* EmptyBackground; // 0x1600(0x08)
	struct UHorizontalBox* HB_PriceInfo; // 0x1608(0x08)
	struct UHorizontalBox* HBox_locks; // 0x1610(0x08)
	struct UImage* Image; // 0x1618(0x08)
	struct UImage* ; // 0x1620(0x08)
	struct UImage* Image_Lock_Purple; // 0x1628(0x08)
	struct UImage* Image_Lock_Red; // 0x1630(0x08)
	struct UImage* Image_Owned; // 0x1638(0x08)
	struct UImage* Image_Preview; // 0x1640(0x08)
	struct UImage* Image_Progress; // 0x1648(0x08)
	struct UImage* Image_selected_LR; // 0x1650(0x08)
	struct UImage* Image_selected_TB; // 0x1658(0x08)
	struct UImage* Locked_Overlay; // 0x1660(0x08)
	struct UImage* OffscreenOverlay; // 0x1668(0x08)
	struct UOverlay* Overlay_Delayed; // 0x1670(0x08)
	struct UOverlay* Overlay_Input; // 0x1678(0x08)
	struct UCommonTextBlock* Text_Price; // 0x1680(0x08)
	struct UCommonVisibilitySwitcher* VisibilitySwitcher_Included; // 0x1688(0x08)
	bool has prerequisite; // 0x1690(0x01)
	bool Selected; // 0x1691(0x01)
	bool Hovered; // 0x1692(0x01)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRevealed(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnRevealed // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPeeked(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnPeeked // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnSetCurrencyAndPrice(enum class EBattlePassCurrencyType Currency, int32_t Price); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnSetCurrencyAndPrice // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnAffordabilityChanged(bool bHasEnougCurrency); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnAffordabilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetTrack(bool bIsFreeTrack, bool bOwnsBattlePass); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnSetTrack // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnLockedProgressUpdated(float Progress, int32_t CurrentlyOwnedRewards, int32_t NeededRewards); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnLockedProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPreviewed(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnPreviewed // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnStateChanged(enum class BattlePassTileAvailabilityStates NewState); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUnpreviewed(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnUnpreviewed // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHoldStarted(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.BP_OnHoldStarted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHoldEnded(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.BP_OnHoldEnded // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnHighlighted(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnHighlighted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUnhighlighted(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnUnhighlighted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnLockedStateUpdated(bool OwnsBattlePass, bool ParentUnlocked, bool HasRemainingPrerequisites, bool bIsDelayed); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.OnLockedStateUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHoldReset(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.BP_OnHoldReset // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHoldCompleted(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.BP_OnHoldCompleted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BPS22_BattlePassTile(int32_t EntryPoint); // Function BPS22_BattlePassTile.BPS22_BattlePassTile_C.ExecuteUbergraph_BPS22_BattlePassTile // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

