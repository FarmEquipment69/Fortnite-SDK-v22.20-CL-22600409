// WidgetBlueprintGeneratedClass TournamentLiveGamesEntry.TournamentLiveGamesEntry_C
// Size: 0x14c8 (Inherited: 0x14a0)
struct UTournamentLiveGamesEntry_C : UFortTournamentLiveGameSessionEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14a0(0x08)
	struct UWidgetAnimation* Selected; // 0x14a8(0x08)
	struct UCommonBorder* CommonBorder_IsPlayer; // 0x14b0(0x08)
	struct UCommonBorder* CommonBorder_Selected; // 0x14b8(0x08)
	struct UCommonBorder* CommonBorder_Zebra; // 0x14c0(0x08)

	void OnEntrySet(int32_t EntryIndex); // Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.OnEntrySet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TournamentLiveGamesEntry(int32_t EntryPoint); // Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.ExecuteUbergraph_TournamentLiveGamesEntry // (Final|UbergraphFunction) // @ game+0xd67374
};

