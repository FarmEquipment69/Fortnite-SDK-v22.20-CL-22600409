// WidgetBlueprintGeneratedClass Upsell_TutorialTooltip.Upsell_TutorialTooltip_C
// Size: 0x456 (Inherited: 0x2e0)
struct UUpsell_TutorialTooltip_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* FloatLoop; // 0x2e8(0x08)
	struct UWidgetAnimation* burstLoop; // 0x2f0(0x08)
	struct UWidgetAnimation* Show; // 0x2f8(0x08)
	struct UHorizontalBox* HorizontalBoxcontent; // 0x300(0x08)
	struct UImage* Icon; // 0x308(0x08)
	struct UImage* Image_Arrow; // 0x310(0x08)
	struct UCommonRichTextBlock* Text_Tooltip; // 0x318(0x08)
	struct FText In Text; // 0x320(0x18)
	bool In Auto Wrap Text; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct FSlateBrush In Brush; // 0x340(0xc0)
	enum class EHorizontalAlignment In Horizontal Alignment; // 0x400(0x01)
	enum class EVerticalAlignment In Vertical Alignment; // 0x401(0x01)
	char pad_402[0x6]; // 0x402(0x06)
	struct FWidgetTransform In Transform; // 0x408(0x38)
	bool Show Icon; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	struct FMargin Content Padding; // 0x444(0x10)
	bool ShouldShowToolTip; // 0x454(0x01)
	bool bEnabled; // 0x455(0x01)

	void SetText(struct FText Text); // Function Upsell_TutorialTooltip.Upsell_TutorialTooltip_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetTooltipEnabled(bool bInEnabled); // Function Upsell_TutorialTooltip.Upsell_TutorialTooltip_C.SetTooltipEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function Upsell_TutorialTooltip.Upsell_TutorialTooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ShowTooltip(); // Function Upsell_TutorialTooltip.Upsell_TutorialTooltip_C.ShowTooltip // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HideTooltip(); // Function Upsell_TutorialTooltip.Upsell_TutorialTooltip_C.HideTooltip // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Upsell_TutorialTooltip(int32_t EntryPoint); // Function Upsell_TutorialTooltip.Upsell_TutorialTooltip_C.ExecuteUbergraph_Upsell_TutorialTooltip // (Final|UbergraphFunction) // @ game+0xd67374
};

