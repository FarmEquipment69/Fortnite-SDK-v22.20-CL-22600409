// WidgetBlueprintGeneratedClass WBP_PanelRebootRally_Header.WBP_PanelRebootRally_Header_C
// Size: 0x370 (Inherited: 0x2e8)
struct UWBP_PanelRebootRally_Header_C : UFortSidebarPanelRebootHeader {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* float; // 0x2f0(0x08)
	struct UWidgetAnimation* Intro; // 0x2f8(0x08)
	struct UWidgetAnimation* Default; // 0x300(0x08)
	struct UImage* Image_Emoticon; // 0x308(0x08)
	struct UImage* Image_Glider; // 0x310(0x08)
	struct UImage* Image_Pickaxe; // 0x318(0x08)
	struct UImage* Image_RebootRallyLogo; // 0x320(0x08)
	struct UImage* Image_Wrap; // 0x328(0x08)
	struct UImage* Image_ZoomRays; // 0x330(0x08)
	struct UCommonRichTextBlock* RichText_RebootRallyDetails; // 0x338(0x08)
	struct FText Text_Eligible; // 0x340(0x18)
	struct FText Text_Ineligible; // 0x358(0x18)

	void Construct(); // Function WBP_PanelRebootRally_Header.WBP_PanelRebootRally_Header_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_WBP_PanelRebootRally_Header(int32_t EntryPoint); // Function WBP_PanelRebootRally_Header.WBP_PanelRebootRally_Header_C.ExecuteUbergraph_WBP_PanelRebootRally_Header // (Final|UbergraphFunction) // @ game+0xd67374
};

