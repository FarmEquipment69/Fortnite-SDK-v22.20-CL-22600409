// WidgetBlueprintGeneratedClass AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C
// Size: 0x1531 (Inherited: 0x14c0)
struct UAthenaCustomizationPickerTileButton_C : UAthenaCustomizationPickerTileButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14c0(0x08)
	struct UWidgetAnimation* Unarchived; // 0x14c8(0x08)
	struct UWidgetAnimation* archived; // 0x14d0(0x08)
	struct UWidgetAnimation* OnHover; // 0x14d8(0x08)
	struct UImage* ExclusiveFill; // 0x14e0(0x08)
	struct UOverlay* ExclusiveWarningOvr; // 0x14e8(0x08)
	struct UFortLazyImage* Image_Archived; // 0x14f0(0x08)
	struct UFortLazyImage* Image_Equipped; // 0x14f8(0x08)
	struct UOverlay* NullItemOverlay; // 0x1500(0x08)
	struct UWidgetSwitcher* RootWidgetSwitcher; // 0x1508(0x08)
	struct UImage* UnownedDampen; // 0x1510(0x08)
	bool IsSlottedSomewhere; // 0x1518(0x01)
	char pad_1519[0x7]; // 0x1519(0x07)
	struct FMulticastInlineDelegate PickedButtonHovered; // 0x1520(0x10)
	bool DisplayAsArchived; // 0x1530(0x01)

	void HandleEquippedStateChanged(bool bEquipped, bool bOnDifferentSlot); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.HandleEquippedStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnChangeOwnedState(bool bOwned); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnChangeOwnedState // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnEquippedStateChanged(bool bEquipped, bool bOnDifferentSlot); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnEquippedStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUpdateExclusiveWarning(bool bShouldWarn); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnUpdateExclusiveWarning // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnArchivedStatusUpdated(bool bShowAsArchived, bool bUseAnimations); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnArchivedStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaCustomizationPickerTileButton(int32_t EntryPoint); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.ExecuteUbergraph_AthenaCustomizationPickerTileButton // (Final|UbergraphFunction) // @ game+0xd67374
	void PickedButtonHovered__DelegateSignature(struct UWidgetSwitcher* WidgetSwitcher); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.PickedButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

