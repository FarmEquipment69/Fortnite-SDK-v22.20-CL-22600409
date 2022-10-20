// WidgetBlueprintGeneratedClass LockerArchivingTooltip.LockerArchivingTooltip_C
// Size: 0x468 (Inherited: 0x2b8)
struct ULockerArchivingTooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UWidgetAnimation* FloatLoop; // 0x2c0(0x08)
	struct UWidgetAnimation* burstLoop; // 0x2c8(0x08)
	struct UWidgetAnimation* Show; // 0x2d0(0x08)
	struct UIconTextButton_C* Dismiss_Button; // 0x2d8(0x08)
	struct UImage* Icon; // 0x2e0(0x08)
	struct UImage* Image_Arrow; // 0x2e8(0x08)
	struct USizeBox* ; // 0x2f0(0x08)
	struct UCommonRichTextBlock* Text_Tooltip; // 0x2f8(0x08)
	struct UVerticalBox* ; // 0x300(0x08)
	struct FText In Text; // 0x308(0x18)
	bool In Auto Wrap Text; // 0x320(0x01)
	char pad_321[0xf]; // 0x321(0x0f)
	struct FSlateBrush In Brush; // 0x330(0xc0)
	bool InShowArrow; // 0x3f0(0x01)
	enum class EHorizontalAlignment In Horizontal Alignment; // 0x3f1(0x01)
	enum class EVerticalAlignment In Vertical Alignment; // 0x3f2(0x01)
	char pad_3F3[0x5]; // 0x3f3(0x05)
	struct FWidgetTransform In Transform; // 0x3f8(0x38)
	bool Show Icon; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	double InWidthOverride; // 0x438(0x08)
	struct FMargin Content Padding; // 0x440(0x10)
	bool ShouldShowToolTip; // 0x450(0x01)
	bool bEnabled; // 0x451(0x01)
	char pad_452[0x6]; // 0x452(0x06)
	struct FMulticastInlineDelegate OnDismissed; // 0x458(0x10)

	void SetText(struct FText& Text); // Function LockerArchivingTooltip.LockerArchivingTooltip_C.SetText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetTooltipEnabled(bool bInEnabled); // Function LockerArchivingTooltip.LockerArchivingTooltip_C.SetTooltipEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function LockerArchivingTooltip.LockerArchivingTooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ShowTooltip(); // Function LockerArchivingTooltip.LockerArchivingTooltip_C.ShowTooltip // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HideTooltip(); // Function LockerArchivingTooltip.LockerArchivingTooltip_C.HideTooltip // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__LockerArchivingTooltip_Dismiss_Button_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function LockerArchivingTooltip.LockerArchivingTooltip_C.BndEvt__LockerArchivingTooltip_Dismiss_Button_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void SetTooltipStatus(bool bShouldShowTooltip); // Function LockerArchivingTooltip.LockerArchivingTooltip_C.SetTooltipStatus // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_LockerArchivingTooltip(int32_t EntryPoint); // Function LockerArchivingTooltip.LockerArchivingTooltip_C.ExecuteUbergraph_LockerArchivingTooltip // (Final|UbergraphFunction) // @ game+0xd67374
	void OnDismissed__DelegateSignature(); // Function LockerArchivingTooltip.LockerArchivingTooltip_C.OnDismissed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

