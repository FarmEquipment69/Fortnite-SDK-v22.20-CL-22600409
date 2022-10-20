// WidgetBlueprintGeneratedClass FortAutoRunNotificationWidget.FortAutoRunNotificationWidget_C
// Size: 0x328 (Inherited: 0x2f0)
struct UFortAutoRunNotificationWidget_C : UFortAutoRunNotificationWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* Outro; // 0x2f8(0x08)
	struct UWidgetAnimation* Intro; // 0x300(0x08)
	struct UFortLazyImage* Image_Background; // 0x308(0x08)
	struct UImage* Image_Run; // 0x310(0x08)
	struct UOverlay* ; // 0x318(0x08)
	struct UCommonTextBlock* Text; // 0x320(0x08)

	void OnAutoRunEnabled(bool bAutoRunEnabled); // Function FortAutoRunNotificationWidget.FortAutoRunNotificationWidget_C.OnAutoRunEnabled // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function FortAutoRunNotificationWidget.FortAutoRunNotificationWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_FortAutoRunNotificationWidget(int32_t EntryPoint); // Function FortAutoRunNotificationWidget.FortAutoRunNotificationWidget_C.ExecuteUbergraph_FortAutoRunNotificationWidget // (Final|UbergraphFunction) // @ game+0xd67374
};

