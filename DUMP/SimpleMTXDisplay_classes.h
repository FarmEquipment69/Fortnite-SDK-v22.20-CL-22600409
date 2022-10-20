// WidgetBlueprintGeneratedClass SimpleMTXDisplay.SimpleMTXDisplay_C
// Size: 0x2f0 (Inherited: 0x2e0)
struct USimpleMTXDisplay_C : UFortSimpleMTXDisplay {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UCommonRichTextBlock* AvailableAmountText; // 0x2e8(0x08)

	void OnUpdateAvailableMTX(int32_t AvailableBalance); // Function SimpleMTXDisplay.SimpleMTXDisplay_C.OnUpdateAvailableMTX // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SimpleMTXDisplay(int32_t EntryPoint); // Function SimpleMTXDisplay.SimpleMTXDisplay_C.ExecuteUbergraph_SimpleMTXDisplay // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

