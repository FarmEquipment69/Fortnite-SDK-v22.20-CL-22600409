// WidgetBlueprintGeneratedClass SuggestedFriendListEntry.SuggestedFriendListEntry_C
// Size: 0x1570 (Inherited: 0x1510)
struct USuggestedFriendListEntry_C : UFortConnectionsUserListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1510(0x08)
	struct UWidgetAnimation* Selected; // 0x1518(0x08)
	struct UWidgetAnimation* Hovered; // 0x1520(0x08)
	struct UImage* Arrow; // 0x1528(0x08)
	struct UBorder* Border_Background; // 0x1530(0x08)
	struct UBorder* Border_Highlight; // 0x1538(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1540(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x1548(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1550(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1560(0x10)

	void BP_OnUnhovered(); // Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SuggestedFriendListEntry(int32_t EntryPoint); // Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.ExecuteUbergraph_SuggestedFriendListEntry // (Final|UbergraphFunction) // @ game+0xd67374
};

