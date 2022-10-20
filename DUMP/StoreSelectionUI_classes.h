// Class StoreSelectionUI.FortStoreSelectionData
// Size: 0x578 (Inherited: 0x520)
struct UFortStoreSelectionData : UFortGameFeatureData {
	struct TSoftClassPtr<UObject> StoreSelectionScreenClass; // 0x520(0x28)
	struct FText RegularStoreSelectedText; // 0x548(0x18)
	struct FText NonRegularStoreSelectedText; // 0x560(0x18)
};

// Class StoreSelectionUI.FortStoreSelectionOptionEntry
// Size: 0x14a0 (Inherited: 0x1480)
struct UFortStoreSelectionOptionEntry : UCommonButtonLegacy {
	struct UFortLazyImage* Image_Icon; // 0x1480(0x08)
	struct UCommonTextBlock* Text_Description; // 0x1488(0x08)
	struct UCommonTextBlock* Text_Price; // 0x1490(0x08)
	struct UCommonRichTextBlock* RichText_Label; // 0x1498(0x08)
};

// Class StoreSelectionUI.FortStoreSelectionScreen
// Size: 0x950 (Inherited: 0x530)
struct UFortStoreSelectionScreen : UCommonActivatablePanelLegacy {
	char pad_530[0x8]; // 0x530(0x08)
	struct UCommonButtonGroupLegacy* EntryBoxButtonGroup; // 0x538(0x08)
	struct UFortRealMoneyOffer* StoreOffer; // 0x540(0x08)
	struct UCommonLoadGuard* StoreOfferLoadGuard; // 0x548(0x08)
	struct UCommonTextBlock* Text_Header; // 0x550(0x08)
	struct UDynamicEntryBox* DynamicEntryBox_Options; // 0x558(0x08)
	struct UCommonButtonLegacy* Button_Continue; // 0x560(0x08)
	struct UCommonButtonLegacy* Button_Cancel; // 0x568(0x08)
	struct UCommonRichTextBlock* RichText_InitiallySelectedHint; // 0x570(0x08)
	struct TScriptInterface<IPurchaseChoiceRequesterInterface> PurchaseChoiceOwner; // 0x578(0x10)
	struct TArray<struct FItemData> StoreOptions; // 0x588(0x10)
	struct TSoftObjectPtr<UFortMtxOfferData> SoftDisplayAsset; // 0x598(0x28)
	struct FItemData ItemData[0xc]; // 0x5c0(0x360)
	struct FText OptionalLabels[0x2]; // 0x920(0x30)
};

