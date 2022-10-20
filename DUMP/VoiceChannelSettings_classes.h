// WidgetBlueprintGeneratedClass VoiceChannelSettings.VoiceChannelSettings_C
// Size: 0x400 (Inherited: 0x380)
struct UVoiceChannelSettings_C : UFortVoiceSettingsDisplay {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UWidgetAnimation* GearHover; // 0x388(0x08)
	struct UCommonActionWidget* ActionWidget_InputDisplay; // 0x390(0x08)
	struct UImage* AlertIcon; // 0x398(0x08)
	struct UIconTextButton_C* Button_NextInputDevice; // 0x3a0(0x08)
	struct UIconTextButton_C* Button_NextOutputDevice; // 0x3a8(0x08)
	struct UIconTextButton_C* Button_TogglePTT; // 0x3b0(0x08)
	struct UImage* GearIcon; // 0x3b8(0x08)
	struct UFortMobileImage* Image_TitleIcon; // 0x3c0(0x08)
	struct UCommonRichTextBlock* InputDevice; // 0x3c8(0x08)
	struct UCommonRichTextBlock* OutputDevice; // 0x3d0(0x08)
	struct UKeybindWidget_C* PTTKeybindWidget; // 0x3d8(0x08)
	struct UCommonRichTextBlock* PushToTalk; // 0x3e0(0x08)
	struct UCommonTextBlock* Text_LowPowerMode; // 0x3e8(0x08)
	struct UImage* VoiceDisabledIcon; // 0x3f0(0x08)
	struct UCommonRichTextBlock* VoiceDisabledText; // 0x3f8(0x08)

	void BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function VoiceChannelSettings.VoiceChannelSettings_C.BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_OpenSettings_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function VoiceChannelSettings.VoiceChannelSettings_C.BndEvt__Button_OpenSettings_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function VoiceChannelSettings.VoiceChannelSettings_C.BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_VoiceChannelSettings(int32_t EntryPoint); // Function VoiceChannelSettings.VoiceChannelSettings_C.ExecuteUbergraph_VoiceChannelSettings // (Final|UbergraphFunction) // @ game+0xd67374
};

