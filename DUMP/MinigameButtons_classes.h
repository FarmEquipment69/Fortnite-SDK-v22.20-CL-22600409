// WidgetBlueprintGeneratedClass MinigameButtons.MinigameButtons_C
// Size: 0x3f8 (Inherited: 0x2b8)
struct UMinigameButtons_C : UFortMinigameButtons {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UWidgetSwitcher* ButtonSwitcher; // 0x2c0(0x08)
	struct UIconTextButton_C* EndGameButton; // 0x2c8(0x08)
	struct UIconTextButton_C* EndGameButton2; // 0x2d0(0x08)
	struct UIconTextButton_C* StartGameButton; // 0x2d8(0x08)
	struct UIconTextButton_C* StartGameButton2; // 0x2e0(0x08)
	struct FMulticastInlineDelegate StartButtonClicked; // 0x2e8(0x10)
	struct FMulticastInlineDelegate EndButtonClicked; // 0x2f8(0x10)
	struct FMulticastInlineDelegate StartButtonHovered; // 0x308(0x10)
	struct FMulticastInlineDelegate EndButtonHovered; // 0x318(0x10)
	struct UIconTextButton_C* CurrentButton; // 0x328(0x08)
	enum class MinigameButtonsState ButtonState; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct TMap<enum class MinigameButtonsState, struct FMinigameButtonsStateConfiguration> ButtonConfigurations; // 0x338(0x50)
	struct FMulticastInlineDelegate StartButtonUnhovered; // 0x388(0x10)
	struct FMulticastInlineDelegate EndButtonUnhovered; // 0x398(0x10)
	struct FMinigameButtonsWidgetSwitcherConfiguration CurrentWidgetSwitcherConfiguration; // 0x3a8(0x40)
	struct TArray<struct FMinigameButtonsWidgetSwitcherConfiguration> WidgetSwitcherConfigurations; // 0x3e8(0x10)

	struct UWidget* OnGetDesiredFocusTarget(); // Function MinigameButtons.MinigameButtons_C.OnGetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void UpdateButtonsFromButtonState(); // Function MinigameButtons.MinigameButtons_C.UpdateButtonsFromButtonState // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetButtonState(enum class MinigameButtonsState Value); // Function MinigameButtons.MinigameButtons_C.SetButtonState // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CenterOnCurrentButton(); // Function MinigameButtons.MinigameButtons_C.CenterOnCurrentButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateButtons(); // Function MinigameButtons.MinigameButtons_C.UpdateButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function MinigameButtons.MinigameButtons_C.BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__EndGameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function MinigameButtons.MinigameButtons_C.BndEvt__EndGameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void SetWidgetSwitcherIndex(int32_t Index); // Function MinigameButtons.MinigameButtons_C.SetWidgetSwitcherIndex // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function MinigameButtons.MinigameButtons_C.BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function MinigameButtons.MinigameButtons_C.BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function MinigameButtons.MinigameButtons_C.BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function MinigameButtons.MinigameButtons_C.BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function MinigameButtons.MinigameButtons_C.BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function MinigameButtons.MinigameButtons_C.BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function MinigameButtons.MinigameButtons_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_MinigameButtons(int32_t EntryPoint); // Function MinigameButtons.MinigameButtons_C.ExecuteUbergraph_MinigameButtons // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void EndButtonUnhovered__DelegateSignature(struct UCommonButtonLegacy* Button); // Function MinigameButtons.MinigameButtons_C.EndButtonUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StartButtonUnhovered__DelegateSignature(struct UCommonButtonLegacy* Button); // Function MinigameButtons.MinigameButtons_C.StartButtonUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EndButtonHovered__DelegateSignature(struct UCommonButtonLegacy* Button); // Function MinigameButtons.MinigameButtons_C.EndButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StartButtonHovered__DelegateSignature(struct UCommonButtonLegacy* Button); // Function MinigameButtons.MinigameButtons_C.StartButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EndButtonClicked__DelegateSignature(); // Function MinigameButtons.MinigameButtons_C.EndButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StartButtonClicked__DelegateSignature(); // Function MinigameButtons.MinigameButtons_C.StartButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

