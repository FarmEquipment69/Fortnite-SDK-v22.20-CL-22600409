// WidgetBlueprintGeneratedClass ToastWidgetDonut.ToastWidgetDonut_C
// Size: 0x361 (Inherited: 0x308)
struct UToastWidgetDonut_C : UFortToastWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UWidgetAnimation* Outro_New; // 0x310(0x08)
	struct UWidgetAnimation* Intro; // 0x318(0x08)
	struct UCommonBorder* CommonBorder_MainWidget; // 0x320(0x08)
	struct UCommonTextBlock* Description; // 0x328(0x08)
	struct UImage* ; // 0x330(0x08)
	struct UTextBlock* ; // 0x338(0x08)
	struct UCommonTextBlock* Title; // 0x340(0x08)
	struct FMulticastInlineDelegate OnFinishedToast; // 0x348(0x10)
	struct FTimerHandle AnimationDelayTimer; // 0x358(0x08)
	bool bActionTaken; // 0x360(0x01)

	void SetupAnimBindings(bool Unbind); // Function ToastWidgetDonut.ToastWidgetDonut_C.SetupAnimBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ApplyAdditionalStyling(); // Function ToastWidgetDonut.ToastWidgetDonut_C.ApplyAdditionalStyling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetImage(); // Function ToastWidgetDonut.ToastWidgetDonut_C.SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	enum class ESlateVisibility GetOpenButtonVisibility(); // Function ToastWidgetDonut.ToastWidgetDonut_C.GetOpenButtonVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void StartIntro(); // Function ToastWidgetDonut.ToastWidgetDonut_C.StartIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateToast(struct UFortUINotification* Notification); // Function ToastWidgetDonut.ToastWidgetDonut_C.UpdateToast // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleOutroFinished(); // Function ToastWidgetDonut.ToastWidgetDonut_C.HandleOutroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayOutro(); // Function ToastWidgetDonut.ToastWidgetDonut_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleIntroFinished(); // Function ToastWidgetDonut.ToastWidgetDonut_C.HandleIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ToastWidgetDonut.ToastWidgetDonut_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function ToastWidgetDonut.ToastWidgetDonut_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPlayOpenAnimation(); // Function ToastWidgetDonut.ToastWidgetDonut_C.OnPlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnNotificationSet(struct UFortUINotification* Notification); // Function ToastWidgetDonut.ToastWidgetDonut_C.OnNotificationSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnNotificationUpdated(struct UFortUINotification* Notification); // Function ToastWidgetDonut.ToastWidgetDonut_C.OnNotificationUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ToastWidgetDonut(int32_t EntryPoint); // Function ToastWidgetDonut.ToastWidgetDonut_C.ExecuteUbergraph_ToastWidgetDonut // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnFinishedToast__DelegateSignature(); // Function ToastWidgetDonut.ToastWidgetDonut_C.OnFinishedToast__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

