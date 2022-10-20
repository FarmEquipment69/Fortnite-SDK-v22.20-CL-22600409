// WidgetBlueprintGeneratedClass WBP_PopupTooltip.WBP_PopupTooltip_C
// Size: 0x369 (Inherited: 0x2b8)
struct UWBP_PopupTooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UWidgetAnimation* HideAnimation; // 0x2c0(0x08)
	struct UWidgetAnimation* ShowAnimation; // 0x2c8(0x08)
	struct UImage* Image_Arrow; // 0x2d0(0x08)
	struct UCommonRichTextBlock* RichText_SecondaryLine; // 0x2d8(0x08)
	struct UCommonTextBlock* Text_MainText; // 0x2e0(0x08)
	struct FText FirstLineText; // 0x2e8(0x18)
	struct FText SecondLineRichText; // 0x300(0x18)
	struct FMargin ArrowPadding; // 0x318(0x10)
	enum class EHorizontalAlignment ArrowHorizontalAlignment; // 0x328(0x01)
	enum class EVerticalAlignment ArrowVerticalAlignment; // 0x329(0x01)
	char pad_32A[0x6]; // 0x32a(0x06)
	struct FWidgetTransform ArrowTransform; // 0x330(0x38)
	bool IsShowing; // 0x368(0x01)

	void SetFirstLineText(struct FText FirstLineText); // Function WBP_PopupTooltip.WBP_PopupTooltip_C.SetFirstLineText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function WBP_PopupTooltip.WBP_PopupTooltip_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void HideNotification(); // Function WBP_PopupTooltip.WBP_PopupTooltip_C.HideNotification // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShowNotification(); // Function WBP_PopupTooltip.WBP_PopupTooltip_C.ShowNotification // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function WBP_PopupTooltip.WBP_PopupTooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function WBP_PopupTooltip.WBP_PopupTooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_WBP_PopupTooltip(int32_t EntryPoint); // Function WBP_PopupTooltip.WBP_PopupTooltip_C.ExecuteUbergraph_WBP_PopupTooltip // (Final|UbergraphFunction) // @ game+0xd67374
};

