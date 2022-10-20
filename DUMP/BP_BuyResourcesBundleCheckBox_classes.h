// WidgetBlueprintGeneratedClass BP_BuyResourcesBundleCheckBox.BP_BuyResourcesBundleCheckBox_C
// Size: 0x1498 (Inherited: 0x1440)
struct UBP_BuyResourcesBundleCheckBox_C : UFortBattlePassCheckBoxButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x08)
	struct UWidgetAnimation* Hover; // 0x1448(0x08)
	struct UWidgetAnimation* Check; // 0x1450(0x08)
	struct UWidgetAnimation* burst; // 0x1458(0x08)
	struct UHorizontalBox* HB_BundleText; // 0x1460(0x08)
	struct UImage* Image_burst; // 0x1468(0x08)
	struct UImage* Image_Check; // 0x1470(0x08)
	struct UImage* Image_Checkbox; // 0x1478(0x08)
	struct UCommonRichTextBlock* Text_Default; // 0x1480(0x08)
	struct UCommonRichTextBlock* Text_OneTime; // 0x1488(0x08)
	struct UWidgetSwitcher* ; // 0x1490(0x08)

	void OnStateChanged(bool bNewIsChecked); // Function BP_BuyResourcesBundleCheckBox.BP_BuyResourcesBundleCheckBox_C.OnStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function BP_BuyResourcesBundleCheckBox.BP_BuyResourcesBundleCheckBox_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function BP_BuyResourcesBundleCheckBox.BP_BuyResourcesBundleCheckBox_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function BP_BuyResourcesBundleCheckBox.BP_BuyResourcesBundleCheckBox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_BuyResourcesBundleCheckBox(int32_t EntryPoint); // Function BP_BuyResourcesBundleCheckBox.BP_BuyResourcesBundleCheckBox_C.ExecuteUbergraph_BP_BuyResourcesBundleCheckBox // (Final|UbergraphFunction) // @ game+0xd67374
};

