// Class EventModeUI.FocusButton
// Size: 0x438 (Inherited: 0x428)
struct UFocusButton : UBacchusActionButton {
	struct UPaperSprite* StartFocusingSprite; // 0x428(0x08)
	struct UPaperSprite* StopFocusingSprite; // 0x430(0x08)

	void HandleEventModeFocusingChanged(bool bIsEventModeFocusing); // Function EventModeUI.FocusButton.HandleEventModeFocusingChanged // (Final|Native|Private) // @ game+0x6869708
	void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus); // Function EventModeUI.FocusButton.HandleCanUseEventModeFocusChanged // (Final|Native|Private) // @ game+0x686960c
};

// Class EventModeUI.FortEventModeEmotesWidget
// Size: 0x3d0 (Inherited: 0x320)
struct UFortEventModeEmotesWidget : UFortHUDElementWidget {
	struct TSoftObjectPtr<UFortMontageItemDefinitionBase> Emote1; // 0x320(0x28)
	struct TSoftObjectPtr<UFortMontageItemDefinitionBase> Emote2; // 0x348(0x28)
	struct TSoftObjectPtr<UFortMontageItemDefinitionBase> Emote3; // 0x370(0x28)
	struct TArray<struct TSoftObjectPtr<UFortMontageItemDefinitionBase>> RandomEmotes; // 0x398(0x10)
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct URichTextBlock* Text_Emote1; // 0x3b0(0x08)
	struct URichTextBlock* Text_Emote2; // 0x3b8(0x08)
	struct URichTextBlock* Text_Emote3; // 0x3c0(0x08)
	struct URichTextBlock* Text_EmoteRandom; // 0x3c8(0x08)

	void OnFocusStateChanged(bool bIsFocusing); // Function EventModeUI.FortEventModeEmotesWidget.OnFocusStateChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnFocusAvailableChanged(bool bIsFocusAvailable); // Function EventModeUI.FortEventModeEmotesWidget.OnFocusAvailableChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class EventModeUI.FortMobileActionButtonBehavior_Focus
// Size: 0x118 (Inherited: 0x110)
struct UFortMobileActionButtonBehavior_Focus : UFortMobileActionButtonBehavior {
	struct UPaperSprite* StopFocusingSprite; // 0x110(0x08)

	void HandleEventModeFocusingChanged(bool bIsEventModeFocusing); // Function EventModeUI.FortMobileActionButtonBehavior_Focus.HandleEventModeFocusingChanged // (Final|Native|Private) // @ game+0x6869788
	void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus); // Function EventModeUI.FortMobileActionButtonBehavior_Focus.HandleCanUseEventModeFocusChanged // (Final|Native|Private) // @ game+0x6869688
};

