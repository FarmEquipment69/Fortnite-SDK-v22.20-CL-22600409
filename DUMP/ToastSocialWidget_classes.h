// WidgetBlueprintGeneratedClass ToastSocialWidget.ToastSocialWidget_C
// Size: 0x3a1 (Inherited: 0x338)
struct UToastSocialWidget_C : UFortSocialNotificationWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* Outro_New; // 0x340(0x08)
	struct UWidgetAnimation* Intro; // 0x348(0x08)
	struct UCommonBorder* B_NotificationImage; // 0x350(0x08)
	struct UCommonBorder* B_NotificationImageExtended; // 0x358(0x08)
	struct UIconTextButton_C* Button_Cursor; // 0x360(0x08)
	struct UIconTextButton_C* Button_Hold; // 0x368(0x08)
	struct UCommonBorder* CommonBorder_MainWidget; // 0x370(0x08)
	struct UCommonRichTextBlock* DescriptionRichText; // 0x378(0x08)
	struct UFortLazyImage* NotificationImage; // 0x380(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_InputButtons; // 0x388(0x08)
	struct UCommonRichTextBlock* TitleRichText; // 0x390(0x08)
	struct FTimerHandle AnimationDelayTimer; // 0x398(0x08)
	bool bActionTaken; // 0x3a0(0x01)

	float GetDisplayTime(bool& bOutDisplayTimeOverridden); // Function ToastSocialWidget.ToastSocialWidget_C.GetDisplayTime // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void GetButtonHoldText(struct FText& Text); // Function ToastSocialWidget.ToastSocialWidget_C.GetButtonHoldText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void GetButtonCursorText(struct FText& Text); // Function ToastSocialWidget.ToastSocialWidget_C.GetButtonCursorText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void SetVisibilityForOptionalElements(); // Function ToastSocialWidget.ToastSocialWidget_C.SetVisibilityForOptionalElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TakeAction(); // Function ToastSocialWidget.ToastSocialWidget_C.TakeAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CleanupBeforeClosing(); // Function ToastSocialWidget.ToastSocialWidget_C.CleanupBeforeClosing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	int32_t GetActiveWidgetIndex(); // Function ToastSocialWidget.ToastSocialWidget_C.GetActiveWidgetIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	enum class ESlateVisibility GetInputSwitcherVisibility(); // Function ToastSocialWidget.ToastSocialWidget_C.GetInputSwitcherVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void SetupAnimBindings(bool Unbind); // Function ToastSocialWidget.ToastSocialWidget_C.SetupAnimBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetImage(); // Function ToastSocialWidget.ToastSocialWidget_C.SetImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StartIntro(); // Function ToastSocialWidget.ToastSocialWidget_C.StartIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateToast(struct UFortUINotification* Notification); // Function ToastSocialWidget.ToastSocialWidget_C.UpdateToast // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayOutro(); // Function ToastSocialWidget.ToastSocialWidget_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ToastSocialWidget.ToastSocialWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function ToastSocialWidget.ToastSocialWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ToastSocialWidget.ToastSocialWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void HandleOutroFinished(); // Function ToastSocialWidget.ToastSocialWidget_C.HandleOutroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleIntroFinished(); // Function ToastSocialWidget.ToastSocialWidget_C.HandleIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ToastSocialWidget.ToastSocialWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function ToastSocialWidget.ToastSocialWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPlayOpenAnimation(); // Function ToastSocialWidget.ToastSocialWidget_C.OnPlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnCursorModeChanged(bool bCursorModeEnabled); // Function ToastSocialWidget.ToastSocialWidget_C.OnCursorModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ToastSocialWidget.ToastSocialWidget_C.BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnCancelNotification(); // Function ToastSocialWidget.ToastSocialWidget_C.OnCancelNotification // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTakeActionNotification(); // Function ToastSocialWidget.ToastSocialWidget_C.OnTakeActionNotification // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUserStartedHoldActionNotification(); // Function ToastSocialWidget.ToastSocialWidget_C.OnUserStartedHoldActionNotification // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInputModeChanged(enum class ECommonInputType NewInputType); // Function ToastSocialWidget.ToastSocialWidget_C.OnInputModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnNotificationSet(struct UFortUINotification* Notification); // Function ToastSocialWidget.ToastSocialWidget_C.OnNotificationSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnNotificationUpdated(struct UFortUINotification* Notification); // Function ToastSocialWidget.ToastSocialWidget_C.OnNotificationUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ToastSocialWidget(int32_t EntryPoint); // Function ToastSocialWidget.ToastSocialWidget_C.ExecuteUbergraph_ToastSocialWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

