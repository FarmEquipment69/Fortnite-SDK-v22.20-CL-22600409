// WidgetBlueprintGeneratedClass BacchusItemShopCreatorButton.BacchusItemShopCreatorButton_C
// Size: 0x1542 (Inherited: 0x1520)
struct UBacchusItemShopCreatorButton_C : UFortTextButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1520(0x08)
	struct UWidgetAnimation* Hover; // 0x1528(0x08)
	struct UImage* Backing; // 0x1530(0x08)
	struct UImage* IMG_Arrow; // 0x1538(0x08)
	bool bFlipArrow; // 0x1540(0x01)
	bool bIsTop; // 0x1541(0x01)

	void BP_OnHovered(); // Function BacchusItemShopCreatorButton.BacchusItemShopCreatorButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function BacchusItemShopCreatorButton.BacchusItemShopCreatorButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BacchusItemShopCreatorButton(int32_t EntryPoint); // Function BacchusItemShopCreatorButton.BacchusItemShopCreatorButton_C.ExecuteUbergraph_BacchusItemShopCreatorButton // (Final|UbergraphFunction) // @ game+0xd67374
};

