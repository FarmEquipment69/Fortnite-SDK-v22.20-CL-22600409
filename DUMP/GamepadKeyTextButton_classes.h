// WidgetBlueprintGeneratedClass GamepadKeyTextButton.GamepadKeyTextButton_C
// Size: 0x1548 (Inherited: 0x1490)
struct UGamepadKeyTextButton_C : UFortGamepadCustomListItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UKeybindWidget_C* BoundKey; // 0x1498(0x08)
	struct UBorder* ContentBorder; // 0x14a0(0x08)
	struct UFortRichTextBlockLegacy* FortRichTextBlock_Desc; // 0x14a8(0x08)
	struct UFortRichTextBlockLegacy* FortRichTextBlock_NoKey; // 0x14b0(0x08)
	struct USizeBox* SizeBox_Nokey; // 0x14b8(0x08)
	struct FText ButtonText; // 0x14c0(0x18)
	struct UCommonButtonStyle* ControllerInputStyle; // 0x14d8(0x08)
	enum class EHorizontalAlignment ContentAlignment; // 0x14e0(0x01)
	char pad_14E1[0x7]; // 0x14e1(0x07)
	struct FMulticastInlineDelegate ChangeTheBinding_Button; // 0x14e8(0x10)
	struct FName ActionNameData; // 0x14f8(0x04)
	char pad_14FC[0x4]; // 0x14fc(0x04)
	struct FKey KeyData; // 0x1500(0x18)
	struct FText TextData; // 0x1518(0x18)
	struct FKey KeyNone; // 0x1530(0x18)

	void SetNonInteractableStyle(); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetNonInteractableStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateContentAlignment(); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateContentAlignment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetData(struct FKey Key, struct FText DescText, struct FName ActionName); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetData // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetDataAndUpdateButton(struct FKey Key, struct FText DescText, struct FName ActionName); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetDataAndUpdateButton // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateButton(struct UGamepadKeyTextButton_C* Button); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateButton // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GamepadKeyTextButton(int32_t EntryPoint); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.ExecuteUbergraph_GamepadKeyTextButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void ChangeTheBinding_Button__DelegateSignature(struct FName ActionName, struct FKey Key); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.ChangeTheBinding_Button__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

