// WidgetBlueprintGeneratedClass ItemShopPipButton.ItemShopPipButton_C
// Size: 0x1548 (Inherited: 0x1520)
struct UItemShopPipButton_C : UFortTextButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1520(0x08)
	struct UWidgetAnimation* Hover; // 0x1528(0x08)
	struct UWidgetAnimation* Selected; // 0x1530(0x08)
	struct UImage* BacchusMobileShadow; // 0x1538(0x08)
	struct UImage* PIP; // 0x1540(0x08)

	void PreConstruct(bool IsDesignTime); // Function ItemShopPipButton.ItemShopPipButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ItemShopPipButton.ItemShopPipButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function ItemShopPipButton.ItemShopPipButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function ItemShopPipButton.ItemShopPipButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ItemShopPipButton(int32_t EntryPoint); // Function ItemShopPipButton.ItemShopPipButton_C.ExecuteUbergraph_ItemShopPipButton // (Final|UbergraphFunction) // @ game+0xd67374
};

