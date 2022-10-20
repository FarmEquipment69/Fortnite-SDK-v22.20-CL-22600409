// WidgetBlueprintGeneratedClass SidebarJoinablePartyEntry.SidebarJoinablePartyEntry_C
// Size: 0x15c0 (Inherited: 0x1540)
struct USidebarJoinablePartyEntry_C : UFortJoinablePartyListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1540(0x08)
	struct UWidgetAnimation* Selected; // 0x1548(0x08)
	struct UWidgetAnimation* Hovered; // 0x1550(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1558(0x08)
	struct UBorder* EntryBorder; // 0x1560(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_DisplayNames; // 0x1568(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_PartyPresence; // 0x1570(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_PartyPresence_Hover; // 0x1578(0x08)
	struct UCommonRichTextBlock* Text_PartyPresence_Hover_Marquee; // 0x1580(0x08)
	struct UCommonRichTextBlock* Text_PartyPresence_Marquee; // 0x1588(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1590(0x08)
	struct FSlateColor InviteFontColor; // 0x1598(0x14)
	struct FSlateColor DefaultFontColor; // 0x15ac(0x14)

	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidebarJoinablePartyEntry.SidebarJoinablePartyEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function SidebarJoinablePartyEntry.SidebarJoinablePartyEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SidebarJoinablePartyEntry.SidebarJoinablePartyEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPartyPresenceTextUpdated(); // Function SidebarJoinablePartyEntry.SidebarJoinablePartyEntry_C.OnPartyPresenceTextUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarJoinablePartyEntry(int32_t EntryPoint); // Function SidebarJoinablePartyEntry.SidebarJoinablePartyEntry_C.ExecuteUbergraph_SidebarJoinablePartyEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

