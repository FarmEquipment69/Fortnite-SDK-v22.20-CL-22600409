// WidgetBlueprintGeneratedClass ProgressiveHeaderBanner.ProgressiveHeaderBanner_C
// Size: 0x310 (Inherited: 0x2b8)
struct UProgressiveHeaderBanner_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UBorder* Banner_Border; // 0x2c0(0x08)
	struct UCommonRichTextBlock* Banner_Text; // 0x2c8(0x08)
	struct UImage* Image; // 0x2d0(0x08)
	struct FText Debug Text Preview; // 0x2d8(0x18)
	struct FLinearColor Subscribed; // 0x2f0(0x10)
	struct FLinearColor Unsubscribed; // 0x300(0x10)

	void Update Text(struct FText InText); // Function ProgressiveHeaderBanner.ProgressiveHeaderBanner_C.Update Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Banner State(struct FText Text, bool Current Sets Complete, bool Subscribed); // Function ProgressiveHeaderBanner.ProgressiveHeaderBanner_C.Update Banner State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function ProgressiveHeaderBanner.ProgressiveHeaderBanner_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ProgressiveHeaderBanner(int32_t EntryPoint); // Function ProgressiveHeaderBanner.ProgressiveHeaderBanner_C.ExecuteUbergraph_ProgressiveHeaderBanner // (Final|UbergraphFunction) // @ game+0xd67374
};

