// WidgetBlueprintGeneratedClass FlagSelectionModal.FlagSelectionModal_C
// Size: 0x648 (Inherited: 0x620)
struct UFlagSelectionModal_C : UFortFlagSelectionModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UVerticalBox* FlagConfirmation; // 0x628(0x08)
	struct UVerticalBox* FlagSelection; // 0x630(0x08)
	struct USafeZone* ; // 0x638(0x08)
	struct UWidgetSwitcher* Switcher_Confirmation; // 0x640(0x08)

	void Handle Back(bool& PassThrough); // Function FlagSelectionModal.FlagSelectionModal_C.Handle Back // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_Change_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function FlagSelectionModal.FlagSelectionModal_C.BndEvt__Button_Change_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_ConfirmationCancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function FlagSelectionModal.FlagSelectionModal_C.BndEvt__Button_ConfirmationCancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function FlagSelectionModal.FlagSelectionModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_FlagSelectionModal(int32_t EntryPoint); // Function FlagSelectionModal.FlagSelectionModal_C.ExecuteUbergraph_FlagSelectionModal // (Final|UbergraphFunction) // @ game+0xd67374
};

