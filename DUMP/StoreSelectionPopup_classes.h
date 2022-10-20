// WidgetBlueprintGeneratedClass StoreSelectionPopup.StoreSelectionPopup_C
// Size: 0x588 (Inherited: 0x568)
struct UStoreSelectionPopup_C : UFortMtxStoreSelectionPopup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	struct UWidgetAnimation* Intro; // 0x570(0x08)
	struct UImage* SpeedLines; // 0x578(0x08)
	struct UCommonTextBlock* StorePrompt_Header; // 0x580(0x08)

	void BP_OnActivated(); // Function StoreSelectionPopup.StoreSelectionPopup_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_StoreSelectionPopup(int32_t EntryPoint); // Function StoreSelectionPopup.StoreSelectionPopup_C.ExecuteUbergraph_StoreSelectionPopup // (Final|UbergraphFunction) // @ game+0xd67374
};

