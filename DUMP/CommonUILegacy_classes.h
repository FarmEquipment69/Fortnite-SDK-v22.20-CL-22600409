// Class CommonUILegacy.CommonActivatablePanelLegacy
// Size: 0x530 (Inherited: 0x3f8)
struct UCommonActivatablePanelLegacy : UCommonActivatableWidget {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct FMulticastInlineDelegate OnWidgetActivated; // 0x400(0x10)
	struct FMulticastInlineDelegate OnWidgetDeactivated; // 0x410(0x10)
	bool bConsumeAllActions; // 0x420(0x01)
	bool bExposeActionsExternally; // 0x421(0x01)
	bool bShouldBypassStack; // 0x422(0x01)
	char pad_423[0x10d]; // 0x423(0x10d)

	void SetInputActionHandlerWithProgressPopupMenu(struct FDataTableRowHandle InputActionRow, struct FDelegate CommitedEvent, struct FDelegate ProgressEvent, struct UCommonPopupMenuLegacy* PopupMenu); // Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgressPopupMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x63cc84c
	void SetInputActionHandlerWithProgress(struct FDataTableRowHandle InputActionRow, struct FDelegate CommitedEvent, struct FDelegate ProgressEvent); // Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgress // (Final|Native|Public|BlueprintCallable) // @ game+0x63cc708
	void SetInputActionHandlerWithPopupMenu(struct FDataTableRowHandle InputActionRow, struct FDelegate CommitedEvent, struct UCommonPopupMenuLegacy* PopupMenu); // Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithPopupMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x63cc5b8
	void SetInputActionHandler(struct FDataTableRowHandle InputActionRow, struct FDelegate CommitedEvent); // Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandler // (Final|Native|Public|BlueprintCallable) // @ game+0x1dea8e0
	void SetActionHandlerStateWithDisabledCommitEvent(struct UDataTable* DataTable, struct FName RowName, enum class EInputActionState State, struct FDelegate DisabledCommitEvent); // Function CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateWithDisabledCommitEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x63cc1b4
	void SetActionHandlerStateFromHandleWithDisabledCommitEvent(struct FDataTableRowHandle InputActionRow, enum class EInputActionState State, struct FDelegate DisabledCommitEvent); // Function CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandleWithDisabledCommitEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x63cc08c
	void SetActionHandlerStateFromHandle(struct FDataTableRowHandle InputActionRow, enum class EInputActionState State); // Function CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x63cbfb8
	void SetActionHandlerState(struct UDataTable* DataTable, struct FName RowName, enum class EInputActionState State); // Function CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerState // (Final|Native|Public|BlueprintCallable) // @ game+0x63cbe9c
	void RemoveInputActionHandler(struct FDataTableRowHandle InputActionRow); // Function CommonUILegacy.CommonActivatablePanelLegacy.RemoveInputActionHandler // (Final|Native|Public|BlueprintCallable) // @ game+0x63cbde0
	void RemoveAllInputActionHandlers(); // Function CommonUILegacy.CommonActivatablePanelLegacy.RemoveAllInputActionHandlers // (Final|Native|Public|BlueprintCallable) // @ game+0x63cbdcc
	void PopPanel(); // Function CommonUILegacy.CommonActivatablePanelLegacy.PopPanel // (Native|Public|BlueprintCallable) // @ game+0x5c3ced0
	void OnTransitionedBySwitcher(); // Function CommonUILegacy.CommonActivatablePanelLegacy.OnTransitionedBySwitcher // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnRemovedFromActivationStack(); // Function CommonUILegacy.CommonActivatablePanelLegacy.OnRemovedFromActivationStack // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInputModeChanged(bool bUsingGamepad); // Function CommonUILegacy.CommonActivatablePanelLegacy.OnInputModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnBeginOutro(); // Function CommonUILegacy.CommonActivatablePanelLegacy.OnBeginOutro // (Native|Event|Protected|BlueprintEvent) // @ game+0x1906db4
	void OnBeginIntro(); // Function CommonUILegacy.CommonActivatablePanelLegacy.OnBeginIntro // (Native|Event|Protected|BlueprintEvent) // @ game+0x25bac98
	void OnAddedToActivationStack(); // Function CommonUILegacy.CommonActivatablePanelLegacy.OnAddedToActivationStack // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	bool IsIntroed(); // Function CommonUILegacy.CommonActivatablePanelLegacy.IsIntroed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x63cb9d0
	bool IsInActivationStack(); // Function CommonUILegacy.CommonActivatablePanelLegacy.IsInActivationStack // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x63cb98c
	bool HasInputActionHandler(struct FDataTableRowHandle InputActionRow); // Function CommonUILegacy.CommonActivatablePanelLegacy.HasInputActionHandler // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x63cb8f0
	bool GetInputActions(struct TArray<struct FCommonInputActionHandlerData>& InputActionDataRows); // Function CommonUILegacy.CommonActivatablePanelLegacy.GetInputActions // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x63caf6c
	void EndOutro(); // Function CommonUILegacy.CommonActivatablePanelLegacy.EndOutro // (Final|Native|Protected|BlueprintCallable) // @ game+0x2ad8554
	void EndIntro(); // Function CommonUILegacy.CommonActivatablePanelLegacy.EndIntro // (Final|Native|Protected|BlueprintCallable) // @ game+0x25bac84
	void BeginOutro(); // Function CommonUILegacy.CommonActivatablePanelLegacy.BeginOutro // (Final|Native|Public|BlueprintCallable) // @ game+0x63cac3c
	void BeginIntro(); // Function CommonUILegacy.CommonActivatablePanelLegacy.BeginIntro // (Final|Native|Public|BlueprintCallable) // @ game+0x63cac28
	void AddInputActionNoHandler(struct UDataTable* DataTable, struct FName RowName); // Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionNoHandler // (Final|Native|Public|BlueprintCallable) // @ game+0x63cab14
	void AddInputActionHandlerWithProgressPopup(struct UDataTable* DataTable, struct FName RowName, struct FDelegate CommitedEvent, struct FDelegate ProgressEvent, struct UCommonPopupMenuLegacy* PopupMenu); // Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithProgressPopup // (Final|Native|Public|BlueprintCallable) // @ game+0x63ca94c
	void AddInputActionHandlerWithProgress(struct UDataTable* DataTable, struct FName RowName, struct FDelegate CommitedEvent, struct FDelegate ProgressEvent); // Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithProgress // (Final|Native|Public|BlueprintCallable) // @ game+0x63ca7e4
	void AddInputActionHandlerWithPopup(struct UDataTable* DataTable, struct FName RowName, struct FDelegate CommitedEvent, struct UCommonPopupMenuLegacy* PopupMenu); // Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithPopup // (Final|Native|Public|BlueprintCallable) // @ game+0x63ca658
	void AddInputActionHandler(struct UDataTable* DataTable, struct FName RowName, struct FDelegate CommitedEvent); // Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandler // (Final|Native|Public|BlueprintCallable) // @ game+0x63ca54c
};

// Class CommonUILegacy.CommonButtonGroupLegacy
// Size: 0x1b0 (Inherited: 0x110)
struct UCommonButtonGroupLegacy : UCommonButtonGroupBase {
	struct FMulticastInlineDelegate OnSelectedButtonChanged; // 0x110(0x10)
	char pad_120[0x18]; // 0x120(0x18)
	struct FMulticastInlineDelegate OnHoveredButtonChanged; // 0x138(0x10)
	char pad_148[0x18]; // 0x148(0x18)
	struct FMulticastInlineDelegate OnButtonClicked; // 0x160(0x10)
	char pad_170[0x18]; // 0x170(0x18)
	struct FMulticastInlineDelegate OnButtonDoubleClicked; // 0x188(0x10)
	char pad_198[0x18]; // 0x198(0x18)

	void OnSelectionStateChanged(struct UCommonButtonLegacy* BaseButton, bool bIsSelected); // Function CommonUILegacy.CommonButtonGroupLegacy.OnSelectionStateChanged // (Native|Protected) // @ game+0x2437d64
	void OnHandleButtonDoubleClicked(struct UCommonButtonLegacy* BaseButton); // Function CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonDoubleClicked // (Native|Protected) // @ game+0x63cba98
	void OnHandleButtonClicked(struct UCommonButtonLegacy* BaseButton); // Function CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonClicked // (Native|Protected) // @ game+0x27ed154
	void OnButtonUnhovered(struct UCommonButtonLegacy* BaseButton); // Function CommonUILegacy.CommonButtonGroupLegacy.OnButtonUnhovered // (Native|Protected) // @ game+0x26dcc20
	void OnButtonHovered(struct UCommonButtonLegacy* BaseButton); // Function CommonUILegacy.CommonButtonGroupLegacy.OnButtonHovered // (Native|Protected) // @ game+0x26dcb9c
	void HandleOnSelectedButtonChanged(struct UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnSelectedButtonChanged // (Final|Native|Private) // @ game+0x24c2144
	void HandleOnHoveredButtonChanged(struct UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnHoveredButtonChanged // (Final|Native|Private) // @ game+0x2543144
	void HandleOnButtonDoubleClicked(struct UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonDoubleClicked // (Final|Native|Private) // @ game+0x63cb5ec
	void HandleOnButtonClicked(struct UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonClicked // (Final|Native|Private) // @ game+0x271c248
	void HandleNativeOnSelectedButtonChanged(struct UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnSelectedButtonChanged // (Final|Native|Private) // @ game+0x63cb528
	void HandleNativeOnHoveredButtonChanged(struct UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnHoveredButtonChanged // (Final|Native|Private) // @ game+0x63cb464
	void HandleNativeOnButtonDoubleClicked(struct UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonDoubleClicked // (Final|Native|Private) // @ game+0x63cb3a0
	void HandleNativeOnButtonClicked(struct UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonClicked // (Final|Native|Private) // @ game+0x63cb2dc
	struct UCommonButtonLegacy* GetSelectedButton(); // Function CommonUILegacy.CommonButtonGroupLegacy.GetSelectedButton // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x63cb108
	struct UCommonButtonLegacy* GetButtonAtIndex(int32_t Index); // Function CommonUILegacy.CommonButtonGroupLegacy.GetButtonAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x63caeb8
	struct UCommonButtonGroupLegacy* CreateButtonGroup(struct UObject* ContextObject, bool bInSelectionRequired); // Function CommonUILegacy.CommonButtonGroupLegacy.CreateButtonGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x63cac50
};

// Class CommonUILegacy.CommonButtonInternalLegacy
// Size: 0x610 (Inherited: 0x610)
struct UCommonButtonInternalLegacy : UCommonButtonInternalBase {
};

// Class CommonUILegacy.CommonButtonLegacy
// Size: 0x1480 (Inherited: 0x1430)
struct UCommonButtonLegacy : UCommonButtonBase {
	struct FMulticastInlineDelegate OnSelectedChanged; // 0x1430(0x10)
	struct FMulticastInlineDelegate OnButtonClicked; // 0x1440(0x10)
	struct FMulticastInlineDelegate OnButtonDoubleClicked; // 0x1450(0x10)
	struct FMulticastInlineDelegate OnButtonHovered; // 0x1460(0x10)
	struct FMulticastInlineDelegate OnButtonUnhovered; // 0x1470(0x10)

	void SetTriggeredInputActionLegacy(struct FDataTableRowHandle& InputActionRow, struct UCommonActivatablePanelLegacy* OldPanel); // Function CommonUILegacy.CommonButtonLegacy.SetTriggeredInputActionLegacy // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63cca54
	void HandleOnSelectedChanged(struct UCommonButtonBase* Button, bool InSelected); // Function CommonUILegacy.CommonButtonLegacy.HandleOnSelectedChanged // (Final|Native|Private) // @ game+0x2368bac
	void HandleOnButtonUnhovered(struct UCommonButtonBase* Button); // Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonUnhovered // (Final|Native|Private) // @ game+0x23fb448
	void HandleOnButtonHovered(struct UCommonButtonBase* Button); // Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonHovered // (Final|Native|Private) // @ game+0x23e278c
	void HandleOnButtonDoubleClicked(struct UCommonButtonBase* Button); // Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonDoubleClicked // (Final|Native|Private) // @ game+0x63cb6b0
	void HandleOnButtonClicked(struct UCommonButtonBase* Button); // Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonClicked // (Final|Native|Private) // @ game+0x24736b4
};

// Class CommonUILegacy.CommonGlobalInputHandlerLegacy
// Size: 0x70 (Inherited: 0x28)
struct UCommonGlobalInputHandlerLegacy : UObject {
	char pad_28[0x48]; // 0x28(0x48)
};

// Class CommonUILegacy.CommonInputManagerLegacy
// Size: 0x108 (Inherited: 0x28)
struct UCommonInputManagerLegacy : UObject {
	char pad_28[0x80]; // 0x28(0x80)
	struct TScriptInterface<ICommonActionHandlerInterface> CurrentlyHeldActionInputHandler; // 0xa8(0x10)
	struct TArray<struct UCommonActivatablePanelLegacy*> ActivatablePanelStack; // 0xb8(0x10)
	struct UCommonGlobalInputHandlerLegacy* GlobalInputHandler; // 0xc8(0x08)
	char pad_D0[0x18]; // 0xd0(0x18)
	struct TArray<struct FOperation> Operations; // 0xe8(0x10)
	char pad_F8[0x10]; // 0xf8(0x10)

	void SuspendStartingOperationProcessing(); // Function CommonUILegacy.CommonInputManagerLegacy.SuspendStartingOperationProcessing // (Final|Native|Public|BlueprintCallable) // @ game+0x63cce24
	bool StopListeningForExistingHeldAction(struct FDataTableRowHandle& InputActionDataRow, struct FDelegate& CompleteEvent, struct FDelegate& ProgressEvent); // Function CommonUILegacy.CommonInputManagerLegacy.StopListeningForExistingHeldAction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63cccac
	bool StartListeningForExistingHeldAction(struct FDataTableRowHandle& InputActionDataRow, struct FDelegate& CompleteEvent, struct FDelegate& ProgressEvent); // Function CommonUILegacy.CommonInputManagerLegacy.StartListeningForExistingHeldAction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63ccb34
	void SetGlobalInputHandlerPriorityFilter(int32_t InFilterPriority); // Function CommonUILegacy.CommonInputManagerLegacy.SetGlobalInputHandlerPriorityFilter // (Final|Native|Public|BlueprintCallable) // @ game+0x63cc53c
	void ResumeStartingOperationProcessing(); // Function CommonUILegacy.CommonInputManagerLegacy.ResumeStartingOperationProcessing // (Final|Native|Public|BlueprintCallable) // @ game+0x63cbe80
	void PushActivatablePanel(struct UCommonActivatablePanelLegacy* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow); // Function CommonUILegacy.CommonInputManagerLegacy.PushActivatablePanel // (Final|Native|Public|BlueprintCallable) // @ game+0x63cbc40
	void PopActivatablePanel(struct UCommonActivatablePanelLegacy* ActivatablePanel); // Function CommonUILegacy.CommonInputManagerLegacy.PopActivatablePanel // (Final|Native|Public|BlueprintCallable) // @ game+0x63cbb9c
	bool IsPanelOnStack(struct UCommonActivatablePanelLegacy* InPanel); // Function CommonUILegacy.CommonInputManagerLegacy.IsPanelOnStack // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x63cb9e8
	bool IsInputSuspended(); // Function CommonUILegacy.CommonInputManagerLegacy.IsInputSuspended // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x63cb9a4
	struct UCommonActivatablePanelLegacy* GetTopPanel(); // Function CommonUILegacy.CommonInputManagerLegacy.GetTopPanel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x63cb230
	int32_t GetGlobalInputHandlerPriorityFilter(); // Function CommonUILegacy.CommonInputManagerLegacy.GetGlobalInputHandlerPriorityFilter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x63caf44
	bool GetAvailableInputActions(struct TArray<struct FCommonInputActionHandlerData>& AvailableInputActions); // Function CommonUILegacy.CommonInputManagerLegacy.GetAvailableInputActions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63cad4c
};

// Class CommonUILegacy.CommonInputReflectorLegacy
// Size: 0x310 (Inherited: 0x2e0)
struct UCommonInputReflectorLegacy : UCommonUserWidget {
	struct UCommonButtonLegacy* ButtonType; // 0x2e0(0x08)
	struct TArray<struct UCommonButtonLegacy*> ActiveButtons; // 0x2e8(0x10)
	struct TArray<struct UCommonButtonLegacy*> InactiveButtons; // 0x2f8(0x10)
	char pad_308[0x8]; // 0x308(0x08)

	void OnButtonAdded(struct UCommonButtonLegacy* AddedButton, struct FCommonInputActionHandlerData& Data); // Function CommonUILegacy.CommonInputReflectorLegacy.OnButtonAdded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class CommonUILegacy.CommonPopupButtonLegacy
// Size: 0x1490 (Inherited: 0x1480)
struct UCommonPopupButtonLegacy : UCommonButtonLegacy {
	struct UMenuAnchor* PopupMenuAnchor; // 0x1480(0x08)
	struct UCommonPopupMenuLegacy* PopupMenu; // 0x1488(0x08)

	struct UUserWidget* GetMenuAnchorWidget(); // Function CommonUILegacy.CommonPopupButtonLegacy.GetMenuAnchorWidget // (Final|Native|Private) // @ game+0x63cb0f0
};

// Class CommonUILegacy.CommonPopupMenuLegacy
// Size: 0x548 (Inherited: 0x530)
struct UCommonPopupMenuLegacy : UCommonActivatablePanelLegacy {
	bool bUseInputStack; // 0x530(0x01)
	char pad_531[0x3]; // 0x531(0x03)
	struct TWeakObjectPtr<struct UMenuAnchor> OwningMenuAnchor; // 0x534(0x08)
	struct TWeakObjectPtr<struct UObject> ContextProvidingObject; // 0x53c(0x08)
	char pad_544[0x4]; // 0x544(0x04)

	void SetOwningMenuAnchor(struct UMenuAnchor* MenuAnchor); // Function CommonUILegacy.CommonPopupMenuLegacy.SetOwningMenuAnchor // (Final|Native|Public|BlueprintCallable) // @ game+0x63cc9d4
	void SetContextProvider(struct UObject* ContextProvidingObject); // Function CommonUILegacy.CommonPopupMenuLegacy.SetContextProvider // (Final|Native|Public|BlueprintCallable) // @ game+0x63cc4bc
	void RequestClose(); // Function CommonUILegacy.CommonPopupMenuLegacy.RequestClose // (Final|Native|Protected|BlueprintCallable) // @ game+0x63cbe6c
	void OnIsOpenChanged(bool IsOpen); // Function CommonUILegacy.CommonPopupMenuLegacy.OnIsOpenChanged // (Final|Native|Protected) // @ game+0x63cbb1c
	void HandlePreDifferentContextProviderSet(); // Function CommonUILegacy.CommonPopupMenuLegacy.HandlePreDifferentContextProviderSet // (Native|Event|Protected|BlueprintEvent) // @ game+0x63cb748
	void HandlePostDifferentContextProviderSet(); // Function CommonUILegacy.CommonPopupMenuLegacy.HandlePostDifferentContextProviderSet // (Native|Event|Protected|BlueprintEvent) // @ game+0x63cb730
};

// Class CommonUILegacy.CommonTabListWidgetLegacy
// Size: 0x3e0 (Inherited: 0x3c0)
struct UCommonTabListWidgetLegacy : UCommonTabListWidgetBase {
	struct FMulticastInlineDelegate OnTabButtonCreated; // 0x3c0(0x10)
	struct FMulticastInlineDelegate OnTabButtonRemoved; // 0x3d0(0x10)

	void OnTabButtonRemoved__DelegateSignature(struct FName TabId, struct UCommonButtonLegacy* TabButton); // DelegateFunction CommonUILegacy.CommonTabListWidgetLegacy.OnTabButtonRemoved__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	void OnTabButtonCreated__DelegateSignature(struct FName TabId, struct UCommonButtonLegacy* TabButton); // DelegateFunction CommonUILegacy.CommonTabListWidgetLegacy.OnTabButtonCreated__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	void HandleTabRemoved(struct FName TabNameID, struct UCommonButtonLegacy* TabButton); // Function CommonUILegacy.CommonTabListWidgetLegacy.HandleTabRemoved // (Native|Event|Protected|BlueprintEvent) // @ game+0x63cb828
	void HandleTabCreated(struct FName TabNameID, struct UCommonButtonLegacy* TabButton); // Function CommonUILegacy.CommonTabListWidgetLegacy.HandleTabCreated // (Native|Event|Protected|BlueprintEvent) // @ game+0x63cb760
	void HandleOnTabButtonRemoved(struct FName TabId, struct UCommonButtonBase* TabButton); // Function CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonRemoved // (Final|Native|Private) // @ game+0x25da6c8
	void HandleOnTabButtonCreated(struct FName TabId, struct UCommonButtonBase* TabButton); // Function CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonCreated // (Final|Native|Private) // @ game+0x25da5a4
	struct UCommonButtonLegacy* GetTabButtonByID(struct FName TabNameID); // Function CommonUILegacy.CommonTabListWidgetLegacy.GetTabButtonByID // (Final|Native|Protected|BlueprintCallable) // @ game+0x63cb15c
};

// Class CommonUILegacy.CommonUIActionRouterLegacy
// Size: 0x160 (Inherited: 0x158)
struct UCommonUIActionRouterLegacy : UCommonUIActionRouterBase {
	char pad_158[0x8]; // 0x158(0x08)
};

// Class CommonUILegacy.CommonUISubsystemLegacy
// Size: 0x70 (Inherited: 0x40)
struct UCommonUISubsystemLegacy : UCommonUISubsystemBase {
	struct FMulticastInlineDelegate OnInputSuspensionChanged; // 0x40(0x10)
	struct UCommonInputManagerLegacy* CommonInputManager; // 0x50(0x08)
	char pad_58[0x18]; // 0x58(0x18)

	void InputSuspensionChanged__DelegateSignature(bool bInputSuspended); // DelegateFunction CommonUILegacy.CommonUISubsystemLegacy.InputSuspensionChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	struct UCommonInputManagerLegacy* GetInputManager(); // Function CommonUILegacy.CommonUISubsystemLegacy.GetInputManager // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x63cb0d8
};

// Class CommonUILegacy.CommonVisibilityWidgetLegacy
// Size: 0x300 (Inherited: 0x2f0)
struct UCommonVisibilityWidgetLegacy : UCommonBorder {
	bool bShowForGamepad; // 0x2f0(0x01)
	bool bShowForMouseAndKeyboard; // 0x2f1(0x01)
	bool bShowForTouch; // 0x2f2(0x01)
	bool bShowForPC; // 0x2f3(0x01)
	bool bShowForMac; // 0x2f4(0x01)
	bool bShowForPS4; // 0x2f5(0x01)
	bool bShowForPS5; // 0x2f6(0x01)
	bool bShowForXBox; // 0x2f7(0x01)
	bool bShowForXSX; // 0x2f8(0x01)
	bool bShowForIOS; // 0x2f9(0x01)
	bool bShowForAndroid; // 0x2fa(0x01)
	bool bShowForErebus; // 0x2fb(0x01)
	enum class ESlateVisibility VisibleType; // 0x2fc(0x01)
	enum class ESlateVisibility HiddenType; // 0x2fd(0x01)
	char pad_2FE[0x2]; // 0x2fe(0x02)
};

// Class CommonUILegacy.CommonWidgetStackLegacy
// Size: 0x1a8 (Inherited: 0x198)
struct UCommonWidgetStackLegacy : UCommonVisibilitySwitcher {
	struct FMulticastInlineDelegate OnActiveWidgetChangedLegacyEvent; // 0x198(0x10)

	void PushWidget(struct UWidget* InWidget); // Function CommonUILegacy.CommonWidgetStackLegacy.PushWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x63cbd4c
	struct UWidget* PopWidget(); // Function CommonUILegacy.CommonWidgetStackLegacy.PopWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x63cbc1c
	void OnActiveWidgetChangedLegacy__DelegateSignature(struct UWidget* InActiveWidget, int32_t InActiveWidgetIndex); // DelegateFunction CommonUILegacy.CommonWidgetStackLegacy.OnActiveWidgetChangedLegacy__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	void DeactivateWidget(); // Function CommonUILegacy.CommonWidgetStackLegacy.DeactivateWidget // (Final|Native|Protected|BlueprintCallable) // @ game+0x63cad20
	void ActivateWidget(); // Function CommonUILegacy.CommonWidgetStackLegacy.ActivateWidget // (Final|Native|Protected|BlueprintCallable) // @ game+0x63ca538
};

// Class CommonUILegacy.CommonWidgetSwitcherLegacy
// Size: 0x210 (Inherited: 0x1e8)
struct UCommonWidgetSwitcherLegacy : UCommonAnimatedSwitcher {
	struct FMulticastInlineDelegate OnActiveWidgetDeactivated; // 0x1e8(0x10)
	struct FMulticastInlineDelegate OnActiveWidgetChanged; // 0x1f8(0x10)
	bool bWidgetActivationEnabled; // 0x208(0x01)
	bool bOutroPanelBelow; // 0x209(0x01)
	char pad_20A[0x6]; // 0x20a(0x06)

	void SetActiveWidgetIndex_Advanced(int32_t Index, bool AttemptActivationChange); // Function CommonUILegacy.CommonWidgetSwitcherLegacy.SetActiveWidgetIndex_Advanced // (Final|Native|Public|BlueprintCallable) // @ game+0x63cc328
	void SetActiveWidget_Advanced(struct UWidget* Widget, bool AttemptActivationChange); // Function CommonUILegacy.CommonWidgetSwitcherLegacy.SetActiveWidget_Advanced // (Final|Native|Public|BlueprintCallable) // @ game+0x63cc3ec
	void HandleActiveWidgetDeactivated(struct UCommonActivatablePanelLegacy* DeactivatedPanel); // Function CommonUILegacy.CommonWidgetSwitcherLegacy.HandleActiveWidgetDeactivated // (Final|Native|Private) // @ game+0x63cb250
	void DeactivateWidget(); // Function CommonUILegacy.CommonWidgetSwitcherLegacy.DeactivateWidget // (Native|Public|BlueprintCallable) // @ game+0x63cad34
	void ActivateWidget(); // Function CommonUILegacy.CommonWidgetSwitcherLegacy.ActivateWidget // (Native|Public|BlueprintCallable) // @ game+0x282ca74
};

