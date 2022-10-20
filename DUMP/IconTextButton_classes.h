// WidgetBlueprintGeneratedClass IconTextButton.IconTextButton_C
// Size: 0x15e8 (Inherited: 0x1480)
struct UIconTextButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1488(0x08)
	struct UBorder* ContentBorder; // 0x1490(0x08)
	struct UHorizontalBox* HorizontalBox_ButtonContent; // 0x1498(0x08)
	struct UImage* LeftSideImage; // 0x14a0(0x08)
	struct UNamedSlot* RightExtraContentSlot; // 0x14a8(0x08)
	struct FText ButtonText; // 0x14b0(0x18)
	char pad_14C8[0x8]; // 0x14c8(0x08)
	struct FSlateBrush IconBrush; // 0x14d0(0xc0)
	struct UCommonButtonStyle* ControllerInputStyle; // 0x1590(0x08)
	struct UCommonButtonStyle* MouseKeyboardStyle; // 0x1598(0x08)
	enum class EHorizontalAlignment ContentAlignment; // 0x15a0(0x01)
	bool bMouseKeyboardStyleSet; // 0x15a1(0x01)
	char pad_15A2[0x6]; // 0x15a2(0x06)
	struct FText OverrideButtonText; // 0x15a8(0x18)
	enum class ETextJustify ButtonTextJustification; // 0x15c0(0x01)
	bool bDisplayAllCaps; // 0x15c1(0x01)
	char pad_15C2[0x6]; // 0x15c2(0x06)
	double PressProgress; // 0x15c8(0x08)
	bool bIgnoreInputActionWidgetText; // 0x15d0(0x01)
	char pad_15D1[0x7]; // 0x15d1(0x07)
	struct FMulticastInlineDelegate FocusChangedEvent; // 0x15d8(0x10)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function IconTextButton.IconTextButton_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetPressProgress(double& Progress); // Function IconTextButton.IconTextButton_C.GetPressProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Get Dynamic Material(struct UMaterialInstanceDynamic*& Ret Material); // Function IconTextButton.IconTextButton_C.Get Dynamic Material // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShowIcon(bool bShouldShow); // Function IconTextButton.IconTextButton_C.ShowIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetTextInternal(struct FText InButtonText); // Function IconTextButton.IconTextButton_C.SetTextInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetInitialMouseKeyboardStyle(); // Function IconTextButton.IconTextButton_C.SetInitialMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateTextStyle(); // Function IconTextButton.IconTextButton_C.UpdateTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment); // Function IconTextButton.IconTextButton_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateContentAlignment(); // Function IconTextButton.IconTextButton_C.UpdateContentAlignment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetMouseKeyboardStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function IconTextButton.IconTextButton_C.SetMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateStyle(bool UsingGamepad); // Function IconTextButton.IconTextButton_C.UpdateStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateText(); // Function IconTextButton.IconTextButton_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetControllerStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function IconTextButton.IconTextButton_C.SetControllerStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateTextAndStyle(enum class ECommonInputType InputType); // Function IconTextButton.IconTextButton_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitializeButton(); // Function IconTextButton.IconTextButton_C.InitializeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Icon(struct FSlateBrush IconBrush); // Function IconTextButton.IconTextButton_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Text(struct FText ButtonText); // Function IconTextButton.IconTextButton_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCurrentTextStyleChanged(); // Function IconTextButton.IconTextButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function IconTextButton.IconTextButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function IconTextButton.IconTextButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function IconTextButton.IconTextButton_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnActionProgress(float HeldPercent); // Function IconTextButton.IconTextButton_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnActionComplete(); // Function IconTextButton.IconTextButton_C.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function IconTextButton.IconTextButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function IconTextButton.IconTextButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnTriggeringInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function IconTextButton.IconTextButton_C.OnTriggeringInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function IconTextButton.IconTextButton_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_IconTextButton(int32_t EntryPoint); // Function IconTextButton.IconTextButton_C.ExecuteUbergraph_IconTextButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void FocusChangedEvent__DelegateSignature(bool HasFocus); // Function IconTextButton.IconTextButton_C.FocusChangedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

