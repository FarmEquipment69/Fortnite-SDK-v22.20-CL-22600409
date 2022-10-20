// WidgetBlueprintGeneratedClass SidebarUserSearchResultListEntry_XS.SidebarUserSearchResultListEntry_XS_C
// Size: 0x15b0 (Inherited: 0x1540)
struct USidebarUserSearchResultListEntry_XS_C : UFortUserSearchResultListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1540(0x08)
	struct UWidgetAnimation* Unhovered; // 0x1548(0x08)
	struct UWidgetAnimation* Selected; // 0x1550(0x08)
	struct UWidgetAnimation* Hovered; // 0x1558(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1560(0x08)
	struct UImage* Image_Lock; // 0x1568(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_MutualFriends; // 0x1570(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_SocialName; // 0x1578(0x08)
	struct UCommonRichTextBlock* Text_DisplayName; // 0x1580(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1588(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1590(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x15a0(0x10)

	void BP_OnUnhovered(); // Function SidebarUserSearchResultListEntry_XS.SidebarUserSearchResultListEntry_XS_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidebarUserSearchResultListEntry_XS.SidebarUserSearchResultListEntry_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SidebarUserSearchResultListEntry_XS.SidebarUserSearchResultListEntry_XS_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarUserSearchResultListEntry_XS(int32_t EntryPoint); // Function SidebarUserSearchResultListEntry_XS.SidebarUserSearchResultListEntry_XS_C.ExecuteUbergraph_SidebarUserSearchResultListEntry_XS // (Final|UbergraphFunction) // @ game+0xd67374
};

