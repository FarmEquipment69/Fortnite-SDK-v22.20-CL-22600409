// WidgetBlueprintGeneratedClass JoinableParty_UserListEntry.JoinableParty_UserListEntry_C
// Size: 0x1610 (Inherited: 0x1540)
struct UJoinableParty_UserListEntry_C : UFortJoinablePartyListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1540(0x08)
	struct UWidgetAnimation* Unhovered_WithTrim; // 0x1548(0x08)
	struct UWidgetAnimation* Unhovered; // 0x1550(0x08)
	struct UWidgetAnimation* Hovered_WithTrim; // 0x1558(0x08)
	struct UWidgetAnimation* Selected; // 0x1560(0x08)
	struct UWidgetAnimation* Hovered; // 0x1568(0x08)
	struct UFortSocialAvatarIcon* Avatar_MemberIcon; // 0x1570(0x08)
	struct UBorder* Border_Background; // 0x1578(0x08)
	struct UBorder* Border_Highlight; // 0x1580(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x1588(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1590(0x08)
	struct UImage* Image_Lock; // 0x1598(0x08)
	struct UOverlay* Overlay_Avatar; // 0x15a0(0x08)
	struct UScaleBox* ; // 0x15a8(0x08)
	struct USizeBox* SizeBox_MultiParty; // 0x15b0(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_DisplayNamesText; // 0x15b8(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_JoinablePartyText; // 0x15c0(0x08)
	struct UCommonRichTextBlock* Text_DisplayName; // 0x15c8(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x15d0(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x15d8(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x15e8(0x10)
	bool AlwaysShowTrim; // 0x15f8(0x01)
	char pad_15F9[0x7]; // 0x15f9(0x07)
	struct TArray<struct USocialTagWidget*> SidebarSocialTagWidgetArray; // 0x1600(0x10)

	void BP_OnHovered(); // Function JoinableParty_UserListEntry.JoinableParty_UserListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function JoinableParty_UserListEntry.JoinableParty_UserListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function JoinableParty_UserListEntry.JoinableParty_UserListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function JoinableParty_UserListEntry.JoinableParty_UserListEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function JoinableParty_UserListEntry.JoinableParty_UserListEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnInviteStatusUpdated(bool bIsInvited); // Function JoinableParty_UserListEntry.JoinableParty_UserListEntry_C.OnInviteStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_JoinableParty_UserListEntry(int32_t EntryPoint); // Function JoinableParty_UserListEntry.JoinableParty_UserListEntry_C.ExecuteUbergraph_JoinableParty_UserListEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

