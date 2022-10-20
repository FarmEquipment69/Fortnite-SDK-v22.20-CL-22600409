// WidgetBlueprintGeneratedClass PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C
// Size: 0x7f9 (Inherited: 0x608)
struct UPictureInPictureFNEventsOverlay_C : UPictureInPicturePanelWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x608(0x08)
	struct UWidgetAnimation* SlideVidDown; // 0x610(0x08)
	struct UWidgetAnimation* SlideVidUp; // 0x618(0x08)
	struct UWidgetAnimation* Intro; // 0x620(0x08)
	struct UBorder* ErrorMessage; // 0x628(0x08)
	struct UBorder* HideInstructions; // 0x630(0x08)
	struct UImage* Highlight; // 0x638(0x08)
	struct UImage* Shadow; // 0x640(0x08)
	struct UCommonRichTextBlock* Text_ErrorInstructions; // 0x648(0x08)
	struct UCommonRichTextBlock* Text_HideInstructions; // 0x650(0x08)
	struct FString LoginState; // 0x658(0x10)
	struct FGameplayTagContainer ShowForPiPTags; // 0x668(0x20)
	struct FGameplayTagContainer HideForPiPTags; // 0x688(0x20)
	struct FMargin FrontendPadding; // 0x6a8(0x10)
	struct FPiPPartnerSource ErrorSource; // 0x6b8(0x128)
	struct FText Text_BaseErrorMessage; // 0x7e0(0x18)
	bool InstructionsShown; // 0x7f8(0x01)

	void Construct(); // Function PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeactivated(); // Function PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ShowError(int32_t ErrorNumber, struct FString ErrorMessage); // Function PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C.ShowError // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShowHideInstructions(); // Function PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C.ShowHideInstructions // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PictureInPictureFNEventsOverlay(int32_t EntryPoint); // Function PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C.ExecuteUbergraph_PictureInPictureFNEventsOverlay // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

