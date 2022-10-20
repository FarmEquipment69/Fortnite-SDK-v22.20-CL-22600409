// WidgetBlueprintGeneratedClass WBP_Modal_ReviewYourSettings.WBP_Modal_ReviewYourSettings_C
// Size: 0x510 (Inherited: 0x4e0)
struct UWBP_Modal_ReviewYourSettings_C : UFortReviewYourSettingsModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* Containment; // 0x4e8(0x08)
	struct USafeZone* ContentSZ; // 0x4f0(0x08)
	struct UImage* Image_BackgroundBottomBar; // 0x4f8(0x08)
	struct UImage* Lightbox_HitTestBlocker; // 0x500(0x08)
	struct USafeZone* MobileClose; // 0x508(0x08)

	void OnModalBackout(); // Function WBP_Modal_ReviewYourSettings.WBP_Modal_ReviewYourSettings_C.OnModalBackout // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_WBP_Modal_ReviewYourSettings(int32_t EntryPoint); // Function WBP_Modal_ReviewYourSettings.WBP_Modal_ReviewYourSettings_C.ExecuteUbergraph_WBP_Modal_ReviewYourSettings // (Final|UbergraphFunction) // @ game+0xd67374
};

