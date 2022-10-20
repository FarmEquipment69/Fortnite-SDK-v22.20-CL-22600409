// WidgetBlueprintGeneratedClass EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C
// Size: 0x1530 (Inherited: 0x14e0)
struct UEventTeamMatchHistoryEntry_C : UFortEventTeamMatchHistoryEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14e0(0x08)
	struct UWidgetAnimation* Selected; // 0x14e8(0x08)
	struct UCommonBorder* Border_Zebra; // 0x14f0(0x08)
	struct UImage* Image_OnlineStatus; // 0x14f8(0x08)
	struct UImage* Image_SelectedBG; // 0x1500(0x08)
	struct UCommonTextBlock* Text_ReplayInteraction; // 0x1508(0x08)
	struct FMulticastInlineDelegate Hovered; // 0x1510(0x10)
	struct FMulticastInlineDelegate Unhovered; // 0x1520(0x10)

	void BP_OnHovered(); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_EventTeamMatchHistoryEntry(int32_t EntryPoint); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.ExecuteUbergraph_EventTeamMatchHistoryEntry // (Final|UbergraphFunction) // @ game+0xd67374
	void Unhovered__DelegateSignature(); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.Unhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Hovered__DelegateSignature(); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.Hovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

