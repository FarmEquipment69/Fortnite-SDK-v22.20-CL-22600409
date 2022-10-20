// WidgetBlueprintGeneratedClass JoinablePartyActionMenu.JoinablePartyActionMenu_C
// Size: 0x528 (Inherited: 0x500)
struct UJoinablePartyActionMenu_C : UFortJoinablePartyActionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	struct UWidgetAnimation* ConfirmationOpened; // 0x508(0x08)
	struct UWidgetAnimation* Opened; // 0x510(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x518(0x08)
	struct UBorder* EntryBorder; // 0x520(0x08)

	void OnToggleConfirmation(bool bIsVisible); // Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnToggleConfirmation // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnOpened(); // Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_JoinablePartyActionMenu(int32_t EntryPoint); // Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.ExecuteUbergraph_JoinablePartyActionMenu // (Final|UbergraphFunction) // @ game+0xd67374
};

