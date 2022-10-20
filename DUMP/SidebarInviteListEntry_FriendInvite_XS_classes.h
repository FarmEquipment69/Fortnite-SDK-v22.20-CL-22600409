// WidgetBlueprintGeneratedClass SidebarInviteListEntry_FriendInvite_XS.SidebarInviteListEntry_FriendInvite_XS_C
// Size: 0x1598 (Inherited: 0x1510)
struct USidebarInviteListEntry_FriendInvite_XS_C : UFortConnectionsUserListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1510(0x08)
	struct UWidgetAnimation* Unhovered; // 0x1518(0x08)
	struct UWidgetAnimation* Selected; // 0x1520(0x08)
	struct UWidgetAnimation* Hovered; // 0x1528(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x1530(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1538(0x08)
	struct UBorder* EntryBorder; // 0x1540(0x08)
	struct UImage* Image_Notification; // 0x1548(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_LastInteraction; // 0x1550(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_MutualFriends; // 0x1558(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_SocialName; // 0x1560(0x08)
	struct FLinearColor Online; // 0x1568(0x10)
	struct FLinearColor Offline; // 0x1578(0x10)
	struct FLinearColor Away; // 0x1588(0x10)

	void HandleOnlineIndicatorView(char OnlineStatus); // Function SidebarInviteListEntry_FriendInvite_XS.SidebarInviteListEntry_FriendInvite_XS_C.HandleOnlineIndicatorView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidebarInviteListEntry_FriendInvite_XS.SidebarInviteListEntry_FriendInvite_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function SidebarInviteListEntry_FriendInvite_XS.SidebarInviteListEntry_FriendInvite_XS_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SidebarInviteListEntry_FriendInvite_XS.SidebarInviteListEntry_FriendInvite_XS_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function SidebarInviteListEntry_FriendInvite_XS.SidebarInviteListEntry_FriendInvite_XS_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarInviteListEntry_FriendInvite_XS(int32_t EntryPoint); // Function SidebarInviteListEntry_FriendInvite_XS.SidebarInviteListEntry_FriendInvite_XS_C.ExecuteUbergraph_SidebarInviteListEntry_FriendInvite_XS // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

