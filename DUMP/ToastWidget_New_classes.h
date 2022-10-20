// WidgetBlueprintGeneratedClass ToastWidget_New.ToastWidget_New_C
// Size: 0x371 (Inherited: 0x308)
struct UToastWidget_New_C : UFortToastWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UWidgetAnimation* Outro_New; // 0x310(0x08)
	struct UWidgetAnimation* Intro; // 0x318(0x08)
	struct UCommonBorder* B_NotificationImage; // 0x320(0x08)
	struct UCommonBorder* B_NotificationImageExtended; // 0x328(0x08)
	struct UCommonBorder* CommonBorder_MainWidget; // 0x330(0x08)
	struct UCommonRichTextBlock* DescriptionRichText; // 0x338(0x08)
	struct UFortLazyImage* NotificationImage; // 0x340(0x08)
	struct UIconTextButton_C* OpenButton; // 0x348(0x08)
	struct UCommonRichTextBlock* TitleRichText; // 0x350(0x08)
	struct FMulticastInlineDelegate OnFinishedToast; // 0x358(0x10)
	struct FTimerHandle AnimationDelayTimer; // 0x368(0x08)
	bool bActionTaken; // 0x370(0x01)

	float GetDisplayTime(bool& bOutDisplayTimeOverridden); // Function ToastWidget_New.ToastWidget_New_C.GetDisplayTime // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void SetupAnimBindings(bool Unbind); // Function ToastWidget_New.ToastWidget_New_C.SetupAnimBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetImage(); // Function ToastWidget_New.ToastWidget_New_C.SetImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	enum class ESlateVisibility GetOpenButtonVisibility(); // Function ToastWidget_New.ToastWidget_New_C.GetOpenButtonVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void StartIntro(); // Function ToastWidget_New.ToastWidget_New_C.StartIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateToast(struct UFortUINotification* Notification); // Function ToastWidget_New.ToastWidget_New_C.UpdateToast // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayOutro(); // Function ToastWidget_New.ToastWidget_New_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ToastWidget_New.ToastWidget_New_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function ToastWidget_New.ToastWidget_New_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ToastWidget_New.ToastWidget_New_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void HandleOutroFinished(); // Function ToastWidget_New.ToastWidget_New_C.HandleOutroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleIntroFinished(); // Function ToastWidget_New.ToastWidget_New_C.HandleIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ToastWidget_New.ToastWidget_New_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function ToastWidget_New.ToastWidget_New_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPlayOpenAnimation(); // Function ToastWidget_New.ToastWidget_New_C.OnPlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnNotificationSet(struct UFortUINotification* Notification); // Function ToastWidget_New.ToastWidget_New_C.OnNotificationSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnNotificationUpdated(struct UFortUINotification* Notification); // Function ToastWidget_New.ToastWidget_New_C.OnNotificationUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ToastWidget_New(int32_t EntryPoint); // Function ToastWidget_New.ToastWidget_New_C.ExecuteUbergraph_ToastWidget_New // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnFinishedToast__DelegateSignature(); // Function ToastWidget_New.ToastWidget_New_C.OnFinishedToast__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

