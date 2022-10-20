// WidgetBlueprintGeneratedClass FortCheckbox.FortCheckbox_C
// Size: 0x320 (Inherited: 0x2e0)
struct UFortCheckbox_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UButton* CheckButton; // 0x2e8(0x08)
	struct UImage* Image_Checked; // 0x2f0(0x08)
	struct UImage* Image_Unchecked; // 0x2f8(0x08)
	struct UWidgetSwitcher* Switcher_CheckBox; // 0x300(0x08)
	bool Selected; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct FMulticastInlineDelegate OnClicked; // 0x310(0x10)

	void Refresh(); // Function FortCheckbox.FortCheckbox_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetSelected(bool NewSelected); // Function FortCheckbox.FortCheckbox_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ToggleCheckbox(); // Function FortCheckbox.FortCheckbox_C.ToggleCheckbox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function FortCheckbox.FortCheckbox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CheckButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function FortCheckbox.FortCheckbox_C.BndEvt__CheckButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_FortCheckbox(int32_t EntryPoint); // Function FortCheckbox.FortCheckbox_C.ExecuteUbergraph_FortCheckbox // (Final|UbergraphFunction) // @ game+0xd67374
	void OnClicked__DelegateSignature(); // Function FortCheckbox.FortCheckbox_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

