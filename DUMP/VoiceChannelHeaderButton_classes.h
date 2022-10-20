// WidgetBlueprintGeneratedClass VoiceChannelHeaderButton.VoiceChannelHeaderButton_C
// Size: 0x1588 (Inherited: 0x14e0)
struct UVoiceChannelHeaderButton_C : UFortVoiceChannelHeaderButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14e0(0x08)
	struct UWidgetAnimation* OnExpansion; // 0x14e8(0x08)
	struct UWidgetAnimation* JoinSlideOut; // 0x14f0(0x08)
	struct UWidgetAnimation* ScaleUp; // 0x14f8(0x08)
	struct UFortMobileImage* ExpandDirectionTick; // 0x1500(0x08)
	struct UHorizontalBox* HBox_Join; // 0x1508(0x08)
	struct UImage* Image_VoiceChatWarning; // 0x1510(0x08)
	struct UCommonRichTextBlock* JoinText; // 0x1518(0x08)
	struct UImage* NotTransmitting; // 0x1520(0x08)
	struct UCommonRichTextBlock* OffText; // 0x1528(0x08)
	struct UWidgetSwitcher* OnOffSwitcher; // 0x1530(0x08)
	struct UCommonRichTextBlock* OnText; // 0x1538(0x08)
	struct UOverlay* ; // 0x1540(0x08)
	struct UImage* SelectionBackplate; // 0x1548(0x08)
	struct UWidgetSwitcher* SimultaneousChannelSwitcher; // 0x1550(0x08)
	struct UWidgetSwitcher* Switch_Transmitting; // 0x1558(0x08)
	struct UImage* Transmitting; // 0x1560(0x08)
	struct FLinearColor VoiceStatusActiveColor; // 0x1568(0x10)
	struct FLinearColor VoiceStatusWarningColor; // 0x1578(0x10)

	void OnUpdateVisuals(bool bIsActiveAndListening, bool bIsActiveOrAvailable, bool bIsAvailableAndNotActive, bool bIsListening, bool bShowingRestriction); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.OnUpdateVisuals // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDisabled(); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnEnabled(); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void (struct UObject* ListItemObject); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_VoiceChannelHeaderButton(int32_t EntryPoint); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.ExecuteUbergraph_VoiceChannelHeaderButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

