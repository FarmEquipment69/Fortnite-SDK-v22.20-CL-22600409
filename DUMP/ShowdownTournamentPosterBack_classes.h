// WidgetBlueprintGeneratedClass ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C
// Size: 0x840 (Inherited: 0x768)
struct UShowdownTournamentPosterBack_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x768(0x08)
	struct UCommonTextBlock* CommonTextBlock_EventDates; // 0x770(0x08)
	struct UCommonTextBlock* CommonTextBlock_MetaDate; // 0x778(0x08)
	struct UCommonTextBlock* CommonTextBlock_MetaTitle; // 0x780(0x08)
	struct UCommonTextBlock* DateText; // 0x788(0x08)
	struct UCommonTextBlock* FlavorText; // 0x790(0x08)
	struct UImage* Image_FooterWatermark; // 0x798(0x08)
	struct UScaleBox* ScaleBoxTournamentTitle; // 0x7a0(0x08)
	struct UShowdownPin_C* ShowdownPin; // 0x7a8(0x08)
	struct USizeBox* SizeBox_Pin; // 0x7b0(0x08)
	struct UCommonTextBlock* TitleLine1; // 0x7b8(0x08)
	struct UCommonTextBlock* TitleLine2; // 0x7c0(0x08)
	struct UTournamentDateEntry_C* TournamentDateEntry; // 0x7c8(0x08)
	struct UTournamentDateEntry_C* ; // 0x7d0(0x08)
	struct UTournamentDateEntry_C* ; // 0x7d8(0x08)
	struct UTournamentDateEntry_C* ; // 0x7e0(0x08)
	struct UTournamentDateEntry_C* ; // 0x7e8(0x08)
	struct UTournamentDateEntry_C* ; // 0x7f0(0x08)
	struct UTournamentDateEntry_C* ; // 0x7f8(0x08)
	struct UTournamentDateEntry_C* ; // 0x800(0x08)
	struct UTournamentDateEntry_C* ; // 0x808(0x08)
	struct UTournamentDateEntry_C* ; // 0x810(0x08)
	struct UTournamentDateEntry_C* ; // 0x818(0x08)
	struct UTournamentDateEntry_C* ; // 0x820(0x08)
	struct UTournamentDateEntry_C* ; // 0x828(0x08)
	struct UTournamentDateEntry_C* ; // 0x830(0x08)
	struct UUniformGridPanel* UniformGridPanel_DateGrid; // 0x838(0x08)

	void GetTournamentDateText(struct FText& TournamentDate); // Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.GetTournamentDateText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RefreshDataBP(); // Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void EventColorize(); // Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventPopulateEventWindowData(); // Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.EventPopulateEventWindowData // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ShowdownTournamentPosterBack(int32_t EntryPoint); // Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.ExecuteUbergraph_ShowdownTournamentPosterBack // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

