// WidgetBlueprintGeneratedClass SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C
// Size: 0x1565 (Inherited: 0x1520)
struct USocialPanel_FriendSearchBar_C : UFortFriendSearchButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1520(0x08)
	struct UWidgetAnimation* OnHovered; // 0x1528(0x08)
	struct UImage* AddFriendBanIcon; // 0x1530(0x08)
	struct UBorder* ClickCapture; // 0x1538(0x08)
	struct UCommonRichTextBlock* RichText_CannotAddFriends; // 0x1540(0x08)
	struct UCommonRichTextBlock* RichText_SocialBan; // 0x1548(0x08)
	struct UFortMobileImage* SharingIcon; // 0x1550(0x08)
	struct UFortSimpleWidgetAnimationsPanel* SimpleWidgetAnimationsPanel; // 0x1558(0x08)
	struct FName ShakeAnimation; // 0x1560(0x04)
	bool bShakeAnimationIsPlaying; // 0x1564(0x01)

	struct FEventReply (struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__EditableText_AddFriend_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BndEvt__EditableText_AddFriend_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SocialPanel_FriendSearchBar(int32_t EntryPoint); // Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.ExecuteUbergraph_SocialPanel_FriendSearchBar // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

