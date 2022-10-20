// WidgetBlueprintGeneratedClass GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C
// Size: 0x620 (Inherited: 0x568)
struct UGamepadCustomActionSelectorPanel_v3_C : UFortGamePadCustomActionSelectorPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	struct UButton* Button_Clear; // 0x570(0x08)
	struct UCommonBorder* CommonBorder_Clear; // 0x578(0x08)
	struct UCommonListView* CommonListView_GamepadActions; // 0x580(0x08)
	struct UFortRichTextBlockLegacy* FortRichTextBlock_Clear1; // 0x588(0x08)
	struct UFortRichTextBlockLegacy* FortRichTextBlock_Clear2; // 0x590(0x08)
	struct UKeybindWidget_C* KeybindWidget_Clear; // 0x598(0x08)
	struct UOptionsMenuHeader_C* OptionsMenuHeader; // 0x5a0(0x08)
	struct FDataTableRowHandle Back; // 0x5a8(0x10)
	struct FMulticastInlineDelegate CustomActionSelected; // 0x5b8(0x10)
	struct TArray<struct UFortOptionsMenuInputData*> CurrentInputData; // 0x5c8(0x10)
	struct FMulticastInlineDelegate CustomClosedUsingBack; // 0x5d8(0x10)
	struct FMulticastInlineDelegate CustomClearButton; // 0x5e8(0x10)
	struct FKey KeyNone; // 0x5f8(0x18)
	struct FDataTableRowHandle Clear; // 0x610(0x10)

	void HandleClear(bool& PassThrough); // Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.HandleClear // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CreateCustomListItem(struct FName ActionName, enum class EFortInputActionGroup InputActionGroup, struct UGamepadKeyTextButton_C*& ReturnItem); // Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CreateCustomListItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleBack(bool& PassThrough); // Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void UpdatePanel(struct TArray<struct UFortOptionsMenuInputData*>& InputData); // Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.UpdatePanel // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnItemClicked_Bind(struct UObject* Item); // Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BP_OnItemClicked_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeactivated(); // Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_Clear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BndEvt__Button_Clear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3(int32_t EntryPoint); // Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3 // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void CustomClearButton__DelegateSignature(); // Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomClearButton__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CustomClosedUsingBack__DelegateSignature(); // Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomClosedUsingBack__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CustomActionSelected__DelegateSignature(int32_t SelectedIndex, struct FName ActionName); // Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomActionSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

