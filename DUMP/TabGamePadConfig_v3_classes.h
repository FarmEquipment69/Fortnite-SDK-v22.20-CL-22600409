// WidgetBlueprintGeneratedClass TabGamePadConfig_v3.TabGamePadConfig_v3_C
// Size: 0x580 (Inherited: 0x478)
struct UTabGamePadConfig_v3_C : UFortGamepadInputOptions {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UGamepadInfoSelectorPanel_v3_C* GamepadInfoSelectorPanel_v3; // 0x480(0x08)
	struct UGamepadMappingInfo_v3_C* GamepadMappingInfo_v3; // 0x488(0x08)
	struct FMulticastInlineDelegate GamepadMappingInfoChanged; // 0x490(0x10)
	struct TArray<struct FString> InputPresets; // 0x4a0(0x10)
	struct TArray<struct FText> InputPresetNames_NoCustom; // 0x4b0(0x10)
	int32_t PresetMappingIndex; // 0x4c0(0x04)
	int32_t PlatformMappingIndex; // 0x4c4(0x04)
	int32_t CustomInputTemplatePresetIndex; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct UGamepadKeyTextButton_C* DisplayObject; // 0x4d0(0x08)
	enum class EFortInputActionGroup CurrentInputActionGroup; // 0x4d8(0x01)
	char pad_4D9[0x3]; // 0x4d9(0x03)
	int32_t CustomResetToDefaultConfig; // 0x4dc(0x04)
	struct FKey CustomKeySelection; // 0x4e0(0x18)
	struct FName CustomActionSelection; // 0x4f8(0x04)
	int32_t CustomInputActionGroupSelectionIndex; // 0x4fc(0x04)
	int32_t CustomActionSelectionIndex; // 0x500(0x04)
	char pad_504[0x4]; // 0x504(0x04)
	struct FKey Key_None; // 0x508(0x18)
	struct UIconTextButton_C* RadioButtonClass; // 0x520(0x08)
	struct UCommonButtonStyle* RadioButtonStyle; // 0x528(0x08)
	struct TArray<struct UFortOptionsMenuInputData*> InputDataForActionsPanel; // 0x530(0x10)
	struct FMulticastInlineDelegate TabGamePadConfigBack; // 0x540(0x10)
	struct FMulticastInlineDelegate TabGamePadConfigApply; // 0x550(0x10)
	struct FMulticastInlineDelegate TabGamePadActionsThatNeedBinds; // 0x560(0x10)
	struct FMulticastInlineDelegate OverrideResetModal; // 0x570(0x10)

	void GamepadInfoSelectorNavRight(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadInfoSelectorNavRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AreWeOkayWithThisChange(struct FName ActionName, struct FKey Key, bool& IsOkay); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.AreWeOkayWithThisChange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleGamepadInfoSelectorFocus(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NavigateToSelectedConfig(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.NavigateToSelectedConfig // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ChangeCustomClearVisibilityForInputType(enum class ECommonInputType InputType); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomClearVisibilityForInputType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ChangeCustomResetVisibilityForInputType(enum class ECommonInputType InputType); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomResetVisibilityForInputType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleGamepadInfoSelectorApply(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorApply // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleGamepadInfoSelectorBack(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorBack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ChangeCustomTabListVisibilityForInputType(enum class ECommonInputType Selection); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomTabListVisibilityForInputType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct TArray<struct FConfirmationDialogAction> CreateCustomResetToDefaultList(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CreateCustomResetToDefaultList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CloseCustomActionsPanel(bool FocusLastButton); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CloseCustomActionsPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SelectSameItemInActionsList(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.SelectSameItemInActionsList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupDisplayObject(struct FName ActionName, struct FKey Key, struct UGamepadKeyTextButton_C*& DisplayObject); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.SetupDisplayObject // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool IsCustomConfig(int32_t PresetIndex); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.IsCustomConfig // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleGamepadMappingInfoChange(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadMappingInfoChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetCurrentPlatformIndex(int32_t& PlatformIndex); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GetCurrentPlatformIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void UpdateData(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.UpdateData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstructData(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.PreConstructData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitializeData(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.InitializeData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DialogResult_017CD690454514A07B4DE5BE109AEC6E(enum class EFortDialogResult Result, struct FName ResultName); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DialogResult_017CD690454514A07B4DE5BE109AEC6E // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DialogResult_7D7E06D747FFEF9849D3CAA2D3D91717(enum class EFortDialogResult Result, struct FName ResultName); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DialogResult_7D7E06D747FFEF9849D3CAA2D3D91717 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Gamepad Config Changed(struct UCommonButtonLegacy* AssociatedButton, int32_t ButtonIndex); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.Gamepad Config Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GamepadPlatformConfigChanged(struct UCommonButtonLegacy* AssociatedButton, int32_t ButtonIndex); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadPlatformConfigChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CenterOnTab(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CenterOnTab // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateOptionsTab(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.UpdateOptionsTab // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CustomDoResetToDefault(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomDoResetToDefault // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CustomKeySelected_Bind(struct FKey Key); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomKeySelected_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CustomActionSelected_Bind(int32_t SelectedIndex, struct FName ActionName); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomActionSelected_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CustomClosedUsingBack_Bind(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomClosedUsingBack_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CustomClearButton_Bind(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomClearButton_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ModesTabSelected_Bind(struct FName TabId); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ModesTabSelected_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleUsingGamepadChanged(enum class ECommonInputType NewInputType); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleUsingGamepadChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTabDeactivated_Bind(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.OnTabDeactivated_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTabActivated_Bind(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.OnTabActivated_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void DeadZoneLookSettingValueChanged_Bind(float Value); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DeadZoneLookSettingValueChanged_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DeadZoneMoveSettingValueChanged_Bind(float Value); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DeadZoneMoveSettingValueChanged_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TabGamePadConfig_v3(int32_t EntryPoint); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ExecuteUbergraph_TabGamePadConfig_v3 // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OverrideResetModal__DelegateSignature(bool bOverride); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.OverrideResetModal__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TabGamePadActionsThatNeedBinds__DelegateSignature(struct TArray<struct FText>& ScreenLabels); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadActionsThatNeedBinds__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TabGamePadConfigApply__DelegateSignature(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadConfigApply__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TabGamePadConfigBack__DelegateSignature(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadConfigBack__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GamepadMappingInfoChanged__DelegateSignature(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadMappingInfoChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

