// WidgetBlueprintGeneratedClass VoiceChannelChangePopup.VoiceChannelChangePopup_C
// Size: 0x46d (Inherited: 0x400)
struct UVoiceChannelChangePopup_C : UFortVoiceChannelChangePopup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* AmbientIconPulse; // 0x408(0x08)
	struct UHorizontalBox* GamepadKeybindWrapper; // 0x410(0x08)
	struct UImage* Image_Mic; // 0x418(0x08)
	struct UHorizontalBox* KBKeybindWrapper; // 0x420(0x08)
	struct UImage* MicPulse; // 0x428(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_KeybindWidgets; // 0x430(0x08)
	struct UCommonRichTextBlock* Text_Hold; // 0x438(0x08)
	struct FName M_Param_ColorA; // 0x440(0x04)
	struct FName M_Param_ColorB; // 0x444(0x04)
	struct FName M_Param_Progress; // 0x448(0x04)
	struct FLinearColor ColorB; // 0x44c(0x10)
	struct FLinearColor ColorA; // 0x45c(0x10)
	bool CollapseOnAnimationFinish; // 0x46c(0x01)

	void Construct(); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Popup Animation Finished(); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Popup Animation Finished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPlayOpenAnimation(); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPlayCloseAnimation(); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayCloseAnimation // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInputModeChanged(enum class ECommonInputType NewInputType); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnInputModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_VoiceChannelChangePopup(int32_t EntryPoint); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.ExecuteUbergraph_VoiceChannelChangePopup // (Final|UbergraphFunction) // @ game+0xd67374
};

