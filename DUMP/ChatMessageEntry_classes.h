// WidgetBlueprintGeneratedClass ChatMessageEntry.ChatMessageEntry_C
// Size: 0x448 (Inherited: 0x418)
struct UChatMessageEntry_C : UFortChatMessageEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UCommonBorder* MessageBackground; // 0x420(0x08)
	struct UBorder* MessageWrapper; // 0x428(0x08)
	struct UCommonBorderStyle* ; // 0x430(0x08)
	struct UCommonBorderStyle* SelfStyle; // 0x438(0x08)
	struct UCommonBorderStyle* OtherUserStyle; // 0x440(0x08)

	void HandleSelectionStatusChanged(bool bIsSelected); // Function ChatMessageEntry.ChatMessageEntry_C.HandleSelectionStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature(); // Function ChatMessageEntry.ChatMessageEntry_C.BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnFocusedChanged(bool bIsFocused); // Function ChatMessageEntry.ChatMessageEntry_C.OnFocusedChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void (); // Function ChatMessageEntry.ChatMessageEntry_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ChatMessageEntry(int32_t EntryPoint); // Function ChatMessageEntry.ChatMessageEntry_C.ExecuteUbergraph_ChatMessageEntry // (Final|UbergraphFunction) // @ game+0xd67374
};

