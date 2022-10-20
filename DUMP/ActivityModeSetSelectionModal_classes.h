// WidgetBlueprintGeneratedClass ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C
// Size: 0x4c0 (Inherited: 0x460)
struct UActivityModeSetSelectionModal_C : UFortActivityModeSetSelectionModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* OnImageLoaded; // 0x468(0x08)
	struct UImage* Image_Background; // 0x470(0x08)
	struct UOverlay* ; // 0x478(0x08)
	struct UImage* OverlayDim; // 0x480(0x08)
	struct USafeZone* SafeZone; // 0x488(0x08)
	struct USafeZone* SafeZone_BackButton; // 0x490(0x08)
	struct UCommonVisibilitySwitcher* Switcher_ActivitySettings; // 0x498(0x08)
	struct UImage* Thumbnail; // 0x4a0(0x08)
	struct FName ThumbnailParameter; // 0x4a8(0x04)
	struct FName ThumbnailOpacityParameter; // 0x4ac(0x04)
	double CloseDelay; // 0x4b0(0x08)
	struct FTimerHandle CloseDelayTimer; // 0x4b8(0x08)

	struct UWidget* BP_GetDesiredFocusTarget(); // Function ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void OnPreviewImageChanged(bool bIsLoading, struct UTexture* Texture); // Function ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C.OnPreviewImageChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__ActivityModeSetSelectionModal_ActivityPrivacyButton_K2Node_ComponentBoundEvent_4_OnPrivacyAvailableChanged__DelegateSignature(bool IsAvailable); // Function ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C.BndEvt__ActivityModeSetSelectionModal_ActivityPrivacyButton_K2Node_ComponentBoundEvent_4_OnPrivacyAvailableChanged__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnSubModeSelected(); // Function ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C.OnSubModeSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeactivated(); // Function ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void CloseModal(); // Function ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C.CloseModal // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ActivityModeSetSelectionModal(int32_t EntryPoint); // Function ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C.ExecuteUbergraph_ActivityModeSetSelectionModal // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

