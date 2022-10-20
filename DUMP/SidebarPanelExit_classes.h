// WidgetBlueprintGeneratedClass SidebarPanelExit.SidebarPanelExit_C
// Size: 0x488 (Inherited: 0x438)
struct USidebarPanelExit_C : UFortSidebarPanelExit {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct FText LogoutAllowedNoButtonsText; // 0x440(0x18)
	struct FText LogoutAndQuitNotAllowedNoButtonsText; // 0x458(0x18)
	struct FText QuitAllowedNoButtonsText; // 0x470(0x18)

	void DialogResult_72E03FD949433FCC7FD537BE143F3FA1(enum class EFortDialogResult Result, struct FName ResultName); // Function SidebarPanelExit.SidebarPanelExit_C.DialogResult_72E03FD949433FCC7FD537BE143F3FA1 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DialogResult_D6C37C7D45574B8D0C2F22B5DE53C01B(enum class EFortDialogResult Result, struct FName ResultName); // Function SidebarPanelExit.SidebarPanelExit_C.DialogResult_D6C37C7D45574B8D0C2F22B5DE53C01B // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__SidebarPanelExit_Button_ExitGame_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarPanelExit.SidebarPanelExit_C.BndEvt__SidebarPanelExit_Button_ExitGame_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__SidebarPanelExit_Button_Logout_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarPanelExit.SidebarPanelExit_C.BndEvt__SidebarPanelExit_Button_Logout_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void UpdateNoEnabledButtonsText(bool bAllowLogout, bool bAllowQuit); // Function SidebarPanelExit.SidebarPanelExit_C.UpdateNoEnabledButtonsText // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarPanelExit(int32_t EntryPoint); // Function SidebarPanelExit.SidebarPanelExit_C.ExecuteUbergraph_SidebarPanelExit // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

