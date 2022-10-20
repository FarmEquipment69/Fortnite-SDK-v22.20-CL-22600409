// WidgetBlueprintGeneratedClass ProgressiveItem_Tooltip.ProgressiveItem_Tooltip_C
// Size: 0x426 (Inherited: 0x2b8)
struct UProgressiveItem_Tooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UWidgetAnimation* FloatLoop; // 0x2c0(0x08)
	struct UWidgetAnimation* burstLoop; // 0x2c8(0x08)
	struct UWidgetAnimation* Show; // 0x2d0(0x08)
	struct UHorizontalBox* HorizontalBoxcontent; // 0x2d8(0x08)
	struct UImage* Icon; // 0x2e0(0x08)
	struct UImage* Image_Arrow; // 0x2e8(0x08)
	struct UCommonRichTextBlock* Text_Tooltip; // 0x2f0(0x08)
	struct FText Tooltip Text; // 0x2f8(0x18)
	struct FSlateBrush In Brush; // 0x310(0xc0)
	enum class EHorizontalAlignment In Horizontal Alignment; // 0x3d0(0x01)
	enum class EVerticalAlignment In Vertical Alignment; // 0x3d1(0x01)
	char pad_3D2[0x6]; // 0x3d2(0x06)
	struct FWidgetTransform In Transform; // 0x3d8(0x38)
	bool Show Icon; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	struct FMargin Content Padding; // 0x414(0x10)
	bool ShouldShowToolTip; // 0x424(0x01)
	bool In Auto Wrap Text; // 0x425(0x01)

	void Update Text(struct FText& InText); // Function ProgressiveItem_Tooltip.ProgressiveItem_Tooltip_C.Update Text // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Finished_BFEB1DDE42F9DC9A32C103B86238359F(); // Function ProgressiveItem_Tooltip.ProgressiveItem_Tooltip_C.Finished_BFEB1DDE42F9DC9A32C103B86238359F // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function ProgressiveItem_Tooltip.ProgressiveItem_Tooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ToggleTooltip(bool Visible); // Function ProgressiveItem_Tooltip.ProgressiveItem_Tooltip_C.ToggleTooltip // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ProgressiveItem_Tooltip.ProgressiveItem_Tooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ProgressiveItem_Tooltip(int32_t EntryPoint); // Function ProgressiveItem_Tooltip.ProgressiveItem_Tooltip_C.ExecuteUbergraph_ProgressiveItem_Tooltip // (Final|UbergraphFunction) // @ game+0xd67374
};

