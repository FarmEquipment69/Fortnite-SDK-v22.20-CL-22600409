// WidgetBlueprintGeneratedClass PanelButton.PanelButton_C
// Size: 0x14d0 (Inherited: 0x1480)
struct UPanelButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UNamedSlot* ContentSlot; // 0x1488(0x08)
	struct UCommonButtonStyle* ControllerInputStyle; // 0x1490(0x08)
	struct UCommonButtonStyle* MouseKeyboardStyle; // 0x1498(0x08)
	enum class EHorizontalAlignment InputActionHorizontalAlignment; // 0x14a0(0x01)
	enum class EVerticalAlignment InputActionVerticalAlignment; // 0x14a1(0x01)
	char pad_14A2[0x6]; // 0x14a2(0x06)
	struct FVector2D InputActionRenderTranslation; // 0x14a8(0x10)
	bool InputActionUseRimBrush; // 0x14b8(0x01)
	char pad_14B9[0x7]; // 0x14b9(0x07)
	struct FVector2D InputActionRimBrushSize; // 0x14c0(0x10)

	void UpdateInputActionLayout(); // Function PanelButton.PanelButton_C.UpdateInputActionLayout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateStyle(bool bUsingGamepad); // Function PanelButton.PanelButton_C.UpdateStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitializeButton(); // Function PanelButton.PanelButton_C.InitializeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateTextAndStyle(); // Function PanelButton.PanelButton_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function PanelButton.PanelButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function PanelButton.PanelButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function PanelButton.PanelButton_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnActionProgress(float HeldPercent); // Function PanelButton.PanelButton_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnActionComplete(); // Function PanelButton.PanelButton_C.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function PanelButton.PanelButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function PanelButton.PanelButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function PanelButton.PanelButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PanelButton(int32_t EntryPoint); // Function PanelButton.PanelButton_C.ExecuteUbergraph_PanelButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

