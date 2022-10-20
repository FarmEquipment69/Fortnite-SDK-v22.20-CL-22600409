// WidgetBlueprintGeneratedClass PinModal.PinModal_C
// Size: 0x6e8 (Inherited: 0x5f0)
struct UPinModal_C : UFortPinModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5f0(0x08)
	struct UImage* Bad; // 0x5f8(0x08)
	struct UImage* BG_INPUTBOX; // 0x600(0x08)
	struct UImage* BG_WIREFRAME; // 0x608(0x08)
	struct UImage* BG_WIREFRAME2; // 0x610(0x08)
	struct UImage* Border; // 0x618(0x08)
	struct UImage* Good; // 0x620(0x08)
	struct UImage* GradientForFlipping; // 0x628(0x08)
	struct UPinCodeButton_C* ; // 0x630(0x08)
	struct UPinCodeButton_C* ; // 0x638(0x08)
	struct UPinCodeButton_C* ; // 0x640(0x08)
	struct UPinCodeButton_C* ; // 0x648(0x08)
	struct UPinCodeButton_C* ; // 0x650(0x08)
	struct UPinCodeButton_C* ; // 0x658(0x08)
	struct UPinCodeButton_C* ; // 0x660(0x08)
	struct UPinCodeButton_C* ; // 0x668(0x08)
	struct UPinCodeButton_C* ; // 0x670(0x08)
	struct UPinCodeButton_C* ; // 0x678(0x08)
	struct UPinCodeButton_C* ; // 0x680(0x08)
	struct UPinCodeButton_C* ; // 0x688(0x08)
	struct UPinCodeButton_C* ; // 0x690(0x08)
	struct UPinCodeButton_C* ; // 0x698(0x08)
	struct UPinCodeButton_C* ; // 0x6a0(0x08)
	struct UPinCodeButton_C* ; // 0x6a8(0x08)
	struct UPinCodeButton_C* ; // 0x6b0(0x08)
	struct UPinCodeButton_C* ; // 0x6b8(0x08)
	struct UPinCodeButton_C* ; // 0x6c0(0x08)
	struct UPinCodeButton_C* ; // 0x6c8(0x08)
	struct UCommonVisibilitySwitcher* StateSwitcher; // 0x6d0(0x08)
	struct UImage* Waiting; // 0x6d8(0x08)
	struct UWBP_PinModal_ContentGateDetails_C* WBP_PinModal_ContentGateDetails; // 0x6e0(0x08)

	void Set Visual States(enum class EPinModalValidityState Pin States); // Function PinModal.PinModal_C.Set Visual States // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetPreviewData(); // Function PinModal.PinModal_C.SetPreviewData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct TArray<struct UFortPinButton*> CollectPinButtons(); // Function PinModal.PinModal_C.CollectPinButtons // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function PinModal.PinModal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnSetPinState(enum class EPinModalValidityState PinModalState); // Function PinModal.PinModal_C.OnSetPinState // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PinModal(int32_t EntryPoint); // Function PinModal.PinModal_C.ExecuteUbergraph_PinModal // (Final|UbergraphFunction) // @ game+0xd67374
};

