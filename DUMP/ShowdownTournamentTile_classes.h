// WidgetBlueprintGeneratedClass ShowdownTournamentTile.ShowdownTournamentTile_C
// Size: 0x14d9 (Inherited: 0x14b0)
struct UShowdownTournamentTile_C : UFortShowdownTournamentTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b0(0x08)
	struct UWidgetAnimation* sizeUp; // 0x14b8(0x08)
	struct UWidgetAnimation* changeFocus; // 0x14c0(0x08)
	struct UImage* Image_TileFade; // 0x14c8(0x08)
	struct USizeBox* PosterSizeBox; // 0x14d0(0x08)
	bool isFaded; // 0x14d8(0x01)

	void BP_OnSelected(); // Function ShowdownTournamentTile.ShowdownTournamentTile_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function ShowdownTournamentTile.ShowdownTournamentTile_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void EventFade(bool FadeOut); // Function ShowdownTournamentTile.ShowdownTournamentTile_C.EventFade // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ShowdownTournamentTile(int32_t EntryPoint); // Function ShowdownTournamentTile.ShowdownTournamentTile_C.ExecuteUbergraph_ShowdownTournamentTile // (Final|UbergraphFunction) // @ game+0xd67374
};

