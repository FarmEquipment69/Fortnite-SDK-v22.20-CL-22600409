// WidgetBlueprintGeneratedClass SocialPanel.SocialPanel_C
// Size: 0x5b8 (Inherited: 0x588)
struct USocialPanel_C : UFortSocialPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x588(0x08)
	struct UWidgetAnimation* OnOpened; // 0x590(0x08)
	struct UImage* Image_Back; // 0x598(0x08)
	struct ULightbox_C* Lightbox; // 0x5a0(0x08)
	struct USafeZone* ; // 0x5a8(0x08)
	struct USocialPanel_TopBarExtension_C* SocialPanel_TopBarExtension; // 0x5b0(0x08)

	void Play Panel Animation Sound(); // Function SocialPanel.SocialPanel_C.Play Panel Animation Sound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ClosePanelAfterAnimation(); // Function SocialPanel.SocialPanel_C.ClosePanelAfterAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FEventReply (struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SocialPanel.SocialPanel_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SocialPanel.SocialPanel_C.BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ClosePanel(); // Function SocialPanel.SocialPanel_C.ClosePanel // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleOutroEnded(); // Function SocialPanel.SocialPanel_C.HandleOutroEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBeginOutro(); // Function SocialPanel.SocialPanel_C.OnBeginOutro // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnBeginIntro(); // Function SocialPanel.SocialPanel_C.OnBeginIntro // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleIntroEnded(); // Function SocialPanel.SocialPanel_C.HandleIntroEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function SocialPanel.SocialPanel_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SocialPanel(int32_t EntryPoint); // Function SocialPanel.SocialPanel_C.ExecuteUbergraph_SocialPanel // (Final|UbergraphFunction) // @ game+0xd67374
};

