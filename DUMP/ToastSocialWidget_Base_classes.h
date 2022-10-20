// WidgetBlueprintGeneratedClass ToastSocialWidget_Base.ToastSocialWidget_Base_C
// Size: 0x498 (Inherited: 0x338)
struct UToastSocialWidget_Base_C : UFortSocialNotificationWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* TapAccept; // 0x340(0x08)
	struct UWidgetAnimation* ClickAccept; // 0x348(0x08)
	struct UWidgetAnimation* Intro_NeutralInfo_Simple; // 0x350(0x08)
	struct UWidgetAnimation* Intro_GoodInfo_Simple; // 0x358(0x08)
	struct UWidgetAnimation* Intro_BadInfo_Simple; // 0x360(0x08)
	struct UWidgetAnimation* Intro_NeutralInfo; // 0x368(0x08)
	struct UWidgetAnimation* Intro_GoodInfo; // 0x370(0x08)
	struct UWidgetAnimation* Intro_BadInfo; // 0x378(0x08)
	struct UWidgetAnimation* TimeToRespond; // 0x380(0x08)
	struct UWidgetAnimation* Outro_New; // 0x388(0x08)
	struct UWidgetAnimation* HoldProgress; // 0x390(0x08)
	struct UWidgetAnimation* Intro_Action; // 0x398(0x08)
	struct UImage* BackgroundMat; // 0x3a0(0x08)
	struct UIconTextButtonHold_C* Button_Cursor; // 0x3a8(0x08)
	struct UIconTextButton_C* Button_Hold; // 0x3b0(0x08)
	struct UFortMobileImage* HamburgerIcon; // 0x3b8(0x08)
	struct UImage* Image_Fail; // 0x3c0(0x08)
	struct UImage* Image_Info; // 0x3c8(0x08)
	struct UImage* Image_Success; // 0x3d0(0x08)
	struct UImage* Image_Trim; // 0x3d8(0x08)
	struct UFortLazyImage* LazyImage_Icon; // 0x3e0(0x08)
	struct UOverlay* Overlay_Input_Keybind; // 0x3e8(0x08)
	struct UOverlay* Overlay_ResultIcon; // 0x3f0(0x08)
	struct UImage* ProgressCircle; // 0x3f8(0x08)
	struct UScaleBox* ScaleBox_Input_Pad; // 0x400(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_InputButtons; // 0x408(0x08)
	struct UCommonTextBlock* Text_Action; // 0x410(0x08)
	struct UCommonRichTextBlock* Text_Desc; // 0x418(0x08)
	struct UCommonRichTextBlock* Text_Title; // 0x420(0x08)
	struct UImage* TextureIcon; // 0x428(0x08)
	struct UImage* ToastCushion; // 0x430(0x08)
	struct UVerticalBox* VerticalBox_HoldAction; // 0x438(0x08)
	struct UVerticalBox* VerticalBox_Info; // 0x440(0x08)
	struct UWBP_RebootRallyIcon_C* WBP_RebootRallyIcon; // 0x448(0x08)
	struct FMulticastInlineDelegate OnFinishedToast; // 0x450(0x10)
	struct FTimerHandle AnimationDelayTimer; // 0x460(0x08)
	bool bActionTaken; // 0x468(0x01)
	bool UseComplexAnims; // 0x469(0x01)
	bool NewVar; // 0x46a(0x01)
	char pad_46B[0x5]; // 0x46b(0x05)
	struct TSoftObjectPtr<UObject> DownloadOnDemandErrorIcon; // 0x470(0x28)

	void (); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SequenceEvent__ENTRYPOINTToastSocialWidget_Base(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.SequenceEvent__ENTRYPOINTToastSocialWidget_Base // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateIcons(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.UpdateIcons // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetMaterials(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.ResetMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct UWidgetAnimation* DetermineIntroAnim(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.DetermineIntroAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void InputBasedStyling(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.InputBasedStyling // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleNotificationType(struct FText& Return); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.HandleNotificationType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetButtonHoldText(struct FText& Text); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetButtonHoldText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void GetButtonCursorText(struct FText& Text); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetButtonCursorText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void SetVisibilityForOptionalElements(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.SetVisibilityForOptionalElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TakeAction(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.TakeAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CleanupBeforeClosing(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.CleanupBeforeClosing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	int32_t GetActiveWidgetIndex(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetActiveWidgetIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	enum class ESlateVisibility GetInputSwitcherVisibility(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetInputSwitcherVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void SetupAnimBindings(bool Unbind); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.SetupAnimBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ApplyAdditionalStyling(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.ApplyAdditionalStyling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetImage(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.SetImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateToast(struct UFortUINotification* Notification); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.UpdateToast // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleIntroFinished(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.HandleIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleOutroFinished(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.HandleOutroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayOutro(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPlayOpenAnimation(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnPlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnCursorModeChanged(bool bCursorModeEnabled); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnCursorModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnCancelNotification(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnCancelNotification // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTakeActionNotification(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnTakeActionNotification // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUserStartedHoldActionNotification(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnUserStartedHoldActionNotification // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInputModeChanged(enum class ECommonInputType NewInputType); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnInputModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void HoldComplete(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.HoldComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_3_HoldActionStarted__DelegateSignature(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_3_HoldActionStarted__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_4_HoldActionEnded__DelegateSignature(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_4_HoldActionEnded__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_6_HoldActionCompleted__DelegateSignature(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_6_HoldActionCompleted__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnNotificationSet(struct UFortUINotification* Notification); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnNotificationSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnNotificationUpdated(struct UFortUINotification* Notification); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnNotificationUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ToastSocialWidget_Base(int32_t EntryPoint); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.ExecuteUbergraph_ToastSocialWidget_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnFinishedToast__DelegateSignature(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnFinishedToast__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

