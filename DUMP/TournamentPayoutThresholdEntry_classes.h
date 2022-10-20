// WidgetBlueprintGeneratedClass TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C
// Size: 0x318 (Inherited: 0x2f0)
struct UTournamentPayoutThresholdEntry_C : UFortTournamentPayoutThresholdEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* Selected; // 0x2f8(0x08)
	struct UCommonBorder* CommonBorder_IsPlayer; // 0x300(0x08)
	struct UCommonBorder* CommonBorder_Selected; // 0x308(0x08)
	struct UCommonBorder* CommonBorder_Zebra; // 0x310(0x08)

	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPayoutDataSet(int32_t EntryIndex); // Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.OnPayoutDataSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TournamentPayoutThresholdEntry(int32_t EntryPoint); // Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.ExecuteUbergraph_TournamentPayoutThresholdEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

