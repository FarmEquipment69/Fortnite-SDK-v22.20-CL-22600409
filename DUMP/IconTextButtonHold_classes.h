// WidgetBlueprintGeneratedClass IconTextButtonHold.IconTextButtonHold_C
// Size: 0x1610 (Inherited: 0x1480)
struct UIconTextButtonHold_C : UCommonButtonLegacy {
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
	struct FMulticastInlineDelegate HoldActionStarted; // 0x15d8(0x10)
	bool bHolding; // 0x15e8(0x01)
	char pad_15E9[0x7]; // 0x15e9(0x07)
	struct FMulticastInlineDelegate HoldActionEnded; // 0x15f0(0x10)
	struct FMulticastInlineDelegate HoldActionCompleted; // 0x1600(0x10)

	void GetPressProgress(double& Progress); // Function IconTextButtonHold.IconTextButtonHold_C.GetPressProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Get Dynamic Material(struct UMaterialInstanceDynamic*& Ret Material); // Function IconTextButtonHold.IconTextButtonHold_C.Get Dynamic Material // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShowIcon(bool bShouldShow); // Function IconTextButtonHold.IconTextButtonHold_C.ShowIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetTextInternal(struct FText InButtonText); // Function IconTextButtonHold.IconTextButtonHold_C.SetTextInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetInitialMouseKeyboardStyle(); // Function IconTextButtonHold.IconTextButtonHold_C.SetInitialMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateTextStyle(); // Function IconTextButtonHold.IconTextButtonHold_C.UpdateTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment); // Function IconTextButtonHold.IconTextButtonHold_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateContentAlignment(); // Function IconTextButtonHold.IconTextButtonHold_C.UpdateContentAlignment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetMouseKeyboardStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function IconTextButtonHold.IconTextButtonHold_C.SetMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateStyle(bool UsingGamepad); // Function IconTextButtonHold.IconTextButtonHold_C.UpdateStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateText(); // Function IconTextButtonHold.IconTextButtonHold_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetControllerStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function IconTextButtonHold.IconTextButtonHold_C.SetControllerStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateTextAndStyle(enum class ECommonInputType InputType); // Function IconTextButtonHold.IconTextButtonHold_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitializeButton(); // Function IconTextButtonHold.IconTextButtonHold_C.InitializeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Icon(struct FSlateBrush IconBrush); // Function IconTextButtonHold.IconTextButtonHold_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Text(struct FText ButtonText); // Function IconTextButtonHold.IconTextButtonHold_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCurrentTextStyleChanged(); // Function IconTextButtonHold.IconTextButtonHold_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function IconTextButtonHold.IconTextButtonHold_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function IconTextButtonHold.IconTextButtonHold_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function IconTextButtonHold.IconTextButtonHold_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnActionProgress(float HeldPercent); // Function IconTextButtonHold.IconTextButtonHold_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnActionComplete(); // Function IconTextButtonHold.IconTextButtonHold_C.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function IconTextButtonHold.IconTextButtonHold_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function IconTextButtonHold.IconTextButtonHold_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_IconTextButtonHold(int32_t EntryPoint); // Function IconTextButtonHold.IconTextButtonHold_C.ExecuteUbergraph_IconTextButtonHold // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void HoldActionCompleted__DelegateSignature(); // Function IconTextButtonHold.IconTextButtonHold_C.HoldActionCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HoldActionEnded__DelegateSignature(); // Function IconTextButtonHold.IconTextButtonHold_C.HoldActionEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HoldActionStarted__DelegateSignature(); // Function IconTextButtonHold.IconTextButtonHold_C.HoldActionStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

