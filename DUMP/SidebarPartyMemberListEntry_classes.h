// WidgetBlueprintGeneratedClass SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C
// Size: 0x15a0 (Inherited: 0x1540)
struct USidebarPartyMemberListEntry_C : UFortPartyMemberListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1540(0x08)
	struct UWidgetAnimation* Unhovered; // 0x1548(0x08)
	struct UWidgetAnimation* Selected; // 0x1550(0x08)
	struct UWidgetAnimation* Hovered; // 0x1558(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1560(0x08)
	struct UHorizontalBox* HBox_SocialName; // 0x1568(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_SocialName; // 0x1570(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1578(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1580(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1590(0x10)

	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarPartyMemberListEntry(int32_t EntryPoint); // Function SidebarPartyMemberListEntry.SidebarPartyMemberListEntry_C.ExecuteUbergraph_SidebarPartyMemberListEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

