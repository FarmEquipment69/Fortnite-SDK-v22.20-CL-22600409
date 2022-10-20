// WidgetBlueprintGeneratedClass BP_BattleStarModal.BP_BattleStarModal_C
// Size: 0x608 (Inherited: 0x4b8)
struct UBP_BattleStarModal_C : UFortBattlePassPurchaseResourcesWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UWidgetAnimation* PageEnough; // 0x4c0(0x08)
	struct UWidgetAnimation* Intro; // 0x4c8(0x08)
	struct UCommonTextBlock* BattlerStarHeader; // 0x4d0(0x08)
	struct UImage* BattleStarIcon; // 0x4d8(0x08)
	struct UImage* ; // 0x4e0(0x08)
	struct UImage* DividerLine; // 0x4e8(0x08)
	struct UImage* HeaderIcon; // 0x4f0(0x08)
	struct UImage* ; // 0x4f8(0x08)
	struct UImage* ; // 0x500(0x08)
	struct UImage* ; // 0x508(0x08)
	struct UImage* ; // 0x510(0x08)
	struct UImage* ; // 0x518(0x08)
	struct UImage* ; // 0x520(0x08)
	struct UImage* Image_bigstar; // 0x528(0x08)
	struct UImage* Image_DarkBackground; // 0x530(0x08)
	struct UImage* Image_Left; // 0x538(0x08)
	struct UImage* Image_Right; // 0x540(0x08)
	struct UOverlay* OriginalCostContainer; // 0x548(0x08)
	struct UCommonRichTextBlock* RichText_UnlockPage; // 0x550(0x08)
	struct USafeZone* ; // 0x558(0x08)
	struct UImage* Strikethrough; // 0x560(0x08)
	struct UWidgetSwitcher* Switcher_Tooltip; // 0x568(0x08)
	struct USafeZone* SZ_Currency; // 0x570(0x08)
	struct USafeZone* SZ_Legal; // 0x578(0x08)
	struct USafeZone* SZ_MainHeader; // 0x580(0x08)
	struct UCommonTextBlock* Text_BundleWarning; // 0x588(0x08)
	struct UCommonTextBlock* Text_CurrentBattleStar; // 0x590(0x08)
	struct UCommonTextBlock* Text_CurrentVBucks; // 0x598(0x08)
	struct UCommonTextBlock* Text_DisclaimerLegal; // 0x5a0(0x08)
	struct UCommonTextBlock* Text_FinalCoin; // 0x5a8(0x08)
	struct UCommonTextBlock* ; // 0x5b0(0x08)
	struct UCommonTextBlock* Text_HeaderTitle; // 0x5b8(0x08)
	struct UCommonTextBlock* Text_LevelReminder; // 0x5c0(0x08)
	struct UCommonTextBlock* Text_LevelsAmount; // 0x5c8(0x08)
	struct UCommonTextBlock* Text_LevelsLeft; // 0x5d0(0x08)
	struct UCommonTextBlock* Text_OriginalCost; // 0x5d8(0x08)
	struct UImage* VBuck; // 0x5e0(0x08)
	struct UImage* VBuckIcon; // 0x5e8(0x08)
	int32_t BattleStarAmount; // 0x5f0(0x04)
	int32_t Rebate Amount; // 0x5f4(0x04)
	int32_t Last Page to unlock; // 0x5f8(0x04)
	int32_t New Page to unlock; // 0x5fc(0x04)
	double TooltipHideDelay; // 0x600(0x08)

	void Randomize stars hovering(); // Function BP_BattleStarModal.BP_BattleStarModal_C.Randomize stars hovering // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPurchaseAmountChanged(int32_t NewAmount, int32_t LevelsLeft); // Function BP_BattleStarModal.BP_BattleStarModal_C.OnPurchaseAmountChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTotalPriceChanged(int32_t NewPrice); // Function BP_BattleStarModal.BP_BattleStarModal_C.OnTotalPriceChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function BP_BattleStarModal.BP_BattleStarModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnOfferUnavailable(); // Function BP_BattleStarModal.BP_BattleStarModal_C.OnOfferUnavailable // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function BP_BattleStarModal.BP_BattleStarModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function BP_BattleStarModal.BP_BattleStarModal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Update Disclaimer(); // Function BP_BattleStarModal.BP_BattleStarModal_C.Update Disclaimer // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdatePageUnlockText(int32_t LevelsPurchase); // Function BP_BattleStarModal.BP_BattleStarModal_C.UpdatePageUnlockText // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnAmountChangeButtonClicked(); // Function BP_BattleStarModal.BP_BattleStarModal_C.OnAmountChangeButtonClicked // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HoldActionProgress(bool IsHolding); // Function BP_BattleStarModal.BP_BattleStarModal_C.HoldActionProgress // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_BattleStarModal(int32_t EntryPoint); // Function BP_BattleStarModal.BP_BattleStarModal_C.ExecuteUbergraph_BP_BattleStarModal // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

