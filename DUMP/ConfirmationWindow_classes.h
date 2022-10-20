// WidgetBlueprintGeneratedClass ConfirmationWindow.ConfirmationWindow_C
// Size: 0x788 (Inherited: 0x760)
struct UConfirmationWindow_C : UFortConfirmationWindow {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x760(0x08)
	struct USizeBox* ; // 0x768(0x08)
	struct UCommonBorder* TapToCloseZone; // 0x770(0x08)
	struct FLinearColor ButtonIconColor; // 0x778(0x10)

	void HandleConfigureDeclineButton(struct UCommonButtonLegacy* New Button); // Function ConfirmationWindow.ConfirmationWindow_C.HandleConfigureDeclineButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ConfigureConfirmationButton(struct UCommonButtonLegacy* Button, struct FConfirmationDialogAction& Action, bool bSimpleConfirm); // Function ConfirmationWindow.ConfirmationWindow_C.ConfigureConfirmationButton // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayShowSound(); // Function ConfirmationWindow.ConfirmationWindow_C.PlayShowSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FEventReply TapToClose(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ConfirmationWindow.ConfirmationWindow_C.TapToClose // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupNonInteractiveContent(); // Function ConfirmationWindow.ConfirmationWindow_C.SetupNonInteractiveContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FDataTableRowHandle GetInputAction(struct FName RowName, bool UseInputAction); // Function ConfirmationWindow.ConfirmationWindow_C.GetInputAction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Initialize(); // Function ConfirmationWindow.ConfirmationWindow_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBeginOutro(); // Function ConfirmationWindow.ConfirmationWindow_C.OnBeginOutro // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ConfigureDeclineButton(struct UCommonButtonLegacy* Button); // Function ConfirmationWindow.ConfirmationWindow_C.ConfigureDeclineButton // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function ConfirmationWindow.ConfirmationWindow_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ConfirmationWindow.ConfirmationWindow_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function ConfirmationWindow.ConfirmationWindow_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ConfirmationWindow(int32_t EntryPoint); // Function ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

