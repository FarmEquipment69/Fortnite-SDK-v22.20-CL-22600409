// WidgetBlueprintGeneratedClass SupportModal.SupportModal_C
// Size: 0x460 (Inherited: 0x408)
struct USupportModal_C : UAthenaItemShopTimerInfoModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UWidgetAnimation* ShowUp; // 0x410(0x08)
	struct UCommonRichTextBlock* ; // 0x418(0x08)
	struct UImage* Containment; // 0x420(0x08)
	struct USafeZone* ContentSZ; // 0x428(0x08)
	struct UImage* Image_BackgroundBottomBar; // 0x430(0x08)
	struct UImage* Lightbox_HitTestBlocker; // 0x438(0x08)
	struct USafeZone* MobileClose; // 0x440(0x08)
	struct UScrollBox* PrimaryScrollBox; // 0x448(0x08)
	struct UImage* T-Icon-Backpacks-220-FarmerFemale-L; // 0x450(0x08)
	struct UVerticalBox* VBox_PlatformSpecific; // 0x458(0x08)

	void OnModalBackout(); // Function SupportModal.SupportModal_C.OnModalBackout // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function SupportModal.SupportModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SupportModal(int32_t EntryPoint); // Function SupportModal.SupportModal_C.ExecuteUbergraph_SupportModal // (Final|UbergraphFunction) // @ game+0xd67374
};

