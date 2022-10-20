// WidgetBlueprintGeneratedClass Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C
// Size: 0x1575 (Inherited: 0x1520)
struct USidebar_FriendSearchBar_C : UFortFriendSearchButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1520(0x08)
	struct UWidgetAnimation* OnHovered; // 0x1528(0x08)
	struct UImage* AddFriendBanIcon; // 0x1530(0x08)
	struct USizeBox* ClearButtonSB; // 0x1538(0x08)
	struct UBorder* ClickCapture; // 0x1540(0x08)
	struct UCommonRichTextBlock* RichText_CannotAddFriends; // 0x1548(0x08)
	struct UCommonRichTextBlock* RichText_SocialBan; // 0x1550(0x08)
	struct UFortMobileImage* SharingIcon; // 0x1558(0x08)
	struct UFortSimpleWidgetAnimationsPanel* SimpleWidgetAnimationsPanel; // 0x1560(0x08)
	struct USizeBox* SizeBox_FriendSearch; // 0x1568(0x08)
	struct FName ShakeAnimation; // 0x1570(0x04)
	bool bShakeAnimationIsPlaying; // 0x1574(0x01)

	struct FEventReply (struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__EditableText_AddFriend_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C.BndEvt__EditableText_AddFriend_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Sidebar_FriendSearchBar(int32_t EntryPoint); // Function Sidebar_FriendSearchBar.Sidebar_FriendSearchBar_C.ExecuteUbergraph_Sidebar_FriendSearchBar // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

