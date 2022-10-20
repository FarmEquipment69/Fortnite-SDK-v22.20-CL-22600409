// Class CraftingUI.AthenaCraftingQuickBarButton
// Size: 0x1460 (Inherited: 0x1440)
struct UAthenaCraftingQuickBarButton : UAthenaQuickBarSlotButtonBase {
	char pad_1440[0x20]; // 0x1440(0x20)

	void OnIsCraftableItemChanged(bool bIsCraftableItem); // Function CraftingUI.AthenaCraftingQuickBarButton.OnIsCraftableItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnCanCraftNowChanged(bool bCanCraftNow); // Function CraftingUI.AthenaCraftingQuickBarButton.OnCanCraftNowChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class CraftingUI.AthenaEquippedItemCraftingIndicator
// Size: 0x300 (Inherited: 0x2e0)
struct UAthenaEquippedItemCraftingIndicator : UCommonUserWidget {
	char pad_2E0[0x20]; // 0x2e0(0x20)

	void OnIsCraftableItemChanged(bool bIsCraftableItem); // Function CraftingUI.AthenaEquippedItemCraftingIndicator.OnIsCraftableItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnCanCraftNowChanged(bool bCanCraftNow); // Function CraftingUI.AthenaEquippedItemCraftingIndicator.OnCanCraftNowChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleWeaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function CraftingUI.AthenaEquippedItemCraftingIndicator.HandleWeaponEquipped // (Final|Native|Private) // @ game+0x674d544
};

// Class CraftingUI.AthenaInventoryItemInfoCraftingIndicator
// Size: 0x300 (Inherited: 0x2e0)
struct UAthenaInventoryItemInfoCraftingIndicator : UCommonUserWidget {
	char pad_2E0[0x20]; // 0x2e0(0x20)

	void OnIsCraftableItemChanged(bool bIsCraftableItem); // Function CraftingUI.AthenaInventoryItemInfoCraftingIndicator.OnIsCraftableItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnCanCraftNowChanged(bool bCanCraftNow); // Function CraftingUI.AthenaInventoryItemInfoCraftingIndicator.OnCanCraftNowChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleInventoryItemSelected(struct UFortItem* SelectedItem); // Function CraftingUI.AthenaInventoryItemInfoCraftingIndicator.HandleInventoryItemSelected // (Final|Native|Private) // @ game+0x674d444
};

// Class CraftingUI.AthenaQuickBarSlotCraftingIndicator
// Size: 0x318 (Inherited: 0x2e8)
struct UAthenaQuickBarSlotCraftingIndicator : UAthenaQuickBarSlotExtensionWidgetBase {
	char pad_2E8[0x20]; // 0x2e8(0x20)
	bool bCheckForIngredientChangesWhenCraftable; // 0x308(0x01)
	char pad_309[0xf]; // 0x309(0x0f)

	void OnIsCraftableItemChanged(bool bIsCraftableItem); // Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnIsCraftableItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnIngredientChanged(bool bCanCraftNow); // Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnIngredientChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnCanCraftNowChanged(bool bCanCraftNow); // Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnCanCraftNowChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleWeaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.HandleWeaponEquipped // (Final|Native|Private) // @ game+0x674d608
};

// Class CraftingUI.FortCookingScreen
// Size: 0x448 (Inherited: 0x3f8)
struct UFortCookingScreen : UCommonActivatableWidget {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct FDataTableRowHandle CloseInputAction; // 0x400(0x10)
	char pad_410[0x8]; // 0x410(0x08)
	struct UCommonButtonLegacy* Button_EjectAll; // 0x418(0x08)
	struct UCommonButtonLegacy* Button_Cancel; // 0x420(0x08)
	struct UCommonTextBlock* Text_RecipeName; // 0x428(0x08)
	struct UCommonTextBlock* Text_RecipeDescription; // 0x430(0x08)
	struct UImage* Image_Recipe; // 0x438(0x08)
	struct UFortSlottedRadialMenu* RadialMenu_Recipes; // 0x440(0x08)
};

// Class CraftingUI.FortCraftingFormulaIngredientsWidget
// Size: 0x2e8 (Inherited: 0x2e0)
struct UFortCraftingFormulaIngredientsWidget : UCommonUserWidget {
	struct UDynamicEntryBox* EntryBox_Ingredients; // 0x2e0(0x08)
};

// Class CraftingUI.FortCraftingIngredientWidget
// Size: 0x308 (Inherited: 0x2e0)
struct UFortCraftingIngredientWidget : UCommonUserWidget {
	char pad_2E0[0x8]; // 0x2e0(0x08)
	struct UCommonTextBlock* Text_NumAvailable; // 0x2e8(0x08)
	struct UCommonTextBlock* Text_NumRequired; // 0x2f0(0x08)
	struct UAthenaItemIcon* ItemIcon; // 0x2f8(0x08)
	struct UCommonLazyImage* LazyImage_Icon; // 0x300(0x08)

	void OnIngredientWidgetUpdated(int32_t NumAvailable, int32_t NumRequired, bool bIsPrimaryIngredient, bool bIsLastIngredient); // Function CraftingUI.FortCraftingIngredientWidget.OnIngredientWidgetUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class CraftingUI.FortCraftingItemInfoWidget
// Size: 0x460 (Inherited: 0x3f8)
struct UFortCraftingItemInfoWidget : UCommonActivatableWidget {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct FText RarityTextFormat; // 0x400(0x18)
	struct UCommonTextBlock* Text_ItemName; // 0x418(0x08)
	struct UCommonTextBlock* Text_ItemRarity; // 0x420(0x08)
	struct UCommonTextBlock* Text_ItemCategory; // 0x428(0x08)
	struct UFortItemCategoryIndicator* ItemCategoryIndicator; // 0x430(0x08)
	struct UCommonTextBlock* Text_ItemDescription; // 0x438(0x08)
	struct UAthenaInventoryItemStatsWidget* ItemStatsWidget; // 0x440(0x08)
	struct UFortCraftingFormulaIngredientsWidget* IngredientsWidget; // 0x448(0x08)
	struct UCommonButtonLegacy* Button_StartCrafting; // 0x450(0x08)
	char pad_458[0x8]; // 0x458(0x08)

	void OnItemRaritySet(enum class EFortRarity Rarity, struct FFortRarityItemData RarityItemData); // Function CraftingUI.FortCraftingItemInfoWidget.OnItemRaritySet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class CraftingUI.FortCraftingListEntry
// Size: 0x14a0 (Inherited: 0x1480)
struct UFortCraftingListEntry : UCommonButtonLegacy {
	char pad_1480[0x8]; // 0x1480(0x08)
	struct UAthenaItemIcon* ItemIcon; // 0x1488(0x08)
	bool bCanCraftItem; // 0x1490(0x01)
	char pad_1491[0xf]; // 0x1491(0x0f)

	void OnCraftingListItemSet(); // Function CraftingUI.FortCraftingListEntry.OnCraftingListItemSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class CraftingUI.FortCraftingListItem
// Size: 0xf8 (Inherited: 0x28)
struct UFortCraftingListItem : UObject {
	char pad_28[0xd0]; // 0x28(0xd0)
};

// Class CraftingUI.FortCraftingTab
// Size: 0x530 (Inherited: 0x3f8)
struct UFortCraftingTab : UCommonActivatableWidget {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct FName TabNameID; // 0x400(0x04)
	char pad_404[0xc]; // 0x404(0x0c)
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x410(0xe0)
	struct FGameplayTagContainer PrimaryIngredientTags; // 0x4f0(0x20)
	struct UFortCraftingItemInfoWidget* CraftingItemInfo; // 0x510(0x08)
	struct UCommonListView* ListView_Recipes; // 0x518(0x08)
	struct UAthenaQuickbarEditorBase* QuickbarEditor; // 0x520(0x08)
	char pad_528[0x8]; // 0x528(0x08)

	void OnFormulaListUpdated(int32_t NumFormulas); // Function CraftingUI.FortCraftingTab.OnFormulaListUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleInventoryItemSelected(struct UFortItem* Item); // Function CraftingUI.FortCraftingTab.HandleInventoryItemSelected // (Final|Native|Private) // @ game+0x674d4c4
};

// Class CraftingUI.FortPotContentsPopup
// Size: 0x2e0 (Inherited: 0x2b8)
struct UFortPotContentsPopup : UUserWidget {
	int32_t MaxItemsToShow; // 0x2b8(0x04)
	char pad_2BC[0xc]; // 0x2bc(0x0c)
	struct UCommonTileView* TileView_PotContents; // 0x2c8(0x08)
	struct UCommonTextBlock* Text_MoreItems; // 0x2d0(0x08)
	struct UWidget* Overlay_Popup; // 0x2d8(0x08)

	void SetOwningCraftingObject(struct ACraftingObjectBGA* InCraftingObject); // Function CraftingUI.FortPotContentsPopup.SetOwningCraftingObject // (Final|Native|Public|BlueprintCallable) // @ game+0x674d6c4
};

// Class CraftingUI.FortPotContentsTile
// Size: 0x1490 (Inherited: 0x1480)
struct UFortPotContentsTile : UCommonButtonLegacy {
	char pad_1480[0x8]; // 0x1480(0x08)
	struct UCommonLazyImage* Image_Item; // 0x1488(0x08)
};

// Class CraftingUI.FortUIGameFeatureAction_SetCraftMenuWidget
// Size: 0x60 (Inherited: 0x28)
struct UFortUIGameFeatureAction_SetCraftMenuWidget : UFortUIGameFeatureAction {
	struct ACraftingObjectBGA* CraftingObject; // 0x28(0x08)
	struct TSoftClassPtr<UObject> CraftingMenuWidget; // 0x30(0x28)
	char pad_58[0x8]; // 0x58(0x08)
};

