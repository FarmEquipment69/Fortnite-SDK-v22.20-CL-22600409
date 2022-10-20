// WidgetBlueprintGeneratedClass ShowdownPosterViolator.ShowdownPosterViolator_C
// Size: 0x358 (Inherited: 0x328)
struct UShowdownPosterViolator_C : UFortTournamentPosterViolator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UCommonBorder* FutureEventViolator; // 0x330(0x08)
	struct UCommonBorder* InformationViolator; // 0x338(0x08)
	struct UCommonBorder* LiveEventViolator; // 0x340(0x08)
	struct ULiveViolator_C* LiveViolator; // 0x348(0x08)
	struct UCommonBorder* NoViolator; // 0x350(0x08)

	void OnViolatorStateRefreshed(enum class ETournmentPosterViolatorState NewTimeState); // Function ShowdownPosterViolator.ShowdownPosterViolator_C.OnViolatorStateRefreshed // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ShowdownPosterViolator(int32_t EntryPoint); // Function ShowdownPosterViolator.ShowdownPosterViolator_C.ExecuteUbergraph_ShowdownPosterViolator // (Final|UbergraphFunction) // @ game+0xd67374
};

