// WidgetBlueprintGeneratedClass SidebarExitPopup.SidebarExitPopup_C
// Size: 0x590 (Inherited: 0x4d0)
struct USidebarExitPopup_C : UFortSidebarExitPopup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	struct UBorder* Border_SpacingMobile; // 0x4d8(0x08)
	struct UOverlay* Overlay_Favorite; // 0x4e0(0x08)
	struct UOverlay* Overlay_SAC; // 0x4e8(0x08)
	struct UCommonTextBlock* Text_AreYouSure; // 0x4f0(0x08)
	struct FText LogoutAllowedNoButtonsText; // 0x4f8(0x18)
	struct FText LogoutAndQuitNotAllowedNoButtonsText; // 0x510(0x18)
	struct FText QuitAllowedNoButtonsText; // 0x528(0x18)
	bool Is A; // 0x540(0x01)
	char pad_541[0x7]; // 0x541(0x07)
	struct FText LeaveExperienceConfirmationMessageText; // 0x548(0x18)
	struct FText LogoutConfirmationMessageText; // 0x560(0x18)
	struct FText ExitConfirmationMessageText; // 0x578(0x18)

	void RefreshButtonsVisual(bool IsTouch); // Function SidebarExitPopup.SidebarExitPopup_C.RefreshButtonsVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInputMethodChanged(enum class ECommonInputType NewInputType); // Function SidebarExitPopup.SidebarExitPopup_C.OnInputMethodChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__SidebarExitPopup_Button_Logout_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarExitPopup.SidebarExitPopup_C.BndEvt__SidebarExitPopup_Button_Logout_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__SidebarExitPopup_Button_ExitGame_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarExitPopup.SidebarExitPopup_C.BndEvt__SidebarExitPopup_Button_ExitGame_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__SidebarExitPopup_Button_Yes_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarExitPopup.SidebarExitPopup_C.BndEvt__SidebarExitPopup_Button_Yes_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__SidebarExitPopup_Button_No_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarExitPopup.SidebarExitPopup_C.BndEvt__SidebarExitPopup_Button_No_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__SidebarExitPopup_Button_LeaveExperience_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarExitPopup.SidebarExitPopup_C.BndEvt__SidebarExitPopup_Button_LeaveExperience_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__SidebarExitPopup_Button_AthenaMainMenuLeave_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarExitPopup.SidebarExitPopup_C.BndEvt__SidebarExitPopup_Button_AthenaMainMenuLeave_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void UpdateNoEnabledButtonsText(bool bAllowLogout, bool bAllowQuit); // Function SidebarExitPopup.SidebarExitPopup_C.UpdateNoEnabledButtonsText // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function SidebarExitPopup.SidebarExitPopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarExitPopup(int32_t EntryPoint); // Function SidebarExitPopup.SidebarExitPopup_C.ExecuteUbergraph_SidebarExitPopup // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

