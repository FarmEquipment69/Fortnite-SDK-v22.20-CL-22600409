// WidgetBlueprintGeneratedClass AffiliateKeyModal.AffiliateKeyModal_C
// Size: 0x658 (Inherited: 0x590)
struct UAffiliateKeyModal_C : UFortAffilateModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x590(0x08)
	struct UWidgetAnimation* SuccessAnim; // 0x598(0x08)
	struct UWidgetAnimation* Shake; // 0x5a0(0x08)
	struct UImage* Check; // 0x5a8(0x08)
	struct UIconTextButton_C* CloseButton; // 0x5b0(0x08)
	struct UCloseButton_C* CloseButton_Mobile; // 0x5b8(0x08)
	struct UCommonTextBlock* ; // 0x5c0(0x08)
	struct UCommonTextBlock* ; // 0x5c8(0x08)
	struct UCommonTextBlock* ConnectionError; // 0x5d0(0x08)
	struct UCommonTextBlock* Description; // 0x5d8(0x08)
	struct UCommonActionWidget* EditTextActionWidget; // 0x5e0(0x08)
	struct UCommonTextBlock* EntryError; // 0x5e8(0x08)
	struct UCommonTextBlock* ErrorPart2; // 0x5f0(0x08)
	struct UIconTextButton_C* LaunchWebsite; // 0x5f8(0x08)
	struct ULightbox_C* Lightbox; // 0x600(0x08)
	struct UImage* McpWaitingSpinner; // 0x608(0x08)
	struct UFortSimpleWidgetAnimationsPanel* SimpleWidgetAnimationsPanel; // 0x610(0x08)
	struct UCommonTextBlock* Warning; // 0x618(0x08)
	bool Found; // 0x620(0x01)
	bool ConnectionTimeout; // 0x621(0x01)
	char pad_622[0x6]; // 0x622(0x06)
	struct FMulticastInlineDelegate OnPopupClosed; // 0x628(0x10)
	bool bSkipAutoPopulate; // 0x638(0x01)
	char pad_639[0x7]; // 0x639(0x07)
	struct FMulticastInlineDelegate OnSuccess; // 0x640(0x10)
	bool bShakeAnimationIsPlaying; // 0x650(0x01)
	char pad_651[0x3]; // 0x651(0x03)
	struct FName ShakeAnimation; // 0x654(0x04)

	void SetupAffiliateField(struct FString AffilateName); // Function AffiliateKeyModal.AffiliateKeyModal_C.SetupAffiliateField // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void Onset(bool bSuccess); // Function AffiliateKeyModal.AffiliateKeyModal_C.Onset // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnCheckComplete(bool bSuccess, bool bWasValidAffiliateName, struct FString AffilateNameChecked); // Function AffiliateKeyModal.AffiliateKeyModal_C.OnCheckComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CloseButton_Mobile_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__CloseButton_Mobile_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function AffiliateKeyModal.AffiliateKeyModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void (); // Function AffiliateKeyModal.AffiliateKeyModal_C. // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__AffiliateKey_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__AffiliateKey_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AffiliateKeyModal(int32_t EntryPoint); // Function AffiliateKeyModal.AffiliateKeyModal_C.ExecuteUbergraph_AffiliateKeyModal // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnSuccess__DelegateSignature(); // Function AffiliateKeyModal.AffiliateKeyModal_C.OnSuccess__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPopupClosed__DelegateSignature(); // Function AffiliateKeyModal.AffiliateKeyModal_C.OnPopupClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

