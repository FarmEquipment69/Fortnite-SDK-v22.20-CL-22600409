// WidgetBlueprintGeneratedClass RejoinWindow.RejoinWindow_C
// Size: 0x5e0 (Inherited: 0x5a8)
struct URejoinWindow_C : UFortRejoinWindowBase {
	struct UCommonTextBlock* AutorejoinText; // 0x5a8(0x08)
	struct UHorizontalBox* ButtonBox; // 0x5b0(0x08)
	struct UCommonTextBlock* Title; // 0x5b8(0x08)
	struct FMulticastInlineDelegate OnRequestAbandon; // 0x5c0(0x10)
	struct FMulticastInlineDelegate OnRequestRejoinRetry; // 0x5d0(0x10)

	void OnRequestRejoinRetry__DelegateSignature(); // Function RejoinWindow.RejoinWindow_C.OnRequestRejoinRetry__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRequestAbandon__DelegateSignature(); // Function RejoinWindow.RejoinWindow_C.OnRequestAbandon__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

