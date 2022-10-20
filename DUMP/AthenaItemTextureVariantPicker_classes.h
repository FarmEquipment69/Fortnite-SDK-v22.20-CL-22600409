// WidgetBlueprintGeneratedClass AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C
// Size: 0x3c0 (Inherited: 0x3a8)
struct UAthenaItemTextureVariantPicker_C : UFortVariantItemTexturePicker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	struct UCommonRichTextBlock* TextBlock_AllItemsArchived; // 0x3b0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_AvailableItems; // 0x3b8(0x08)

	void OnToggleAllItemsArchivedMessage(bool bDisplay); // Function AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C.OnToggleAllItemsArchivedMessage // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaItemTextureVariantPicker(int32_t EntryPoint); // Function AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C.ExecuteUbergraph_AthenaItemTextureVariantPicker // (Final|UbergraphFunction) // @ game+0xd67374
};

