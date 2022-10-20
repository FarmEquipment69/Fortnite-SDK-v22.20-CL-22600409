// Class AnnualRefundTokenUI.FortAnnualRefundTicket
// Size: 0x2c0 (Inherited: 0x2b8)
struct UFortAnnualRefundTicket : UUserWidget {
	struct UCommonTextBlock* Text_AvailableDate; // 0x2b8(0x08)

	void OnUpdatePendingState(bool bIsPending); // Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnUpdatePendingState // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnUpdateAvailableState(bool bIsAvailable); // Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnUpdateAvailableState // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPlayLockingAnimation(); // Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnPlayLockingAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class AnnualRefundTokenUI.FortAnnualRefundTokenData
// Size: 0x548 (Inherited: 0x520)
struct UFortAnnualRefundTokenData : UFortGameFeatureData {
	struct TSoftClassPtr<UObject> PurchaseHistoryScreenClass; // 0x520(0x28)
};

// Class AnnualRefundTokenUI.FortPurchaseHistoryEntry
// Size: 0x1500 (Inherited: 0x14d0)
struct UFortPurchaseHistoryEntry : UFortHoldableButton {
	struct UFortCosmeticItemCard* ItemCardClass; // 0x14d0(0x08)
	float CardWidthOverride; // 0x14d8(0x04)
	char pad_14DC[0x4]; // 0x14dc(0x04)
	struct UCommonTextBlock* Text_Name; // 0x14e0(0x08)
	struct TArray<struct FString> LootEntryItemTypesToExclude; // 0x14e8(0x10)
	char pad_14F8[0x8]; // 0x14f8(0x08)

	void UpdateItemList(struct TArray<struct UFortCosmeticItemCard*>& ItemCards); // Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.UpdateItemList // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void SetupItemCard(struct UFortCosmeticItemCard* ItemCard, struct UFortItem* Item); // Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.SetupItemCard // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetPurchaseText(struct FText& PurchaseDateText, struct FText& RefundDateText, bool bHasBeenRefunded, enum class EFortPurchaseHistoryRefundType RefundType); // Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.SetPurchaseText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnSetHistory(bool bHasBeenRefunded, bool bIsTokenlessRefund, bool bPlayerHasTokens, bool bNonRefundable); // Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.OnSetHistory // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class AnnualRefundTokenUI.FortPurchaseHistoryListView
// Size: 0x370 (Inherited: 0x260)
struct UFortPurchaseHistoryListView : UListViewBase {
	char pad_260[0x110]; // 0x260(0x110)
};

// Class AnnualRefundTokenUI.FortPurchaseHistoryScreen
// Size: 0x660 (Inherited: 0x568)
struct UFortPurchaseHistoryScreen : UFortActivatablePanel {
	struct FDataTableRowHandle BackAction; // 0x568(0x10)
	char pad_578[0x18]; // 0x578(0x18)
	struct TSoftClassPtr<UObject> RefundConfirmationClass; // 0x590(0x28)
	struct TSoftClassPtr<UObject> DirectPurchaseInfoModalClass; // 0x5b8(0x28)
	struct UCommonAnimatedSwitcher* Switcher_MainContent; // 0x5e0(0x08)
	struct UFortPurchaseHistoryListView* ListView_Purchases; // 0x5e8(0x08)
	struct UCommonButtonBase* Button_CloseMobile; // 0x5f0(0x08)
	struct UCommonButtonBase* Button_PostApproval; // 0x5f8(0x08)
	struct UCommonTextBlock* Text_Desc; // 0x600(0x08)
	struct UCommonTextBlock* Text_RefundCount; // 0x608(0x08)
	struct UCommonTextBlock* Text_ResultHeader; // 0x610(0x08)
	struct UCommonTextBlock* Text_ResultTitle; // 0x618(0x08)
	struct UCommonTextBlock* Text_ResultDesc; // 0x620(0x08)
	struct UFortAnnualRefundTicket* RefundTicket_Left; // 0x628(0x08)
	struct UFortAnnualRefundTicket* RefundTicket_Center; // 0x630(0x08)
	struct UFortAnnualRefundTicket* RefundTicket_Right; // 0x638(0x08)
	struct UWidget* Widget_CancelPurchaseInfo; // 0x640(0x08)
	struct UWidget* Widget_ReturnTicketInfo; // 0x648(0x08)
	struct UWidget* Widget_TokenlessRefundInfo; // 0x650(0x08)
	struct UWidget* Widget_NonRefundableInfo; // 0x658(0x08)

	void OnPopulateView(); // Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnPopulateView // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnNoPurchasesAvailable(); // Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnNoPurchasesAvailable // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnEndRefundSubmission(); // Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnEndRefundSubmission // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnBeginRefundSubmission(); // Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnBeginRefundSubmission // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	bool BP_IsShowingPurchases(); // Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.BP_IsShowingPurchases // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class AnnualRefundTokenUI.FortRefundConfirmation
// Size: 0x5c0 (Inherited: 0x568)
struct UFortRefundConfirmation : UFortActivatablePanel {
	char pad_568[0x10]; // 0x568(0x10)
	struct UCommonTextBlock* Text_RefundsRemaining; // 0x578(0x08)
	struct UCommonTextBlock* Text_RefundCount; // 0x580(0x08)
	struct UCommonTextBlock* Text_AreYouSure; // 0x588(0x08)
	struct UCommonButtonBase* Button_Yes; // 0x590(0x08)
	struct UCommonButtonBase* Button_No; // 0x598(0x08)
	struct UCommonButtonBase* Button_CloseMobile; // 0x5a0(0x08)
	struct UFortAnnualRefundTicket* RefundTicket_Left; // 0x5a8(0x08)
	struct UFortAnnualRefundTicket* RefundTicket_Center; // 0x5b0(0x08)
	struct UFortAnnualRefundTicket* RefundTicket_Right; // 0x5b8(0x08)

	void BP_UpdateRefundType(enum class EFortPurchaseHistoryRefundType RefundType); // Function AnnualRefundTokenUI.FortRefundConfirmation.BP_UpdateRefundType // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_UpdateItemsList(struct TArray<struct UFortItemDefinition*>& SelectedItemDefs, int32_t TotalMtxPaid); // Function AnnualRefundTokenUI.FortRefundConfirmation.BP_UpdateItemsList // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

