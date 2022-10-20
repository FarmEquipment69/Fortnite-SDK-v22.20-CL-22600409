// WidgetBlueprintGeneratedClass SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C
// Size: 0x14d8 (Inherited: 0x1490)
struct USocialPanel_FriendLinkButton_C : UFortSocialPanelView_FriendLinkButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UWidgetAnimation* OnCopied; // 0x1498(0x08)
	struct UWidgetAnimation* OnHovered; // 0x14a0(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0x14a8(0x08)
	struct UFortMobileImage* SharingIcon; // 0x14b0(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_CopyState; // 0x14b8(0x08)
	struct UCommonTextBlock* Text_CopyConfirmed; // 0x14c0(0x08)
	struct UCommonTextBlock* Text_FriendLinkInstructions; // 0x14c8(0x08)
	struct UCommonTextBlock* Text_LinkPrompt; // 0x14d0(0x08)

	void BP_OnUnhovered(); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnCopiedToClipboard(); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnCopiedToClipboard // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnShareButtonTypeSet(enum class EFriendLinkShareButtonType Type); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnShareButtonTypeSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SocialPanel_FriendLinkButton(int32_t EntryPoint); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.ExecuteUbergraph_SocialPanel_FriendLinkButton // (Final|UbergraphFunction) // @ game+0xd67374
};

