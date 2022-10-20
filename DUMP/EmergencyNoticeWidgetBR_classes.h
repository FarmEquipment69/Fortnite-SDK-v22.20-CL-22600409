// WidgetBlueprintGeneratedClass EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C
// Size: 0x318 (Inherited: 0x2e8)
struct UEmergencyNoticeWidgetBR_C : UEmergencyNoticeBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* Entrance; // 0x2f0(0x08)
	struct UCommonTextBlock* BodyText; // 0x2f8(0x08)
	struct UHorizontalBox* HB_Content; // 0x300(0x08)
	struct UCommonTextBlock* TitleText; // 0x308(0x08)
	struct USizeBox* VisibilitySB; // 0x310(0x08)

	void Show Notice(); // Function EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C.Show Notice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShowNotice(struct FText& Title, struct FText& Body); // Function EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C.ShowNotice // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void HideNotice(); // Function EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C.HideNotice // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_EmergencyNoticeWidgetBR(int32_t EntryPoint); // Function EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C.ExecuteUbergraph_EmergencyNoticeWidgetBR // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

