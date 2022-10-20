// WidgetBlueprintGeneratedClass WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C
// Size: 0x1461 (Inherited: 0x1430)
struct UWBP_RebootRallyPopupModal_QRCode_C : URebootRallyQRCode {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UImage* Image_QRCode; // 0x1438(0x08)
	struct UCommonTextBlock* Text_QRAction; // 0x1440(0x08)
	bool bIsInvite; // 0x1448(0x01)
	char pad_1449[0x7]; // 0x1449(0x07)
	struct FString QRCodeURL; // 0x1450(0x10)
	bool bIsSwitch; // 0x1460(0x01)

	void UpdateText(enum class ECommonInputType NewInputType); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateQRCode(enum class ECommonInputType NewInputType); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.UpdateQRCode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateURL(enum class ECommonInputType NewInputType); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.UpdateURL // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InputMethodChanged(enum class ECommonInputType NewInputType); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.InputMethodChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnClicked(); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetIsInvite(bool bIsInvite); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.SetIsInvite // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode(int32_t EntryPoint); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode // (Final|UbergraphFunction) // @ game+0xd67374
};

