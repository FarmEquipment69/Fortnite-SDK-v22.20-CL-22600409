// WidgetBlueprintGeneratedClass PCB_InfoPanel.PCB_InfoPanel_C
// Size: 0x370 (Inherited: 0x308)
struct UPCB_InfoPanel_C : UFortPCBInfoPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UImage* BoltL; // 0x310(0x08)
	struct UImage* BoltR; // 0x318(0x08)
	struct UImage* Border; // 0x320(0x08)
	struct UImage* CrownGlow; // 0x328(0x08)
	struct UImage* HandGlow; // 0x330(0x08)
	struct UImage* HeaderGlow; // 0x338(0x08)
	struct UImage* IconGlow; // 0x340(0x08)
	struct UImage* ; // 0x348(0x08)
	struct UImage* ; // 0x350(0x08)
	struct UImage* PCBIcon; // 0x358(0x08)
	struct UCommonTextBlock* Text_Body; // 0x360(0x08)
	struct UCommonTextBlock* Text_Header; // 0x368(0x08)

	void CmsDataRead(); // Function PCB_InfoPanel.PCB_InfoPanel_C.CmsDataRead // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PCB_InfoPanel(int32_t EntryPoint); // Function PCB_InfoPanel.PCB_InfoPanel_C.ExecuteUbergraph_PCB_InfoPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

