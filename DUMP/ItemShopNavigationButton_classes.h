// WidgetBlueprintGeneratedClass ItemShopNavigationButton.ItemShopNavigationButton_C
// Size: 0x14da (Inherited: 0x1490)
struct UItemShopNavigationButton_C : UAthenaItemShopNavigationButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UWidgetAnimation* FadeOutBacking; // 0x1498(0x08)
	struct UWidgetAnimation* Translate_Bottom; // 0x14a0(0x08)
	struct UWidgetAnimation* Translate_Top; // 0x14a8(0x08)
	struct UWidgetAnimation* Hover; // 0x14b0(0x08)
	struct UImage* Backing; // 0x14b8(0x08)
	struct UBorder* BorderButton; // 0x14c0(0x08)
	struct UBorder* GridBoundBorder; // 0x14c8(0x08)
	struct UImage* IMG_Arrow; // 0x14d0(0x08)
	bool bFlipArrow; // 0x14d8(0x01)
	bool bIsTop; // 0x14d9(0x01)

	void PreConstruct(bool IsDesignTime); // Function ItemShopNavigationButton.ItemShopNavigationButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function ItemShopNavigationButton.ItemShopNavigationButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function ItemShopNavigationButton.ItemShopNavigationButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ItemShopNavigationButton(int32_t EntryPoint); // Function ItemShopNavigationButton.ItemShopNavigationButton_C.ExecuteUbergraph_ItemShopNavigationButton // (Final|UbergraphFunction) // @ game+0xd67374
};

