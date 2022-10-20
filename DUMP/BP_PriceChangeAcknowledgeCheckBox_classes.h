// WidgetBlueprintGeneratedClass BP_PriceChangeAcknowledgeCheckBox.BP_PriceChangeAcknowledgeCheckBox_C
// Size: 0x1468 (Inherited: 0x1430)
struct UBP_PriceChangeAcknowledgeCheckBox_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* Hover; // 0x1438(0x08)
	struct UWidgetAnimation* Check; // 0x1440(0x08)
	struct UWidgetAnimation* burst; // 0x1448(0x08)
	struct UHorizontalBox* HB_BundleText; // 0x1450(0x08)
	struct UImage* Image_Check; // 0x1458(0x08)
	struct UImage* Image_Checkbox; // 0x1460(0x08)

	void BP_OnHovered(); // Function BP_PriceChangeAcknowledgeCheckBox.BP_PriceChangeAcknowledgeCheckBox_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function BP_PriceChangeAcknowledgeCheckBox.BP_PriceChangeAcknowledgeCheckBox_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function BP_PriceChangeAcknowledgeCheckBox.BP_PriceChangeAcknowledgeCheckBox_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function BP_PriceChangeAcknowledgeCheckBox.BP_PriceChangeAcknowledgeCheckBox_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox(int32_t EntryPoint); // Function BP_PriceChangeAcknowledgeCheckBox.BP_PriceChangeAcknowledgeCheckBox_C.ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox // (Final|UbergraphFunction) // @ game+0xd67374
};

