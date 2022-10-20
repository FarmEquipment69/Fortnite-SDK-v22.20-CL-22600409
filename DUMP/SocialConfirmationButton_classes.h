// WidgetBlueprintGeneratedClass SocialConfirmationButton.SocialConfirmationButton_C
// Size: 0x14d0 (Inherited: 0x1480)
struct USocialConfirmationButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* OnHover; // 0x1488(0x08)
	struct UBorder* Border_InteractionIndicator; // 0x1490(0x08)
	struct UImage* InteractionIcon; // 0x1498(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0x14a0(0x08)
	struct UCommonTextBlock* Text_InteractionName; // 0x14a8(0x08)
	bool bIsAccept; // 0x14b0(0x01)
	char pad_14B1[0x7]; // 0x14b1(0x07)
	struct FText DisplayText; // 0x14b8(0x18)

	void BP_OnHovered(); // Function SocialConfirmationButton.SocialConfirmationButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function SocialConfirmationButton.SocialConfirmationButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function SocialConfirmationButton.SocialConfirmationButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SocialConfirmationButton(int32_t EntryPoint); // Function SocialConfirmationButton.SocialConfirmationButton_C.ExecuteUbergraph_SocialConfirmationButton // (Final|UbergraphFunction) // @ game+0xd67374
};

