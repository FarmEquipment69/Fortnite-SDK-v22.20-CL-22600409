// WidgetBlueprintGeneratedClass MissedInvitesEntry.MissedInvitesEntry_C
// Size: 0x1500 (Inherited: 0x14b0)
struct UMissedInvitesEntry_C : UFortMissedInvitesListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b0(0x08)
	struct UWidgetAnimation* Selected; // 0x14b8(0x08)
	struct UWidgetAnimation* Hovered; // 0x14c0(0x08)
	struct UBorder* AnimatedInputBorder; // 0x14c8(0x08)
	struct UImage* Arrow; // 0x14d0(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x14d8(0x08)
	struct UBorder* EntryBorder; // 0x14e0(0x08)
	struct USizeBox* Exclamation; // 0x14e8(0x08)
	struct UCommonRichTextBlock* Text_MissedInvitesText; // 0x14f0(0x08)
	struct UUserActionMenuInputButton_C* UserActionMenuInputButton; // 0x14f8(0x08)

	void BP_OnUnhovered(); // Function MissedInvitesEntry.MissedInvitesEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function MissedInvitesEntry.MissedInvitesEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function MissedInvitesEntry.MissedInvitesEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_MissedInvitesEntry(int32_t EntryPoint); // Function MissedInvitesEntry.MissedInvitesEntry_C.ExecuteUbergraph_MissedInvitesEntry // (Final|UbergraphFunction) // @ game+0xd67374
};

