// WidgetBlueprintGeneratedClass InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C
// Size: 0x1580 (Inherited: 0x1510)
struct UInviteListEntry_FriendInvite_XS_C : UFortConnectionsUserListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1510(0x08)
	struct UWidgetAnimation* Selected; // 0x1518(0x08)
	struct UWidgetAnimation* Hovered; // 0x1520(0x08)
	struct UImage* Arrow; // 0x1528(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x1530(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1538(0x08)
	struct UBorder* EntryBorder; // 0x1540(0x08)
	struct UCommonRichTextBlock* Text_SentRequest; // 0x1548(0x08)
	struct FLinearColor Online; // 0x1550(0x10)
	struct FLinearColor Offline; // 0x1560(0x10)
	struct FLinearColor Away; // 0x1570(0x10)

	void HandleOnlineIndicatorView(char OnlineStatus); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.HandleOnlineIndicatorView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_InviteListEntry_FriendInvite_XS(int32_t EntryPoint); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.ExecuteUbergraph_InviteListEntry_FriendInvite_XS // (Final|UbergraphFunction) // @ game+0xd67374
};

