// WidgetBlueprintGeneratedClass OnboardingTextInputActionButton.OnboardingTextInputActionButton_C
// Size: 0x15c9 (Inherited: 0x1480)
struct UOnboardingTextInputActionButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1488(0x08)
	struct UBorder* ContentBorder; // 0x1490(0x08)
	struct UImage* LeftSideImage; // 0x1498(0x08)
	struct UNamedSlot* RightExtraContentSlot; // 0x14a0(0x08)
	struct FText ButtonText; // 0x14a8(0x18)
	struct FSlateBrush IconBrush; // 0x14c0(0xc0)
	struct UCommonButtonStyle* ControllerInputStyle; // 0x1580(0x08)
	struct UCommonButtonStyle* TouchStyle; // 0x1588(0x08)
	struct UCommonButtonStyle* MouseKeyboardStyle; // 0x1590(0x08)
	enum class EHorizontalAlignment ContentAlignment; // 0x1598(0x01)
	bool bMouseKeyboardStyleSet; // 0x1599(0x01)
	char pad_159A[0x6]; // 0x159a(0x06)
	struct FText OverrideButtonText; // 0x15a0(0x18)
	enum class ETextJustify ButtonTextJustification; // 0x15b8(0x01)
	bool bDisplayAllCaps; // 0x15b9(0x01)
	char pad_15BA[0x6]; // 0x15ba(0x06)
	double PressProgress; // 0x15c0(0x08)
	bool bIgnoreInputActionWidgetText; // 0x15c8(0x01)

	void GetPressProgress(double& Progress); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.GetPressProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Get Dynamic Material(struct UMaterialInstanceDynamic*& Ret Material); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.Get Dynamic Material // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShowIcon(bool bShouldShow); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.ShowIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetTextInternal(struct FText InButtonText); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.SetTextInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetInitialMouseKeyboardStyle(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.SetInitialMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateTextStyle(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.UpdateTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateContentAlignment(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.UpdateContentAlignment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetMouseKeyboardStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.SetMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateStyle(enum class ECommonInputType CurrentInputType); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.UpdateStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateText(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetControllerStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.SetControllerStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateTextAndStyle(enum class ECommonInputType InputType); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitializeButton(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.InitializeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Icon(struct FSlateBrush IconBrush); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Text(struct FText ButtonText); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCurrentTextStyleChanged(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnActionProgress(float HeldPercent); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnActionComplete(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_OnboardingTextInputActionButton(int32_t EntryPoint); // Function OnboardingTextInputActionButton.OnboardingTextInputActionButton_C.ExecuteUbergraph_OnboardingTextInputActionButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

