// WidgetBlueprintGeneratedClass UserListEntry_XS.UserListEntry_XS_C
// Size: 0x1598 (Inherited: 0x1540)
struct UUserListEntry_XS_C : UFortSocialUserListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1540(0x08)
	struct UWidgetAnimation* Selected; // 0x1548(0x08)
	struct UWidgetAnimation* Hovered; // 0x1550(0x08)
	struct UImage* Arrow; // 0x1558(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1560(0x08)
	struct UCommonRichTextBlock* Text_DisplayName; // 0x1568(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1570(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1578(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1588(0x10)

	void BP_OnUnhovered(); // Function UserListEntry_XS.UserListEntry_XS_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function UserListEntry_XS.UserListEntry_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function UserListEntry_XS.UserListEntry_XS_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UserListEntry_XS.UserListEntry_XS_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_UserListEntry_XS(int32_t EntryPoint); // Function UserListEntry_XS.UserListEntry_XS_C.ExecuteUbergraph_UserListEntry_XS // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

