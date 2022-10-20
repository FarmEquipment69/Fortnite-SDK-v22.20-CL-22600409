// WidgetBlueprintGeneratedClass GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C
// Size: 0x630 (Inherited: 0x568)
struct UGamepadInfoSelectorPanel_v3_C : UFortGamePadInfoSelectorPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	struct UCommonBorder* CommonBorder_Reset; // 0x570(0x08)
	struct UFortRadioButtonGroup_C* FortRadioButtonGroup_Configs; // 0x578(0x08)
	struct UFortRadioButtonGroup_C* FortRadioButtonGroup_Platforms; // 0x580(0x08)
	struct UFortRichTextBlockLegacy* FortRichTextBlock_Reset1; // 0x588(0x08)
	struct UFortRichTextBlockLegacy* FortRichTextBlock_Reset2; // 0x590(0x08)
	struct UKeybindWidget_C* KeybindWidget_Reset; // 0x598(0x08)
	struct UOptionsMenuHeader_C* OptionsMenuHeader_Configs; // 0x5a0(0x08)
	struct UOptionsMenuHeader_C* OptionsMenuHeader_Platforms; // 0x5a8(0x08)
	struct UButton* ResetButton; // 0x5b0(0x08)
	struct UVerticalBox* VerticalBox_Platforms; // 0x5b8(0x08)
	struct FDataTableRowHandle Back; // 0x5c0(0x10)
	struct FMulticastInlineDelegate GamepadInfoSelectorBack; // 0x5d0(0x10)
	struct FDataTableRowHandle Apply; // 0x5e0(0x10)
	struct FMulticastInlineDelegate GamepadInfoSelectorApply; // 0x5f0(0x10)
	struct FDataTableRowHandle Reset; // 0x600(0x10)
	struct FMulticastInlineDelegate GamepadInfoSelectorReset; // 0x610(0x10)
	struct FMulticastInlineDelegate GamepadInfoSelectorFocus; // 0x620(0x10)

	struct UWidget* BP_GetDesiredFocusTarget(); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void HandleReset(bool& PassThrough); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleReset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleApply(bool& PassThrough); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleApply // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleBack(bool& PassThrough); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeactivated(); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GamepadInfoSelectorPanel_v3(int32_t EntryPoint); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.ExecuteUbergraph_GamepadInfoSelectorPanel_v3 // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void GamepadInfoSelectorFocus__DelegateSignature(); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorFocus__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GamepadInfoSelectorReset__DelegateSignature(); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorReset__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GamepadInfoSelectorApply__DelegateSignature(); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorApply__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GamepadInfoSelectorBack__DelegateSignature(); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorBack__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

