// WidgetBlueprintGeneratedClass EventLeaderboardEntry.EventLeaderboardEntry_C
// Size: 0x1549 (Inherited: 0x1490)
struct UEventLeaderboardEntry_C : UFortEventLeaderboardEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UWidgetAnimation* Selected; // 0x1498(0x08)
	struct UCommonBorder* CommonBorder_IsPlayer; // 0x14a0(0x08)
	struct UCommonBorder* CommonBorder_Zebra; // 0x14a8(0x08)
	struct UCommonTextBlock* CommonTextBlock_TeamLine1; // 0x14b0(0x08)
	struct UCommonTextBlock* CommonTextBlock_TeamLine2; // 0x14b8(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_Rank; // 0x14c0(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_TeamSize; // 0x14c8(0x08)
	struct UImage* Image_OnlineStatus; // 0x14d0(0x08)
	struct UImage* Image_Qualified; // 0x14d8(0x08)
	struct UImage* Image_SelectedBG; // 0x14e0(0x08)
	struct UOverlay* Overlay_OnlineStatus; // 0x14e8(0x08)
	struct UOverlay* Overlay_QualifiedContent; // 0x14f0(0x08)
	struct UCommonTextBlock* Text_Rank; // 0x14f8(0x08)
	struct UCommonTextBlock* Text_Rank_First; // 0x1500(0x08)
	struct UCommonTextBlock* Text_Score; // 0x1508(0x08)
	struct UCommonTextBlock* Text_Team; // 0x1510(0x08)
	bool isZebra; // 0x1518(0x01)
	bool isPlayer; // 0x1519(0x01)
	char pad_151A[0x6]; // 0x151a(0x06)
	struct TSoftObjectPtr<UDataTable> TEMPDatatableIdentities; // 0x1520(0x28)
	bool isMatchPoint; // 0x1548(0x01)

	void SetTeamDisplayNames(struct UFortEventLeaderboardEntryData* Entry Data); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.SetTeamDisplayNames // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetEntryDetails(struct UFortEventLeaderboardEntryData* EntryData); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.SetEntryDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void EventStyleEntry(); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.EventStyleEntry // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventColorize(); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTeammateDisplayNameAdded(struct UFortEventLeaderboardEntryData* LeaderboardEntryData); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.OnTeammateDisplayNameAdded // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_EventLeaderboardEntry(int32_t EntryPoint); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.ExecuteUbergraph_EventLeaderboardEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

