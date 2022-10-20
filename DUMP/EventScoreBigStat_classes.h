// WidgetBlueprintGeneratedClass EventScoreBigStat.EventScoreBigStat_C
// Size: 0x2d8 (Inherited: 0x2b8)
struct UEventScoreBigStat_C : UUserWidget {
	struct UCommonBorder* CommonBorder_GoalScore; // 0x2b8(0x08)
	struct URichTextBlock* RichTextBlock_GoalScore; // 0x2c0(0x08)
	struct UCommonTextBlock* StatLabelText; // 0x2c8(0x08)
	struct UCommonTextBlock* StatValueText; // 0x2d0(0x08)

	void SetData(struct FText Label, int32_t Value, int32_t ValueContext, struct FText FormatterText, struct FFortTournamentDisplayInfo Tournament Display Info); // Function EventScoreBigStat.EventScoreBigStat_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

