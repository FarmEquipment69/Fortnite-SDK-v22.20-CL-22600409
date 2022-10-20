// WidgetBlueprintGeneratedClass JoinablePartyEntry.JoinablePartyEntry_C
// Size: 0x15b8 (Inherited: 0x1540)
struct UJoinablePartyEntry_C : UFortJoinablePartyListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1540(0x08)
	struct UWidgetAnimation* Selected; // 0x1548(0x08)
	struct UWidgetAnimation* Hovered; // 0x1550(0x08)
	struct UBorder* AnimatedInputBorder; // 0x1558(0x08)
	struct UImage* Arrow; // 0x1560(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x1568(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1570(0x08)
	struct UBorder* EntryBorder; // 0x1578(0x08)
	struct USizeBox* Exclamation; // 0x1580(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1588(0x08)
	struct FSlateColor InviteFontColor; // 0x1590(0x14)
	struct FSlateColor DefaultFontColor; // 0x15a4(0x14)

	void BP_OnUnhovered(); // Function JoinablePartyEntry.JoinablePartyEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function JoinablePartyEntry.JoinablePartyEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function JoinablePartyEntry.JoinablePartyEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInviteStatusUpdated(bool bIsInvited); // Function JoinablePartyEntry.JoinablePartyEntry_C.OnInviteStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_JoinablePartyEntry(int32_t EntryPoint); // Function JoinablePartyEntry.JoinablePartyEntry_C.ExecuteUbergraph_JoinablePartyEntry // (Final|UbergraphFunction) // @ game+0xd67374
};

