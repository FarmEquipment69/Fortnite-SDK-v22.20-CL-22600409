// WidgetBlueprintGeneratedClass CurrencyListViewItem.CurrencyListViewItem_C
// Size: 0x2e0 (Inherited: 0x2b8)
struct UCurrencyListViewItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UCommonRichTextBlock* CurrencyMessage; // 0x2c0(0x08)
	struct FText DisplayMessage; // 0x2c8(0x18)

	void SetQuantityAndType(int32_t inInt, struct FText To); // Function CurrencyListViewItem.CurrencyListViewItem_C.SetQuantityAndType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnEntryReleased(); // Function CurrencyListViewItem.CurrencyListViewItem_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function CurrencyListViewItem.CurrencyListViewItem_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function CurrencyListViewItem.CurrencyListViewItem_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function CurrencyListViewItem.CurrencyListViewItem_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_CurrencyListViewItem(int32_t EntryPoint); // Function CurrencyListViewItem.CurrencyListViewItem_C.ExecuteUbergraph_CurrencyListViewItem // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

