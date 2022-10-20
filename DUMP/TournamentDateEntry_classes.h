// WidgetBlueprintGeneratedClass TournamentDateEntry.TournamentDateEntry_C
// Size: 0x7c0 (Inherited: 0x768)
struct UTournamentDateEntry_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x768(0x08)
	struct UCommonBorder* CommonBorder_DateContent; // 0x770(0x08)
	struct UCommonTextBlock* CommonTextBlock_Date; // 0x778(0x08)
	struct UCommonTextBlock* CommonTextBlock_Time; // 0x780(0x08)
	struct UCommonTextBlock* CommonTextBlock_Title; // 0x788(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_EntryType; // 0x790(0x08)
	struct UImage* Image_Strkethrough; // 0x798(0x08)
	bool isTitle; // 0x7a0(0x01)
	char pad_7A1[0x7]; // 0x7a1(0x07)
	struct FText Title; // 0x7a8(0x18)

	void PreConstruct(bool IsDesignTime); // Function TournamentDateEntry.TournamentDateEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void EventColor(struct FFortTournamentDisplayInfo& showdownData); // Function TournamentDateEntry.TournamentDateEntry_C.EventColor // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RefreshDataBP(); // Function TournamentDateEntry.TournamentDateEntry_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TournamentDateEntry(int32_t EntryPoint); // Function TournamentDateEntry.TournamentDateEntry_C.ExecuteUbergraph_TournamentDateEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

