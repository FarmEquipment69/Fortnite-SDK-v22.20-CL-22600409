// WidgetBlueprintGeneratedClass ChatContainer.ChatContainer_C
// Size: 0x3e8 (Inherited: 0x358)
struct UChatContainer_C : UFortChatContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UWidgetAnimation* SizeAnimation; // 0x360(0x08)
	struct UWidgetAnimation* FadeAnimation; // 0x368(0x08)
	struct UCommonBorder* ChatBorder; // 0x370(0x08)
	struct UCommonBorder* CommonBorderBackground; // 0x378(0x08)
	struct UIconTextButton_C* ConsoleChatShortcut; // 0x380(0x08)
	struct UWidgetSwitcher* CursorModeSwitcher; // 0x388(0x08)
	struct UHorizontalBox* HBox_Messages; // 0x390(0x08)
	struct USizeBox* HBox_Tabs; // 0x398(0x08)
	struct UHorizontalBox* HudContentHBox; // 0x3a0(0x08)
	struct UKeybindWidget_C* KeybindWidget; // 0x3a8(0x08)
	struct USizeBox* SizeBox_ChatSize; // 0x3b0(0x08)
	struct USizeBox* SizeBox_ConsoleButtonSpaceProvider; // 0x3b8(0x08)
	struct UWidgetSwitcher* Switcher_SendButton; // 0x3c0(0x08)
	struct UCommonTextBlock* Text_Disabled; // 0x3c8(0x08)
	enum class EUMGSequencePlayMode ; // 0x3d0(0x01)
	bool CurrentlyUsingGamepad; // 0x3d1(0x01)
	bool AnimationClosing; // 0x3d2(0x01)
	char pad_3D3[0x5]; // 0x3d3(0x05)
	struct USoundBase* WindowCloseSound; // 0x3d8(0x08)
	struct USoundBase* WindowOpenSound; // 0x3e0(0x08)

	void FocusChat(); // Function ChatContainer.ChatContainer_C.FocusChat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetChatBoxStyle(); // Function ChatContainer.ChatContainer_C.SetChatBoxStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ChatContainer.ChatContainer_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleChatOpenChanged(bool bChatShouldBeOpen); // Function ChatContainer.ChatContainer_C.HandleChatOpenChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSizeAnimationComplete(); // Function ChatContainer.ChatContainer_C.OnSizeAnimationComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleCursorModeChanged(bool bEnabled, struct FName ActionName, struct UUserWidget* Widget); // Function ChatContainer.ChatContainer_C.HandleCursorModeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSendButtonDisplayChanged(bool bShowSendButton); // Function ChatContainer.ChatContainer_C.OnSendButtonDisplayChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ChatContainer.ChatContainer_C.BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function ChatContainer.ChatContainer_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ChatContainer.ChatContainer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnChatOpenChanged(bool bShouldBeOpen); // Function ChatContainer.ChatContainer_C.OnChatOpenChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__ChatContainer_ChatList_Messages_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature(struct UUserWidget* Widget); // Function ChatContainer.ChatContainer_C.BndEvt__ChatContainer_ChatList_Messages_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ChatContainer.ChatContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ChatContainer(int32_t EntryPoint); // Function ChatContainer.ChatContainer_C.ExecuteUbergraph_ChatContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

