// WidgetBlueprintGeneratedClass ArenaPersonalView.ArenaPersonalView_C
// Size: 0x7d8 (Inherited: 0x7a8)
struct UArenaPersonalView_C : UFortArenaPersonalDivisionView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7a8(0x08)
	struct UCommonBorder* CommonBorder_ContainerBG; // 0x7b0(0x08)
	struct UCommonTextBlock* FunTitle; // 0x7b8(0x08)
	struct UHorizontalBox* HorizontalBox_DivisionProgress; // 0x7c0(0x08)
	struct UHorizontalBox* HorizontalBoxHype; // 0x7c8(0x08)
	struct UImage* ; // 0x7d0(0x08)

	void Colorize(struct FFortTournamentDisplayInfo Color Info); // Function ArenaPersonalView.ArenaPersonalView_C.Colorize // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ArenaPersonalView(int32_t EntryPoint); // Function ArenaPersonalView.ArenaPersonalView_C.ExecuteUbergraph_ArenaPersonalView // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

