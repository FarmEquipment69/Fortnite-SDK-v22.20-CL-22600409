// WidgetBlueprintGeneratedClass FortSidebarCheckbox.FortSidebarCheckbox_C
// Size: 0x338 (Inherited: 0x308)
struct UFortSidebarCheckbox_C : UFortSidebarCheckboxWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UImage* Image_Checked; // 0x310(0x08)
	struct UImage* Image_Unchecked; // 0x318(0x08)
	bool bIsSelected; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct FMulticastInlineDelegate OnClicked; // 0x328(0x10)

	void Refresh(); // Function FortSidebarCheckbox.FortSidebarCheckbox_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetSelected(bool NewSelected); // Function FortSidebarCheckbox.FortSidebarCheckbox_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ToggleCheckbox(); // Function FortSidebarCheckbox.FortSidebarCheckbox_C.ToggleCheckbox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function FortSidebarCheckbox.FortSidebarCheckbox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CheckButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function FortSidebarCheckbox.FortSidebarCheckbox_C.BndEvt__CheckButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_ToggleCheckbox(); // Function FortSidebarCheckbox.FortSidebarCheckbox_C.BP_ToggleCheckbox // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_FortSidebarCheckbox(int32_t EntryPoint); // Function FortSidebarCheckbox.FortSidebarCheckbox_C.ExecuteUbergraph_FortSidebarCheckbox // (Final|UbergraphFunction) // @ game+0xd67374
	void OnClicked__DelegateSignature(); // Function FortSidebarCheckbox.FortSidebarCheckbox_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

