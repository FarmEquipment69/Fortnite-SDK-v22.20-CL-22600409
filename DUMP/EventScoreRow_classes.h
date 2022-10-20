// WidgetBlueprintGeneratedClass EventScoreRow.EventScoreRow_C
// Size: 0x2d9 (Inherited: 0x2b8)
struct UEventScoreRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UImage* ImageDivider; // 0x2c0(0x08)
	struct UCommonTextBlock* StatLabelText; // 0x2c8(0x08)
	struct UCommonTextBlock* StatValueText; // 0x2d0(0x08)
	bool FinalEntry; // 0x2d8(0x01)

	void SetData(struct FText Label, int32_t Value); // Function EventScoreRow.EventScoreRow_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function EventScoreRow.EventScoreRow_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_EventScoreRow(int32_t EntryPoint); // Function EventScoreRow.EventScoreRow_C.ExecuteUbergraph_EventScoreRow // (Final|UbergraphFunction) // @ game+0xd67374
};

