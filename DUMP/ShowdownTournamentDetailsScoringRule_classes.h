// WidgetBlueprintGeneratedClass ShowdownTournamentDetailsScoringRule.ShowdownTournamentDetailsScoringRule_C
// Size: 0x308 (Inherited: 0x2e0)
struct UShowdownTournamentDetailsScoringRule_C : UCommonUserWidget {
	struct UCommonBorder* CommonBorder_BG; // 0x2e0(0x08)
	struct UCommonBorder* CommonBorder_TextContainer; // 0x2e8(0x08)
	struct UCommonLazyImage* RuleIcon; // 0x2f0(0x08)
	struct UCommonTextBlock* RuleNameText; // 0x2f8(0x08)
	struct UCommonTextBlock* RuleValueText; // 0x300(0x08)

	void SetData(struct FFortShowdownScoringRuleInfo ScoreRule, struct FFortTournamentDisplayInfo TournamentDisplayInfo); // Function ShowdownTournamentDetailsScoringRule.ShowdownTournamentDetailsScoringRule_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

