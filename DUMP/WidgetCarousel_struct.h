// ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
// Size: 0x540 (Inherited: 0x08)
struct FWidgetCarouselNavigationButtonStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FButtonStyle InnerButtonStyle; // 0x10(0x3b0)
	struct FSlateBrush NavigationButtonLeftImage; // 0x3c0(0xc0)
	struct FSlateBrush NavigationButtonRightImage; // 0x480(0xc0)
};

// ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
// Size: 0xbe0 (Inherited: 0x08)
struct FWidgetCarouselNavigationBarStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush HighlightBrush; // 0x10(0xc0)
	struct FButtonStyle LeftButtonStyle; // 0xd0(0x3b0)
	struct FButtonStyle CenterButtonStyle; // 0x480(0x3b0)
	struct FButtonStyle RightButtonStyle; // 0x830(0x3b0)
};

