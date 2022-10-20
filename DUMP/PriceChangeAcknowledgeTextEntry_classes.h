// WidgetBlueprintGeneratedClass PriceChangeAcknowledgeTextEntry.PriceChangeAcknowledgeTextEntry_C
// Size: 0x2e0 (Inherited: 0x2b8)
struct UPriceChangeAcknowledgeTextEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UCommonRichTextBlock* Description; // 0x2c0(0x08)
	struct FText Text; // 0x2c8(0x18)

	void PreConstruct(bool IsDesignTime); // Function PriceChangeAcknowledgeTextEntry.PriceChangeAcknowledgeTextEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function PriceChangeAcknowledgeTextEntry.PriceChangeAcknowledgeTextEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetText(struct FText InText); // Function PriceChangeAcknowledgeTextEntry.PriceChangeAcknowledgeTextEntry_C.SetText // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PriceChangeAcknowledgeTextEntry(int32_t EntryPoint); // Function PriceChangeAcknowledgeTextEntry.PriceChangeAcknowledgeTextEntry_C.ExecuteUbergraph_PriceChangeAcknowledgeTextEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

