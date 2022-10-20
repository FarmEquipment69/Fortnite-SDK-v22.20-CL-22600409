// WidgetBlueprintGeneratedClass Lightbox.Lightbox_C
// Size: 0x378 (Inherited: 0x2e0)
struct ULightbox_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* FadeOut; // 0x2e8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x2f0(0x08)
	struct UBorder* Border_Darken; // 0x2f8(0x08)
	struct UButton* ClickCatcher; // 0x300(0x08)
	struct UNamedSlot* Content; // 0x308(0x08)
	struct UBorder* Dimmer; // 0x310(0x08)
	struct USafeZone* ; // 0x318(0x08)
	struct UCommonVisibilityWidgetLegacy* WindowButtons; // 0x320(0x08)
	struct UOverlay* WindowsOverlay; // 0x328(0x08)
	struct Uwindowchromebuttons_C* WindowTitleBar; // 0x330(0x08)
	struct FMulticastInlineDelegate IntroEnded; // 0x338(0x10)
	struct FMulticastInlineDelegate OutroEnded; // 0x348(0x10)
	bool ShowWindowControlButtons; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	double DimAmount; // 0x360(0x08)
	struct FLinearColor BackgroundColor; // 0x368(0x10)

	void RemoveContent(); // Function Lightbox.Lightbox_C.RemoveContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AddContent(struct UCommonUserWidget* Content); // Function Lightbox.Lightbox_C.AddContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Outro(); // Function Lightbox.Lightbox_C.Outro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Intro(); // Function Lightbox.Lightbox_C.Intro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function Lightbox.Lightbox_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function Lightbox.Lightbox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function Lightbox.Lightbox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void (); // Function Lightbox.Lightbox_C. // (BlueprintEvent) // @ game+0xd67374
	void (); // Function Lightbox.Lightbox_C. // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Lightbox(int32_t EntryPoint); // Function Lightbox.Lightbox_C.ExecuteUbergraph_Lightbox // (Final|UbergraphFunction) // @ game+0xd67374
	void OutroEnded__DelegateSignature(); // Function Lightbox.Lightbox_C.OutroEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void IntroEnded__DelegateSignature(); // Function Lightbox.Lightbox_C.IntroEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

