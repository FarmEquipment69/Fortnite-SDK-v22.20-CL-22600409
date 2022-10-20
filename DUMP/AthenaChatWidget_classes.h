// WidgetBlueprintGeneratedClass AthenaChatWidget.AthenaChatWidget_C
// Size: 0x468 (Inherited: 0x418)
struct UAthenaChatWidget_C : UFortActivatableChatWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct FDataTableRowHandle CloseUserListAction; // 0x420(0x10)
	struct FDataTableRowHandle OpenUserListAction; // 0x430(0x10)
	struct FDataTableRowHandle CurrentUserListAction; // 0x440(0x10)
	bool bEnteringChat; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct FMulticastInlineDelegate OnEnteredChat; // 0x458(0x10)

	void FocusChat(bool bFocus); // Function AthenaChatWidget.AthenaChatWidget_C.FocusChat // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaChatWidget(int32_t EntryPoint); // Function AthenaChatWidget.AthenaChatWidget_C.ExecuteUbergraph_AthenaChatWidget // (Final|UbergraphFunction) // @ game+0xd67374
	void OnEnteredChat__DelegateSignature(bool EnteredChat); // Function AthenaChatWidget.AthenaChatWidget_C.OnEnteredChat__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

