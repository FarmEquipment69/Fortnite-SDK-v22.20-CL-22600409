// WidgetBlueprintGeneratedClass FIlteredTextEntryWidget.FilteredTextEntryWidget_C
// Size: 0xfc8 (Inherited: 0x3f0)
struct UFilteredTextEntryWidget_C : UFortEditableFilteredCountedTextBox {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UWidgetAnimation* Error; // 0x3f8(0x08)
	struct UCommonTextBlock* CommonTextBlock_Prompt; // 0x400(0x08)
	struct UCommonTextBlock* ErrorText; // 0x408(0x08)
	struct UHorizontalBox* HorizontalBox_Info; // 0x410(0x08)
	struct UImage* ; // 0x418(0x08)
	struct UImage* Image_Selected; // 0x420(0x08)
	struct UCommonActionWidget* InputActionWidget; // 0x428(0x08)
	struct UOverlay* Overlay_InputAction; // 0x430(0x08)
	struct UOverlay* WarningImage; // 0x438(0x08)
	bool bUseOverrideStyle; // 0x440(0x01)
	char pad_441[0xf]; // 0x441(0x0f)
	struct FEditableTextBoxStyle OverrideStyle; // 0x450(0xad0)
	bool bHideValidationInfo; // 0xf20(0x01)
	enum class ETextJustify Justification; // 0xf21(0x01)
	bool ShowTextPrompt; // 0xf22(0x01)
	char pad_F23[0x5]; // 0xf23(0x05)
	struct UCommonTextStyle* PromptTextStyle; // 0xf28(0x08)
	struct FText PromptText; // 0xf30(0x18)
	struct FMulticastInlineDelegate OnTextChanged; // 0xf48(0x10)
	bool bUseHintText; // 0xf58(0x01)
	char pad_F59[0x7]; // 0xf59(0x07)
	struct FText HintText; // 0xf60(0x18)
	struct FMulticastInlineDelegate OnSanitizedTextReady; // 0xf78(0x10)
	struct FMulticastInlineDelegate OnTextCommitByEnter; // 0xf88(0x10)
	bool SanitizedTextReady; // 0xf98(0x01)
	char pad_F99[0x7]; // 0xf99(0x07)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xfa0(0x10)
	struct FText PersistentIDValidationErrorText; // 0xfb0(0x18)

	void GetErrorText(bool Additional Validator Failed, struct FText& Appropriate Text); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.GetErrorText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void GetCurrentText(struct FText& Text); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.GetCurrentText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleShowPrompt(struct FText& CurrentText); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.HandleShowPrompt // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetTextFocus(); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.SetTextFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateConfiguration(bool bOverrideStyle, bool bHideValidation, enum class ETextJustify TextJustification, bool bShouldShowTextPrompt, struct FText PromptDisplayText, struct UCommonTextStyle* TextStyle); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.UpdateConfiguration // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnDirtyTextAttempted(bool bIsBadText, bool bAdditionalValidationFailed); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnDirtyTextAttempted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ValidatePersistentID(struct FText& Text); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.ValidatePersistentID // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_FilteredTextEntryWidget(int32_t EntryPoint); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.ExecuteUbergraph_FilteredTextEntryWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnTextCommitted__DelegateSignature(); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnTextCommitted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTextCommitByEnter__DelegateSignature(); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnTextCommitByEnter__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSanitizedTextReady__DelegateSignature(struct FText Text, bool BadText); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnSanitizedTextReady__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTextChanged__DelegateSignature(struct FText Text); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

