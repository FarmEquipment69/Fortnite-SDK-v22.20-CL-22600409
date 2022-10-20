// WidgetBlueprintGeneratedClass CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C
// Size: 0x1938 (Inherited: 0x14d0)
struct UCommonIconTextButtonHoldable_C : UFortHoldableButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14d0(0x08)
	struct UWidgetAnimation* HoldProgress; // 0x14d8(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x14e0(0x08)
	struct UBorder* ContentBorder; // 0x14e8(0x08)
	struct UHorizontalBox* HorizontalBox_ButtonContent; // 0x14f0(0x08)
	struct UImage* LeftSideImage; // 0x14f8(0x08)
	struct UOverlay* Overlay_Input_Keybind; // 0x1500(0x08)
	struct UFortMobileImage* PressOrClickIcon; // 0x1508(0x08)
	struct UImage* ProgressCircle; // 0x1510(0x08)
	struct UNamedSlot* RightExtraContentSlot; // 0x1518(0x08)
	struct USpacer* Spacer_EvenSize; // 0x1520(0x08)
	struct USpacer* Spacer_InputAction; // 0x1528(0x08)
	struct UCommonTextBlock* TextBlock_HoldPrompt; // 0x1530(0x08)
	struct UVerticalBox* VerticalBox_Text; // 0x1538(0x08)
	struct FText ButtonText; // 0x1540(0x18)
	char pad_1558[0x8]; // 0x1558(0x08)
	struct FSlateBrush IconBrush; // 0x1560(0xc0)
	struct UCommonButtonStyle* ControllerInputStyle; // 0x1620(0x08)
	struct UCommonButtonStyle* MouseKeyboardStyle; // 0x1628(0x08)
	enum class EHorizontalAlignment ContentAlignment; // 0x1630(0x01)
	bool bMouseKeyboardStyleSet; // 0x1631(0x01)
	char pad_1632[0x6]; // 0x1632(0x06)
	struct FText OverrideButtonText; // 0x1638(0x18)
	enum class ETextJustify ButtonTextJustification; // 0x1650(0x01)
	bool bDisplayAllCaps; // 0x1651(0x01)
	char pad_1652[0x6]; // 0x1652(0x06)
	double PressProgress; // 0x1658(0x08)
	bool bIgnoreInputActionWidgetText; // 0x1660(0x01)
	char pad_1661[0x7]; // 0x1661(0x07)
	struct FMulticastInlineDelegate FocusChangedEvent; // 0x1668(0x10)
	char pad_1678[0x8]; // 0x1678(0x08)
	struct FProgressBarStyle ProgressBarStyle; // 0x1680(0x260)
	struct FMulticastInlineDelegate Hold Completed; // 0x18e0(0x10)
	double HoldPromptPadding; // 0x18f0(0x08)
	bool NewInputActionLayout; // 0x18f8(0x01)
	char pad_18F9[0x7]; // 0x18f9(0x07)
	struct UMaterialInterface* EmptyProgressMat; // 0x1900(0x08)
	bool NewInputActionLayoutForMouse; // 0x1908(0x01)
	bool ForceDefaultInputActionGamepadAnim; // 0x1909(0x01)
	char pad_190A[0x6]; // 0x190a(0x06)
	struct USoundBase* HoldCompleteSound; // 0x1910(0x08)
	struct USoundBase* HoldReleasedSound; // 0x1918(0x08)
	struct USoundBase* HoldSound; // 0x1920(0x08)
	struct UAudioComponent* HoldSoundRef; // 0x1928(0x08)
	struct UCommonTextStyle* SubTextHoverStyle; // 0x1930(0x08)

	void Update Input Hint Visibility(bool ForceVisible); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Update Input Hint Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Input Type(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Update Input Type // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetUseNewInputActionLayout(bool& UseNewLayout); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.GetUseNewInputActionLayout // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetPressProgress(double& Progress); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.GetPressProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Get Dynamic Material(struct UMaterialInstanceDynamic*& Ret Material); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Get Dynamic Material // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShowIcon(bool bShouldShow); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.ShowIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetTextInternal(struct FText InButtonText); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.SetTextInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetInitialMouseKeyboardStyle(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.SetInitialMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateTextStyle(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.UpdateTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateContentAlignment(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.UpdateContentAlignment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetMouseKeyboardStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.SetMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateStyle(bool UsingGamepad); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.UpdateStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateText(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetControllerStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.SetControllerStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateTextAndStyle(enum class ECommonInputType InputType); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitializeButton(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.InitializeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Icon(struct FSlateBrush IconBrush); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Text(struct FText ButtonText); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnActionProgress(float HeldPercent); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnActionComplete(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnCurrentTextStyleChanged(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnTriggeringInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnTriggeringInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnHoldStarted(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnHoldStarted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHoldEnded(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnHoldEnded // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHoldReset(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnHoldReset // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHoldCompleted(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnHoldCompleted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnHoldRequiredChanged(bool bHoldRequired); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnHoldRequiredChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDisabled(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Event On Input Type Updated(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Event On Input Type Updated // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnProgressAnimationFinished(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnProgressAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnProgressAnimationStarted(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.OnProgressAnimationStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnEnabled(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_CommonIconTextButtonHoldable(int32_t EntryPoint); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.ExecuteUbergraph_CommonIconTextButtonHoldable // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void Hold Completed__DelegateSignature(); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.Hold Completed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FocusChangedEvent__DelegateSignature(bool HasFocus); // Function CommonIconTextButtonHoldable.CommonIconTextButtonHoldable_C.FocusChangedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

