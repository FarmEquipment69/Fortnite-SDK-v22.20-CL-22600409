// WidgetBlueprintGeneratedClass KeyboardPresetRotator.KeyboardPresetRotator_C
// Size: 0x328 (Inherited: 0x2e0)
struct UKeyboardPresetRotator_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UIconTextButton_C* ButtonLeft; // 0x2e8(0x08)
	struct UIconTextButton_C* ButtonRight; // 0x2f0(0x08)
	struct UCommonTextBlock* Description; // 0x2f8(0x08)
	struct USpacer* ; // 0x300(0x08)
	struct UCommonTextBlock* SubDescription; // 0x308(0x08)
	struct UTextRotator_C* TextRotator; // 0x310(0x08)
	int32_t SelectedIndex; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	double Spacer Width; // 0x320(0x08)

	void Show Param Name(bool Show); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.Show Param Name // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Size(); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.Update Size // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Options(struct TArray<struct FText>& NewParam); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.Update Options // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Center On Widget(); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.Center On Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Initialize(); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Row Selector(int32_t Currently Selected); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.Update Row Selector // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature(int32_t Value); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_KeyboardPresetRotator(int32_t EntryPoint); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.ExecuteUbergraph_KeyboardPresetRotator // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

