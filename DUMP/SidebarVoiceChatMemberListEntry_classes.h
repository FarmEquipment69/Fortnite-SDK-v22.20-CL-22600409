// WidgetBlueprintGeneratedClass SidebarVoiceChatMemberListEntry.SidebarVoiceChatMemberListEntry_C
// Size: 0x1590 (Inherited: 0x1540)
struct USidebarVoiceChatMemberListEntry_C : UFortVoiceChatMemberListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1540(0x08)
	struct UWidgetAnimation* Unhovered; // 0x1548(0x08)
	struct UWidgetAnimation* Selected; // 0x1550(0x08)
	struct UWidgetAnimation* Hovered; // 0x1558(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1560(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_SocialName; // 0x1568(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1570(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1580(0x10)

	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidebarVoiceChatMemberListEntry.SidebarVoiceChatMemberListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function SidebarVoiceChatMemberListEntry.SidebarVoiceChatMemberListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SidebarVoiceChatMemberListEntry.SidebarVoiceChatMemberListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function SidebarVoiceChatMemberListEntry.SidebarVoiceChatMemberListEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarVoiceChatMemberListEntry(int32_t EntryPoint); // Function SidebarVoiceChatMemberListEntry.SidebarVoiceChatMemberListEntry_C.ExecuteUbergraph_SidebarVoiceChatMemberListEntry // (Final|UbergraphFunction) // @ game+0xd67374
};

